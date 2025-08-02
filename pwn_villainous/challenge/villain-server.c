
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
  FUN_00103400();
  __TMC_END__ = 1;
  return;
}


int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}


void _INIT_0(void)

{
  FUN_00103430();
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


void _ZNSt5tupleIJP4RockSt14default_deleteIS0_EEEC2ILb1ETnNSt9enable_ifIXclsr17_TupleConstraintsIXT_ ES1_S3_EE37__is_implicitly_default_constructibleEEbE4typeELb1EEEv
               (_Tuple_impl<> *param_1)

{
                    /* try { // try from 001133d0 to 001133d4 has its CatchHandler @ 001133dd */
  std::_Tuple_impl<>::_Tuple_impl(param_1);
  return;
}


void _ZNSt5tupleIJP4WallSt14default_deleteIS0_EEEC2ILb1ETnNSt9enable_ifIXclsr17_TupleConstraintsIXT_ ES1_S3_EE37__is_implicitly_default_constructibleEEbE4typeELb1EEEv
               (_Tuple_impl<> *param_1)

{
                    /* try { // try from 0010f130 to 0010f134 has its CatchHandler @ 0010f13d */
  std::_Tuple_impl<>::_Tuple_impl(param_1);
  return;
}


void _ZNSt5tupleIJP5FloorSt14default_deleteIS0_EEEC2ILb1ETnNSt9enable_ifIXclsr17_TupleConstraintsIXT _ES1_S3_EE37__is_implicitly_default_constructibleEEbE4typeELb1EEEv
               (_Tuple_impl<> *param_1)

{
                    /* try { // try from 0010f950 to 0010f954 has its CatchHandler @ 0010f95d */
  std::_Tuple_impl<>::_Tuple_impl(param_1);
  return;
}


void _ZNSt5tupleIJP6ColumnSt14default_deleteIS0_EEEC2ILb1ETnNSt9enable_ifIXclsr17_TupleConstraintsIX T_ES1_S3_EE37__is_implicitly_default_constructibleEEbE4typeELb1EEEv
               (_Tuple_impl<> *param_1)

{
                    /* try { // try from 00111a20 to 00111a24 has its CatchHandler @ 00111a2d */
  std::_Tuple_impl<>::_Tuple_impl(param_1);
  return;
}


void _ZNSt5tupleIJP6EntitySt14default_deleteIS0_EEEC2IRS1_S2_I4RockETnNSt9enable_ifIXclsr4_TCCIXntcl 14__is_alloc_argIT_EEEEE29__is_implicitly_constructibleISA_T0_EEEbE4typeELb1EEEOSA_OSB_
               (Entity **param_1,default_delete *param_2)

{
                    /* try { // try from 00113950 to 00113954 has its CatchHandler @ 0011395d */
  std::_Tuple_impl<>::_Tuple_impl<>(param_1,param_2);
  return;
}


void _ZNSt5tupleIJP6EntitySt14default_deleteIS0_EEEC2IRS1_S2_I4WallETnNSt9enable_ifIXclsr4_TCCIXntcl 14__is_alloc_argIT_EEEEE29__is_implicitly_constructibleISA_T0_EEEbE4typeELb1EEEOSA_OSB_
               (Entity **param_1,default_delete *param_2)

{
                    /* try { // try from 0010ead0 to 0010ead4 has its CatchHandler @ 0010eadd */
  std::_Tuple_impl<>::_Tuple_impl<>(param_1,param_2);
  return;
}


void _ZNSt5tupleIJP6EntitySt14default_deleteIS0_EEEC2IRS1_S2_I5FloorETnNSt9enable_ifIXclsr4_TCCIXntc l14__is_alloc_argIT_EEEEE29__is_implicitly_constructibleISA_T0_EEEbE4typeELb1EEEOSA_OSB_
               (Entity **param_1,default_delete *param_2)

{
                    /* try { // try from 0010f6b0 to 0010f6b4 has its CatchHandler @ 0010f6bd */
  std::_Tuple_impl<>::_Tuple_impl<>(param_1,param_2);
  return;
}


void _ZNSt5tupleIJP6EntitySt14default_deleteIS0_EEEC2IRS1_S2_I6ColumnETnNSt9enable_ifIXclsr4_TCCIXnt cl14__is_alloc_argIT_EEEEE29__is_implicitly_constructibleISA_T0_EEEbE4typeELb1EEEOSA_OSB_
               (Entity **param_1,default_delete *param_2)

{
                    /* try { // try from 00111780 to 00111784 has its CatchHandler @ 0011178d */
  std::_Tuple_impl<>::_Tuple_impl<>(param_1,param_2);
  return;
}


void _ZNSt5tupleIJP6EntitySt14default_deleteIS0_EEEC2IRS1_S2_I6PlayerETnNSt9enable_ifIXclsr4_TCCIXnt cl14__is_alloc_argIT_EEEEE29__is_implicitly_constructibleISA_T0_EEEbE4typeELb1EEEOSA_OSB_
               (Entity **param_1,default_delete *param_2)

{
                    /* try { // try from 00110700 to 00110704 has its CatchHandler @ 0011070d */
  std::_Tuple_impl<>::_Tuple_impl<>(param_1,param_2);
  return;
}


void _ZNSt5tupleIJP6EntitySt14default_deleteIS0_EEEC2IRS1_S2_I7MonsterETnNSt9enable_ifIXclsr4_TCCIXn tcl14__is_alloc_argIT_EEEEE29__is_implicitly_constructibleISA_T0_EEEbE4typeELb1EEEOSA_OSB_
               (Entity **param_1,default_delete *param_2)

{
                    /* try { // try from 00110f40 to 00110f44 has its CatchHandler @ 00110f4d */
  std::_Tuple_impl<>::_Tuple_impl<>(param_1,param_2);
  return;
}


void _ZNSt5tupleIJP6EntitySt14default_deleteIS0_EEEC2IRS1_S2_I8PrincessETnNSt9enable_ifIXclsr4_TCCIX ntcl14__is_alloc_argIT_EEEEE29__is_implicitly_constructibleISA_T0_EEEbE4typeELb1EEEOSA_OSB_
               (Entity **param_1,default_delete *param_2)

{
                    /* try { // try from 0010fed0 to 0010fed4 has its CatchHandler @ 0010fedd */
  std::_Tuple_impl<>::_Tuple_impl<>(param_1,param_2);
  return;
}


void _ZNSt5tupleIJP6PlayerSt14default_deleteIS0_EEEC2ILb1ETnNSt9enable_ifIXclsr17_TupleConstraintsIX T_ES1_S3_EE37__is_implicitly_default_constructibleEEbE4typeELb1EEEv
               (_Tuple_impl<> *param_1)

{
                    /* try { // try from 001109c0 to 001109c4 has its CatchHandler @ 001109cd */
  std::_Tuple_impl<>::_Tuple_impl(param_1);
  return;
}


void _ZNSt5tupleIJP7MonsterSt14default_deleteIS0_EEEC2ILb1ETnNSt9enable_ifIXclsr17_TupleConstraintsI XT_ES1_S3_EE37__is_implicitly_default_constructibleEEbE4typeELb1EEEv
               (_Tuple_impl<> *param_1)

{
                    /* try { // try from 00111200 to 00111204 has its CatchHandler @ 0011120d */
  std::_Tuple_impl<>::_Tuple_impl(param_1);
  return;
}


void _ZNSt5tupleIJP8PrincessSt14default_deleteIS0_EEEC2ILb1ETnNSt9enable_ifIXclsr17_TupleConstraints IXT_ES1_S3_EE37__is_implicitly_default_constructibleEEbE4typeELb1EEEv
               (_Tuple_impl<> *param_1)

{
                    /* try { // try from 00110180 to 00110184 has its CatchHandler @ 0011018d */
  std::_Tuple_impl<>::_Tuple_impl(param_1);
  return;
}


void _ZNSt5tupleIJPcSt14default_deleteIA_cEEEC2ILb1ETnNSt9enable_ifIXclsr17_TupleConstraintsIXT_ES0_ S3_EE37__is_implicitly_default_constructibleEEbE4typeELb1EEEv
               (_Tuple_impl<> *param_1)

{
                    /* try { // try from 0010cfd0 to 0010cfd4 has its CatchHandler @ 0010cfdd */
  std::_Tuple_impl<>::_Tuple_impl(param_1);
  return;
}


void _ZNSt5tupleIJPSt5arrayIS0_I10EntityCellLm31EELm20EESt14default_deleteIS3_EEEC2ILb1ETnNSt9enable _ifIXclsr17_TupleConstraintsIXT_ES4_S6_EE37__is_implicitly_default_constructibleEEbE4typeELb1EEEv
               (_Tuple_impl<> *param_1)

{
                    /* try { // try from 0010de00 to 0010de04 has its CatchHandler @ 0010de0d */
  std::_Tuple_impl<>::_Tuple_impl(param_1);
  return;
}


void FUN_00103020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}


/* WARNING: Removing unreachable block (ram,0x00103413) */
/* WARNING: Removing unreachable block (ram,0x0010341f) */

void FUN_00103400(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00103454) */
/* WARNING: Removing unreachable block (ram,0x00103460) */

void FUN_00103430(void)

{
  return;
}


/* get_frame_size(unsigned char) */

long get_frame_size(uchar param_1)

{
  runtime_error *this;
  long in_FS_OFFSET;
  long local_80;
  ushort local_72;
  __cxx11 local_70 [32];
  char local_50 [32];
  string local_30 [32];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_1) {
  case '\0':
    peek_into<>(&local_72);
    local_80 = (ulong)local_72 + 2;
    break;
  case '\x01':
    local_80 = 0;
    break;
  case '\x02':
    local_80 = 1;
    break;
  case '\x03':
    local_80 = 0;
    break;
  case '\x04':
    local_80 = 0;
    break;
  default:
    close(sfd);
    sfd = -1;
    this = (runtime_error *)__cxa_allocate_exception(0x10);
    std::__cxx11::to_string(local_70,(uint)param_1);
                    /* try { // try from 0010362e to 0010363d has its CatchHandler @ 001036a4 */
    std::operator+(local_50,(string *)"invalid update code ");
                    /* try { // try from 00103640 to 00103653 has its CatchHandler @ 001036b8 */
    std::operator+(local_30,local_50);
                    /* try { // try from 00103656 to 0010369e has its CatchHandler @ 001036cc */
    std::runtime_error::runtime_error(this,local_30);
    if (*(long *)(in_FS_OFFSET + 0x28) == local_10) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,&std::runtime_error::typeinfo,std::runtime_error::~runtime_error);
    }
    goto LAB_001037a8;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == local_10) {
    return local_80;
  }
LAB_001037a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* init_map(std::array<std::array<EntityCell, 31ul>, 20ul>&) */

void init_map(array *param_1)

{
  array<> *paVar1;
  long lVar2;
  undefined4 *puVar3;
  
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,10);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,10);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,0xb);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,0xb);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,0xc);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,0xc);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,0xd);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,0xd);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,0xe);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,0xe);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,0xf);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,0xf);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,0x10);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,0x10);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,0x11);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,0x11);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,0x12);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,0x12);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,0x13);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,0x13);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,0x14);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,0x14);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,1);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,2);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,2);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,3);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,3);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,4);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,4);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,2);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,2);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,3);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,3);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,4);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,4);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,1);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,1);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,2);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,2);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,3);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,3);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,4);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,4);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,5);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,5);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,6);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,6);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,7);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,7);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,8);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,8);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,10);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,10);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0xb);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0xb);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0xc);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0xc);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0xd);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0xd);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0xe);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0xe);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0xf);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0xf);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x10);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x10);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x11);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x11);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x12);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x12);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x13);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x13);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x14);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x14);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x16);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x16);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x17);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x17);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x18);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x18);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x19);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x19);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x1a);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x1a);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x1b);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x1b);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x1c);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x1c);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x1d);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x1d);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,5);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,1);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,1);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,2);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,2);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,3);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,3);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,4);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,4);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,5);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,5);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,6);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,6);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,7);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,7);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,8);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,8);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,10);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,10);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0xb);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0xb);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0xc);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0xc);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0xd);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0xd);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0xe);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0xe);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0xf);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0xf);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x10);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x10);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x11);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x11);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x12);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x12);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x13);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x13);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x14);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x14);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x16);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x16);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x17);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x17);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x18);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x18);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x19);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x19);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x1a);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x1a);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x1b);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x1b);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x1c);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x1c);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x1d);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x1d);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,6);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,1);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,1);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,2);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,2);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,3);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,3);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,4);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,4);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,5);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,5);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,6);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,6);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,7);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,7);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,8);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,8);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,10);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,10);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0xb);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0xb);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0xc);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0xc);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0xd);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0xd);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0xe);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0xe);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0xf);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0xf);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x10);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x10);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x11);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x11);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x12);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x12);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x13);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x13);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x14);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x14);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x16);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x16);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x17);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x17);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x18);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x18);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x19);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x19);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x1a);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x1a);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x1b);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x1b);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x1c);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x1c);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x1d);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x1d);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 6) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x12);
  lVar2 = std::array<>::operator[](paVar1,0x1e);
  *(undefined2 *)(lVar2 + 4) = 0;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,2);
  lVar2 = std::array<>::operator[](paVar1,10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,2);
  lVar2 = std::array<>::operator[](paVar1,0xb);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,2);
  lVar2 = std::array<>::operator[](paVar1,0xc);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,2);
  lVar2 = std::array<>::operator[](paVar1,0xd);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,2);
  lVar2 = std::array<>::operator[](paVar1,0xe);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,2);
  lVar2 = std::array<>::operator[](paVar1,0xf);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,2);
  lVar2 = std::array<>::operator[](paVar1,0x10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,2);
  lVar2 = std::array<>::operator[](paVar1,0x11);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,2);
  lVar2 = std::array<>::operator[](paVar1,0x12);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,2);
  lVar2 = std::array<>::operator[](paVar1,0x13);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,2);
  lVar2 = std::array<>::operator[](paVar1,0x14);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,3);
  lVar2 = std::array<>::operator[](paVar1,10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,3);
  lVar2 = std::array<>::operator[](paVar1,0xb);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,3);
  lVar2 = std::array<>::operator[](paVar1,0xc);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,3);
  lVar2 = std::array<>::operator[](paVar1,0xd);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,3);
  lVar2 = std::array<>::operator[](paVar1,0xe);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,3);
  lVar2 = std::array<>::operator[](paVar1,0xf);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,3);
  lVar2 = std::array<>::operator[](paVar1,0x10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,3);
  lVar2 = std::array<>::operator[](paVar1,0x11);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,3);
  lVar2 = std::array<>::operator[](paVar1,0x12);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,3);
  lVar2 = std::array<>::operator[](paVar1,0x13);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,3);
  lVar2 = std::array<>::operator[](paVar1,0x14);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,4);
  lVar2 = std::array<>::operator[](paVar1,10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,4);
  lVar2 = std::array<>::operator[](paVar1,0xb);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,4);
  lVar2 = std::array<>::operator[](paVar1,0xc);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,4);
  lVar2 = std::array<>::operator[](paVar1,0xd);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,4);
  lVar2 = std::array<>::operator[](paVar1,0xe);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,4);
  lVar2 = std::array<>::operator[](paVar1,0xf);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,4);
  lVar2 = std::array<>::operator[](paVar1,0x10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,4);
  lVar2 = std::array<>::operator[](paVar1,0x11);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,4);
  lVar2 = std::array<>::operator[](paVar1,0x12);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,4);
  lVar2 = std::array<>::operator[](paVar1,0x13);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,4);
  lVar2 = std::array<>::operator[](paVar1,0x14);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,1);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,2);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,3);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,4);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,5);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,6);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,7);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,8);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0xb);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0xc);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0xd);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0xe);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0xf);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0x10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0x11);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0x12);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0x13);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0x14);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0x16);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0x17);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0x18);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0x19);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0x1a);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0x1b);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0x1c);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0x1d);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,1);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,2);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,3);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,4);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,5);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,6);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,7);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,8);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0xb);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0xc);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0xd);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0xe);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0xf);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0x10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0x11);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0x12);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0x13);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0x14);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0x16);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0x17);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0x18);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0x19);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0x1a);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0x1b);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0x1c);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,8);
  lVar2 = std::array<>::operator[](paVar1,0x1d);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,1);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,2);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,3);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,4);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,5);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,6);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,7);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,8);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0xb);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0xc);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0xd);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0xe);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0xf);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0x10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0x11);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0x12);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0x13);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0x14);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0x16);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0x17);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0x18);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0x19);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0x1a);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0x1b);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0x1c);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,9);
  lVar2 = std::array<>::operator[](paVar1,0x1d);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,1);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,2);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,3);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,4);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,5);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,6);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,7);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,8);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0xb);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0xc);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0xd);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0xe);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0xf);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0x10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0x11);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0x12);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0x13);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0x14);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0x16);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0x17);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0x18);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0x19);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0x1a);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0x1b);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0x1c);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,10);
  lVar2 = std::array<>::operator[](paVar1,0x1d);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,1);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,2);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,3);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,4);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,5);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,6);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,7);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,8);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0xb);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0xc);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0xd);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0xe);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0xf);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0x10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0x11);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0x12);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0x13);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0x14);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0x16);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0x17);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0x18);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0x19);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0x1a);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0x1b);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0x1c);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xb);
  lVar2 = std::array<>::operator[](paVar1,0x1d);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,1);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,2);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,3);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,4);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,5);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,6);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,7);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,8);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0xb);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0xc);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0xd);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0xe);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0xf);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0x10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0x11);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0x12);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0x13);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0x14);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0x16);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0x17);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0x18);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0x19);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0x1a);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0x1b);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0x1c);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xc);
  lVar2 = std::array<>::operator[](paVar1,0x1d);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,1);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,2);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,3);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,4);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,5);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,6);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,7);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,8);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0xb);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0xc);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0xd);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0xe);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0xf);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0x10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0x11);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0x12);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0x13);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0x14);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0x16);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0x17);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0x18);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0x19);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0x1a);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0x1b);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0x1c);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xd);
  lVar2 = std::array<>::operator[](paVar1,0x1d);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,1);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,2);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,3);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,4);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,5);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,6);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,7);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,8);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0xb);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0xc);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0xd);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0xe);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0xf);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0x10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0x11);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0x12);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0x13);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0x14);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0x16);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0x17);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0x18);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0x19);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0x1a);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0x1b);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0x1c);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xe);
  lVar2 = std::array<>::operator[](paVar1,0x1d);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,1);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,2);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,3);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,4);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,5);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,6);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,7);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,8);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0xb);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0xc);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0xd);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0xe);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0xf);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0x10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0x11);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0x12);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0x13);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0x14);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0x16);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0x17);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0x18);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0x19);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0x1a);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0x1b);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0x1c);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0xf);
  lVar2 = std::array<>::operator[](paVar1,0x1d);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,1);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,2);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,3);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,4);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,5);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,6);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,7);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,8);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0xb);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0xc);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0xd);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0xe);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0xf);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0x10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0x11);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0x12);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0x13);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0x14);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0x16);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0x17);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0x18);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0x19);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0x1a);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0x1b);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0x1c);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x10);
  lVar2 = std::array<>::operator[](paVar1,0x1d);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,1);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,2);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,3);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,4);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,5);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,6);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,7);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,8);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,9);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0xb);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0xc);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0xd);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0xe);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0xf);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0x10);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0x11);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0x12);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0x13);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0x14);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0x15);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0x16);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0x17);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0x18);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0x19);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0x1a);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0x1b);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0x1c);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0x1d);
  *(undefined2 *)(lVar2 + 6) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,3);
  *(undefined2 *)(lVar2 + 6) = 5;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,3);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  puVar3 = (undefined4 *)std::array<>::operator[](paVar1,3);
  *puVar3 = 8;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0x1b);
  *(undefined2 *)(lVar2 + 6) = 6;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  lVar2 = std::array<>::operator[](paVar1,0x1b);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,7);
  puVar3 = (undefined4 *)std::array<>::operator[](paVar1,0x1b);
  *puVar3 = 8;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,3);
  *(undefined2 *)(lVar2 + 6) = 7;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,3);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  puVar3 = (undefined4 *)std::array<>::operator[](paVar1,3);
  *puVar3 = 8;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0x1b);
  *(undefined2 *)(lVar2 + 6) = 8;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  lVar2 = std::array<>::operator[](paVar1,0x1b);
  *(undefined2 *)(lVar2 + 4) = 1;
  paVar1 = (array<> *)std::array<>::operator[]((array<> *)param_1,0x11);
  puVar3 = (undefined4 *)std::array<>::operator[](paVar1,0x1b);
  *puVar3 = 8;
  return;
}


/* log_to_client(std::basic_string_view<char, std::char_traits<char> >) */

void log_to_client(undefined8 param_1,undefined8 param_2)

{
  int __fd;
  void *__buf;
  long in_FS_OFFSET;
  ushort local_24;
  undefined1 local_22;
  undefined1 local_21;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_21 = 1;
  local_22 = 5;
  local_20 = param_1;
  local_18 = param_2;
  local_24 = std::basic_string_view<>::size((basic_string_view<> *)&local_20);
  send(sfd,&local_21,1,0x8000);
  send(sfd,&local_22,1,0x8000);
  send(sfd,&local_24,2,0x8000);
  __fd = sfd;
  __buf = (void *)std::basic_string_view<>::data((basic_string_view<> *)&local_20);
  send(__fd,__buf,(ulong)local_24,0);
  if (*(long *)(in_FS_OFFSET + 0x28) == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* loop() */

undefined4 loop(void)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  unique_ptr<> *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  long lVar15;
  unique_ptr *puVar16;
  unique_ptr<> *this;
  ostream *poVar17;
  int iVar18;
  long in_FS_OFFSET;
  unique_ptr<> *local_c78;
  int local_c70;
  int local_c6c;
  int local_c60;
  int local_c5c;
  ulong local_c58;
  int local_c4c;
  ulong local_c40;
  int local_c30;
  int local_c2c;
  byte local_c25;
  int local_c10;
  int local_c0c;
  int local_bf8;
  int local_bf4;
  ulong local_bd0;
  undefined1 local_b6a;
  undefined1 local_b69;
  Castle local_b68 [72];
  undefined8 local_b20;
  undefined8 local_b18;
  undefined8 local_b10;
  undefined8 local_b08;
  undefined8 local_b00;
  undefined8 local_af8;
  byte local_aed;
  ushort local_aec;
  uchar local_ae9;
  byte *local_ae8;
  undefined8 local_ae0;
  undefined8 local_ad8;
  undefined4 local_acc;
  int local_ac8 [2];
  unique_ptr local_ac0 [12];
  undefined4 local_ab4;
  int local_ab0 [2];
  unique_ptr local_aa8 [12];
  undefined4 local_a9c;
  int local_a98 [2];
  unique_ptr local_a90 [12];
  undefined4 local_a84;
  int local_a80 [2];
  unique_ptr local_a78 [12];
  undefined4 local_a6c;
  int local_a68 [2];
  unique_ptr local_a60 [12];
  undefined4 local_a54;
  int local_a50 [2];
  unique_ptr local_a48 [12];
  undefined4 local_a3c;
  int local_a38 [2];
  unique_ptr local_a30 [12];
  undefined4 local_a24;
  int local_a20 [2];
  unique_ptr local_a18 [12];
  undefined4 local_a0c;
  int local_a08 [2];
  unique_ptr local_a00 [12];
  undefined4 local_9f4;
  int local_9f0 [2];
  unique_ptr local_9e8 [12];
  undefined4 local_9dc;
  int local_9d8 [2];
  unique_ptr local_9d0 [12];
  undefined4 local_9c4;
  int local_9c0 [2];
  unique_ptr local_9b8 [12];
  undefined4 local_9ac;
  int local_9a8 [2];
  unique_ptr local_9a0 [12];
  undefined4 local_994;
  int local_990 [2];
  unique_ptr local_988 [12];
  undefined4 local_97c;
  int local_978 [2];
  unique_ptr local_970 [12];
  undefined4 local_964;
  int local_960 [2];
  unique_ptr local_958 [14];
  undefined1 local_94a;
  undefined1 local_949;
  undefined8 local_948;
  undefined8 local_940;
  undefined8 local_938;
  undefined8 local_930;
  undefined8 local_928;
  undefined8 local_920;
  undefined8 local_918;
  undefined8 local_910;
  undefined8 local_908;
  undefined8 local_900;
  undefined8 local_8f8;
  undefined8 local_8f0;
  undefined8 local_8e8;
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined8 local_8d0;
  undefined1 local_8c2;
  undefined1 local_8c1;
  undefined8 local_8c0;
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined8 local_8a8;
  undefined8 local_8a0;
  undefined8 local_898;
  undefined8 local_890;
  undefined8 local_888;
  undefined8 local_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined8 local_868;
  Castle local_860 [8];
  vector<> local_858 [56];
  unique_ptr<> auStack_820 [8];
  unique_ptr<> local_818 [2040];
  ulong local_20;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_c78 = local_818;
  do {
    std::unique_ptr<>::unique_ptr<>(local_c78);
    local_c78 = local_c78 + 8;
  } while (local_c78 != (unique_ptr<> *)&local_20);
  local_20 = 0;
  local_18 = 0;
                    /* try { // try from 00103828 to 00103833 has its CatchHandler @ 00103939 */
  Castle::Castle(local_860);
  do {
                    /* try { // try from 0010383a to 0010500b has its CatchHandler @ 00103950 */
    Castle::flush_render(local_860,0);
    local_bd0 = 0;
    bVar4 = false;
    bVar5 = false;
    while (!bVar4) {
      puVar9 = (unique_ptr<> *)std::vector<>::operator[](local_858,2);
      lVar10 = std::unique_ptr<>::get(puVar9);
      puVar9 = (unique_ptr<> *)std::vector<>::operator[](local_858,3);
      lVar11 = std::unique_ptr<>::get(puVar9);
      puVar9 = (unique_ptr<> *)std::vector<>::operator[](local_858,4);
      lVar12 = std::unique_ptr<>::get(puVar9);
      while (*(int *)(lVar11 + 0x14) != 0) {
        local_bd0 = local_bd0 + 1;
        if (*(int *)(lVar10 + 0x14) == 0) {
          *(undefined4 *)(lVar10 + 0x18) = 0xd5;
          *(undefined4 *)(lVar10 + 0x14) = 1;
          poVar17 = std::operator<<((ostream *)&std::cout,"[*] princess yelled");
          std::ostream::operator<<(poVar17,std::endl<>);
          std::basic_string_view<>::basic_string_view
                    ((basic_string_view<> *)&local_870,"Princess yelled: \"Save me, Jumpio!\"");
          log_to_client(local_870,local_868);
        }
        else if ((*(int *)(lVar10 + 0x14) == 1) &&
                (*(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + -1,
                *(int *)(lVar10 + 0x18) == 0)) {
          *(undefined4 *)(lVar10 + 0x14) = 0;
        }
        *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + -1;
        if (*(int *)(lVar11 + 0x18) == 0) {
          *(undefined4 *)(lVar11 + 0x14) = 0;
        }
        if (*(int *)(lVar12 + 0x18) == 1) {
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + -1;
          if (*(int *)(lVar12 + 0x1c) == 0) {
            *(undefined4 *)(lVar12 + 0x18) = 0;
            *(undefined1 *)(lVar12 + 0x16) = 0;
            *(undefined1 *)(lVar12 + 8) = 6;
            bVar5 = true;
          }
        }
        else if (*(int *)(lVar12 + 0x18) == 5) {
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + -1;
          if (*(int *)(lVar12 + 0x1c) == 0) {
            poVar17 = std::operator<<((ostream *)&std::cout,"[*] Hopper\'s leap ended");
            std::ostream::operator<<(poVar17,std::endl<>);
            *(undefined1 *)(lVar12 + 0x16) = 0;
            *(undefined1 *)(lVar12 + 8) = 6;
            *(undefined4 *)(lVar12 + 0x1c) = 0x19;
            *(undefined4 *)(lVar12 + 0x18) = 1;
            bVar5 = true;
          }
          else {
            local_bf4 = *(int *)(lVar12 + 0xc);
            local_bf8 = *(int *)(lVar12 + 0x10);
            if (*(char *)(lVar12 + 0x16) == '\0') {
              local_bf8 = local_bf8 + 1;
            }
            else if (*(char *)(lVar12 + 0x16) == '\x01') {
              local_bf4 = local_bf4 + -1;
              local_bf8 = local_bf8 + 1;
            }
            else if (*(char *)(lVar12 + 0x16) == '\x02') {
              local_bf4 = local_bf4 + -1;
            }
            else if (*(char *)(lVar12 + 0x16) == '\x03') {
              local_bf4 = local_bf4 + -1;
              local_bf8 = local_bf8 + -1;
            }
            else if (*(char *)(lVar12 + 0x16) == '\x04') {
              local_bf8 = local_bf8 + -1;
            }
            else if (*(char *)(lVar12 + 0x16) == '\x05') {
              local_bf4 = local_bf4 + 1;
              local_bf8 = local_bf8 + -1;
            }
            else if (*(char *)(lVar12 + 0x16) == '\x06') {
              local_bf4 = local_bf4 + 1;
            }
            else if (*(char *)(lVar12 + 0x16) == '\a') {
              local_bf4 = local_bf4 + 1;
              local_bf8 = local_bf8 + 1;
            }
            lVar15 = std::unique_ptr<>::operator->(auStack_820);
            piVar13 = (int *)(lVar15 + (long)local_bf8 * 0xf8 + (long)local_bf4 * 8);
            if ((short)piVar13[1] == 0) {
              if ((*(int *)(lVar11 + 0xc) == local_bf4) && (*(int *)(lVar11 + 0x10) == local_bf8)) {
                poVar17 = std::operator<<((ostream *)&std::cout,"[*] monster hit player");
                std::ostream::operator<<(poVar17,std::endl<>);
                std::basic_string_view<>::basic_string_view
                          ((basic_string_view<> *)&local_8a0,"Heap Hopper slashed Jumpio!");
                log_to_client(local_8a0,local_898);
                *(undefined4 *)(lVar12 + 0x18) = 1;
                *(undefined4 *)(lVar12 + 0x1c) = 0xd;
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + -1;
                if (*(int *)(lVar11 + 0x1c) < 1) {
                  poVar17 = std::operator<<((ostream *)&std::cout,"[*] player has died, game over");
                  std::ostream::operator<<(poVar17,std::endl<>);
                  std::basic_string_view<>::basic_string_view
                            ((basic_string_view<> *)&local_8b0,"Jumpio: \"Mama mia...\"");
                  log_to_client(local_8b0,local_8a8);
                  std::basic_string_view<>::basic_string_view
                            ((basic_string_view<> *)&local_8c0,"Jumpio has died!");
                  log_to_client(local_8c0,local_8b8);
                  *(undefined1 *)(lVar11 + 8) = 0xe;
                  Castle::flush_render(local_860,local_bd0);
                  local_8c1 = 1;
                  local_8c2 = 3;
                  send(sfd,&local_8c1,1,0x8000);
                  send(sfd,&local_8c2,1,0);
                  goto LAB_001063f6;
                }
                std::basic_string_view<>::basic_string_view
                          ((basic_string_view<> *)&local_8d8,"Jumpio yelled: \"Ouch! That a-hurt!\""
                          );
                log_to_client(local_8d8,local_8d0);
              }
              else {
                poVar17 = std::operator<<((ostream *)&std::cout,"[*] monster leap-moved to ");
                poVar17 = (ostream *)std::ostream::operator<<(poVar17,local_bf4);
                poVar17 = std::operator<<(poVar17,", ");
                poVar17 = (ostream *)std::ostream::operator<<(poVar17,local_bf8);
                std::ostream::operator<<(poVar17,std::endl<>);
                bVar5 = true;
                *(int *)(lVar12 + 0xc) = local_bf4;
                *(int *)(lVar12 + 0x10) = local_bf8;
              }
            }
            else {
              *(undefined4 *)(lVar12 + 0x1c) = 100;
              *(undefined4 *)(lVar12 + 0x18) = 4;
              poVar17 = std::operator<<((ostream *)&std::cout,
                                        "[*] monster lunged into a collideable object at ");
              poVar17 = (ostream *)std::ostream::operator<<(poVar17,local_bf4);
              poVar17 = std::operator<<(poVar17,", ");
              poVar17 = (ostream *)std::ostream::operator<<(poVar17,local_bf8);
              poVar17 = std::operator<<(poVar17," with HP ");
              poVar17 = (ostream *)std::ostream::operator<<(poVar17,*piVar13);
              std::ostream::operator<<(poVar17,std::endl<>);
              if (*piVar13 != -1) {
                poVar17 = std::operator<<((ostream *)&std::cout,
                                          "[*] monster applied 5 damage to the object");
                std::ostream::operator<<(poVar17,std::endl<>);
                *piVar13 = *piVar13 + -5;
                if (*piVar13 < 1) {
                  uVar2 = *(ushort *)((long)piVar13 + 6);
                  uVar14 = std::vector<>::size(local_858);
                  if (uVar2 < uVar14) {
                    if (uVar2 != 0) {
                      bVar5 = true;
                      puVar9 = (unique_ptr<> *)std::vector<>::operator[](local_858,(ulong)uVar2);
                      lVar15 = std::unique_ptr<>::operator->(puVar9);
                      *(undefined1 *)(lVar15 + 8) = 1;
                      poVar17 = std::operator<<((ostream *)&std::cout,"[*] entity was destroyed");
                      std::ostream::operator<<(poVar17,std::endl<>);
                      std::basic_string_view<>::basic_string_view
                                ((basic_string_view<> *)&local_880,"*SMASH*");
                      log_to_client(local_880,local_878);
                    }
                  }
                  else {
                    poVar17 = std::operator<<((ostream *)&std::cerr,
                                              "[!] warning: cell entity lookup failed!");
                    std::ostream::operator<<(poVar17,std::endl<>);
                  }
                }
              }
              std::basic_string_view<>::basic_string_view
                        ((basic_string_view<> *)&local_890,
                         "Heap Hopper bonked into something and was stunned!");
              log_to_client(local_890,local_888);
            }
          }
        }
        else if (*(int *)(lVar12 + 0x18) == 4) {
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + -1;
          if (*(int *)(lVar12 + 0x1c) == 0) {
            *(undefined1 *)(lVar12 + 8) = 6;
            *(undefined1 *)(lVar12 + 0x16) = 0;
            *(undefined4 *)(lVar12 + 0x18) = 1;
            *(undefined4 *)(lVar12 + 0x1c) = 0xd;
            bVar5 = true;
            poVar17 = std::operator<<((ostream *)&std::cout,"[*] monster no longer stunned");
            std::ostream::operator<<(poVar17,std::endl<>);
            std::basic_string_view<>::basic_string_view
                      ((basic_string_view<> *)&local_8e8,"Heap Hopper got back up!");
            log_to_client(local_8e8,local_8e0);
            std::basic_string_view<>::basic_string_view
                      ((basic_string_view<> *)&local_8f8,"\"ROOOOAAAAAR!\"");
            log_to_client(local_8f8,local_8f0);
          }
        }
        else if (*(int *)(lVar12 + 0x18) == 3) {
          local_c0c = *(int *)(lVar12 + 0xc);
          local_c10 = *(int *)(lVar12 + 0x10);
          if (*(char *)(lVar12 + 0x16) == '\0') {
            local_c10 = local_c10 + 1;
          }
          else if (*(char *)(lVar12 + 0x16) == '\x01') {
            local_c0c = local_c0c + -1;
            local_c10 = local_c10 + 1;
          }
          else if (*(char *)(lVar12 + 0x16) == '\x02') {
            local_c0c = local_c0c + -1;
          }
          else if (*(char *)(lVar12 + 0x16) == '\x03') {
            local_c0c = local_c0c + -1;
            local_c10 = local_c10 + -1;
          }
          else if (*(char *)(lVar12 + 0x16) == '\x04') {
            local_c10 = local_c10 + -1;
          }
          else if (*(char *)(lVar12 + 0x16) == '\x05') {
            local_c0c = local_c0c + 1;
            local_c10 = local_c10 + -1;
          }
          else if (*(char *)(lVar12 + 0x16) == '\x06') {
            local_c0c = local_c0c + 1;
          }
          else if (*(char *)(lVar12 + 0x16) == '\a') {
            local_c0c = local_c0c + 1;
            local_c10 = local_c10 + 1;
          }
          lVar15 = std::unique_ptr<>::operator->(auStack_820);
          piVar13 = (int *)(lVar15 + (long)local_c10 * 0xf8 + (long)local_c0c * 8);
          if ((short)piVar13[1] == 0) {
            poVar17 = std::operator<<((ostream *)&std::cout,"[*] monster flew-moved to ");
            poVar17 = (ostream *)std::ostream::operator<<(poVar17,local_c0c);
            poVar17 = std::operator<<(poVar17,", ");
            poVar17 = (ostream *)std::ostream::operator<<(poVar17,local_c10);
            std::ostream::operator<<(poVar17,std::endl<>);
            bVar5 = true;
            *(int *)(lVar12 + 0xc) = local_c0c;
            *(int *)(lVar12 + 0x10) = local_c10;
          }
          else {
            poVar17 = std::operator<<((ostream *)&std::cout,
                                      "[*] monster was thrown into a collideable object at ");
            poVar17 = (ostream *)std::ostream::operator<<(poVar17,local_c0c);
            poVar17 = std::operator<<(poVar17,", ");
            poVar17 = (ostream *)std::ostream::operator<<(poVar17,local_c10);
            poVar17 = std::operator<<(poVar17," with HP ");
            poVar17 = (ostream *)std::ostream::operator<<(poVar17,*piVar13);
            std::ostream::operator<<(poVar17,std::endl<>);
            if (*piVar13 != -1) {
              poVar17 = std::operator<<((ostream *)&std::cout,"[*] monster applied ");
              poVar17 = (ostream *)std::ostream::operator<<(poVar17,*(short *)(lVar12 + 0x14));
              poVar17 = std::operator<<(poVar17," damage to the object");
              std::ostream::operator<<(poVar17,std::endl<>);
              *piVar13 = *piVar13 - (int)*(short *)(lVar12 + 0x14);
              if (*piVar13 < 1) {
                uVar2 = *(ushort *)((long)piVar13 + 6);
                uVar14 = std::vector<>::size(local_858);
                if (uVar2 < uVar14) {
                  if (uVar2 != 1) {
                    bVar5 = true;
                    puVar9 = (unique_ptr<> *)std::vector<>::operator[](local_858,(ulong)uVar2);
                    lVar15 = std::unique_ptr<>::operator->(puVar9);
                    *(undefined1 *)(lVar15 + 8) = 1;
                    poVar17 = std::operator<<((ostream *)&std::cout,"[*] entity was destroyed");
                    std::ostream::operator<<(poVar17,std::endl<>);
                    std::basic_string_view<>::basic_string_view
                              ((basic_string_view<> *)&local_908,"*SMASH*");
                    log_to_client(local_908,local_900);
                  }
                }
                else {
                  poVar17 = std::operator<<((ostream *)&std::cerr,
                                            "[!] warning: cell entity lookup failed!");
                  std::ostream::operator<<(poVar17,std::endl<>);
                }
              }
            }
            *(undefined1 *)(lVar12 + 8) = 6;
            *(undefined1 *)(lVar12 + 0x16) = 0;
            *(undefined4 *)(lVar12 + 0x18) = 1;
            *(undefined4 *)(lVar12 + 0x1c) = 0x13;
            std::basic_string_view<>::basic_string_view
                      ((basic_string_view<> *)&local_918,"Heap Hopper yelled: \"OOF!\"");
            log_to_client(local_918,local_910);
          }
        }
        else {
          iVar7 = *(int *)(lVar11 + 0xc) - *(int *)(lVar12 + 0xc);
          iVar8 = *(int *)(lVar11 + 0x10) - *(int *)(lVar12 + 0x10);
          if ((iVar7 != 0) && (iVar8 != 0)) {
            iVar3 = iVar7;
            if (iVar7 < 1) {
              iVar3 = -iVar7;
            }
            iVar18 = iVar8;
            if (iVar8 < 1) {
              iVar18 = -iVar8;
            }
            if (iVar3 != iVar18) {
              local_c2c = *(int *)(lVar12 + 0xc);
              local_c30 = *(int *)(lVar12 + 0x10);
              if (*(int *)(lVar11 + 0xc) < local_c2c) {
                local_c2c = local_c2c + -1;
              }
              else if (local_c2c < *(int *)(lVar11 + 0xc)) {
                local_c2c = local_c2c + 1;
              }
              if (*(int *)(lVar11 + 0x10) < local_c30) {
                local_c30 = local_c30 + -1;
              }
              else if (local_c30 < *(int *)(lVar11 + 0x10)) {
                local_c30 = local_c30 + 1;
              }
              lVar15 = std::unique_ptr<>::operator->(auStack_820);
              if (*(short *)(lVar15 + (long)local_c30 * 0xf8 + (long)local_c2c * 8 + 4) == 0) {
                bVar5 = true;
                *(int *)(lVar12 + 0xc) = local_c2c;
                *(int *)(lVar12 + 0x10) = local_c30;
                *(undefined4 *)(lVar12 + 0x1c) = 0x13;
                *(undefined4 *)(lVar12 + 0x18) = 1;
                poVar17 = std::operator<<((ostream *)&std::cout,"[*] monster moved to ");
                poVar17 = (ostream *)std::ostream::operator<<(poVar17,local_c2c);
                poVar17 = std::operator<<(poVar17,", ");
                poVar17 = (ostream *)std::ostream::operator<<(poVar17,local_c30);
                std::ostream::operator<<(poVar17,std::endl<>);
              }
              else {
                poVar17 = std::operator<<((ostream *)&std::cout,
                                          "[*] monster movement was blocked by entity at ");
                poVar17 = (ostream *)std::ostream::operator<<(poVar17,local_c2c);
                poVar17 = std::operator<<(poVar17,", ");
                poVar17 = (ostream *)std::ostream::operator<<(poVar17,local_c30);
                std::ostream::operator<<(poVar17,std::endl<>);
              }
              goto LAB_00104cbd;
            }
          }
          local_c25 = 0;
          if (iVar7 < 0) {
            if (iVar8 < 1) {
              if (iVar8 < 0) {
                local_c25 = 3;
              }
              else {
                local_c25 = 2;
              }
            }
            else {
              local_c25 = 1;
            }
          }
          else if (iVar7 < 1) {
            if (iVar8 < 0) {
              local_c25 = 4;
            }
          }
          else if (iVar8 < 1) {
            if (iVar8 < 0) {
              local_c25 = 5;
            }
            else {
              local_c25 = 6;
            }
          }
          else {
            local_c25 = 7;
          }
          poVar17 = std::operator<<((ostream *)&std::cout,
                                    "[*] monster leaped at the player, direction ");
          poVar17 = (ostream *)std::ostream::operator<<(poVar17,(uint)local_c25);
          std::ostream::operator<<(poVar17,std::endl<>);
          *(byte *)(lVar12 + 8) = local_c25 + 6;
          *(undefined4 *)(lVar12 + 0x1c) = 0xe;
          *(byte *)(lVar12 + 0x16) = local_c25;
          *(undefined4 *)(lVar12 + 0x18) = 5;
          std::basic_string_view<>::basic_string_view
                    ((basic_string_view<> *)&local_928,"Heap Hopper leaped at Jumpio!");
          log_to_client(local_928,local_920);
        }
LAB_00104cbd:
        for (local_c40 = 9; uVar14 = std::vector<>::size(local_858), local_c40 < uVar14;
            local_c40 = local_c40 + 1) {
          puVar9 = (unique_ptr<> *)std::vector<>::operator[](local_858,local_c40);
          lVar15 = std::unique_ptr<>::get(puVar9);
          if (0 < *(int *)(lVar15 + 0x14)) {
            bVar5 = true;
            *(int *)(lVar15 + 0x14) = *(int *)(lVar15 + 0x14) + -1;
            *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + 1;
            if ((*(int *)(lVar15 + 0xc) == *(int *)(lVar10 + 0xc)) &&
               (*(int *)(lVar15 + 0x10) == *(int *)(lVar10 + 0x10))) {
              Castle::flush_render(local_860,local_bd0);
              poVar17 = std::operator<<((ostream *)&std::cout,
                                        "[*] princess has been crushed, game over");
              std::ostream::operator<<(poVar17,std::endl<>);
              std::basic_string_view<>::basic_string_view
                        ((basic_string_view<> *)&local_938,"Princess: \"AAAAAIIIIIIIIIEEE!\"");
              log_to_client(local_938,local_930);
              std::basic_string_view<>::basic_string_view
                        ((basic_string_view<> *)&local_948,"The Princess has died!");
              log_to_client(local_948,local_940);
              local_949 = 1;
              local_94a = 3;
              send(sfd,&local_949,1,0x8000);
              send(sfd,&local_94a,1,0);
              goto LAB_001063f6;
            }
          }
        }
        local_c4c = 0;
        for (local_c58 = 0; uVar14 = std::vector<>::size(local_858), local_c58 < uVar14;
            local_c58 = local_c58 + 1) {
          puVar16 = (unique_ptr *)std::vector<>::operator[](local_858,local_c58);
          bVar6 = std::operator==((_func_decltype_nullptr *)0x0,puVar16);
          if (!bVar6) {
            puVar9 = (unique_ptr<> *)std::vector<>::operator[](local_858,local_c58);
            lVar15 = std::unique_ptr<>::operator->(puVar9);
            if (*(char *)(lVar15 + 8) == '\x02') {
              local_c4c = local_c4c + 1;
            }
          }
        }
        if ((local_c4c == 0) && (uVar14 = std::vector<>::size(local_858), uVar14 < 10)) {
          bVar5 = true;
          poVar17 = std::operator<<((ostream *)&std::cout,"[*] no columns left, spawning rocks");
          std::ostream::operator<<(poVar17,std::endl<>);
          local_960[1] = 2;
          local_960[0] = 0xc;
          local_964 = 5;
          std::make_unique<>((int *)local_958,local_960 + 1,local_960);
                    /* try { // try from 0010500e to 00105020 has its CatchHandler @ 001056ec */
          std::vector<>::emplace_back<>(local_858,local_958);
          std::unique_ptr<>::~unique_ptr((unique_ptr<> *)local_958);
          local_978[1] = 3;
          local_978[0] = 0xf;
          local_97c = 5;
                    /* try { // try from 0010505b to 0010507b has its CatchHandler @ 00103950 */
          std::make_unique<>((int *)local_970,local_978 + 1,local_978);
                    /* try { // try from 0010507e to 00105090 has its CatchHandler @ 0010570f */
          std::vector<>::emplace_back<>(local_858,local_970);
          std::unique_ptr<>::~unique_ptr((unique_ptr<> *)local_970);
          local_990[1] = 8;
          local_990[0] = 7;
          local_994 = 5;
                    /* try { // try from 001050cb to 001050eb has its CatchHandler @ 00103950 */
          std::make_unique<>((int *)local_988,local_990 + 1,local_990);
                    /* try { // try from 001050ee to 00105100 has its CatchHandler @ 00105732 */
          std::vector<>::emplace_back<>(local_858,local_988);
          std::unique_ptr<>::~unique_ptr((unique_ptr<> *)local_988);
          local_9a8[1] = 9;
          local_9a8[0] = 0x11;
          local_9ac = 5;
                    /* try { // try from 0010513b to 0010515b has its CatchHandler @ 00103950 */
          std::make_unique<>((int *)local_9a0,local_9a8 + 1,local_9a8);
                    /* try { // try from 0010515e to 00105170 has its CatchHandler @ 00105755 */
          std::vector<>::emplace_back<>(local_858,local_9a0);
          std::unique_ptr<>::~unique_ptr((unique_ptr<> *)local_9a0);
          local_9c0[1] = 10;
          local_9c0[0] = 0x17;
          local_9c4 = 5;
                    /* try { // try from 001051ab to 001051cb has its CatchHandler @ 00103950 */
          std::make_unique<>((int *)local_9b8,local_9c0 + 1,local_9c0);
                    /* try { // try from 001051ce to 001051e0 has its CatchHandler @ 00105778 */
          std::vector<>::emplace_back<>(local_858,local_9b8);
          std::unique_ptr<>::~unique_ptr((unique_ptr<> *)local_9b8);
          local_9d8[1] = 0xc;
          local_9d8[0] = 0xf;
          local_9dc = 5;
                    /* try { // try from 0010521b to 0010523b has its CatchHandler @ 00103950 */
          std::make_unique<>((int *)local_9d0,local_9d8 + 1,local_9d8);
                    /* try { // try from 0010523e to 00105250 has its CatchHandler @ 0010579b */
          std::vector<>::emplace_back<>(local_858,local_9d0);
          std::unique_ptr<>::~unique_ptr((unique_ptr<> *)local_9d0);
          local_9f0[1] = 0xe;
          local_9f0[0] = 6;
          local_9f4 = 5;
                    /* try { // try from 0010528b to 001052ab has its CatchHandler @ 00103950 */
          std::make_unique<>((int *)local_9e8,local_9f0 + 1,local_9f0);
                    /* try { // try from 001052ae to 001052c0 has its CatchHandler @ 001057be */
          std::vector<>::emplace_back<>(local_858,local_9e8);
          std::unique_ptr<>::~unique_ptr((unique_ptr<> *)local_9e8);
          local_a08[1] = 0xb;
          local_a08[0] = 2;
          local_a0c = 5;
                    /* try { // try from 001052fb to 0010531b has its CatchHandler @ 00103950 */
          std::make_unique<>((int *)local_a00,local_a08 + 1,local_a08);
                    /* try { // try from 0010531e to 00105330 has its CatchHandler @ 001057e1 */
          std::vector<>::emplace_back<>(local_858,local_a00);
          std::unique_ptr<>::~unique_ptr((unique_ptr<> *)local_a00);
          local_a20[1] = 0x12;
          local_a20[0] = 5;
          local_a24 = 5;
                    /* try { // try from 0010536b to 0010538b has its CatchHandler @ 00103950 */
          std::make_unique<>((int *)local_a18,local_a20 + 1,local_a20);
                    /* try { // try from 0010538e to 001053a0 has its CatchHandler @ 00105804 */
          std::vector<>::emplace_back<>(local_858,local_a18);
          std::unique_ptr<>::~unique_ptr((unique_ptr<> *)local_a18);
          local_a38[1] = 0x10;
          local_a38[0] = 0x1d;
          local_a3c = 5;
                    /* try { // try from 001053db to 001053fb has its CatchHandler @ 00103950 */
          std::make_unique<>((int *)local_a30,local_a38 + 1,local_a38);
                    /* try { // try from 001053fe to 00105410 has its CatchHandler @ 00105827 */
          std::vector<>::emplace_back<>(local_858,local_a30);
          std::unique_ptr<>::~unique_ptr((unique_ptr<> *)local_a30);
          local_a50[1] = 0xf;
          local_a50[0] = 0x1b;
          local_a54 = 5;
                    /* try { // try from 0010544b to 0010546b has its CatchHandler @ 00103950 */
          std::make_unique<>((int *)local_a48,local_a50 + 1,local_a50);
                    /* try { // try from 0010546e to 00105480 has its CatchHandler @ 0010584a */
          std::vector<>::emplace_back<>(local_858,local_a48);
          std::unique_ptr<>::~unique_ptr((unique_ptr<> *)local_a48);
          local_a68[1] = 0x11;
          local_a68[0] = 0x18;
          local_a6c = 5;
                    /* try { // try from 001054bb to 001054db has its CatchHandler @ 00103950 */
          std::make_unique<>((int *)local_a60,local_a68 + 1,local_a68);
                    /* try { // try from 001054de to 001054f0 has its CatchHandler @ 0010586d */
          std::vector<>::emplace_back<>(local_858,local_a60);
          std::unique_ptr<>::~unique_ptr((unique_ptr<> *)local_a60);
          local_a80[1] = 5;
          local_a80[0] = 0x13;
          local_a84 = 5;
                    /* try { // try from 0010552b to 0010554b has its CatchHandler @ 00103950 */
          std::make_unique<>((int *)local_a78,local_a80 + 1,local_a80);
                    /* try { // try from 0010554e to 00105560 has its CatchHandler @ 00105890 */
          std::vector<>::emplace_back<>(local_858,local_a78);
          std::unique_ptr<>::~unique_ptr((unique_ptr<> *)local_a78);
          local_a98[1] = 0x12;
          local_a98[0] = 0xc;
          local_a9c = 5;
                    /* try { // try from 0010559b to 001055bb has its CatchHandler @ 00103950 */
          std::make_unique<>((int *)local_a90,local_a98 + 1,local_a98);
                    /* try { // try from 001055be to 001055d0 has its CatchHandler @ 001058b3 */
          std::vector<>::emplace_back<>(local_858,local_a90);
          std::unique_ptr<>::~unique_ptr((unique_ptr<> *)local_a90);
          local_ab0[1] = 0xd;
          local_ab0[0] = 0x10;
          local_ab4 = 5;
                    /* try { // try from 0010560b to 0010562b has its CatchHandler @ 00103950 */
          std::make_unique<>((int *)local_aa8,local_ab0 + 1,local_ab0);
                    /* try { // try from 0010562e to 00105640 has its CatchHandler @ 001058d6 */
          std::vector<>::emplace_back<>(local_858,local_aa8);
          std::unique_ptr<>::~unique_ptr((unique_ptr<> *)local_aa8);
          local_ac8[1] = 0x13;
          local_ac8[0] = 0x1e;
          local_acc = 5;
                    /* try { // try from 0010567b to 0010569b has its CatchHandler @ 00103950 */
          std::make_unique<>((int *)local_ac0,local_ac8 + 1,local_ac8);
                    /* try { // try from 0010569e to 001056b0 has its CatchHandler @ 001058f9 */
          std::vector<>::emplace_back<>(local_858,local_ac0);
          std::unique_ptr<>::~unique_ptr((unique_ptr<> *)local_ac0);
          std::basic_string_view<>::basic_string_view
                    ((basic_string_view<> *)&local_ae0,"The ceiling is collapsing! Rocks fall!");
                    /* try { // try from 001056e0 to 00106368 has its CatchHandler @ 00103950 */
          log_to_client(local_ae0,local_ad8);
        }
        if (bVar5) {
          Castle::flush_render(local_860,local_bd0);
          bVar5 = false;
        }
      }
      if (local_20 == 0) {
        ProtBuf::recv_frames((ProtBuf *)local_818);
      }
      uVar14 = local_18;
      local_18 = local_18 + 1;
      this = (unique_ptr<> *)std::array<>::operator[]((array<> *)local_818,uVar14);
      local_ae8 = (byte *)std::unique_ptr<>::get(this);
      unpack_into<>(&local_ae9,(char **)&local_ae8);
      switch(local_ae9) {
      case '\0':
        unpack_into<>(&local_aec,(char **)&local_ae8);
        poVar17 = std::operator<<((ostream *)&std::cerr,"[$] PING ");
        poVar17 = (ostream *)std::ostream::operator<<(poVar17,local_aec);
        std::operator<<(poVar17," bytes:");
        for (; local_aec != 0; local_aec = local_aec - 1) {
          poVar17 = std::operator<<((ostream *)&std::cerr," ");
          poVar17 = (ostream *)std::ostream::operator<<(poVar17,std::hex);
          bVar1 = *local_ae8;
          local_ae8 = local_ae8 + 1;
          std::ostream::operator<<(poVar17,(uint)bVar1);
        }
        std::ostream::operator<<((ostream *)&std::cerr,std::endl<>);
        break;
      case '\x01':
        poVar17 = std::operator<<((ostream *)&std::cout,"[*] player requested reset");
        std::ostream::operator<<(poVar17,std::endl<>);
        bVar4 = true;
        bVar5 = true;
        break;
      case '\x02':
        unpack_into<>(&local_aed,(char **)&local_ae8);
        if (local_aed == 0xff) {
          poVar17 = std::operator<<((ostream *)&std::cout,"[*] player passes time");
          std::ostream::operator<<(poVar17,std::endl<>);
          *(undefined4 *)(lVar11 + 0x18) = 3;
          *(undefined4 *)(lVar11 + 0x14) = 1;
          bVar5 = true;
        }
        else if (local_aed < 8) {
          if (*(int *)(lVar12 + 0x18) == 2) {
            *(undefined2 *)(lVar12 + 0x14) = *(undefined2 *)(lVar11 + 0x20);
            *(byte *)(lVar12 + 0x16) = local_aed;
            *(undefined4 *)(lVar12 + 0x18) = 3;
            *(char *)(lVar12 + 8) = *(char *)(lVar12 + 0x16) + '\x06';
            std::basic_string_view<>::basic_string_view
                      ((basic_string_view<> *)&local_b00,"Jumpio threw the Heap Hopper!");
            log_to_client(local_b00,local_af8);
          }
          else if ((uint)local_aed % 2 == 0) {
            local_c5c = *(int *)(lVar11 + 0xc);
            local_c60 = *(int *)(lVar11 + 0x10);
            switch(local_aed) {
            case 0:
              local_c60 = local_c60 + 1;
              break;
            case 2:
              local_c5c = local_c5c + -1;
              break;
            case 4:
              local_c60 = local_c60 + -1;
              break;
            case 6:
              local_c5c = local_c5c + 1;
            }
            lVar10 = std::unique_ptr<>::operator*(auStack_820);
            if (*(short *)(lVar10 + (long)local_c60 * 0xf8 + 4 + (long)local_c5c * 8) == 0) {
              if ((*(int *)(lVar12 + 0xc) == local_c5c) && (*(int *)(lVar12 + 0x10) == local_c60)) {
                *(undefined4 *)(lVar11 + 0x18) = 3;
                *(undefined4 *)(lVar11 + 0x14) = 1;
                poVar17 = std::operator<<((ostream *)&std::cerr,
                                          "[$] player tried to walk into the monster");
                std::ostream::operator<<(poVar17,std::endl<>);
              }
              else {
                poVar17 = std::operator<<((ostream *)&std::cerr,"[*] player moved to ");
                poVar17 = (ostream *)std::ostream::operator<<(poVar17,local_c5c);
                poVar17 = std::operator<<(poVar17,", ");
                poVar17 = (ostream *)std::ostream::operator<<(poVar17,local_c60);
                std::ostream::operator<<(poVar17,std::endl<>);
                bVar5 = true;
                *(int *)(lVar11 + 0xc) = local_c5c;
                *(int *)(lVar11 + 0x10) = local_c60;
                *(undefined4 *)(lVar11 + 0x18) = 5;
                *(undefined4 *)(lVar11 + 0x14) = 1;
              }
            }
            else {
              *(undefined4 *)(lVar11 + 0x18) = 5;
              *(undefined4 *)(lVar11 + 0x14) = 1;
              poVar17 = std::operator<<((ostream *)&std::cerr,
                                        "[$] player tried to walk into a collideable entity at ");
              poVar17 = (ostream *)std::ostream::operator<<(poVar17,local_c5c);
              poVar17 = std::operator<<(poVar17,", ");
              poVar17 = (ostream *)std::ostream::operator<<(poVar17,local_c60);
              std::ostream::operator<<(poVar17,std::endl<>);
            }
          }
          else {
            *(undefined4 *)(lVar11 + 0x18) = 5;
            *(undefined4 *)(lVar11 + 0x14) = 1;
            poVar17 = std::operator<<((ostream *)&std::cerr,
                                      "[$] client requested to move in invalid direction ");
            poVar17 = (ostream *)std::ostream::operator<<(poVar17,(uint)local_aed);
            std::ostream::operator<<(poVar17,std::endl<>);
          }
        }
        else {
          *(undefined4 *)(lVar11 + 0x18) = 5;
          *(undefined4 *)(lVar11 + 0x14) = 1;
          poVar17 = std::operator<<((ostream *)&std::cerr,
                                    "[$] client requested to move/throw in invalid direction ");
          poVar17 = (ostream *)std::ostream::operator<<(poVar17,(uint)local_aed);
          std::ostream::operator<<(poVar17,std::endl<>);
        }
        break;
      case '\x03':
        if (*(int *)(lVar12 + 0x18) == 2) {
          std::basic_string_view<>::basic_string_view
                    ((basic_string_view<> *)&local_b10,"Jumpio is charging up his throw.");
          log_to_client(local_b10,local_b08);
          *(short *)(lVar11 + 0x20) = *(short *)(lVar11 + 0x20) + 1;
        }
        else {
          local_c6c = *(int *)(lVar12 + 0xc);
          local_c70 = *(int *)(lVar12 + 0x10);
          if (((*(char *)(lVar12 + 8) == '\r') || (*(char *)(lVar12 + 8) == '\x06')) ||
             (*(char *)(lVar12 + 8) == '\a')) {
            local_c70 = local_c70 + -1;
          }
          else if (((*(char *)(lVar12 + 8) == '\t') || (*(char *)(lVar12 + 8) == '\n')) ||
                  (*(char *)(lVar12 + 8) == '\v')) {
            local_c70 = local_c70 + 1;
          }
          if (((*(char *)(lVar12 + 8) == '\a') || (*(char *)(lVar12 + 8) == '\b')) ||
             (*(char *)(lVar12 + 8) == '\t')) {
            local_c6c = local_c6c + 1;
          }
          else if (((*(char *)(lVar12 + 8) == '\v') || (*(char *)(lVar12 + 8) == '\f')) ||
                  (*(char *)(lVar12 + 8) == '\r')) {
            local_c6c = local_c6c + -1;
          }
          if ((local_c6c == *(int *)(lVar11 + 0xc)) && (local_c70 == *(int *)(lVar11 + 0x10))) {
            *(undefined2 *)(lVar11 + 0x20) = 1;
            *(undefined4 *)(lVar12 + 0x18) = 2;
            std::basic_string_view<>::basic_string_view
                      ((basic_string_view<> *)&local_b20,"Jumpio grabbed the Heap Hopper\'s tail!");
            log_to_client(local_b20,local_b18);
          }
          else {
            poVar17 = std::operator<<((ostream *)&std::cerr,
                                      "[$] player tried to grab when not behind monster. player at "
                                     );
            poVar17 = (ostream *)std::ostream::operator<<(poVar17,*(int *)(lVar11 + 0xc));
            poVar17 = std::operator<<(poVar17,", ");
            poVar17 = (ostream *)std::ostream::operator<<(poVar17,*(int *)(lVar11 + 0x10));
            poVar17 = std::operator<<(poVar17,", monster tail at ");
            poVar17 = (ostream *)std::ostream::operator<<(poVar17,local_c6c);
            poVar17 = std::operator<<(poVar17,", ");
            poVar17 = (ostream *)std::ostream::operator<<(poVar17,local_c70);
            std::ostream::operator<<(poVar17,std::endl<>);
          }
        }
        break;
      case '\x04':
        poVar17 = std::operator<<((ostream *)&std::cout,"[***] exiting: client requested disconnect"
                                 );
        std::ostream::operator<<(poVar17,std::endl<>);
LAB_001063f6:
        Castle::~Castle(local_860);
        ProtBuf::~ProtBuf((ProtBuf *)local_818);
        if (*(long *)(in_FS_OFFSET + 0x28) == local_10) {
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (local_18 == local_20) {
        ProtBuf::clear((ProtBuf *)local_818);
      }
    }
    poVar17 = std::operator<<((ostream *)&std::cout,"[*] resetting");
    std::ostream::operator<<(poVar17,std::endl<>);
    Castle::Castle(local_b68);
    std::swap<Castle>(local_860,local_b68);
    local_b69 = 1;
    local_b6a = 1;
                    /* try { // try from 00106392 to 001063c2 has its CatchHandler @ 001063d6 */
    send(sfd,&local_b69,1,0x8000);
    send(sfd,&local_b6a,1,0);
    Castle::~Castle(local_b68);
  } while( true );
}


undefined4 main(void)

{
  int __fd;
  int iVar1;
  ostream *poVar2;
  int *piVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  long *local_60;
  undefined4 local_50;
  socklen_t local_4c;
  char local_48 [24];
  sockaddr local_30;
  undefined1 local_20 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  NoSuchEntity::NoSuchEntity((NoSuchEntity *)nse_buf);
  local_20._0_2_ = 2;
  local_20._2_2_ = htons(0x1ca3);
  local_20[4] = '\0';
  local_20[5] = '\0';
  local_20[6] = '\0';
  local_20[7] = '\0';
  local_20[8] = '\0';
  local_60 = (long *)(local_20 + 9);
  do {
    *(undefined1 *)local_60 = 0;
    local_60 = (long *)((long)local_60 + 1);
  } while (local_60 != &local_10);
  __fd = socket(2,1,0);
  iVar1 = setsockopt(__fd,1,2,&main::one,4);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 == setsockopt(lfd, SOL_SOCKET, SO_REUSEADDR, &one, sizeof(one))",
                  "src/server/main.cpp",0x47c,"int main()");
  }
  iVar1 = bind(__fd,(sockaddr *)local_20,0x10);
  if (iVar1 == 0) {
    iVar1 = listen(__fd,0);
    if (iVar1 == 0) {
      poVar2 = std::operator<<((ostream *)&std::cout,"listening on 0.0.0.0:7331");
      std::ostream::operator<<(poVar2,std::endl<>);
      local_4c = 0x10;
      sfd = accept(__fd,&local_30,&local_4c);
      close(__fd);
      if (sfd == -1) {
        poVar2 = std::operator<<((ostream *)&std::cerr,"accept peer connection failed - ");
        piVar3 = __errno_location();
        pcVar4 = strerror(*piVar3);
        poVar2 = std::operator<<(poVar2,pcVar4);
        std::ostream::operator<<(poVar2,std::endl<>);
        local_50 = 1;
      }
      else {
        memset(local_48,0,0x10);
        inet_ntop(2,local_30.sa_data + 2,local_48,0x10);
        poVar2 = std::operator<<((ostream *)&std::cout,"accepted connection from ");
        poVar2 = std::operator<<(poVar2,local_48);
        std::ostream::operator<<(poVar2,std::endl<>);
        local_50 = loop();
      }
    }
    else {
      poVar2 = std::operator<<((ostream *)&std::cerr,"failed to listen on 0.0.0.0:7331 - ");
      piVar3 = __errno_location();
      pcVar4 = strerror(*piVar3);
      poVar2 = std::operator<<(poVar2,pcVar4);
      std::ostream::operator<<(poVar2,std::endl<>);
      local_50 = 1;
    }
  }
  else {
    poVar2 = std::operator<<((ostream *)&std::cerr,"failed to bind to 0.0.0.0:7331 - ");
    piVar3 = __errno_location();
    pcVar4 = strerror(*piVar3);
    poVar2 = std::operator<<(poVar2,pcVar4);
    std::ostream::operator<<(poVar2,std::endl<>);
    local_50 = 1;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == local_10) {
    return local_50;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* void peek_into<unsigned short>(unsigned short&) */

void peek_into<>(ushort *param_1)

{
  ssize_t sVar1;
  runtime_error *this;
  
  sVar1 = recv(sfd,param_1,2,0x102);
  if (sVar1 < 2) {
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0010bad4 to 0010badf has its CatchHandler @ 0010baf9 */
    std::runtime_error::runtime_error(this,"fatal: remote client disconnect");
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&std::runtime_error::typeinfo,std::runtime_error::~runtime_error);
  }
  return;
}


/* void recv_into<unsigned char>(unsigned char&) */

void recv_into<>(uchar *param_1)

{
  ssize_t sVar1;
  runtime_error *this;
  
  sVar1 = recv(sfd,param_1,1,0x100);
  if (sVar1 < 1) {
    this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 001124f4 to 001124ff has its CatchHandler @ 00112519 */
    std::runtime_error::runtime_error(this,"fatal: remote client disconnect");
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&std::runtime_error::typeinfo,std::runtime_error::~runtime_error);
  }
  return;
}


/* void unpack_into<unsigned char>(unsigned char&, char*&) */

void unpack_into<>(uchar *param_1,char **param_2)

{
  *param_1 = **param_2;
  *param_2 = *param_2 + 1;
  return;
}


/* void unpack_into<unsigned short>(unsigned short&, char*&) */

void unpack_into<>(ushort *param_1,char **param_2)

{
  *param_1 = *(ushort *)*param_2;
  *param_2 = *param_2 + 2;
  return;
}


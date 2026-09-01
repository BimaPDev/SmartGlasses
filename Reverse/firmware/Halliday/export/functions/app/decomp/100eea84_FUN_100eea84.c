/* FUN_100eea84 @ 0x100eea84 */

undefined4 FUN_100eea84(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_100eeae4;
  FUN_1011dbf4(DAT_100eeae8,0xffffffff,param_3,param_4,param_4);
  if (*(byte *)(iVar1 + 0x50) < 2) {
    uVar3 = 0xffffffc3;
  }
  else {
    FUN_100a5b78(((int)PTR_DAT_100eeaf0 - (int)PTR_DAT_100eeaec) * 0x20 & 0xff00U | 0xa80031,
                 PTR_s_view_stack_pop_100eeaf8,PTR_s__view_stack_jump_view_stack_pop_100eeaf4);
    iVar2 = (*(byte *)(iVar1 + 0x50) - 1) * 0x10;
    uVar3 = FUN_100ee748(iVar2 + iVar1,iVar2 + -0x10 + iVar1);
    *(char *)(iVar1 + 0x50) = *(char *)(iVar1 + 0x50) + -1;
  }
  FUN_100ee690();
  return uVar3;
}


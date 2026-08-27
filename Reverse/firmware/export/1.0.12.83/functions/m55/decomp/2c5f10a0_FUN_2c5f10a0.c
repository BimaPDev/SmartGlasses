/* FUN_2c5f10a0 @ 0x2c5f10a0 */

int FUN_2c5f10a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_2c5fefc8(DAT_2c5f10cc,param_1,param_3,param_1,param_4);
  FUN_2c5ff0b8();
  FUN_2c627e28(iVar1,1);
  *(short *)(iVar1 + 0x28) = (short)param_2;
  FUN_2c6070bc(iVar1,param_2);
  return iVar1;
}


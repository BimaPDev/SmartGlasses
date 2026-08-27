/* FUN_2c650dc4 @ 0x2c650dc4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c650dc4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = _LAB_2c650df4;
  if (param_1 != 0) {
    iVar1 = FUN_2c650d64(param_1,0,param_3,param_4,param_4);
    FUN_2c650c9e(iVar1 + 0xc,param_1,param_2);
    FUN_2c650d4c(iVar1,param_1);
    iVar1 = iVar1 + 0xc;
  }
  return iVar1;
}


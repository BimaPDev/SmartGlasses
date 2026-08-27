/* FUN_2c551ef4 @ 0x2c551ef4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c551ef4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_2c48e3b8();
  if (((iVar1 != 0) && (iVar2 = FUN_2c54ee98(iVar1,_LAB_2c551f38,param_2 + 4,1,param_4), -1 < iVar2)
      ) && ((*(int *)(param_2 + 4) == 4 || (iVar2 = FUN_2c551d80(iVar1,param_2), -1 < iVar2)))) {
    FUN_2c48dea0(iVar1);
    return 0;
  }
  FUN_2c48dea0(iVar1);
  return 0xffffffff;
}


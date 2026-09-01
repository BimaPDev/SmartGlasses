/* FUN_1003f748 @ 0x1003f748 */

void FUN_1003f748(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_1003f77c;
  iVar1 = FUN_10112e84(DAT_1003f780,param_2,param_3,0,param_1,param_1,param_3);
  if (iVar2 != *DAT_1003f77c) {
    iVar1 = FUN_1013cdc0(iVar1,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x1003f77a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + 8) + 0x3c))();
  return;
}


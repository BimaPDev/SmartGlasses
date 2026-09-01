/* FUN_10107330 @ 0x10107330 */

int FUN_10107330(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_100f8fc4(DAT_1010736c);
  if ((((iVar1 == 0) && (param_1 != 0)) && (*(int *)(param_1 + 4) != 0)) &&
     ((piVar2 = (int *)FUN_100f9d98(*(int *)(param_1 + 4),DAT_10107370), piVar2 != (int *)0x0 &&
      (*(int *)(*piVar2 + 0x14) != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x1010736a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(int *)(*piVar2 + 0x14) + 0x10))(param_1,param_2);
    return iVar1;
  }
  return iVar1;
}


/* FUN_100f90c4 @ 0x100f90c4 */

void FUN_100f90c4(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
  }
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x100f90e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 8))(iVar1,param_1);
    return;
  }
  return;
}


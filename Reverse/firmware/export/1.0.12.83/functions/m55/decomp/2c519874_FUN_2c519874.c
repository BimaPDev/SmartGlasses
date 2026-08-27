/* FUN_2c519874 @ 0x2c519874 */

void FUN_2c519874(int *param_1,byte param_2)

{
  int *piVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if (*(code **)(*piVar1 + 0x30) != DAT_2c5198a8) {
      (**(code **)(*piVar1 + 0x30))(piVar1,~param_2);
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)param_1[1] + 0x24);
  if (UNRECOVERED_JUMPTABLE == DAT_2c5198ac) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x2c51989c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)((int *)param_1[1],param_2);
  return;
}


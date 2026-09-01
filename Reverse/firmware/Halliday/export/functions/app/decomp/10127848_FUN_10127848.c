/* FUN_10127848 @ 0x10127848 */

void FUN_10127848(int param_1,int param_2)

{
  if ((*(int *)(param_2 + 4) != 0) && (2 < *(byte *)(param_2 + 0x10))) {
                    /* WARNING: Could not recover jumptable at 0x1012785a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x24))();
    return;
  }
  return;
}


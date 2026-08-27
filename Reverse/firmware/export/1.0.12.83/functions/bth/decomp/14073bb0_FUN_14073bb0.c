/* FUN_14073bb0 @ 0x14073bb0 */

void FUN_14073bb0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14073c04,0x19b,DAT_14073c00);
  }
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    if (iVar1 == 0) {
      param_1[1] = (int)param_3;
      iVar1 = *param_2;
    }
    *param_3 = iVar1;
    *param_2 = (int)param_3;
    return;
  }
  if (*param_1 == 0) {
    *param_1 = (int)param_3;
  }
  else {
    *(int **)param_1[1] = param_3;
  }
  param_1[1] = (int)param_3;
  *param_3 = 0;
  return;
}


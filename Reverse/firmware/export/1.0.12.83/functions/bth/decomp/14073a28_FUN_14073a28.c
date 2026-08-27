/* FUN_14073a28 @ 0x14073a28 */

void FUN_14073a28(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14073a54,0x94,DAT_14073a50,param_4);
  }
  if (*param_1 != 0) {
    *param_2 = *param_1;
    *param_1 = (int)param_2;
    return;
  }
  param_1[1] = (int)param_2;
  *param_2 = 0;
  *param_1 = (int)param_2;
  return;
}


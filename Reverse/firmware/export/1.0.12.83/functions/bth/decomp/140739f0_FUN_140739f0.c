/* FUN_140739f0 @ 0x140739f0 */

void FUN_140739f0(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14073a24,0x56,DAT_14073a20,param_4);
  }
  if (*param_1 != 0) {
    *(undefined4 **)param_1[1] = param_2;
    param_1[1] = (int)param_2;
    *param_2 = 0;
    return;
  }
  *param_1 = (int)param_2;
  param_1[1] = (int)param_2;
  *param_2 = 0;
  return;
}


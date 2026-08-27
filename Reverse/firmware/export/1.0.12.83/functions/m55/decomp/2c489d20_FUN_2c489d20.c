/* FUN_2c489d20 @ 0x2c489d20 */

uint FUN_2c489d20(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  if (((*(char *)(param_1 + 1) != *(char *)(param_2 + 1)) ||
      (*(char *)(param_1 + 2) != *(char *)(param_2 + 2))) ||
     (*(char *)(param_1 + 3) != *(char *)(param_2 + 3))) {
    param_4 = 1;
  }
  return param_4 ^ 1;
}


/* FUN_2c60fe00 @ 0x2c60fe00 */

void FUN_2c60fe00(int param_1,int param_2,int param_3,int *param_4,int *param_5,char param_6)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    param_2 = param_2 - *(short *)(param_1 + 0x28);
    param_3 = param_3 - *(short *)(param_1 + 0x2a);
    if (*(int *)(param_1 + 0x18) != 0x100) {
      *param_4 = *(int *)(param_1 + 0x20) +
                 (*(int *)(param_1 + 0x18) *
                  (param_2 * *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) * param_3) >> 10);
      *param_5 = *(int *)(param_1 + 0x24) +
                 (*(int *)(param_1 + 0x18) *
                  (*(int *)(param_1 + 0x10) * param_2 + *(int *)(param_1 + 0x14) * param_3) >> 10);
      return;
    }
    *param_4 = *(int *)(param_1 + 0x20) +
               (param_2 * *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) * param_3 >> 2);
    *param_5 = *(int *)(param_1 + 0x24) +
               (*(int *)(param_1 + 0x10) * param_2 + *(int *)(param_1 + 0x14) * param_3 >> 2);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0x100) {
    *param_4 = param_2 << 8;
    *param_5 = param_3 << 8;
    return;
  }
  param_2 = param_2 - *(short *)(param_1 + 0x28);
  param_3 = param_3 - *(short *)(param_1 + 0x2a);
  if (param_6 != '\x01') {
    if (param_6 == '\x02') {
      iVar1 = *(int *)(param_1 + 0x20) + param_2 * 0x100;
    }
    else {
      iVar1 = param_2 * iVar1 + *(int *)(param_1 + 0x20);
    }
    *param_4 = iVar1;
    *param_5 = *(int *)(param_1 + 0x18) * param_3 + *(int *)(param_1 + 0x24);
    return;
  }
  *param_4 = param_2 * iVar1 + *(int *)(param_1 + 0x20);
  *param_5 = *(int *)(param_1 + 0x24) + param_3 * 0x100;
  return;
}


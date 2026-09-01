/* FUN_101164a0 @ 0x101164a0 */

void FUN_101164a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
    FUN_10119dc2(DAT_101164f4,DAT_101164f0,DAT_101164ec,0x5e,0,param_2);
    FUN_10119dc2(DAT_101164f8);
    FUN_1011a1f0(DAT_101164ec,0x5e,param_3,param_4);
    return;
  }
  FUN_1013cfea(*(undefined4 *)(DAT_101164fc + 8),param_1);
  FUN_1011ea48(param_1 + 8,0,0x14);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  return;
}


/* FUN_10061c18 @ 0x10061c18 */

void FUN_10061c18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
    FUN_10119dc2(DAT_10061c78,DAT_10061c74,DAT_10061c70,0xd4,0,param_2);
    FUN_10119dc2(DAT_10061c7c);
    FUN_1011a1f0(DAT_10061c70,0xd4,param_3,param_4);
  }
  FUN_1006195c(param_1);
  FUN_1011ea48(param_1 + 8,0,0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  *(int *)(param_1 + 0x20) = param_1 + 0x20;
  *(int *)(param_1 + 0x24) = param_1 + 0x20;
  return;
}


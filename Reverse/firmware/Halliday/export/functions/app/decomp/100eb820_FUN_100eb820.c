/* FUN_100eb820 @ 0x100eb820 */

void FUN_100eb820(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
    FUN_100a5b78(DAT_100eb874 | (DAT_100eb870 - DAT_100eb86c) * 0x20 & 0xff00U,DAT_100eb880,
                 DAT_100eb878,DAT_100eb87c,0x88b);
    return;
  }
  FUN_1011dbf4(DAT_100eb884,0xffffffff,param_3,param_4,param_1,param_2);
  if ((*(int *)(param_1 + 8) == 0) && (*(int *)(param_1 + 4) != 0)) {
    FUN_100eb1c0();
  }
  FUN_100eafd0();
  return;
}


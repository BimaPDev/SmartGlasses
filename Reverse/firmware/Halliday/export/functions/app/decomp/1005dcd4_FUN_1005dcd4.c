/* FUN_1005dcd4 @ 0x1005dcd4 */

bool FUN_1005dcd4(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*DAT_1005dd00 == 0) {
    FUN_10119dc2(DAT_1005dd0c,DAT_1005dd08,DAT_1005dd04,0x9d,param_1,param_2);
    FUN_1011a1f0(DAT_1005dd04,0x9d,param_3,0);
  }
  return *(char *)(param_1 + 8) == '\x06';
}


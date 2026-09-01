/* FUN_1005dd10 @ 0x1005dd10 */

bool FUN_1005dd10(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*DAT_1005dd3c == 0) {
    FUN_10119dc2(DAT_1005dd48,DAT_1005dd44,DAT_1005dd40,0xa7,param_1,param_2);
    FUN_1011a1f0(DAT_1005dd40,0xa7,param_3,0);
  }
  return *(char *)(param_1 + 8) == '\x01';
}


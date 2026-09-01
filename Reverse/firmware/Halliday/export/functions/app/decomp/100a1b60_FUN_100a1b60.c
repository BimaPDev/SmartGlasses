/* FUN_100a1b60 @ 0x100a1b60 */

void FUN_100a1b60(int param_1,undefined4 param_2)

{
  if (*DAT_100a1b8c == 0) {
    *DAT_100a1b8c = param_1;
    *DAT_100a1b90 = param_2;
    return;
  }
  FUN_100a5b78((DAT_100a1b94 - DAT_100a1b98) * 0x20 & 0xff00U | 0x6b0011,DAT_100a1ba0,DAT_100a1b9c);
  return;
}


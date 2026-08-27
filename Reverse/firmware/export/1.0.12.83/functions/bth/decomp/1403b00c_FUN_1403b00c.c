/* FUN_1403b00c @ 0x1403b00c */

int FUN_1403b00c(int param_1)

{
  if (param_1 < 1) {
    return DAT_1403b050 + param_1 * 0x28;
  }
  if (param_1 != 0x10) {
    if (param_1 == 0xf) {
      return DAT_1403b04c;
    }
    FUN_1402a6e8(4,0x83,DAT_1403b05c,DAT_1403b058,DAT_1403b054,param_1);
    return 0;
  }
  return DAT_1403b060;
}


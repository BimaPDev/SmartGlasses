/* FUN_14032d34 @ 0x14032d34 */

uint FUN_14032d34(int param_1)

{
  if ((param_1 - 0x80U & 0xffff) < 4) {
    return param_1 - 0x80U & 0xff;
  }
  FUN_1402a6e8(4,0x75c,DAT_14032d6c,DAT_14032d68,DAT_14032d64,param_1);
  return 0xff;
}


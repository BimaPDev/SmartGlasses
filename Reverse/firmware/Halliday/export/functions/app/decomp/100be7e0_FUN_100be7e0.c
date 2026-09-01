/* FUN_100be7e0 @ 0x100be7e0 */

void FUN_100be7e0(byte param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_100be38c();
    return;
  }
  *(byte *)(DAT_100be7f4 + 0x14) = *(byte *)(DAT_100be7f4 + 0x14) & ~param_1;
  return;
}


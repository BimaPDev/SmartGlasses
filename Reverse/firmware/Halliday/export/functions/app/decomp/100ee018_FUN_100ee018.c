/* FUN_100ee018 @ 0x100ee018 */

void FUN_100ee018(int param_1)

{
  if ((int)((uint)*(byte *)(param_1 + 0x1b) << 0x1f) < 0) {
    if (*DAT_100ee04c != '\0') {
      FUN_1011dbf4(DAT_100ee050,0xffffffff);
      FUN_1011deaa(DAT_100ee054,0xffffffff);
      FUN_10113e2c(DAT_100ee050);
    }
    *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfe;
  }
  return;
}


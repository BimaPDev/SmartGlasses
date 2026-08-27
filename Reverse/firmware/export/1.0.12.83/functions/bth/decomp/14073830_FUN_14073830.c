/* FUN_14073830 @ 0x14073830 */

undefined4 FUN_14073830(int param_1,int param_2,uint param_3,int param_4)

{
  if (param_1 == 0) {
    return 1;
  }
  if (((param_2 != 0) && (param_3 <= *(ushort *)(param_2 + 4))) &&
     ((*(byte *)(param_2 + 0x2d) & 0xf) + (param_4 + 3U >> 2) < 9)) {
    if (*(char *)(param_1 + 0x2c) != -0x5b) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_140738b8,0x290,DAT_140738b4);
    }
    *(undefined1 *)(param_2 + 0x2c) = 0xa5;
    FUN_140732f8(*(ushort *)(param_2 + 6) + 0x30 + param_2,*(ushort *)(param_1 + 6) + 0x30 + param_1
                 ,param_3,0xa5,param_4);
    FUN_140732f8(param_2 + ((*(byte *)(param_2 + 0x2d) & 0xf) + 3) * 4,
                 param_1 + ((*(byte *)(param_1 + 0x2d) & 0xf) + 3) * 4,param_4 + 3U & 0x1fc);
    return 0;
  }
  return 1;
}


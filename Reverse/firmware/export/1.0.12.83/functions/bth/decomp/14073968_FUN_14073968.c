/* FUN_14073968 @ 0x14073968 */

undefined4 FUN_14073968(int param_1,int param_2,uint param_3)

{
  if (param_1 == 0) {
    return 1;
  }
  if ((param_2 != 0) && (param_3 <= *(ushort *)(param_1 + 4))) {
    if (*(char *)(param_1 + 0x2c) == -0x5b) {
      FUN_140732f8(param_2,*(ushort *)(param_1 + 6) + 0x30 + param_1,param_3);
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_140739b0,0x329,DAT_140739ac);
  }
  return 1;
}


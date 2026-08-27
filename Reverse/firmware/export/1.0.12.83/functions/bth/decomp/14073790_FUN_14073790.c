/* FUN_14073790 @ 0x14073790 */

undefined4 FUN_14073790(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_140737cc,0x22c,DAT_140737c8,param_4);
  }
  if (param_2 <= *(ushort *)(param_1 + 4)) {
    *(short *)(param_1 + 8) = (short)param_2 + *(short *)(param_1 + 8);
    *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) - (short)param_2;
    *(undefined1 *)(param_1 + 0x2c) = 0xa5;
    return 0;
  }
  return 1;
}


/* FUN_1407373c @ 0x1407373c */

undefined4 FUN_1407373c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1407378c,0x215,DAT_14073788,param_4);
  }
  if (*(ushort *)(param_1 + 8) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1407378c,0x215,DAT_14073788,param_4);
  }
  *(short *)(param_1 + 4) = (short)param_2 + *(short *)(param_1 + 4);
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) - (short)param_2;
  *(undefined1 *)(param_1 + 0x2c) = 0xa5;
  return 0;
}


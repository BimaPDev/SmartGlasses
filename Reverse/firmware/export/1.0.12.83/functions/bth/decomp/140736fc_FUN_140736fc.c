/* FUN_140736fc @ 0x140736fc */

undefined4 FUN_140736fc(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14073738,0x1fd,DAT_14073734,param_4);
  }
  if (param_2 <= *(ushort *)(param_1 + 4)) {
    *(short *)(param_1 + 6) = (short)param_2 + *(short *)(param_1 + 6);
    *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) - (short)param_2;
    *(undefined1 *)(param_1 + 0x2c) = 0xa5;
    return 0;
  }
  return 1;
}


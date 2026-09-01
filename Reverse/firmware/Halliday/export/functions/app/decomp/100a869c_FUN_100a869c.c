/* FUN_100a869c @ 0x100a869c */

undefined4 FUN_100a869c(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(PTR_s_WEST_TOPDIR_framework_audio_audi_100a86f8,0x313,
                 PTR_s_audio_track_set_fade_out_100a86f4,PTR_s_handle_10169e47_8_100a86f0);
  }
  if ((*(int *)(param_1 + 0x58) != 0) && ((*(byte *)(param_1 + 9) & 0x60) != 0x40)) {
    FUN_100a5b78(DAT_100a8704 | ((int)PTR_DAT_100a8700 - (int)PTR_DAT_100a86fc) * 0x20 & 0xff00U,
                 DAT_100a870c,DAT_100a8708,param_2);
    FUN_1012f55a(*(undefined4 *)(param_1 + 0x58),param_2);
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0x9f | 0x40;
  }
  return 0;
}


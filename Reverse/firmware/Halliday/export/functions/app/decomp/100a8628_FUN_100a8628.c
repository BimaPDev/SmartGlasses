/* FUN_100a8628 @ 0x100a8628 */

undefined4 FUN_100a8628(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(PTR_s_WEST_TOPDIR_framework_audio_audi_100a8684,0x305,
                 PTR_s_audio_track_set_fade_in_100a8680,PTR_s_handle_10169e47_8_100a867c);
  }
  if ((*(int *)(param_1 + 0x58) != 0) && ((*(byte *)(param_1 + 9) & 0x60) != 0x20)) {
    FUN_100a5b78(DAT_100a8690 | ((int)PTR_DAT_100a868c - (int)PTR_DAT_100a8688) * 0x20 & 0xff00U,
                 DAT_100a8698,DAT_100a8694,param_2);
    FUN_1012f548(*(undefined4 *)(param_1 + 0x58),param_2);
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0x9f | 0x20;
  }
  return 0;
}


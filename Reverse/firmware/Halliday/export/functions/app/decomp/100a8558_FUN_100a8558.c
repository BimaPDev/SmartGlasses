/* FUN_100a8558 @ 0x100a8558 */

undefined4 FUN_100a8558(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(PTR_s_WEST_TOPDIR_framework_audio_audi_100a8584,0x299,
                 PTR_s_audio_track_pause_100a8580,PTR_s_handle_10169e47_8_100a857c,param_4);
  }
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
  FUN_100a05fc(*(undefined4 *)(param_1 + 0x18));
  return 0;
}


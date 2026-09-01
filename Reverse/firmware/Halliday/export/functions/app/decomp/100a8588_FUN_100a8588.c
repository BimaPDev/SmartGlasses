/* FUN_100a8588 @ 0x100a8588 */

undefined4 FUN_100a8588(char *param_1)

{
  int iVar1;
  
  if (param_1 != (char *)0x0) {
    if ((*param_1 != '\x03') || (iVar1 = FUN_100ba094(), iVar1 == 0)) {
      param_1[9] = param_1[9] & 0xfe;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(PTR_s_WEST_TOPDIR_framework_audio_audi_100a85c0,0x2a4,
               PTR_s_audio_track_resume_100a85bc,PTR_s_handle_10169e47_8_100a85b8);
}


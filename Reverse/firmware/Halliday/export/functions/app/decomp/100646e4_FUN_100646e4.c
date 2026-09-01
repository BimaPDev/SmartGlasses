/* FUN_100646e4 @ 0x100646e4 */

void FUN_100646e4(int param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined1 local_10;
  undefined1 local_f;
  undefined2 uStack_e;
  undefined4 local_c;
  
  uStack_e = (undefined2)((uint)param_1 >> 0x10);
  _local_10 = CONCAT11(param_3,param_2);
  local_c = param_4;
  if (*DAT_10064720 == 0) {
    uVar1 = 0x147;
    puVar2 = PTR_s_audio_out_>aout_dev_10064724;
  }
  else {
    if (param_1 != 0) {
      FUN_1011dc6e(*DAT_10064720,param_1,0x2b,&local_10);
      return;
    }
    uVar1 = 0x149;
    puVar2 = PTR_s_aout_channel_handle_10064730;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(PTR_s_WEST_TOPDIR_zephyr_framework_aud_1006472c,uVar1,
               PTR_s_hal_aout_set_fifo_src_10064728,puVar2);
}


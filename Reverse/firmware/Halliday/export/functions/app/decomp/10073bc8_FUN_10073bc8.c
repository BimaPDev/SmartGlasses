/* FUN_10073bc8 @ 0x10073bc8 */

undefined4 FUN_10073bc8(int param_1,undefined3 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    iVar1 = FUN_1011f8d0(param_1,0x102,&stack0xfffffff7,param_4,param_1,
                         CONCAT13((char)param_2,param_2));
    uVar2 = 0;
    if (iVar1 != 0) {
      FUN_100a5b78(((int)PTR_DAT_10073c10 - (int)PTR_DAT_10073c0c) * 0x20 & 0xff00U | 0x2640011,
                   PTR_s_audio_out_fifo_release_10073c18,PTR_s_Release_DAC_FIFO_failed_10073c14);
      uVar2 = 0xfffffff2;
    }
  }
  return uVar2;
}


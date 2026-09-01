/* FUN_1007772c @ 0x1007772c */

undefined4 FUN_1007772c(uint param_1,undefined4 param_2,undefined1 *param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  
  iVar3 = 0;
  puVar5 = param_3;
  if (param_1 == 0x180) {
    *param_4 = 1;
  }
  else {
    if (param_1 != 0x160) {
      uVar4 = FUN_1011fa04(param_1 & 0xff);
      iVar2 = (int)((ulonglong)uVar4 >> 0x20);
      iVar1 = iVar2 * (int)uVar4;
      while (*(int *)(PTR_DAT_100777e4 + iVar3 * 8) != iVar1) {
        iVar3 = iVar3 + 1;
        if (iVar3 == 0x11) {
          FUN_100a5b78(((int)PTR_DAT_100777d4 - (int)PTR_DAT_100777d0) * 0x20 & 0xff00U | 0x1180012,
                       PTR_s_audio_get_pll_setting_i2s_100777e0,
                       PTR_s_Failed_to_find_audio_pll_setting_100777e8,param_1,iVar2,param_2,puVar5)
          ;
          *param_3 = 0xff;
          *param_4 = 0xff;
          return 0xfffffff8;
        }
      }
      *param_3 = PTR_DAT_100777e4[iVar3 * 8 + 4];
      *param_4 = iVar3 < 0xb;
      goto LAB_10077746;
    }
    *param_4 = 0;
  }
  iVar1 = 0;
  *param_3 = 0;
LAB_10077746:
  FUN_100a5b78(DAT_100777dc | ((int)PTR_DAT_100777d4 - (int)PTR_DAT_100777d0) * 0x20 & 0xff00U,
               PTR_s_audio_get_pll_setting_i2s_100777e0,PTR_s_sr_khz__d_sr_hz__d__div__d_100777d8,
               param_1,iVar1,*param_3,puVar5);
  return 0;
}


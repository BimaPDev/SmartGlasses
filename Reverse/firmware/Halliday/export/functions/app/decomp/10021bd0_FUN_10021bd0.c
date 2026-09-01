/* FUN_10021bd0 @ 0x10021bd0 */

int FUN_10021bd0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 extraout_r1;
  uint uVar2;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [60];
  int local_1c;
  
  local_1c = *DAT_10021cc0;
  local_68 = 0;
  uStack_64 = 0;
  local_60 = 0;
  uStack_5c = 0;
  FUN_1011ea48(auStack_58,0,0x3c,0);
  iVar1 = FUN_10113cfc(DAT_10021cc4,extraout_r1,10000,0);
  uVar2 = ((int)PTR_DAT_10021cc8 - (int)PTR_DAT_10021ccc) * 0x20 & 0xff00;
  if (iVar1 == 0) goto LAB_10021c34;
  FUN_100a5b78(uVar2 | 0x720011,PTR_s_appnotify_cfg_read_10021cd4,
               PTR_s_appcfg_file_mutex_Deadlock__10021cd0);
  do {
    param_2 = -1;
    while( true ) {
      if (*DAT_10021cc0 == local_1c) {
        return param_2;
      }
      FUN_1013cdc0();
LAB_10021c34:
      FUN_10118a1c(&uStack_5c,0x40,PTR_s__s__s_10021cdc,PTR_s__NAND__SYSTEM_REMIND_CFG_10021cd8,
                   param_1);
      iVar1 = FUN_1006ba84(&local_68,&uStack_5c,1);
      if (iVar1 < 0) {
        FUN_100a5b78(uVar2 | 0x7a0031,PTR_s_appnotify_cfg_read_10021cd4,
                     PTR_s_File___s__open_failed__10021ce0,&uStack_5c);
        goto LAB_10021c66;
      }
      param_2 = FUN_1006bc84(&local_68,param_2,param_3);
      if (param_3 != param_2) break;
      FUN_1006bc30(&local_68);
      FUN_10021ba0();
      FUN_100a5b78(uVar2 | 0x890031,PTR_s_appnotify_cfg_read_10021cd4,
                   PTR_s_appnotify_cfg_read__len___zu_10021ce8,param_2);
    }
    FUN_100a5b78(uVar2 | 0x810032,PTR_s_appnotify_cfg_read_10021cd4,
                 PTR_s_Failed_to_read_from_file__d____s_10021ce4,param_2,&uStack_5c);
    FUN_1006bc30(&local_68);
LAB_10021c66:
    FUN_10021ba0();
  } while( true );
}


/* FUN_10042ea8 @ 0x10042ea8 */

void FUN_10042ea8(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)PTR_DAT_10042f28;
  uVar1 = ((int)PTR_DAT_10042f20 - (int)PTR_DAT_10042f24) * 0x20 & 0xff00;
  if (param_1 < 5) {
    FUN_100a5b78(uVar1 | 0x970031,PTR_s_screen_auto_sleep_time_save_10042f30,
                 PTR_s_screen_auto_sleep_time_save_inde_10042f34,param_1,param_1,param_1,param_3);
    FUN_1009eeac(PTR_s_SCREEN_TIME_IDX_10042f38,param_1);
    FUN_1012d1ae(PTR_s_SCREEN_TIME_IDX_10042f38);
    if (*(int *)PTR_DAT_10042f28 == iVar2) {
      FUN_100458c4();
      return;
    }
  }
  else if (*(int *)PTR_DAT_10042f28 == iVar2) goto LAB_10042ed4;
  uVar1 = FUN_1013cdc0();
LAB_10042ed4:
  FUN_100a5b78(uVar1 | 0x940031,PTR_s_screen_auto_sleep_time_save_10042f30,
               PTR_s_screen_auto_sleep_time_save_inde_10042f2c);
  return;
}


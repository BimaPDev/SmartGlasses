/* FUN_10042f3c @ 0x10042f3c */

void FUN_10042f3c(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = DAT_10042f88;
  iVar2 = *DAT_10042f84;
  *DAT_10042f88 = 1;
  FUN_10042ea8();
  if (*DAT_10042f84 != iVar2) {
    FUN_1013cdc0();
  }
  FUN_100a5b78(((int)PTR_DAT_10042f90 - (int)PTR_DAT_10042f8c) * 0x20 & 0xff00U | 0xa10031,
               PTR_s_screen_auto_sleep_time_reset_10042f98,
               PTR_s_screen_auto_sleep_time_reset_ind_10042f94,*puVar1);
  return;
}


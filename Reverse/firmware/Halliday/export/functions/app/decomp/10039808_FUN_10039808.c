/* FUN_10039808 @ 0x10039808 */

void FUN_10039808(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_10039854;
  iVar2 = *DAT_10039850;
  *(undefined1 *)(DAT_10039854 + 10) = 0;
  *(undefined1 *)(iVar1 + 9) = 0;
  FUN_100396fc();
  if (*DAT_10039850 != iVar2) {
    FUN_1013cdc0();
  }
  FUN_100a5b78(((int)PTR_DAT_1003985c - (int)PTR_DAT_10039858) * 0x20 & 0xff00U | 0x850031,
               PTR_s_password_device_unlock_10039864,PTR_s_password_device_unlock_10039860);
  return;
}


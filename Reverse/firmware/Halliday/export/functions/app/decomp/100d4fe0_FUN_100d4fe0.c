/* FUN_100d4fe0 @ 0x100d4fe0 */

uint FUN_100d4fe0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_100d456c();
  if (iVar1 == 0) {
    FUN_100a5b78(((int)PTR_DAT_100d5018 - (int)PTR_DAT_100d5014) * 0x20 & 0xff00U | 0x3a80021,
                 PTR_s_btsrv_rdm_get_a2dp_pending_ahead_100d5020,PTR_s_not_connected___100d501c);
    uVar2 = 0;
  }
  else {
    uVar2 = (*(byte *)(iVar1 + 0x3b) & 0xf) >> 3;
  }
  return uVar2;
}


/* FUN_100b5798 @ 0x100b5798 */

int FUN_100b5798(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = ((int)PTR_DAT_100b57e4 - (int)PTR_DAT_100b57e0) * 0x20 & 0xff00;
  FUN_100a5b78(uVar2 | 0x7f0031,PTR_s_ota_backend_sdcard_close_100b57ec,
               PTR_s_close__type__d_100b57e8,*(undefined4 *)(param_1 + 4));
  if ((*(int *)(param_1 + 0xc) == 0) || (iVar1 = FUN_100a0a70(), iVar1 == 0)) {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    FUN_100a5b78(uVar2 | 0x840011,PTR_s_ota_backend_sdcard_close_100b57ec,
                 PTR_s_stream_close_Failed_100b57f0);
  }
  return iVar1;
}


/* FUN_100c09bc @ 0x100c09bc */

void FUN_100c09bc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  short local_4c;
  char local_4a;
  undefined1 auStack_30 [36];
  
  iVar1 = FUN_100ca440(param_1,&local_4c);
  if ((iVar1 < 0) || (local_4c != 0x101)) {
    FUN_100a5b78(((int)PTR_DAT_100c0a40 - (int)PTR_DAT_100c0a44) * 0x20 & 0xff00U | 0x2d80011,
                 PTR_s_identity_resolved_100c0a4c,PTR_s_get_info_connected_error_100c0a48);
  }
  else if (local_4a == '\x01') {
    FUN_100c050c(param_2,auStack_30,0x1e);
    uVar2 = ((int)PTR_DAT_100c0a40 - (int)PTR_DAT_100c0a44) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100c0a50 | uVar2,PTR_s_identity_resolved_100c0a4c,DAT_100c0a54,auStack_30);
    FUN_100c050c(param_3,auStack_30,0x1e);
    FUN_100a5b78(DAT_100c0a58 | uVar2,PTR_s_identity_resolved_100c0a4c,DAT_100c0a5c,auStack_30);
  }
  return;
}


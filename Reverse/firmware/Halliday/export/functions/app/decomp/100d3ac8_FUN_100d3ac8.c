/* FUN_100d3ac8 @ 0x100d3ac8 */

void FUN_100d3ac8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [20];
  
  if ((param_1 != 0) && (iVar1 = FUN_10131c00(), iVar1 == 2)) {
    uVar2 = FUN_10136428(param_1);
    FUN_100d3a3c(uVar2,auStack_24);
    FUN_100a5b78(((int)PTR_DAT_100d3b18 - (int)PTR_DAT_100d3b1c) * 0x20 & 0xff00U | 0xbb0032,
                 PTR_s__btsrv_adapter_role_change_cb_100d3b24,PTR_s_role_change_cb__s__d_100d3b20,
                 auStack_24,param_2);
    FUN_100d44a8(0xc9,0xd,param_1,param_2);
  }
  return;
}


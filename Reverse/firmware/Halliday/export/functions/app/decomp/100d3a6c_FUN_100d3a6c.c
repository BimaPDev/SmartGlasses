/* FUN_100d3a6c @ 0x100d3a6c */

void FUN_100d3a6c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [20];
  
  if ((param_1 != 0) && (iVar1 = FUN_10131c00(), iVar1 == 2)) {
    uVar2 = FUN_10136428(param_1);
    FUN_100d3a3c(uVar2,auStack_24);
    FUN_100a5b78(((int)PTR_DAT_100d3ab8 - (int)PTR_DAT_100d3abc) * 0x20 & 0xff00U | 0xae0032,
                 PTR_s__btsrv_adapter_security_changed__100d3ac4,PTR_s_security_cb__s__d_100d3ac0,
                 auStack_24,param_2);
    FUN_100d4440(0xc9,0xc,param_1);
  }
  return;
}


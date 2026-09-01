/* FUN_100d404c @ 0x100d404c */

void FUN_100d404c(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_2c [24];
  
  if ((param_1 == 0) || (iVar2 = FUN_10131c00(), iVar2 != 2)) {
    FUN_100d4440(200,0x96,0);
  }
  else {
    uVar3 = FUN_10136428(param_1);
    puVar1 = PTR_DAT_100d40d0;
    FUN_100d3a3c(uVar3,auStack_2c);
    FUN_100a5b78(((int)puVar1 - (int)PTR_DAT_100d40d4) * 0x20 & 0xff00U | 0x830032,
                 PTR_s__btsrv_adapter_connected_cb_100d40dc,PTR_s_connected_cb__s__0x_x_100d40d8,
                 auStack_2c,param_2);
    if (param_2 == 0) {
      FUN_100d4038(3,0);
      FUN_1013199c(param_1);
      FUN_100d4440(0xc9,10,param_1);
      FUN_10131b42(uVar3,PTR_FUN_100d40e4_1_100d40e0);
    }
    else {
      FUN_100d44e4(0xc9,0xb,uVar3,6,0);
    }
  }
  return;
}


/* FUN_100c065c @ 0x100c065c */

void FUN_100c065c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_54;
  undefined2 local_50;
  short local_4c;
  char local_4a;
  int local_44;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined1 auStack_30 [32];
  
  iVar1 = FUN_100ca440(param_1,&local_4c);
  if ((iVar1 < 0) || (local_4c != 0x101)) {
    FUN_100a5b78(DAT_100c0704 | (DAT_100c0700 - DAT_100c06fc) * 0x20 & 0xff00U,DAT_100c070c,
                 DAT_100c0708);
  }
  else if (local_4a == '\x01') {
    local_54 = *(undefined4 *)(local_44 + 1);
    local_50 = *(undefined2 *)(local_44 + 5);
    FUN_1011ea48(auStack_30,0,0xd);
    FUN_10119cd2(&local_54,6,auStack_30,0xc);
    FUN_100a5b78(DAT_100c0710 | (DAT_100c0700 - DAT_100c06fc) * 0x20 & 0xff00U,DAT_100c070c,
                 DAT_100c0714,auStack_30,local_38,local_36,local_34);
    FUN_100c0470(2,param_1,param_2);
  }
  return;
}


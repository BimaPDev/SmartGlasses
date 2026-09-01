/* FUN_100c0924 @ 0x100c0924 */

void FUN_100c0924(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  short local_54;
  char local_52;
  undefined1 auStack_38 [36];
  
  iVar1 = FUN_100ca440(param_1,&local_54);
  if ((iVar1 < 0) || (local_54 != 0x101)) {
    FUN_100a5b78(DAT_100c09a8 | (DAT_100c09a4 - DAT_100c09a0) * 0x20 & 0xff00U,DAT_100c09b0,
                 DAT_100c09ac);
  }
  else if (local_52 == '\x01') {
    uVar2 = FUN_10133842(param_1);
    FUN_100c050c(uVar2,auStack_38,0x1e);
    FUN_100a5b78(DAT_100c09b4 | (DAT_100c09a4 - DAT_100c09a0) * 0x20 & 0xff00U,DAT_100c09b0,
                 DAT_100c09b8,auStack_38,param_2,param_3);
    FUN_100c0470(3,param_1,param_3);
  }
  return;
}


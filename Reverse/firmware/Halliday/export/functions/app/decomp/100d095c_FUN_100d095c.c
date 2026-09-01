/* FUN_100d095c @ 0x100d095c */

undefined4 FUN_100d095c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_10135440(param_1 + 0xd4,8,param_3,param_4,param_4);
  iVar1 = FUN_100c8a34(param_1 + 0x127,PTR_LAB_1013618c_1_100d099c);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_10135464(param_1 + 0xd4,8);
    FUN_100a5b78(DAT_100d09a8 | ((int)PTR_DAT_100d09a4 - (int)PTR_DAT_100d09a0) * 0x20 & 0xff00U,
                 DAT_100d09b0,DAT_100d09ac);
    uVar2 = 8;
  }
  return uVar2;
}


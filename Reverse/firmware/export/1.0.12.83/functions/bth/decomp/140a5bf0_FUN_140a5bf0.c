/* FUN_140a5bf0 @ 0x140a5bf0 */

undefined4 FUN_140a5bf0(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  if (((param_1 != 0) || (param_2 != 0)) || ((param_3 & param_4) != 0xffff)) {
    FUN_1402a6e8(4,0x162,DAT_140a5c64,DAT_140a5c68,DAT_140a5c60,param_1,param_2,param_3,param_4);
    FUN_140a0248(param_1 == 0,param_2,param_3,param_4);
    iVar1 = FUN_140a5bec();
    if (iVar1 != 0) {
      FUN_14027be8(0x10000);
      FUN_140a0f2c();
      FUN_140e5818(500);
      FUN_1403059c();
      return 1;
    }
  }
  return 1;
}


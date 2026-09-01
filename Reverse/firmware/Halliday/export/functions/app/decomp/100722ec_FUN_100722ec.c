/* FUN_100722ec @ 0x100722ec */

undefined4 FUN_100722ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_1011f738(&uStack_10);
  iVar1 = FUN_1011da7e(DAT_10072330,&uStack_10);
  if (iVar1 == 0) {
    FUN_10119dc2(DAT_10072334);
  }
  else {
    iVar1 = FUN_100721c0();
    if (iVar1 == 0) {
      return 0xfffffffb;
    }
  }
  FUN_101145f4(DAT_10072338,DAT_1007233c,0x480,0xd,0,param_2);
  return 0;
}


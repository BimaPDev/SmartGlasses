/* FUN_1011380c @ 0x1011380c */

int FUN_1011380c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,int param_11,int param_12)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getCurrentExceptionNumber();
    uVar2 = uVar2 & 0x1ff;
  }
  if (uVar2 != 0) {
    FUN_10119dc2(DAT_101138a0,DAT_1011389c,DAT_10113898,0x2b2,param_1,param_2);
    FUN_10119dc2(DAT_101138a4);
    FUN_1011a1f0(DAT_10113898,0x2b2,param_3,uVar2);
  }
  FUN_101136cc(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0);
  if (param_12 != -1 || param_11 != -1) {
    if (param_11 == 0 && param_12 == 0) {
      FUN_10114d90(param_1);
    }
    else {
      FUN_10115740(param_1 + 0x18,DAT_101138a8,param_11,param_12);
    }
  }
  return param_1;
}


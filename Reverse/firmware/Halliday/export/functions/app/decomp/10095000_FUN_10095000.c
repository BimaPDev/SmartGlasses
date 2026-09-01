/* FUN_10095000 @ 0x10095000 */

int FUN_10095000(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined8 uVar3;
  
  iVar1 = FUN_10118d90(0,0,param_1,param_2);
  iVar2 = FUN_100942d8(iVar1 + 1);
  if (iVar2 == 0) {
    uVar3 = FUN_10094174(3,DAT_100950e0,0x1d1,DAT_100950e4,DAT_100950dc,DAT_100950d8,DAT_100950d4);
    FUN_10119dc2(DAT_100950ec,DAT_100950e8,DAT_100950e0,0x1d1,uVar3);
    FUN_10119dc2(DAT_100950f0);
    FUN_1011a1f0(DAT_100950e0,0x1d1,extraout_r2,extraout_r3);
    iVar1 = 0;
  }
  else {
    FUN_10118d90(iVar2,iVar1 + 1,param_1,param_2);
    iVar1 = FUN_10095250(iVar2);
    iVar1 = FUN_10094254(iVar1 + 1,DAT_100950e4);
    if (iVar1 == 0) {
      uVar3 = FUN_10094174(3,DAT_100950e0,0x1db,DAT_100950e4,DAT_100950dc,DAT_100950f4,DAT_100950d4)
      ;
      FUN_10119dc2(DAT_100950ec,DAT_100950e8,DAT_100950e0,0x1db,uVar3);
      FUN_10119dc2(DAT_100950f0);
      FUN_1011a1f0(DAT_100950e0,0x1db,extraout_r2_00,extraout_r3_00);
    }
    else {
      FUN_100952c4(iVar2,iVar1);
      FUN_10094444(iVar2);
    }
  }
  return iVar1;
}


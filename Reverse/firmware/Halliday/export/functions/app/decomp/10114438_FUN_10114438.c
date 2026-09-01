/* FUN_10114438 @ 0x10114438 */

void FUN_10114438(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = CONCAT44(param_2,param_1);
  uVar2 = param_4;
  if (param_1 == 0) {
    FUN_10119dc2(DAT_10114488,DAT_10114484,DAT_10114480,0x89,0,param_2,param_3,param_4,param_4);
    uVar1 = FUN_1011a1f0(DAT_10114480,0x89,param_3,param_4);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if (param_2 == 0) {
    FUN_10119dc2(DAT_10114488,DAT_1011448c,DAT_10114480,0x8a,uVar1,param_3,param_4,uVar2);
    FUN_1011a1f0(DAT_10114480,0x8a,param_3,param_4);
  }
  FUN_1011ea48(param_1,0,0x10);
  *(int *)(param_1 + 4) = param_2;
  return;
}


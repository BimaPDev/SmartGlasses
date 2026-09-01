/* FUN_101146e4 @ 0x101146e4 */

void FUN_101146e4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = CONCAT44(param_2,param_1);
  uVar2 = param_4;
  if (param_1 == 0) {
    FUN_10119dc2(DAT_10114744,DAT_10114740,DAT_1011473c,0x33b,0,param_2,param_3,param_4,param_4);
    uVar1 = FUN_1011a1f0(DAT_1011473c,0x33b,param_3,param_4);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if (param_2 == 0) {
    FUN_10119dc2(DAT_10114744,DAT_10114748,DAT_1011473c,0x33c,uVar1,param_3,param_4,uVar2);
    FUN_1011a1f0(DAT_1011473c,0x33c,param_3,param_4);
  }
  FUN_1011ea48(param_1,0,0x30);
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0x100;
  return;
}


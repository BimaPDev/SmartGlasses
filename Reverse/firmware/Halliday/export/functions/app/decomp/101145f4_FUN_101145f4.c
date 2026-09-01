/* FUN_101145f4 @ 0x101145f4 */

void FUN_101145f4(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = CONCAT44(param_2,param_1);
  uVar1 = param_3;
  uVar2 = param_4;
  if (param_1 == 0) {
    FUN_10119dc2(DAT_101146d4,DAT_101146d0,DAT_101146cc,0x2c3,0,param_2);
    uVar4 = FUN_1011a1f0(DAT_101146cc,0x2c3,param_3,param_4);
    uVar1 = extraout_r2;
    uVar2 = extraout_r3;
  }
  if (param_2 == 0) {
    FUN_10119dc2(DAT_101146d4,DAT_101146d8,DAT_101146cc,0x2c4,uVar4);
    uVar4 = FUN_1011a1f0(DAT_101146cc,0x2c4,uVar1,uVar2);
    uVar1 = extraout_r2_00;
  }
  iVar3 = *(int *)(param_1 + 0x130) << 0x1f;
  if (iVar3 < 0) {
    FUN_10119dc2(DAT_101146d4,DAT_101146dc,DAT_101146cc,0x2c5,uVar4);
    FUN_1011a1f0(DAT_101146cc,0x2c5,uVar1,iVar3);
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(int *)(param_1 + 0x120) = param_1 + 0x120;
  *(int *)(param_1 + 0x124) = param_1 + 0x120;
  *(int *)(param_1 + 0x128) = param_1 + 0x128;
  *(int *)(param_1 + 300) = param_1 + 0x128;
  if (param_5 == (int *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0x101;
    if ((char)param_5[1] == '\0') {
      uVar1 = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x130) = uVar1;
  FUN_1011380c(param_1,param_2,param_3,DAT_101146e0,param_1,0,0,param_4,0);
  if ((param_5 != (int *)0x0) && (*param_5 != 0)) {
    FUN_10113564(param_1);
  }
  FUN_10114d90(param_1);
  return;
}


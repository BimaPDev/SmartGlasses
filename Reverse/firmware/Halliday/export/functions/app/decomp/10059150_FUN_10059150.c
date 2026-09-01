/* FUN_10059150 @ 0x10059150 */

void FUN_10059150(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 extraout_r2_04;
  undefined4 uVar3;
  undefined4 extraout_r3;
  int extraout_r3_00;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  if (param_1 == 0) {
    FUN_10119dc2(DAT_100592ac,DAT_100592a8,DAT_100592a4,0x5b8,0,param_2);
    FUN_1011a1f0(DAT_100592a4,0x5b8,param_3,param_4);
  }
  uVar5 = FUN_1013c70e();
  uVar6 = uVar5 & 0xffffffff00000000;
  uVar3 = extraout_r2;
  if ((int)uVar5 != 0) {
    FUN_10119dc2(DAT_100592ac,DAT_100592b0,DAT_100592a4,0x5b9,uVar5);
    FUN_10119dc2(DAT_100592b4);
    uVar6 = FUN_1011a1f0(DAT_100592a4,0x5b9,extraout_r2,extraout_r3);
    uVar3 = extraout_r2_00;
  }
  uVar2 = (undefined4)(uVar6 >> 0x20);
  if (*(int *)(param_1 + 8) == 0) {
    FUN_10119dc2(DAT_100592ac,DAT_100592b8,DAT_100592a4,0x5ba,uVar6);
    FUN_1011a1f0(DAT_100592a4,0x5ba,uVar3,0);
    uVar2 = extraout_r1;
    uVar3 = extraout_r2_01;
  }
  iVar4 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(iVar4 + 0x260) << 0xf;
  uVar7 = CONCAT44(uVar2,iVar1);
  if (-1 < iVar1) {
    uVar7 = FUN_10115464();
    iVar1 = *(int *)(iVar4 + 0x308);
    uVar3 = extraout_r2_02;
    if (iVar1 == (int)uVar7) {
      FUN_10119dc2(DAT_100592ac,DAT_100592bc,DAT_100592a4,0x5bb,uVar7);
      uVar7 = FUN_1011a1f0(DAT_100592a4,0x5bb,extraout_r2_02,iVar1);
      uVar3 = extraout_r2_03;
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    FUN_10119dc2(DAT_100592ac,DAT_100592c0,DAT_100592a4,0x5bd,uVar7);
    uVar7 = FUN_1011a1f0(DAT_100592a4,0x5bd,uVar3,0);
    uVar3 = extraout_r2_04;
    iVar1 = extraout_r3_00;
  }
  uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (param_3 == 0) {
    FUN_10119dc2(DAT_100592ac,DAT_100592c4,DAT_100592a4,0x5be,uVar7);
    FUN_1011a1f0(DAT_100592a4,0x5be,uVar3,iVar1);
    uVar2 = extraout_r1_00;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (*(char *)(iVar1 + 4) != '\x02') {
    FUN_1011aafc(iVar1 + 0x260,0x20000);
    return;
  }
  thunk_FUN_10113cfc(iVar1 + 0x2f4,uVar2,0xffffffff,0xffffffff);
  if ((-1 < *(int *)(*(int *)(param_1 + 8) + 0x260) << 0xf) &&
     (*(int *)(*(int *)(param_1 + 8) + 0x38) == 0)) {
    FUN_1011af68(param_1);
  }
  FUN_1011afa0(param_1,param_2,param_3,param_4);
  if ((-1 < *(int *)(*(int *)(param_1 + 8) + 0x260) << 0xf) &&
     (*(int *)(*(int *)(param_1 + 8) + 0x38) == 0)) {
    FUN_10059c18(param_1);
  }
  FUN_1011aca2(*(undefined4 *)(param_1 + 0x14));
  thunk_FUN_10113e2c(*(int *)(param_1 + 8) + 0x2f4);
  return;
}


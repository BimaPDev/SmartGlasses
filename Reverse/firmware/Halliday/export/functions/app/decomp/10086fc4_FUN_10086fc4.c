/* FUN_10086fc4 @ 0x10086fc4 */

void FUN_10086fc4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  uint uVar2;
  int iVar3;
  undefined4 extraout_r3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar3 = param_1;
  uVar7 = param_2;
  uVar8 = param_3;
  uVar9 = param_4;
  FUN_10089398();
  uVar1 = DAT_10087058;
  iVar5 = *(int *)(param_1 + 8);
  uVar2 = *(byte *)(iVar5 + 0x22) + 1 & 0x3f;
  *(byte *)(iVar5 + 0x22) = *(byte *)(iVar5 + 0x22) & 0xc0 | (byte)uVar2;
  uVar1 = FUN_10094280(*(undefined4 *)(iVar5 + 0xc),uVar2 * 0xc,uVar1,uVar2,iVar3,uVar7,uVar8,uVar9)
  ;
  iVar3 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar5 + 0xc) = uVar1;
  if (*(int *)(iVar3 + 0xc) == 0) {
    uVar6 = FUN_10094174(3,DAT_10087068,0xab,DAT_10087058,DAT_10087064,DAT_10087060,DAT_1008705c);
    FUN_10119dc2(DAT_10087070,DAT_1008706c,DAT_10087068,0xab,uVar6);
    FUN_10119dc2(DAT_10087074);
    FUN_1011a1f0(DAT_10087068,0xab,extraout_r2,extraout_r3);
  }
  iVar5 = *(int *)(*(int *)(param_1 + 8) + 0xc);
  iVar4 = (*(byte *)(*(int *)(param_1 + 8) + 0x22) & 0x3f) * 0xc + -0xc;
  iVar3 = iVar5 + iVar4;
  *(undefined4 *)(iVar5 + iVar4) = param_2;
  *(undefined4 *)(iVar3 + 4) = param_4;
  *(undefined4 *)(iVar3 + 8) = param_3;
  return;
}


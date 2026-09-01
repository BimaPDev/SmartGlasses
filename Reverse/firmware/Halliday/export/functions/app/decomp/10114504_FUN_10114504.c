/* FUN_10114504 @ 0x10114504 */

bool FUN_10114504(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  uint extraout_r1;
  uint uVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  int iVar4;
  undefined4 extraout_r3_00;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar7 = CONCAT44(param_2,param_1);
  uVar5 = param_4;
  if (param_1 == 0) {
    FUN_10119dc2(DAT_101145e4,DAT_101145e0,DAT_101145dc,0x220,0,param_2,param_3,param_4,param_4);
    uVar7 = FUN_1011a1f0(DAT_101145dc,0x220,param_3,param_4);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if (param_2 == 0) {
    FUN_10119dc2(DAT_101145e4,DAT_101145e8,DAT_101145dc,0x221,uVar7,param_3,param_4,uVar5);
    uVar7 = FUN_1011a1f0(DAT_101145dc,0x221,param_3,param_4);
    param_3 = extraout_r2_00;
  }
  iVar4 = *(int *)(param_1 + 0xc) << 0x17;
  if (iVar4 < 0) {
    FUN_10119dc2(DAT_101145e4,DAT_101145ec,DAT_101145dc,0x222,uVar7,param_3,iVar4,uVar5);
    FUN_1011a1f0(DAT_101145dc,0x222,param_3,iVar4);
  }
  uVar7 = FUN_1013c70e();
  uVar3 = (uint)((ulonglong)uVar7 >> 0x20);
  if ((int)uVar7 != 0) {
    uVar9 = extraout_r2_01;
    uVar10 = extraout_r3_00;
    FUN_10119dc2(DAT_101145e4,DAT_101145f0,DAT_101145dc,0x223,uVar7,extraout_r2_01,extraout_r3_00,
                 uVar5);
    FUN_1011a1f0(DAT_101145dc,0x223,uVar9,uVar10);
    uVar3 = extraout_r1;
  }
  uVar5 = 0;
  bVar6 = (bool)isCurrentModePrivileged();
  if (bVar6) {
    uVar5 = getBasePriority();
  }
  bVar6 = (bool)isCurrentModePrivileged();
  if ((bVar6) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  bVar6 = (*(uint *)(param_1 + 0xc) & 0xf) != 0;
  if (bVar6) {
    FUN_1013cabc(param_1);
    lVar8 = FUN_10114330(param_1,param_2);
  }
  else {
    lVar8 = (ulonglong)uVar3 << 0x20;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  if ((int)lVar8 != 0) {
    FUN_1011401c(param_2 + 8,(int)((ulonglong)lVar8 >> 0x20),0xffffffff,0xffffffff);
  }
  return bVar6;
}


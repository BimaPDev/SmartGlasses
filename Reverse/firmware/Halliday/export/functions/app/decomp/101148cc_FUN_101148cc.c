/* FUN_101148cc @ 0x101148cc */

bool FUN_101148cc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  uint extraout_r1;
  uint uVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar6 = CONCAT44(param_2,param_1);
  uVar4 = param_4;
  if (param_1 == 0) {
    FUN_10119dc2(DAT_10114994,DAT_10114990,DAT_1011498c,0x409,0,param_2,param_3,param_4,param_4);
    uVar6 = FUN_1011a1f0(DAT_1011498c,0x409,param_3,param_4);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if (param_2 == 0) {
    FUN_10119dc2(DAT_10114994,DAT_10114998,DAT_1011498c,0x40a,uVar6,param_3,param_4,uVar4);
    FUN_1011a1f0(DAT_1011498c,0x40a,param_3,param_4);
  }
  uVar6 = FUN_1013c70e();
  uVar3 = (uint)((ulonglong)uVar6 >> 0x20);
  if ((int)uVar6 != 0) {
    uVar8 = extraout_r2_00;
    uVar9 = extraout_r3_00;
    FUN_10119dc2(DAT_10114994,DAT_1011499c,DAT_1011498c,0x40b,uVar6,extraout_r2_00,extraout_r3_00,
                 uVar4);
    FUN_1011a1f0(DAT_1011498c,0x40b,uVar8,uVar9);
    uVar3 = extraout_r1;
  }
  uVar4 = 0;
  bVar5 = (bool)isCurrentModePrivileged();
  if (bVar5) {
    uVar4 = getBasePriority();
  }
  bVar5 = (bool)isCurrentModePrivileged();
  if ((bVar5) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  bVar5 = (*(uint *)(param_1 + 0xc) & 0xf) != 0;
  if (bVar5) {
    FUN_1013caa0(param_1);
    FUN_1013cabc(param_1);
    lVar7 = FUN_10114330(param_1,param_2);
  }
  else {
    lVar7 = (ulonglong)uVar3 << 0x20;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  if ((int)lVar7 != 0) {
    FUN_1011401c(param_2 + 8,(int)((ulonglong)lVar7 >> 0x20),0xffffffff,0xffffffff);
  }
  return bVar5;
}


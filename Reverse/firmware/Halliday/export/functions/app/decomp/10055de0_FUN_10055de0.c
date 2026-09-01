/* FUN_10055de0 @ 0x10055de0 */

void FUN_10055de0(uint param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 extraout_r2;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x20 < uVar4)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar7 = FUN_10055c70(param_1,param_2,param_2);
  uVar4 = (uint)((ulonglong)uVar7 >> 0x20);
  uVar6 = (uint)uVar7 / DAT_10055e74;
  if ((((uVar4 <= uVar6) && (uVar4 != 0)) && (param_1 <= uVar6)) && (param_1 != 0)) {
    iVar3 = FUN_1011a6a0(extraout_r2,uVar6);
    puVar2 = DAT_10055e7c;
    uVar4 = *DAT_10055e7c & 0xfffffc08 | iVar3 << 4;
    iVar3 = FUN_1013d9d0();
    if (iVar3 == 0) {
      uVar4 = uVar4 | 0x202;
    }
    else {
      uVar4 = uVar4 | 0x102;
    }
    *puVar2 = uVar4;
    iVar3 = FUN_1011a6a0(param_1,uVar6);
    *DAT_10055e78 = *DAT_10055e78 & 0xfffffc08 | iVar3 << 4 | 0x202;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar5);
    }
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}


/* FUN_10055d30 @ 0x10055d30 */

void FUN_10055d30(uint param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  uint extraout_r2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x20 < uVar4)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar5 = FUN_10055c70();
  uVar4 = (uint)uVar5 / DAT_10055dd0;
  if (((param_1 <= uVar4) && ((uint)((ulonglong)uVar5 >> 0x20) <= uVar4)) && (extraout_r2 <= uVar4))
  {
    if (param_1 != 0) {
      uVar2 = FUN_1011a6a0(param_1,uVar4);
      *DAT_10055dd4 = *DAT_10055dd4 & 0xfffffcf0 | uVar2 | 0x100;
    }
    if (param_2 != 0) {
      uVar2 = FUN_1011a6a0(param_2,uVar4);
      *DAT_10055dd8 = *DAT_10055dd8 & 0xfffffcf0 | uVar2 | 0x100;
    }
    if (param_3 != 0) {
      uVar4 = FUN_1011a6a0(param_3,uVar4);
      *DAT_10055ddc = uVar4 | *DAT_10055ddc & 0xfffffcf0 | 0x100;
    }
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


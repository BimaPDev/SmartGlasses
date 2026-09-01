/* FUN_10061fd0 @ 0x10061fd0 */

undefined4 FUN_10061fd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *extraout_r2;
  undefined4 uVar6;
  
  if (param_1 == 0) {
    FUN_10119dc2(DAT_1006203c,DAT_10062038,DAT_10062034,0x122,0,param_2,param_3,param_4,param_4);
    FUN_10119dc2(DAT_10062040);
    FUN_1011a1f0(DAT_10062034,0x122,param_3,param_4);
  }
  uVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar6 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  piVar5 = (int *)(DAT_10062044 + 4);
  piVar3 = (int *)*piVar5;
  if (piVar3 == piVar5) {
    uVar4 = 0;
  }
  else {
    while (uVar4 = 0, piVar3 != (int *)0x0) {
      if ((int *)param_1 == piVar3) {
        uVar4 = 1;
        break;
      }
      piVar3 = (int *)FUN_1011c1aa(piVar5,piVar3);
      piVar5 = extraout_r2;
    }
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar6);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar4;
}


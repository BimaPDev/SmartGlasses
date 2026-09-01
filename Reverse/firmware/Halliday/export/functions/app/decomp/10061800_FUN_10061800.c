/* FUN_10061800 @ 0x10061800 */

void FUN_10061800(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  if (param_1 == -1) {
    param_1 = 0x8311;
  }
  else if (param_1 == 0) {
    param_1 = 1;
  }
  if ((uint)(param_1 * 32000) <
      (uint)(((*DAT_10061878 + *DAT_1006187c) - *DAT_10061880) - *DAT_10061884)) {
    *DAT_10061888 = *DAT_10061878 + 0x140;
  }
  else {
    uVar2 = ((*DAT_10061880 + *DAT_10061884 + 1) - (*DAT_10061878 + *DAT_1006187c)) +
            param_1 * 32000;
    if (DAT_1006188c <= uVar2) {
      uVar2 = DAT_1006188c;
    }
    if (uVar2 < 0x140) {
      iVar3 = *DAT_10061878 + 0x140;
    }
    else {
      iVar3 = *DAT_10061878 + uVar2;
    }
    *DAT_10061888 = iVar3;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


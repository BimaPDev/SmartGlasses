/* FUN_1013cc8c @ 0x1013cc8c */

void FUN_1013cc8c(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  if ((*(byte *)(param_1 + -0xb) & 0x28) == 0) {
    if (*(int *)(param_1 + -0x10) != 0) {
      FUN_10114b08();
    }
    *(byte *)(param_1 + -0xb) = *(byte *)(param_1 + -0xb) & 0xeb;
    FUN_10114cf4(param_1 + -0x18);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


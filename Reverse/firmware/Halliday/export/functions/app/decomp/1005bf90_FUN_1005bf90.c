/* FUN_1005bf90 @ 0x1005bf90 */

void FUN_1005bf90(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
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
  *param_1 = 0;
  puVar3 = DAT_1005bfc0;
  if ((undefined4 *)DAT_1005bfc0[1] == (undefined4 *)0x0) {
    *DAT_1005bfc0 = param_1;
    puVar3[1] = param_1;
  }
  else {
    *(undefined4 *)DAT_1005bfc0[1] = param_1;
    puVar3[1] = param_1;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


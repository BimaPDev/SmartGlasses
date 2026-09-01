/* FUN_1005c270 @ 0x1005c270 */

undefined4 FUN_1005c270(uint param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (4 < param_1) {
    return 0xffffffea;
  }
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
  *(undefined4 *)(DAT_1005c2a0 + param_1 * 0x18) = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  return 0;
}


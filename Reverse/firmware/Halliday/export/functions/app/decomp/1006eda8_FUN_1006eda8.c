/* FUN_1006eda8 @ 0x1006eda8 */

undefined4 FUN_1006eda8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  
  puVar3 = DAT_1006ede8;
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
  *DAT_1006ede8 = *DAT_1006ede8 + 1;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  if (0x14 < *puVar3) {
    FUN_10119dc2(DAT_1006edec,*puVar3,*puVar3,puVar3,param_4);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0);
    }
    param_1 = 4;
    software_interrupt(2);
  }
  return param_1;
}


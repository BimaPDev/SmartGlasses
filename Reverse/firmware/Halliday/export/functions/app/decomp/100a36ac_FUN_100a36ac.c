/* FUN_100a36ac @ 0x100a36ac */

void FUN_100a36ac(uint param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  
  piVar2 = DAT_100a3700;
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
  uVar4 = (uint)*(byte *)(*DAT_100a3700 + 0x163);
  if (uVar4 != param_1) {
    *(char *)(*DAT_100a3700 + 0x162) = (char)param_1;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  if (param_1 == 0) {
    if (uVar4 == 0) {
      return;
    }
    uVar3 = 2000;
  }
  else {
    FUN_1013cb84(*piVar2 + 0x168,param_2,uVar3);
    if (uVar4 != 0) {
      return;
    }
    uVar3 = 0;
  }
  FUN_1011dc0a(*piVar2 + 0x168,uVar3);
  return;
}


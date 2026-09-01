/* FUN_10001c5c @ 0x10001c5c */

void FUN_10001c5c(int param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar4 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x20 < uVar3)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  if (param_1 == 0) {
    cVar1 = *(char *)(DAT_10001ca0 + 1) + -1;
    *(char *)(DAT_10001ca0 + 1) = cVar1;
    if (cVar1 == '\0') {
      FUN_10003048(0xc);
    }
  }
  else {
    cVar1 = *(char *)(DAT_10001ca0 + 1);
    *(char *)(DAT_10001ca0 + 1) = cVar1 + '\x01';
    if (cVar1 == '\0') {
      FUN_10003218(0xc);
    }
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}


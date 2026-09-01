/* FUN_1005c49c @ 0x1005c49c */

undefined8 FUN_1005c49c(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar4 = DAT_1005c4e0;
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x20 < uVar2)) {
    setBasePriority(0x20);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar3 = 0;
  iVar6 = DAT_1005c4e0;
  do {
    if (*(char *)(iVar6 + 0xe) == '\0') {
      *(undefined1 *)(DAT_1005c4e0 + iVar3 * 0x10 + 0xe) = 1;
      break;
    }
    iVar3 = iVar3 + 1;
    iVar6 = iVar6 + 0x10;
  } while (iVar3 != 0x18);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  if (iVar3 == 0x18) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + iVar3 * 0x10;
  }
  return CONCAT44(uVar5,iVar4);
}


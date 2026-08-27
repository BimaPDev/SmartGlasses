/* FUN_2c4be540 @ 0x2c4be540 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4be540(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 unaff_lr;
  char *pcVar5;
  
  puVar2 = _LAB_2c4be57c;
  iVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar3 = getBasePriority();
  }
  if (iVar3 != 0x40) {
    *_LAB_2c4be57c = 0x2c4be54e;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  pcVar5 = _LAB_2c4be580;
  do {
    pcVar4 = pcVar5 + 1;
    if (*pcVar5 != '\0') break;
    pcVar5 = pcVar4;
  } while (_LAB_2c4be580 + 0xc != pcVar4);
  if (iVar3 == 0) {
    *_LAB_2c4be57c = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar3);
  }
  return;
}


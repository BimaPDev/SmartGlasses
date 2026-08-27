/* FUN_2c013624 @ 0x2c013624 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c013624(void)

{
  bool bVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_lr;
  
  puVar2 = _DAT_2c01365c;
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  if (uVar5 != 0x40) {
    *_DAT_2c01365c = 0x2c013632;
    puVar2[1] = unaff_lr;
  }
  pcVar3 = _DAT_2c013660;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  if (*_DAT_2c013660 != '\0') {
    return uVar5;
  }
  do {
    iVar4 = func_0x2c013a84(0);
  } while (iVar4 == 0);
  *pcVar3 = '\x01';
  return uVar5 | 0x80000000;
}


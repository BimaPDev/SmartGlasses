/* FUN_2c4c7ae8 @ 0x2c4c7ae8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4c7ae8(void)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 in_r3;
  int iVar9;
  undefined4 unaff_lr;
  
  uVar7 = FUN_2c6741e8(0x41,_LAB_2c4c7b7c,_LAB_2c4c7b78,in_r3,in_r3);
  puVar3 = _LAB_2c4c7b80;
  iVar9 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar9 = getBasePriority();
  }
  if (iVar9 != 0x40) {
    *_LAB_2c4c7b80 = 0x2c4c7b02;
    puVar3[1] = unaff_lr;
  }
  piVar5 = _LAB_2c4c7b88;
  pcVar4 = _LAB_2c4c7b84;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  cVar1 = *_LAB_2c4c7b84;
  if (*_LAB_2c4c7b84 == '\0') {
    *_LAB_2c4c7b9c = 0;
  }
  else {
    if (*_LAB_2c4c7b88 << 0x1f < 0) {
      uVar7 = FUN_2c674668(_LAB_2c4c7b90,_LAB_2c4c7b8c,0x154);
    }
    if (*piVar5 << 0x1e < 0) {
      uVar7 = FUN_2c674668(_LAB_2c4c7b98,_LAB_2c4c7b94,0x154);
    }
    *pcVar4 = '\0';
  }
  if (iVar9 == 0) {
    *_LAB_2c4c7b80 = 0xffffffff;
  }
  puVar6 = _LAB_2c4c7ba0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar9);
  }
  if (cVar1 != '\0') {
    FUN_2c4c6784(2);
    FUN_2c4c26a8(*puVar6);
    uVar8 = *puVar6;
    if ((uVar8 <= DAT_2c4c264c + 0x118) && (uVar8 >= DAT_2c4c264c)) {
      uVar7 = FUN_2c4c2440(uVar8,0,0,uVar8 < DAT_2c4c264c,*_LAB_2c4c7ba4);
      return uVar7;
    }
    return 2;
  }
  return uVar7;
}


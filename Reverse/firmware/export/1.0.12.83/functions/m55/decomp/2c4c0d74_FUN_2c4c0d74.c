/* FUN_2c4c0d74 @ 0x2c4c0d74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4c0d74(void)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 unaff_lr;
  
  iVar7 = func_0x2c673ec8();
  uVar8 = FUN_2c673c88();
  iVar9 = func_0x2c673d18(0);
  if (iVar7 << 0x1f < 0) {
    iVar9 = func_0x2c674338();
    puVar5 = _LAB_2c4c0db0;
    _LAB_2c4c0db0[2] = (char)iVar9;
    if (iVar9 == 0) {
      puVar5[1] = 1;
    }
    else {
      *puVar5 = 1;
    }
    *(undefined4 *)(puVar5 + 4) = uVar8;
  }
  puVar3 = _LAB_2c4c0710;
  iVar7 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar7 = getBasePriority();
  }
  if (iVar7 != 0x40) {
    *_LAB_2c4c0710 = 0x2c4c06cc;
    puVar3[1] = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  cVar1 = *_LAB_2c4c0714;
  if (cVar1 == '\0') {
    iVar9 = 1;
    *_LAB_2c4c0714 = '\x01';
  }
  if (iVar7 == 0) {
    iVar9 = -1;
    *_LAB_2c4c0710 = 0xffffffff;
  }
  puVar4 = _LAB_2c4c0718;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar7);
  }
  if (cVar1 == '\0') {
    FUN_2c4c26a8(*_LAB_2c4c0718);
    uVar6 = *puVar4;
    if ((uVar6 <= DAT_2c4c264c + 0x118) && (uVar6 >= DAT_2c4c264c)) {
      iVar9 = FUN_2c4c2440(uVar6,0,0,uVar6 < DAT_2c4c264c,0x280);
      return iVar9;
    }
    return 2;
  }
  return iVar9;
}


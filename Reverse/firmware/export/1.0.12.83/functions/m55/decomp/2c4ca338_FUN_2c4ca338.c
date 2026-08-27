/* FUN_2c4ca338 @ 0x2c4ca338 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4ca338(void)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 in_r3;
  int iVar9;
  undefined4 unaff_lr;
  
  uVar7 = FUN_2c6741e8(0x41,_LAB_2c4ca3b0,_LAB_2c4ca3ac,in_r3,in_r3);
  puVar3 = _LAB_2c4ca3b4;
  iVar9 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar9 = getBasePriority();
  }
  if (iVar9 != 0x40) {
    *_LAB_2c4ca3b4 = 0x2c4ca352;
    puVar3[1] = unaff_lr;
  }
  uVar5 = _LAB_2c4ca3c0;
  pcVar4 = _LAB_2c4ca3b8;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  cVar1 = *_LAB_2c4ca3b8;
  if (cVar1 == '\0') {
    *_LAB_2c4ca3bc = 0;
  }
  else {
    *_LAB_2c4ca3bc = 1;
    *pcVar4 = '\0';
    uVar7 = FUN_2c674668(uVar5,_LAB_2c4ca3c4,0x788);
  }
  if (iVar9 == 0) {
    *_LAB_2c4ca3b4 = 0xffffffff;
  }
  puVar6 = _LAB_2c4ca3c8;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar9);
  }
  if (cVar1 != '\0') {
    FUN_2c4c9fa8();
    FUN_2c4c26a8(*puVar6);
    uVar8 = *puVar6;
    if ((uVar8 <= DAT_2c4c264c + 0x118) && (uVar8 >= DAT_2c4c264c)) {
      uVar7 = FUN_2c4c2440(uVar8,0,0,uVar8 < DAT_2c4c264c,*_LAB_2c4ca3cc);
      return uVar7;
    }
    return 2;
  }
  return uVar7;
}


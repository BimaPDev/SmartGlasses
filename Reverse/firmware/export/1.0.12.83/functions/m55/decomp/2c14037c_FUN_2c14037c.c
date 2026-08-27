/* FUN_2c14037c @ 0x2c14037c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c14037c(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar3 = _DAT_2c140424;
  if (*(char *)(_DAT_2c140424 + 8) != '\x01') {
    func_0x2c13edb4(0xfffffff9);
    return 0xffffffff;
  }
  iVar5 = func_0x2c141298();
  iVar6 = _DAT_2c140428;
  if (iVar5 == 0) goto LAB_2c140406;
  *(undefined1 *)(_DAT_2c140428 + 0x22) = 0xff;
  piVar4 = _DAT_2c14042c;
  uVar8 = ~(*(byte *)(iVar6 + 0x22) | 0xffffff00);
  if (uVar8 == 0) {
    uVar8 = (*(uint *)(iVar6 + 0xc) & 0x7ff) >> 8;
LAB_2c140402:
    uVar9 = uVar8 + 1;
  }
  else {
    uVar9 = 0x20 - LZCOUNT(uVar8);
    uVar8 = (*(uint *)(iVar6 + 0xc) & 0x7ff) >> 8;
    if (uVar9 <= uVar8) goto LAB_2c140402;
  }
  *(char *)(_DAT_2c140428 + 0x1f) = (char)(0xfe << (uVar9 & 0xff));
  iVar6 = func_0x2c1416d0(piVar4[1],_DAT_2c140430);
  if (iVar6 == 0) {
    uVar7 = func_0x2c141778();
    *(undefined4 *)(iVar3 + 0x10) = uVar7;
    func_0x2c14171c();
    FUN_2c14089c(_DAT_2c140434);
    func_0x2c140af0();
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setThreadModePrivileged(*piVar4 << 0x1f < 0);
      bVar1 = (bool)isThreadMode();
      if (bVar1) {
        cVar2 = isUsingMainStack();
        setStackMode(cVar2 == '\x01');
      }
    }
    *(undefined1 *)(iVar3 + 8) = 2;
    func_0x2c13edc4();
    return 0;
  }
LAB_2c140406:
  func_0x2c13edb4(0xffffffff);
  return 0xffffffff;
}


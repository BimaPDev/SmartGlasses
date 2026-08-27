/* FUN_2c13dd7c @ 0x2c13dd7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13dd7c(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  code *pcVar10;
  undefined4 unaff_lr;
  undefined4 uStack_18;
  int iStack_14;
  
  puVar2 = _DAT_2c13de34;
  iStack_14 = *_DAT_2c13de30;
  if (*_DAT_2c13de2c != '\0') {
    if (*_DAT_2c13de30 == iStack_14) {
      uStack_18 = 0;
      iVar7 = FUN_2c14486c();
      puVar4 = _DAT_2c13dd78;
      puVar3 = _DAT_2c13dd74;
      puVar2 = _DAT_2c13dd70;
      iVar9 = _DAT_2c13dd6c;
      if (*_DAT_2c13dd68 == '\0') {
        while( true ) {
          iVar9 = (*(code *)*puVar3)(*puVar2);
          if (iVar9 == 0) {
            return;
          }
          iVar9 = FUN_2c14486c();
          if (0xc7f < (uint)(iVar9 - iVar7)) break;
          (*(code *)*puVar4)();
        }
      }
      else {
        do {
          if (*(short *)(iVar9 + 0x10) == *(short *)(iVar9 + 0x12)) {
            return;
          }
          iVar6 = FUN_2c14486c();
        } while ((uint)(iVar6 - iVar7) < 0xc80);
      }
      return;
    }
    goto LAB_2c13de26;
  }
  iVar9 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar9 = getBasePriority();
  }
  if (iVar9 != 0x40) {
    *_DAT_2c13de34 = 0x2c13dd9e;
    puVar2[1] = unaff_lr;
  }
  pcVar5 = _DAT_2c13de38;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  if (*_DAT_2c13de38 == '\0') {
    iVar7 = (*(code *)*_DAT_2c13de4c)(*_DAT_2c13de48);
    cVar8 = *(char *)(_DAT_2c13de3c + 0x19);
    if ((iVar7 == 0) || (*(char *)(_DAT_2c13de3c + 0x18) == cVar8)) goto LAB_2c13ddb2;
  }
  else {
    cVar8 = *(char *)(_DAT_2c13de3c + 0x19);
LAB_2c13ddb2:
    pcVar10 = (code *)*_DAT_2c13de40;
    *(char *)(_DAT_2c13de3c + 0x19) = cVar8 + '\x01';
    iVar7 = (*pcVar10)(_DAT_2c13de44,0xc,&uStack_18);
    if (iVar7 == 0) {
      *_DAT_2c13de48 = uStack_18;
    }
    if (*pcVar5 != '\0') {
      FUN_2c13dd1c();
    }
  }
  if (iVar9 == 0) {
    *_DAT_2c13de34 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar9);
  }
  if (*_DAT_2c13de30 == iStack_14) {
    return;
  }
LAB_2c13de26:
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}


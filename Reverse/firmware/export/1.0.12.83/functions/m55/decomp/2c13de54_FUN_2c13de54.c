/* FUN_2c13de54 @ 0x2c13de54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13de54(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  code *pcVar11;
  undefined4 unaff_lr;
  undefined4 uStack_18;
  int iStack_14;
  
  iVar10 = _DAT_2c13de8c;
  *_DAT_2c13de88 = 1;
  *(undefined4 *)(iVar10 + 4) = 1;
  if (param_1 == 0) {
    *(undefined1 *)(_DAT_2c13de90 + 0x1a) = 1;
  }
  else {
    if (param_1 == 1) {
      uVar8 = 2;
    }
    else {
      uVar8 = 3;
    }
    *(undefined1 *)(_DAT_2c13de90 + 0x1a) = uVar8;
  }
  func_0x2c13e5b0(*_DAT_2c13de94);
  FUN_2c13dd1c();
  puVar2 = _DAT_2c13de34;
  iStack_14 = *_DAT_2c13de30;
  if (*_DAT_2c13de2c != '\0') {
    if (*_DAT_2c13de30 == iStack_14) {
      uStack_18 = 0;
      iVar7 = FUN_2c14486c();
      puVar4 = _DAT_2c13dd78;
      puVar3 = _DAT_2c13dd74;
      puVar2 = _DAT_2c13dd70;
      iVar10 = _DAT_2c13dd6c;
      if (*_DAT_2c13dd68 == '\0') {
        while( true ) {
          iVar10 = (*(code *)*puVar3)(*puVar2);
          if (iVar10 == 0) {
            return;
          }
          iVar10 = FUN_2c14486c();
          if (0xc7f < (uint)(iVar10 - iVar7)) break;
          (*(code *)*puVar4)();
        }
      }
      else {
        do {
          if (*(short *)(iVar10 + 0x10) == *(short *)(iVar10 + 0x12)) {
            return;
          }
          iVar6 = FUN_2c14486c();
        } while ((uint)(iVar6 - iVar7) < 0xc80);
      }
      return;
    }
    goto LAB_2c13de26;
  }
  iVar10 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar10 = getBasePriority();
  }
  if (iVar10 != 0x40) {
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
    cVar9 = *(char *)(_DAT_2c13de3c + 0x19);
    if ((iVar7 == 0) || (*(char *)(_DAT_2c13de3c + 0x18) == cVar9)) goto LAB_2c13ddb2;
  }
  else {
    cVar9 = *(char *)(_DAT_2c13de3c + 0x19);
LAB_2c13ddb2:
    pcVar11 = (code *)*_DAT_2c13de40;
    *(char *)(_DAT_2c13de3c + 0x19) = cVar9 + '\x01';
    iVar7 = (*pcVar11)(_DAT_2c13de44,0xc,&uStack_18);
    if (iVar7 == 0) {
      *_DAT_2c13de48 = uStack_18;
    }
    if (*pcVar5 != '\0') {
      FUN_2c13dd1c();
    }
  }
  if (iVar10 == 0) {
    *_DAT_2c13de34 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar10);
  }
  if (*_DAT_2c13de30 == iStack_14) {
    return;
  }
LAB_2c13de26:
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}


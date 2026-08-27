/* FUN_2c13dec8 @ 0x2c13dec8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c13dec8(int param_1,uint param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  code *pcVar13;
  undefined4 unaff_r6;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 unaff_lr;
  
  iVar12 = _DAT_2c13dfa8;
  iVar8 = _DAT_2c13df98;
  uVar10 = (uint)*(ushort *)(_DAT_2c13df98 + 0x10);
  uVar15 = (uint)*(ushort *)(_DAT_2c13df98 + 0x12);
  if (uVar15 < uVar10) {
    uVar14 = uVar10 - 1;
  }
  else {
    uVar14 = uVar10 + 99;
  }
  if (uVar14 == uVar15) {
    cVar9 = *_DAT_2c13dfa0;
    *(short *)(_DAT_2c13df98 + 0x16) = *(short *)(_DAT_2c13df98 + 0x16) + 1;
    if (cVar9 == '\0') goto LAB_2c13df44;
  }
  else {
    uVar11 = (uint)*(ushort *)(_DAT_2c13dfa8 + uVar10 * 2);
    uVar10 = (uint)*(ushort *)(_DAT_2c13dfa8 + uVar15 * 2);
    if (uVar10 < uVar11) {
      uVar11 = uVar11 - uVar10;
LAB_2c13df58:
      uVar16 = uVar11;
      if (param_2 <= uVar11) goto LAB_2c13defc;
LAB_2c13df5c:
      *(short *)(_DAT_2c13df98 + 0x16) = *(short *)(_DAT_2c13df98 + 0x16) + 1;
      cVar9 = *_DAT_2c13dfa0;
      puVar2 = _DAT_2c13dfa4;
    }
    else {
      uVar16 = 0x1000 - uVar10;
      if (uVar16 < param_2) {
        if (uVar11 != 0) {
          uVar10 = 0;
          goto LAB_2c13df58;
        }
        goto LAB_2c13df5c;
      }
LAB_2c13defc:
      param_1 = FUN_2c13e7f0(_DAT_2c13df9c + uVar10,param_1,param_2);
      uVar11 = uVar15 + 1;
      if (99 < uVar11) {
        uVar11 = uVar15 - 99;
      }
      *(short *)(iVar12 + uVar11 * 2) = (short)param_2 + (short)uVar10;
      *(short *)(iVar8 + 0x12) = (short)uVar11;
      cVar9 = *_DAT_2c13dfa0;
      puVar2 = _DAT_2c13dfa4;
    }
    _DAT_2c13dfa4 = puVar2;
    if (cVar9 == '\0') {
      if ((0x31 < uVar14 - uVar15) && (0x7ff < uVar16)) {
        iVar8 = func_0x2c13e720(*puVar2);
        if (iVar8 != 0) {
          return iVar8;
        }
        uVar10 = *puVar2;
        if ((_DAT_2c13e5ac <= uVar10) && (uVar10 <= _DAT_2c13e5ac + 0x118)) {
          iVar8 = func_0x2c13e408(uVar10,0,0);
          return iVar8;
        }
        return 2;
      }
LAB_2c13df44:
      func_0x2c13e5b0(*_DAT_2c13dfa4);
    }
    else if ((0x31 < uVar14 - uVar15) && (0x7ff < uVar16)) {
      return param_1;
    }
  }
  puVar3 = _DAT_2c13de34;
  iVar8 = *_DAT_2c13de30;
  if (*_DAT_2c13de2c != '\0') {
    if (*_DAT_2c13de30 == iVar8) {
      iVar7 = FUN_2c14486c();
      puVar5 = _DAT_2c13dd78;
      puVar4 = _DAT_2c13dd74;
      puVar3 = _DAT_2c13dd70;
      iVar8 = _DAT_2c13dd6c;
      iVar12 = iVar7;
      if (*_DAT_2c13dd68 == '\0') {
        while( true ) {
          iVar8 = (*(code *)*puVar4)(*puVar3);
          if (iVar8 == 0) {
            return 0;
          }
          iVar12 = FUN_2c14486c();
          if (0xc7f < (uint)(iVar12 - iVar7)) break;
          (*(code *)*puVar5)();
        }
      }
      else {
        do {
          if (*(short *)(iVar8 + 0x10) == *(short *)(iVar8 + 0x12)) {
            return iVar12;
          }
          iVar12 = FUN_2c14486c();
        } while ((uint)(iVar12 - iVar7) < 0xc80);
      }
      return iVar12;
    }
    goto LAB_2c13de26;
  }
  iVar12 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar12 = getBasePriority();
  }
  if (iVar12 != 0x40) {
    *_DAT_2c13de34 = 0x2c13dd9e;
    puVar3[1] = unaff_lr;
  }
  pcVar6 = _DAT_2c13de38;
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
    pcVar13 = (code *)*_DAT_2c13de40;
    *(char *)(_DAT_2c13de3c + 0x19) = cVar9 + '\x01';
    iVar7 = (*pcVar13)(_DAT_2c13de44,0xc,&stack0xffffffe8);
    if (iVar7 == 0) {
      *_DAT_2c13de48 = unaff_r6;
    }
    if (*pcVar6 != '\0') {
      iVar7 = FUN_2c13dd1c();
    }
  }
  if (iVar12 == 0) {
    *_DAT_2c13de34 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar12);
  }
  if (*_DAT_2c13de30 == iVar8) {
    return iVar7;
  }
LAB_2c13de26:
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c();
}


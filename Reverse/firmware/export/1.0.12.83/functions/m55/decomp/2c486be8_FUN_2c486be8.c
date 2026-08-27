/* FUN_2c486be8 @ 0x2c486be8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c486be8(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  
  piVar3 = _LAB_2c486d88;
  puVar2 = _LAB_2c486d84;
  FUN_2c644044(*_LAB_2c486d84,0xffffffff);
  if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c486dc4,_DAT_2c486d8c,0x2bf);
  }
  FUN_2c648600(_LAB_2c486d90,_DAT_2c486d8c);
  iVar5 = *piVar3;
  uVar4 = _DAT_2c486dc0;
  if ((*(char *)(iVar5 + 0x18) != '\0') &&
     (uVar4 = _LAB_2c486d94, *(char *)(iVar5 + 0x18) == '\x01')) {
    uVar4 = _DAT_2c486d98;
  }
  uVar12 = (uint)*(ushort *)(iVar5 + 0x1c);
  uVar13 = (uint)*(ushort *)(iVar5 + 0x1a);
  FUN_2c648600(_LAB_2c486d9c,iVar5,*(undefined1 *)(iVar5 + 0x14),*(undefined2 *)(iVar5 + 0x16),uVar4
               ,uVar13,uVar12);
  FUN_2c648600(_DAT_2c486da0);
  uVar11 = _LAB_2c486da8;
  iVar5 = _LAB_2c486da4;
  iVar6 = *piVar3;
  if (*(short *)(iVar6 + 0x1a) != 0) {
    iVar15 = 0;
    do {
      iVar9 = 0;
      iVar8 = *(int *)(iVar6 + (iVar15 + 0x20) * 4);
      iVar6 = -1;
      while (iVar8 != iVar6) {
        iVar9 = iVar9 + 1;
        uVar10 = uVar11;
        if (iVar9 == 0x76) goto LAB_2c486c6c;
        iVar6 = *(int *)(iVar5 + iVar9 * 8);
      }
      uVar10 = *(undefined4 *)(iVar5 + iVar9 * 8 + 4);
LAB_2c486c6c:
      FUN_2c648600(_LAB_2c486dac,iVar15,iVar8,uVar10,uVar4,uVar13,uVar12);
      iVar6 = *piVar3;
      iVar15 = iVar15 + 1;
    } while (iVar15 < (int)(uint)*(ushort *)(iVar6 + 0x1a));
  }
  FUN_2c648600(_DAT_2c486db0);
  uVar4 = _LAB_2c486da8;
  iVar5 = _LAB_2c486da4;
  iVar6 = *piVar3;
  if (*(short *)(iVar6 + 0x1c) != 0) {
    iVar15 = 0;
    do {
      iVar9 = 0;
      iVar8 = *(int *)(iVar6 + (iVar15 + 0x210) * 4);
      iVar6 = -1;
      while (iVar8 != iVar6) {
        iVar9 = iVar9 + 1;
        uVar11 = uVar4;
        if (iVar9 == 0x76) goto LAB_2c486cb8;
        iVar6 = *(int *)(iVar5 + iVar9 * 8);
      }
      uVar11 = *(undefined4 *)(iVar5 + iVar9 * 8 + 4);
LAB_2c486cb8:
      FUN_2c648600(_LAB_2c486dac,iVar15,iVar8,uVar11);
      iVar6 = *piVar3;
      iVar15 = iVar15 + 1;
    } while (iVar15 < (int)(uint)*(ushort *)(iVar6 + 0x1c));
  }
  if ((*(uint *)(iVar6 + 0x14) & 0xffff00ff) == 0x4e) {
    FUN_2c648600(_DAT_2c486db8);
  }
  else {
    FUN_2c648600(_DAT_2c486db4);
    uVar11 = _LAB_2c486dd0;
    uVar4 = _LAB_2c486dcc;
    uVar12 = _LAB_2c486dc8;
    iVar5 = *piVar3;
    uVar13 = (uint)*(ushort *)(iVar5 + 0x16);
    if (*(char *)(iVar5 + 0x14) == 'Y') {
      uVar14 = uVar13 + 0x60 & 0xffff;
    }
    else {
      uVar14 = uVar13;
      uVar13 = 0;
    }
    if (uVar13 < uVar14) {
      while( true ) {
        uVar7 = uVar13;
        if (0x5f < uVar13) {
          uVar7 = uVar13 + (uint)((ulonglong)uVar12 * (ulonglong)uVar13 >> 0x26) * -0x60 & 0xffff;
        }
        uVar13 = uVar13 + 1 & 0xffff;
        FUN_2c648600(uVar4,uVar7,*(undefined4 *)(iVar5 + (uVar7 + 4) * 0x400));
        FUN_2c648600(uVar11,*piVar3 + (uVar7 + 4 & 0xffff) * 0x400 + 4);
        FUN_2c6444fc(0x14);
        if (uVar14 == uVar13) break;
        iVar5 = *piVar3;
      }
    }
  }
  FUN_2c648600(_LAB_2c486dbc,_DAT_2c486d8c);
  uVar4 = *puVar2;
  FUN_2c643b2c();
  uVar12 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar12 = getCurrentExceptionNumber();
    uVar12 = uVar12 & 0x1ff;
  }
  if (uVar12 == 0) {
    iVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar5 = isIRQinterruptsEnabled();
    }
    if (iVar5 == 0) {
      iVar5 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar5 = getBasePriority();
      }
      if (iVar5 == 0) {
        software_interrupt(0);
        return uVar4;
      }
    }
  }
  FUN_2c643b08(uVar4,0xfffffffa);
  return 0xfffffffa;
}


/* FUN_2c0102d4 @ 0x2c0102d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0102d4(uint param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  undefined4 unaff_lr;
  ushort uStack_2a;
  ushort uStack_28;
  ushort uStack_26;
  undefined1 auStack_24 [2];
  undefined1 auStack_22 [2];
  ushort uStack_20;
  ushort uStack_1e;
  int iStack_1c;
  
  puVar4 = _DAT_2c010318;
  iVar7 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar7 = getBasePriority();
  }
  if (iVar7 != 0x40) {
    *_DAT_2c010318 = 0x2c0102e2;
    puVar4[1] = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  if (param_1 < _DAT_2c01031c) {
    uVar6 = *_DAT_2c010320 & 0xffffffbf;
  }
  else {
    uVar6 = *_DAT_2c010320 | 0x40;
  }
  *_DAT_2c010320 = uVar6;
  if (iVar7 == 0) {
    *_DAT_2c010318 = 0xffffffff;
  }
  puVar4 = DAT_2c00fa3c;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar7);
  }
  iStack_1c = *DAT_2c00fa38;
  iVar7 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar7 = getBasePriority();
  }
  if (iVar7 != 0x40) {
    *DAT_2c00fa3c = 0x2c00f870;
    puVar4[1] = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  cVar1 = *DAT_2c00fa40;
  FUN_2c01304c(&uStack_28,&uStack_2a,auStack_22,DAT_2c00fa40);
  FUN_2c00f6a8(6,auStack_24,&uStack_26);
  FUN_2c008e4c(0x46,&uStack_1e);
  pbVar5 = DAT_2c00fa50;
  if (cVar1 == '\x03') {
    uVar8 = (uint)uStack_2a;
    iVar9 = (uint)(byte)uStack_1e - (int)*DAT_2c00fa44;
    uVar6 = UnsignedSaturate(iVar9,8);
    UnsignedDoesSaturate(iVar9,8);
    uVar6 = uVar6 & 0xffff;
    if (uVar6 < uVar8) {
      do {
        uVar6 = uVar6 + 1 & 0xffff;
        FUN_2c00d1a0(uVar6,*pbVar5);
      } while (uVar6 < uStack_2a);
      FUN_2c00f404(6,*DAT_2c00fa4c,uStack_28);
      goto LAB_2c00f9e4;
    }
    if (uVar8 == uVar6) {
      iVar9 = (uint)(uStack_1e >> 8) - (int)*DAT_2c00fa48;
      uVar3 = UnsignedSaturate(iVar9,8);
      UnsignedDoesSaturate(iVar9,8);
      uVar6 = (uint)*DAT_2c00fa50;
      if (uVar6 != (uVar3 & 0xffff)) goto LAB_2c00fa18;
    }
    else {
      uVar6 = (uint)*DAT_2c00fa50;
LAB_2c00fa18:
      FUN_2c00d1a0(uVar8,uVar6);
    }
    FUN_2c00f404(6,*DAT_2c00fa4c,uStack_28);
LAB_2c00f906:
    if (*DAT_2c00fa54 != '\x02') goto LAB_2c00f912;
LAB_2c00f9f6:
    if (((uStack_2a < 0x54) && (uStack_2a < 0x4c)) && (uStack_2a < 0x44)) goto LAB_2c00f956;
  }
  else {
    uVar8 = (uint)uStack_28;
    uVar10 = (ushort)*DAT_2c00fa4c;
    FUN_2c00f6a8(6,&uStack_1e,&uStack_20);
    uVar6 = (uint)uStack_20;
    if (uVar6 < uVar8) {
      do {
        uStack_20 = uStack_28;
        if (uVar6 + 2 < uVar8) {
          uStack_20 = (ushort)(uVar6 + 2);
        }
        FUN_2c00f404(6,uVar10);
        uVar6 = (uint)uStack_20;
      } while (uVar6 < uVar8);
    }
    else if ((uVar8 != uVar6) || (uStack_1e != uVar10)) {
      FUN_2c00f404(6,uVar10,uVar8);
    }
    FUN_2c00d1a0(uStack_2a,*DAT_2c00fa50);
    if (uVar8 <= uStack_26) goto LAB_2c00f906;
LAB_2c00f9e4:
    FUN_2c013884(10);
    if (*DAT_2c00fa54 == '\x02') goto LAB_2c00f9f6;
LAB_2c00f912:
    if (((uStack_2a < 0xa8) && (uStack_2a < 0x98)) && (uStack_2a < 0x88)) {
LAB_2c00f956:
      FUN_2c008e4c(0x2028,&uStack_1e);
      if ((short)uStack_1e < 0) {
        uStack_1e = (ushort)(((uint)uStack_1e << 0x11) >> 0x11);
        FUN_2c008f74(0x2028);
      }
      goto LAB_2c00f92e;
    }
  }
  FUN_2c008e4c(0x2028,&uStack_1e);
  if (-1 < (short)uStack_1e) {
    uStack_1e = uStack_1e | 0x8000;
    FUN_2c008f74(0x2028);
  }
LAB_2c00f92e:
  if (iVar7 == 0) {
    *DAT_2c00fa3c = 0xffffffff;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar7);
  }
  if (*DAT_2c00fa38 == iStack_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}


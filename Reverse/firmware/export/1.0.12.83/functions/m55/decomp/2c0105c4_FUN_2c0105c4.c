/* FUN_2c0105c4 @ 0x2c0105c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0105c4(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  undefined4 extraout_r1_00;
  uint uVar6;
  uint uVar7;
  undefined4 extraout_r2;
  undefined4 uVar8;
  undefined4 extraout_r2_00;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ushort uVar12;
  int iVar13;
  undefined4 unaff_lr;
  ushort uStack_2a;
  undefined4 uStack_28;
  undefined1 auStack_24 [2];
  undefined1 auStack_22 [2];
  ushort uStack_20;
  ushort uStack_1e;
  int iStack_1c;
  
  iStack_1c = *_DAT_2c010708;
  if (param_1 != 0) {
    func_0x2c00cf28();
    func_0x2c013cec(1);
    uVar5 = extraout_r1_00;
    uVar8 = extraout_r2_00;
  }
  else {
    func_0x2c013cec();
    func_0x2c00ceb4();
    uVar5 = extraout_r1;
    uVar8 = extraout_r2;
  }
  puVar3 = _DAT_2c01070c;
  uVar11 = (uint)(param_1 != 0);
  iVar13 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar13 = getBasePriority();
  }
  if (iVar13 != 0x40) {
    uVar8 = 0x2c0105f0;
    *_DAT_2c01070c = 0x2c0105f0;
    puVar3[1] = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  func_0x2c013dec(param_1 != 0,uVar5,uVar8,0x40);
  if (*_DAT_2c010710 - 1 < 2) {
    FUN_2c008e4c(99,&uStack_1e);
    if (param_1 == 0) {
      uStack_1e = (ushort)(((uint)uStack_1e << 0x12) >> 0x12);
      FUN_2c008f74(99);
      FUN_2c008e4c(0x6b,&uStack_1e);
      uStack_1e = uStack_1e & 0x3fff | 0x4000;
    }
    else {
      uVar12 = (ushort)_DAT_2c010718;
      uStack_1e = uStack_1e | uVar12;
      FUN_2c008f74(99);
      FUN_2c008e4c(0x6b,&uStack_1e);
      uStack_1e = uStack_1e | uVar12;
    }
    FUN_2c008f74(0x6b);
  }
  if (iVar13 == 0) {
    *_DAT_2c01070c = 0xffffffff;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar13);
  }
  if (uVar11 != 0) {
    func_0x2c013d5c(600);
  }
  puVar3 = _DAT_2c01070c;
  iVar13 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar13 = getBasePriority();
  }
  if (iVar13 != 0x40) {
    *_DAT_2c01070c = 0x2c01062c;
    puVar3[1] = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  uStack_28 = uVar11;
  FUN_2c00f110(5,1,uVar11);
  if (iVar13 == 0) {
    *_DAT_2c01070c = 0xffffffff;
  }
  puVar3 = DAT_2c00fa3c;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar13);
  }
  if (*_DAT_2c010714 == '\0') {
    if (*_DAT_2c010708 == iStack_1c) {
      return;
    }
LAB_2c010704:
                    /* WARNING: Subroutine does not return */
    FUN_2c0084a8();
  }
  if (*_DAT_2c010708 != iStack_1c) goto LAB_2c010704;
  iStack_1c = *DAT_2c00fa38;
  iVar13 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    iVar13 = getBasePriority();
  }
  if (iVar13 != 0x40) {
    *DAT_2c00fa3c = 0x2c00f870;
    puVar3[1] = unaff_lr;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x40);
  }
  cVar1 = *DAT_2c00fa40;
  FUN_2c01304c(&uStack_28,&uStack_2a,auStack_22,DAT_2c00fa40);
  FUN_2c00f6a8(6,auStack_24,(int)&uStack_28 + 2);
  FUN_2c008e4c(0x46,&uStack_1e);
  pbVar4 = DAT_2c00fa50;
  if (cVar1 == '\x03') {
    uVar6 = (uint)uStack_2a;
    iVar10 = (uint)(byte)uStack_1e - (int)*DAT_2c00fa44;
    uVar11 = UnsignedSaturate(iVar10,8);
    UnsignedDoesSaturate(iVar10,8);
    uVar11 = uVar11 & 0xffff;
    if (uVar11 < uVar6) {
      do {
        uVar11 = uVar11 + 1 & 0xffff;
        FUN_2c00d1a0(uVar11,*pbVar4);
      } while (uVar11 < uStack_2a);
      FUN_2c00f404(6,*DAT_2c00fa4c,uStack_28 & 0xffff);
      goto LAB_2c00f9e4;
    }
    if (uVar6 == uVar11) {
      iVar10 = (uint)(uStack_1e >> 8) - (int)*DAT_2c00fa48;
      uVar9 = UnsignedSaturate(iVar10,8);
      UnsignedDoesSaturate(iVar10,8);
      uVar11 = (uint)*DAT_2c00fa50;
      if (uVar11 != (uVar9 & 0xffff)) goto LAB_2c00fa18;
    }
    else {
      uVar11 = (uint)*DAT_2c00fa50;
LAB_2c00fa18:
      FUN_2c00d1a0(uVar6,uVar11);
    }
    FUN_2c00f404(6,*DAT_2c00fa4c,uStack_28 & 0xffff);
LAB_2c00f906:
    if (*DAT_2c00fa54 != '\x02') goto LAB_2c00f912;
LAB_2c00f9f6:
    if (((uStack_2a < 0x54) && (uStack_2a < 0x4c)) && (uStack_2a < 0x44)) goto LAB_2c00f956;
  }
  else {
    uVar9 = uStack_28 & 0xffff;
    uVar11 = uStack_28 >> 0x10;
    uVar12 = (ushort)*DAT_2c00fa4c;
    FUN_2c00f6a8(6,&uStack_1e,&uStack_20);
    uVar6 = (uint)uStack_20;
    if (uVar6 < uVar9) {
      do {
        uVar7 = uVar9;
        if (uVar6 + 2 < uVar9) {
          uVar7 = uVar6 + 2 & 0xffff;
        }
        uStack_20 = (ushort)uVar7;
        FUN_2c00f404(6,uVar12);
        uVar6 = (uint)uStack_20;
      } while (uVar6 < uVar9);
    }
    else if ((uVar9 != uVar6) || (uStack_1e != uVar12)) {
      FUN_2c00f404(6,uVar12,uVar9);
    }
    FUN_2c00d1a0(uStack_2a,*DAT_2c00fa50);
    if (uVar9 <= uVar11) goto LAB_2c00f906;
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
  if (iVar13 == 0) {
    *DAT_2c00fa3c = 0xffffffff;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(iVar13);
  }
  if (*DAT_2c00fa38 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c0084a8();
  }
  return;
}


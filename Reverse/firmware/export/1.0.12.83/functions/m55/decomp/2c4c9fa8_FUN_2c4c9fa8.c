/* FUN_2c4c9fa8 @ 0x2c4c9fa8 */

void FUN_2c4c9fa8(void)

{
  bool bVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 unaff_lr;
  undefined4 uVar11;
  
  FUN_2c6741e8(0x41,DAT_2c4ca2a0,DAT_2c4ca29c);
  piVar4 = DAT_2c4ca2a8;
  if (*DAT_2c4ca2a4 == 0) {
    FUN_2c6741e8(0x41,DAT_2c4ca2e8,DAT_2c4ca29c);
    return;
  }
  if (*DAT_2c4ca2a8 << 0x1f < 0) {
    FUN_2c4c9efc(DAT_2c4ca2e4,DAT_2c4ca2e0,*DAT_2c4ca2dc);
    *DAT_2c4ca2c0 = 0x200;
  }
  if (*piVar4 << 0x1e < 0) {
    FUN_2c4c9efc(DAT_2c4ca2d4,DAT_2c4ca2d0,*DAT_2c4ca2cc);
    *DAT_2c4ca2d8 = 0x200;
  }
  iVar10 = DAT_2c4ca2b0;
  pcVar5 = DAT_2c4ca2ac;
  if (*DAT_2c4ca2ac != '\0') {
    *(uint *)(DAT_2c4ca2b0 + 600) = *(uint *)(DAT_2c4ca2b0 + 600) & 0xfffffffd;
    puVar2 = DAT_2c4ca330;
    if (*piVar4 << 0x1f < 0) {
      *(uint *)(iVar10 + 600) = *(uint *)(iVar10 + 600) & 0xfffffff7 | (uint)*DAT_2c4ca330;
      uVar11 = DAT_2c4ca334;
      *(uint *)(iVar10 + 600) = (puVar2[1] & 0x3f) << 0xb | *(uint *)(iVar10 + 600) & 0xfffe07ff;
      FUN_2c4c9eb8(uVar11);
    }
    puVar2 = DAT_2c4ca2d4;
    iVar10 = DAT_2c4ca2b0;
    if (*piVar4 << 0x1e < 0) {
      *(uint *)(DAT_2c4ca2b0 + 600) =
           *(uint *)(DAT_2c4ca2b0 + 600) & 0xffffffef | (uint)*DAT_2c4ca2d4;
      uVar11 = DAT_2c4ca2fc;
      *(uint *)(iVar10 + 600) = (puVar2[1] & 0x3f) << 0x11 | *(uint *)(iVar10 + 600) & 0xff81ffff;
      FUN_2c4c9eb8(uVar11);
    }
    *(uint *)(DAT_2c4ca2b0 + 600) = *(uint *)(DAT_2c4ca2b0 + 600) | 2;
    puVar7 = DAT_2c4ca2c8;
    if (*piVar4 << 0x1f < 0) {
      uVar11 = VectorSignedFixedToFloat(*DAT_2c4ca2c0,0x20,9);
      uVar11 = VectorFloatToSignedFixed(uVar11,0x20,0x1b);
      *DAT_2c4ca2c4 = uVar11;
      *puVar7 = 0;
    }
    puVar7 = DAT_2c4ca2f0;
    if (*piVar4 << 0x1e < 0) {
      uVar11 = VectorSignedFixedToFloat(*DAT_2c4ca2d8,0x20,9);
      uVar11 = VectorFloatToSignedFixed(uVar11,0x20,0x1b);
      *DAT_2c4ca2ec = uVar11;
      *puVar7 = 0;
    }
    FUN_2c4c9dac();
    *pcVar5 = '\0';
    return;
  }
  *(uint *)(DAT_2c4ca2b0 + 600) = *(uint *)(DAT_2c4ca2b0 + 600) & 0xfffffffb;
  uVar11 = DAT_2c4ca2f4;
  puVar2 = DAT_2c4ca2e4;
  if (*piVar4 << 0x1f < 0) {
    *(uint *)(iVar10 + 600) = *(uint *)(iVar10 + 600) & 0xfffffff7 | (uint)*DAT_2c4ca2e4;
    *(uint *)(iVar10 + 600) = (puVar2[1] & 0x3f) << 0xb | *(uint *)(iVar10 + 600) & 0xfffe07ff;
    FUN_2c4c9eb8(uVar11);
    iVar9 = *piVar4;
    iVar10 = DAT_2c4ca2b0;
    puVar2 = DAT_2c4ca2d4;
    uVar11 = DAT_2c4ca2f8;
  }
  else {
    iVar9 = *piVar4;
    iVar10 = DAT_2c4ca2b0;
    puVar2 = DAT_2c4ca2d4;
    uVar11 = DAT_2c4ca2f8;
  }
  DAT_2c4ca2b0 = iVar10;
  DAT_2c4ca2d4 = puVar2;
  DAT_2c4ca2f8 = uVar11;
  if (iVar9 << 0x1e < 0) {
    *(uint *)(iVar10 + 600) = *(uint *)(iVar10 + 600) & 0xffffffef | (uint)*puVar2;
    *(uint *)(iVar10 + 600) = (puVar2[1] & 0x3f) << 0x11 | *(uint *)(iVar10 + 600) & 0xff81ffff;
    FUN_2c4c9eb8(uVar11);
  }
  *(uint *)(DAT_2c4ca2b0 + 600) = *(uint *)(DAT_2c4ca2b0 + 600) | 4;
  puVar7 = DAT_2c4ca2c8;
  if (*piVar4 << 0x1f < 0) {
    *DAT_2c4ca2c4 = 0;
    uVar11 = VectorSignedFixedToFloat(*DAT_2c4ca2c0,0x20,9);
    uVar11 = VectorFloatToSignedFixed(uVar11,0x20,0x1b);
    *puVar7 = uVar11;
    iVar10 = *piVar4;
    puVar3 = DAT_2c4ca2f0;
  }
  else {
    iVar10 = *piVar4;
    puVar3 = DAT_2c4ca2f0;
  }
  DAT_2c4ca2f0 = puVar3;
  if (iVar10 << 0x1e < 0) {
    *DAT_2c4ca2ec = 0;
    uVar11 = VectorSignedFixedToFloat(*DAT_2c4ca2d8,0x20,9);
    uVar11 = VectorFloatToSignedFixed(uVar11,0x20,0x1b);
    *puVar3 = uVar11;
  }
  FUN_2c6741e8(0x43,DAT_2c4ca2b4,DAT_2c4ca2b8,*puVar7,*puVar3);
  puVar6 = DAT_2c4ca2bc;
  uVar11 = extraout_r1;
  if (*piVar4 << 0x1f < 0) {
    iVar10 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar10 = getBasePriority();
    }
    if (iVar10 != 0x40) {
      *DAT_2c4ca2bc = 0x2c4ca04c;
      puVar6[1] = unaff_lr;
    }
    iVar9 = DAT_2c4ca2b0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    *(uint *)(DAT_2c4ca2b0 + 0x25c) = *(uint *)(DAT_2c4ca2b0 + 0x25c) & 0xfffeffff;
    *(undefined4 *)(iVar9 + 0x2e0) = 0x14;
    *(undefined4 *)(iVar9 + 0x2e8) = *puVar7;
    FUN_2c673b08(2);
    *(uint *)(iVar9 + 0x25c) = *(uint *)(iVar9 + 0x25c) | 0x10000;
    if (iVar10 == 0) {
      *DAT_2c4ca2bc = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    uVar11 = extraout_r1_00;
    if (bVar1) {
      setBasePriority(iVar10);
    }
  }
  puVar7 = DAT_2c4ca2bc;
  if (*piVar4 << 0x1e < 0) {
    iVar10 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar10 = getBasePriority();
    }
    if (iVar10 != 0x40) {
      *DAT_2c4ca2bc = 0x2c4ca0b0;
      puVar7[1] = unaff_lr;
    }
    iVar9 = DAT_2c4ca2b0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    *(uint *)(DAT_2c4ca2b0 + 0x25c) = *(uint *)(DAT_2c4ca2b0 + 0x25c) & 0xfffdffff;
    uVar8 = *(undefined4 *)(iVar9 + 0x2e4);
    *(undefined4 *)(iVar9 + 0x2e4) = 0x14;
    *(undefined4 *)(iVar9 + 0x2ec) = *puVar3;
    FUN_2c673b08(2,uVar11,uVar8);
    *(uint *)(iVar9 + 0x25c) = *(uint *)(iVar9 + 0x25c) | 0x20000;
    if (iVar10 == 0) {
      *DAT_2c4ca2bc = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar10);
    }
  }
  *pcVar5 = '\x01';
  return;
}


/* FUN_2c010374 @ 0x2c010374 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c010374(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 unaff_lr;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ushort uStack_36;
  int iStack_34;
  
  uVar16 = (uint)(param_2 * param_1) >> 2;
  iStack_34 = *DAT_2c01059c;
  uVar5 = FUN_2c013ab0();
  fVar22 = (float)VectorSignedToFloat(uVar16,(byte)(in_fpscr >> 0x16) & 3);
  fVar19 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
  uVar5 = FUN_2c013694();
  puVar2 = DAT_2c0105ac;
  fVar18 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
  fVar22 = (((1.0 / fVar18) * (fVar22 / fVar19)) / fRam2c0105a0) * fVar22;
  iVar20 = VectorFloatToUnsigned(fVar22 * fRam2c0105a4,3);
  iVar21 = VectorFloatToUnsigned(fVar22 * fRam2c0105a8,3);
  uVar15 = uVar16 - iVar20;
  uVar16 = iVar21 + uVar16;
  iVar20 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar20 = getBasePriority();
  }
  if (iVar20 != 0x40) {
    *DAT_2c0105ac = 0x2c010404;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  uVar6 = func_0x2c009cb8();
  FUN_2c007098(0xb);
  func_0x2c007fc4(uVar6,0x13);
  FUN_2c0131b4(0x13);
  uVar17 = 0;
  func_0x2c013e3c(param_1,param_2);
  uVar4 = _DAT_2c0105c0;
  uVar3 = DAT_2c0105b8;
  uVar5 = DAT_2c0105b4;
  iVar21 = 0;
  FUN_2c00708c(4);
  uVar11 = 10;
  uVar13 = 0;
  do {
    FUN_2c007098(0xb);
    FUN_2c008e4c(0x20c4,&uStack_36);
    uStack_36 = uStack_36 & 0xfc1f | (ushort)((uVar11 & 0x7ff) << 5);
    FUN_2c008f74(0x20c4);
    FUN_2c007098(0x13);
    uVar7 = FUN_2c0098a8(0x32,1);
    if ((uVar15 < uVar7) && (uVar7 < uVar16)) {
      uVar14 = uVar13 + 1;
      if (uVar14 == 0) {
        uVar8 = 0x2d;
      }
      else {
        uVar8 = 0x2b;
      }
    }
    else if (uVar17 < uVar13) {
      iVar21 = uVar11 - 1;
      uVar14 = 0;
      uVar8 = 0x2d;
      uVar17 = uVar13;
    }
    else {
      uVar14 = 0;
      uVar8 = 0x2d;
    }
    uVar10 = uVar11 + 1;
    uVar23 = uVar11;
    uVar24 = uVar15;
    uVar25 = uVar16;
    FUN_2c00b820(4,0xe1a,uVar3,uVar5,uVar4,uVar8,uVar11,uVar7,uVar15,uVar16,iVar21);
    uVar11 = uVar10;
    uVar13 = uVar14;
  } while (uVar10 != 0x20);
  if (uVar17 < uVar14) {
    iVar21 = 0x1f;
    iVar12 = 0x20;
  }
  else {
    if (uVar17 == 0) {
      uVar9 = 0x340;
      FUN_2c00b820(4,0xe29,DAT_2c0105b8,DAT_2c0105b4,DAT_2c0105b0,uVar8,uVar23,uVar7,uVar24,uVar25);
      goto LAB_2c0104f2;
    }
    iVar12 = iVar21 + 1;
    uVar14 = uVar17;
  }
  uVar16 = (iVar12 - uVar14) + iVar21 >> 1;
  FUN_2c00b820(4,0xe26,DAT_2c0105b8,DAT_2c0105b4,DAT_2c0105bc,iVar12 - uVar14,iVar21,uVar14,uVar16,
               uVar16);
  uVar9 = (ushort)((uVar16 & 0x1f) << 5);
LAB_2c0104f2:
  FUN_2c008e4c(0x20c4,&uStack_36);
  uStack_36 = uStack_36 & 0xfc1f | uVar9;
  FUN_2c008f74(0x20c4);
  FUN_2c00708c(0);
  FUN_2c007098(uVar6);
  FUN_2c007f9c(0x13,uVar6);
  FUN_2c0131b4(uVar6);
  if (iVar20 == 0) {
    *DAT_2c0105ac = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar20);
  }
  if (*DAT_2c01059c != iStack_34) {
                    /* WARNING: Subroutine does not return */
    FUN_2c0084a8();
  }
  return;
}


/* FUN_2c020be4 @ 0x2c020be4 */

undefined4 FUN_2c020be4(ushort *param_1,int param_2,int param_3,uint param_4)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int extraout_r2;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint extraout_r3;
  int iVar11;
  short *unaff_r5;
  int iVar12;
  short *unaff_r6;
  int unaff_r7;
  short *psVar13;
  uint unaff_r8;
  undefined2 *unaff_r9;
  uint unaff_r11;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 extraout_r12;
  undefined4 uVar17;
  undefined8 uVar18;
  short *local_50;
  short local_4c;
  short local_48;
  short local_44;
  short sStack_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  local_2c = *DAT_2c020c2c;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  if (0 < (int)param_4) {
    if ((param_2 == 0) || (uVar8 = (uint)(param_3 == 0), param_3 == 0)) {
      uVar17 = 0x2c0210ff;
      uVar18 = FUN_2c00f09c(DAT_2c021140);
      iVar6 = extraout_r2;
      uVar10 = extraout_r3;
      uVar16 = extraout_r12;
      goto LAB_2c0210fe;
    }
    unaff_r9 = (undefined2 *)(param_3 + -2);
    local_50 = (short *)(param_2 + -2);
    unaff_r11 = DAT_2c020c30;
LAB_2c020c34:
    iVar6 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 10);
    iVar9 = iVar6 * 0x4d00 - *(int *)(param_1 + 0xc);
    iVar6 = iVar9 - iVar6;
    local_50 = local_50 + 1;
    iVar11 = (int)*local_50;
    iVar14 = *(int *)(param_1 + 8) - iVar11;
    iVar12 = iVar14 * 0x5400 - *(int *)(param_1 + 8);
    iVar15 = iVar6 - iVar11;
    iVar6 = iVar15 * 0x1800 - iVar6;
    iVar14 = (iVar12 - iVar14) + (iVar6 - iVar15);
    if (iVar14 < 0) {
      iVar14 = iVar14 + 1;
    }
    uVar16 = SignedSaturate(iVar14 >> 1,0xf);
    SignedDoesSaturate(iVar14 >> 1,0xf);
    iVar6 = iVar9 - iVar6;
    iVar9 = iVar6 * 0x4d00 - iVar9;
    iVar6 = iVar9 - iVar6;
    iVar15 = iVar6 - iVar11;
    iVar14 = (iVar12 - iVar11) * 0x5400 - iVar12;
    iVar6 = iVar15 * 0x1800 - iVar6;
    iVar11 = (iVar14 - (iVar12 - iVar11)) + (iVar6 - iVar15);
    if (iVar11 < 0) {
      iVar11 = iVar11 + 1;
    }
    uVar17 = SignedSaturate(iVar11 >> 1,0xf);
    SignedDoesSaturate(iVar11 >> 1,0xf);
    *(int *)(param_1 + 0xc) = iVar9;
    iVar9 = *(int *)(param_1 + 0x12) - *(int *)(param_1 + 0x10);
    iVar11 = (int)(short)uVar16;
    *(int *)(param_1 + 8) = iVar14;
    *(int *)(param_1 + 10) = iVar6;
    iVar14 = iVar9 * 0x6000 - *(int *)(param_1 + 0x12);
    iVar9 = iVar14 - iVar9;
    iVar6 = iVar9 - iVar11;
    iVar9 = iVar6 - iVar9;
    iVar12 = *(int *)(param_1 + 0xe) - iVar11;
    iVar15 = iVar12 * 0x6000 - *(int *)(param_1 + 0xe);
    iVar6 = (iVar15 - iVar12) + (iVar9 - iVar6);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 1;
    }
    uVar16 = SignedSaturate(iVar6 >> 1,0xf);
    SignedDoesSaturate(iVar6 >> 1,0xf);
    iVar9 = iVar14 - iVar9;
    iVar14 = iVar9 * 0x6000 - iVar14;
    iVar9 = iVar14 - iVar9;
    iVar12 = iVar9 - iVar11;
    iVar9 = iVar12 - iVar9;
    iVar6 = (iVar15 - iVar11) * 0x6000 - iVar15;
    iVar11 = (iVar6 - (iVar15 - iVar11)) + (iVar9 - iVar12);
    if (iVar11 < 0) {
      iVar11 = iVar11 + 1;
    }
    uVar2 = SignedSaturate(iVar11 >> 1,0xf);
    SignedDoesSaturate(iVar11 >> 1,0xf);
    iVar9 = iVar14 - iVar9;
    iVar11 = (int)(short)uVar17;
    iVar14 = iVar9 * 0x6000 - iVar14;
    iVar9 = iVar14 - iVar9;
    iVar12 = iVar9 - iVar11;
    iVar15 = (iVar6 - iVar11) * 0x6000 - iVar6;
    iVar9 = iVar12 - iVar9;
    iVar6 = (iVar15 - (iVar6 - iVar11)) + (iVar9 - iVar12);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 1;
    }
    uVar17 = SignedSaturate(iVar6 >> 1,0xf);
    SignedDoesSaturate(iVar6 >> 1,0xf);
    iVar9 = iVar14 - iVar9;
    iVar14 = iVar9 * 0x6000 - iVar14;
    iVar9 = iVar14 - iVar9;
    iVar6 = iVar9 - iVar11;
    iVar9 = iVar6 - iVar9;
    iVar12 = (iVar15 - iVar11) * 0x6000 - iVar15;
    iVar6 = (iVar12 - (iVar15 - iVar11)) + (iVar9 - iVar6);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 1;
    }
    uVar3 = SignedSaturate(iVar6 >> 1,0xf);
    SignedDoesSaturate(iVar6 >> 1,0xf);
    local_4c = (short)uVar16;
    iVar15 = (int)local_4c;
    *(int *)(param_1 + 0x12) = iVar14;
    *(int *)(param_1 + 0xe) = iVar12;
    *(int *)(param_1 + 0x10) = iVar9;
    iVar6 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x16);
    iVar9 = iVar6 - *(int *)(param_1 + 0x18);
    iVar14 = *(int *)(param_1 + 0x14) - iVar15;
    iVar6 = iVar9 - iVar6;
    iVar11 = iVar14 - *(int *)(param_1 + 0x14);
    iVar12 = iVar6 - iVar15;
    iVar6 = iVar12 - iVar6;
    iVar12 = (iVar6 - iVar12) + (iVar11 - iVar14);
    if (iVar12 < 0) {
      iVar12 = iVar12 + 1;
    }
    uVar16 = SignedSaturate(iVar12 >> 1,0xf);
    SignedDoesSaturate(iVar12 >> 1,0xf);
    iVar6 = iVar9 - iVar6;
    iVar9 = iVar6 - iVar9;
    iVar12 = (iVar11 - iVar15) - iVar11;
    iVar6 = iVar9 - iVar6;
    iVar14 = iVar6 - iVar15;
    iVar6 = iVar14 - iVar6;
    iVar11 = (iVar12 - (iVar11 - iVar15)) + (iVar6 - iVar14);
    if (iVar11 < 0) {
      iVar11 = iVar11 + 1;
    }
    uVar4 = SignedSaturate(iVar11 >> 1,0xf);
    SignedDoesSaturate(iVar11 >> 1,0xf);
    iVar6 = iVar9 - iVar6;
    local_48 = (short)uVar2;
    iVar14 = (int)local_48;
    local_3c = CONCAT22((short)uVar4,(short)uVar16);
    iVar9 = iVar6 - iVar9;
    iVar6 = iVar9 - iVar6;
    iVar11 = (iVar12 - iVar14) - iVar12;
    iVar15 = iVar6 - iVar14;
    iVar6 = iVar15 - iVar6;
    iVar12 = (iVar11 - (iVar12 - iVar14)) + (iVar6 - iVar15);
    if (iVar12 < 0) {
      iVar12 = iVar12 + 1;
    }
    uVar16 = SignedSaturate(iVar12 >> 1,0xf);
    SignedDoesSaturate(iVar12 >> 1,0xf);
    iVar6 = iVar9 - iVar6;
    iVar9 = iVar6 - iVar9;
    iVar12 = (iVar11 - iVar14) - iVar11;
    iVar6 = iVar9 - iVar6;
    iVar15 = iVar6 - iVar14;
    iVar6 = iVar15 - iVar6;
    iVar11 = (iVar12 - (iVar11 - iVar14)) + (iVar6 - iVar15);
    if (iVar11 < 0) {
      iVar11 = iVar11 + 1;
    }
    uVar2 = SignedSaturate(iVar11 >> 1,0xf);
    SignedDoesSaturate(iVar11 >> 1,0xf);
    iVar6 = iVar9 - iVar6;
    iVar14 = (int)(short)uVar17;
    local_38 = CONCAT22((short)uVar2,(short)uVar16);
    iVar9 = iVar6 - iVar9;
    iVar6 = iVar9 - iVar6;
    iVar11 = (iVar12 - iVar14) - iVar12;
    iVar15 = iVar6 - iVar14;
    iVar6 = iVar15 - iVar6;
    iVar12 = (iVar11 - (iVar12 - iVar14)) + (iVar6 - iVar15);
    if (iVar12 < 0) {
      iVar12 = iVar12 + 1;
    }
    uVar16 = SignedSaturate(iVar12 >> 1,0xf);
    SignedDoesSaturate(iVar12 >> 1,0xf);
    iVar6 = iVar9 - iVar6;
    iVar9 = iVar6 - iVar9;
    iVar12 = (iVar11 - iVar14) - iVar11;
    iVar6 = iVar9 - iVar6;
    iVar15 = iVar6 - iVar14;
    iVar6 = iVar15 - iVar6;
    iVar11 = (iVar12 - (iVar11 - iVar14)) + (iVar6 - iVar15);
    if (iVar11 < 0) {
      iVar11 = iVar11 + 1;
    }
    uVar17 = SignedSaturate(iVar11 >> 1,0xf);
    SignedDoesSaturate(iVar11 >> 1,0xf);
    iVar6 = iVar9 - iVar6;
    local_44 = (short)uVar3;
    iVar14 = (int)local_44;
    local_34 = CONCAT22((short)uVar17,(short)uVar16);
    iVar9 = iVar6 - iVar9;
    iVar6 = iVar9 - iVar6;
    iVar11 = (iVar12 - iVar14) - iVar12;
    iVar15 = iVar6 - iVar14;
    iVar6 = iVar15 - iVar6;
    iVar12 = (iVar11 - (iVar12 - iVar14)) + (iVar6 - iVar15);
    if (iVar12 < 0) {
      iVar12 = iVar12 + 1;
    }
    uVar16 = SignedSaturate(iVar12 >> 1,0xf);
    SignedDoesSaturate(iVar12 >> 1,0xf);
    iVar6 = iVar9 - iVar6;
    iVar9 = iVar6 - iVar9;
    iVar12 = (iVar11 - iVar14) - iVar11;
    iVar6 = iVar9 - iVar6;
    iVar15 = iVar6 - iVar14;
    iVar6 = iVar15 - iVar6;
    iVar11 = (iVar12 - (iVar11 - iVar14)) + (iVar6 - iVar15);
    if (iVar11 < 0) {
      iVar11 = iVar11 + 1;
    }
    uVar17 = SignedSaturate(iVar11 >> 1,0xf);
    SignedDoesSaturate(iVar11 >> 1,0xf);
    *(int *)(param_1 + 0x14) = iVar12;
    *(int *)(param_1 + 0x16) = iVar6;
    uVar5 = 0;
    local_30 = CONCAT22((short)uVar17,(short)uVar16);
    *(int *)(param_1 + 0x18) = iVar9;
    psVar13 = &sStack_3e;
    uVar10 = (uint)*param_1;
    iVar12 = 0;
    iVar6 = *(int *)(param_1 + 6);
    iVar11 = *(int *)(param_1 + 2);
    iVar9 = *(int *)(param_1 + 4);
    do {
      psVar13 = psVar13 + 1;
      sVar1 = *psVar13;
      uVar5 = uVar5 >> 1;
      uVar10 = (uVar10 & 0x7fff) << 1;
      if (sVar1 * 0x400 < iVar11) {
        uVar10 = uVar10 | 1;
        uVar5 = uVar5 | unaff_r11 & 0xffff;
      }
      uVar7 = (ushort)uVar10;
      if (((uVar10 & 0xf) == 0) || ((uVar10 & 0xf) == 0xf)) {
        iVar9 = iVar9 + 0x2800;
        if (iVar9 < 0x140001) goto LAB_2c02100a;
        iVar9 = 0x140000;
        param_1[4] = 0;
        param_1[5] = 0x14;
      }
      else {
        iVar9 = iVar9 - (iVar9 >> 10);
        if (iVar9 < 0x2800) {
          iVar9 = 0x2800;
        }
LAB_2c02100a:
        *(int *)(param_1 + 4) = iVar9;
      }
      if (iVar6 != 0) {
        if (sVar1 * 0x400 < iVar11) {
          iVar11 = iVar11 - iVar9;
          iVar6 = DAT_2c021138;
          if (-0x2000001 < iVar11) goto LAB_2c0210e8;
        }
        else {
          iVar11 = iVar11 + iVar9;
          iVar6 = DAT_2c021134;
          if (iVar11 <= DAT_2c021130) {
LAB_2c0210e8:
            iVar6 = iVar11 - (iVar11 >> 5);
          }
        }
        *(int *)(param_1 + 2) = iVar6;
        if (iVar12 != 7) {
          unaff_r5 = (short *)((int)&local_30 + 2);
          uVar16 = 0x140000;
          uVar17 = 0x2800;
          unaff_r6 = (short *)((int)&local_3c + iVar12 * 2);
          goto LAB_2c02108a;
        }
        break;
      }
      iVar12 = iVar12 + 1;
      param_1[2] = 0;
      param_1[3] = 0;
      iVar6 = 1;
      param_1[6] = 1;
      param_1[7] = 0;
      iVar11 = 0;
    } while (iVar12 != 8);
    goto LAB_2c021022;
  }
  FUN_2c00f09c(DAT_2c02113c);
LAB_2c0210f4:
                    /* WARNING: Subroutine does not return */
  FUN_2c00b2e8();
  while (*(int *)(param_1 + 2) = iVar6, unaff_r6 != unaff_r5) {
LAB_2c02108a:
    unaff_r6 = unaff_r6 + 1;
    uVar5 = uVar5 >> 1;
    uVar10 = (uVar10 & 0x7fff) << 1;
    unaff_r7 = (int)*unaff_r6 << 10;
    if (*unaff_r6 * 0x400 < iVar6) {
      uVar10 = uVar10 | 1;
      uVar5 = (uVar5 | unaff_r11) & 0xffff;
    }
    unaff_r8 = uVar8;
    uVar18 = CONCAT44(iVar9,uVar5);
    if (((uVar10 & 0xf) == 0xf) || (uVar18 = CONCAT44(iVar9,uVar5), (uVar10 & 0xf) == 0)) {
LAB_2c0210fe:
      uVar5 = (uint)uVar18;
      iVar9 = (int)((ulonglong)uVar18 >> 0x20) + 0x2800;
      if (iVar9 < 0x140001) goto LAB_2c021112;
      iVar9 = 0x140000;
      *(undefined4 *)(param_1 + 4) = uVar16;
      uVar8 = unaff_r8;
    }
    else {
      iVar9 = iVar9 - (iVar9 >> 10);
      if (iVar9 < 0x2800) {
        iVar9 = 0x2800;
        *(undefined4 *)(param_1 + 4) = uVar17;
      }
      else {
LAB_2c021112:
        *(int *)(param_1 + 4) = iVar9;
        uVar8 = unaff_r8;
      }
    }
    uVar7 = (ushort)uVar10;
    if (unaff_r7 < iVar6) {
      iVar11 = iVar6 - iVar9;
      iVar6 = DAT_2c021138;
      if (-0x2000001 < iVar11) goto LAB_2c021124;
    }
    else {
      iVar11 = iVar6 + iVar9;
      iVar6 = DAT_2c021134;
      if (iVar11 <= DAT_2c021130) {
LAB_2c021124:
        iVar6 = iVar11 - (iVar11 >> 5);
      }
    }
  }
LAB_2c021022:
  *param_1 = uVar7;
  uVar8 = uVar8 + 1;
  unaff_r9 = unaff_r9 + 1;
  *unaff_r9 = (short)uVar5;
  if (uVar8 == param_4) goto code_r0x2c021036;
  goto LAB_2c020c34;
code_r0x2c021036:
  if (*DAT_2c02112c == local_2c) {
    return 1;
  }
  goto LAB_2c0210f4;
}


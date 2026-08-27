/* FUN_14015f88 @ 0x14015f88 */

undefined4 FUN_14015f88(ushort *param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int extraout_r2;
  int iVar8;
  uint uVar9;
  uint extraout_r3;
  uint uVar10;
  uint unaff_r5;
  int unaff_r6;
  int iVar11;
  short *unaff_r7;
  int iVar12;
  short *unaff_r8;
  uint unaff_r9;
  int unaff_r11;
  int iVar13;
  short *psVar14;
  int extraout_r12;
  int iVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined2 *local_4c;
  short *local_44;
  short sStack_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  local_2c = *DAT_14015fc8;
  uVar10 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  if (param_4 < 1) {
    FUN_1401d010(DAT_140164c8);
    goto LAB_1401647e;
  }
  if (param_2 == 0) goto LAB_14016482;
  if (param_3 == 0) goto LAB_14016482;
  unaff_r11 = 0;
  local_44 = (short *)(param_2 + -2);
  local_4c = (undefined2 *)(param_3 + -2);
  unaff_r9 = DAT_14015fcc;
  do {
    iVar7 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 10);
    lVar2 = (longlong)iVar7 * 0x4d00;
    local_44 = local_44 + 1;
    iVar11 = (int)*local_44;
    iVar8 = *(int *)(param_1 + 8) - iVar11;
    iVar12 = ((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12) -
             *(int *)(param_1 + 0xc);
    lVar2 = (longlong)iVar8 * 0x5400;
    iVar7 = iVar12 - iVar7;
    iVar15 = iVar7 - iVar11;
    iVar13 = ((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12) - *(int *)(param_1 + 8);
    lVar2 = (longlong)iVar15 * 0x1800;
    iVar7 = ((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12) - iVar7;
    iVar8 = ((iVar13 - iVar8) + (iVar7 - iVar15)) / 2;
    uVar16 = SignedSaturate(iVar8,0xf);
    SignedDoesSaturate(iVar8,0xf);
    lVar2 = (longlong)(iVar13 - iVar11) * 0x5400;
    iVar7 = iVar12 - iVar7;
    iVar15 = ((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12) - iVar13;
    lVar2 = (longlong)iVar7 * 0x4d00;
    iVar12 = ((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12) - iVar12;
    iVar7 = iVar12 - iVar7;
    iVar8 = iVar7 - iVar11;
    lVar2 = (longlong)iVar8 * 0x1800;
    iVar7 = ((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12) - iVar7;
    iVar8 = ((iVar15 - (iVar13 - iVar11)) + (iVar7 - iVar8)) / 2;
    uVar3 = SignedSaturate(iVar8,0xf);
    SignedDoesSaturate(iVar8,0xf);
    *(int *)(param_1 + 8) = iVar15;
    *(int *)(param_1 + 10) = iVar7;
    iVar15 = *(int *)(param_1 + 0x12) - *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0xc) = iVar12;
    lVar2 = (longlong)iVar15 * 0x6000;
    iVar11 = ((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12) -
             *(int *)(param_1 + 0x12);
    iVar7 = (int)(short)uVar16;
    iVar15 = iVar11 - iVar15;
    uVar10 = iVar15 - iVar7;
    iVar8 = *(int *)(param_1 + 0xe) - iVar7;
    iVar15 = ((uVar10 & 0x7ffff) >> 1 | (((int)uVar10 >> 0x1f) << 0xd | uVar10 >> 0x13) << 0x12) -
             iVar15;
    lVar2 = (longlong)iVar8 * 0x6000;
    iVar12 = ((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12) -
             *(int *)(param_1 + 0xe);
    iVar8 = (int)((iVar15 - uVar10) + (iVar12 - iVar8)) / 2;
    uVar16 = SignedSaturate(iVar8,0xf);
    SignedDoesSaturate(iVar8,0xf);
    iVar15 = iVar11 - iVar15;
    lVar2 = (longlong)iVar15 * 0x6000;
    iVar11 = ((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12) - iVar11;
    iVar15 = iVar11 - iVar15;
    uVar10 = iVar15 - iVar7;
    iVar15 = ((uVar10 & 0x7ffff) >> 1 | (((int)uVar10 >> 0x1f) << 0xd | uVar10 >> 0x13) << 0x12) -
             iVar15;
    lVar2 = (longlong)(iVar12 - iVar7) * 0x6000;
    iVar13 = ((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12) - iVar12;
    iVar8 = (int)((iVar15 - uVar10) + (iVar13 - (iVar12 - iVar7))) / 2;
    uVar4 = SignedSaturate(iVar8,0xf);
    SignedDoesSaturate(iVar8,0xf);
    iVar15 = iVar11 - iVar15;
    lVar2 = (longlong)iVar15 * 0x6000;
    iVar11 = ((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12) - iVar11;
    iVar7 = (int)(short)uVar3;
    iVar15 = iVar11 - iVar15;
    uVar10 = iVar15 - iVar7;
    iVar15 = ((uVar10 & 0x7ffff) >> 1 | (((int)uVar10 >> 0x1f) << 0xd | uVar10 >> 0x13) << 0x12) -
             iVar15;
    lVar2 = (longlong)(iVar13 - iVar7) * 0x6000;
    iVar12 = ((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12) - iVar13;
    iVar8 = (int)((iVar12 - (iVar13 - iVar7)) + (iVar15 - uVar10)) / 2;
    uVar3 = SignedSaturate(iVar8,0xf);
    SignedDoesSaturate(iVar8,0xf);
    iVar15 = iVar11 - iVar15;
    lVar2 = (longlong)iVar15 * 0x6000;
    iVar11 = ((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12) - iVar11;
    lVar2 = (longlong)(iVar12 - iVar7) * 0x6000;
    iVar15 = iVar11 - iVar15;
    uVar10 = iVar15 - iVar7;
    iVar8 = ((uint)lVar2 >> 0xe | (int)((ulonglong)lVar2 >> 0x20) << 0x12) - iVar12;
    iVar15 = ((uVar10 & 0x7ffff) >> 1 | (((int)uVar10 >> 0x1f) << 0xd | uVar10 >> 0x13) << 0x12) -
             iVar15;
    iVar7 = (int)((iVar8 - (iVar12 - iVar7)) + (iVar15 - uVar10)) / 2;
    uVar5 = SignedSaturate(iVar7,0xf);
    SignedDoesSaturate(iVar7,0xf);
    iVar12 = (int)(short)uVar16;
    uVar10 = -iVar12 - *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0xe) = iVar8;
    *(int *)(param_1 + 0x10) = iVar15;
    iVar7 = ((uVar10 & 0x7ffff) >> 1 | (((int)uVar10 >> 0x1f) << 0xd | uVar10 >> 0x13) << 0x12) +
            *(int *)(param_1 + 0x18);
    iVar8 = (int)((iVar7 - uVar10) - *(int *)(param_1 + 0x14)) / 2;
    *(int *)(param_1 + 0x12) = iVar11;
    uVar16 = SignedSaturate(iVar8,0xf);
    SignedDoesSaturate(iVar8,0xf);
    uVar10 = *(int *)(param_1 + 0x16) - iVar12;
    iVar15 = ((uVar10 & 0x7ffff) >> 1 | (((int)uVar10 >> 0x1f) << 0xd | uVar10 >> 0x13) << 0x12) -
             *(int *)(param_1 + 0x16);
    iVar8 = (int)((iVar15 - uVar10) + iVar12) / 2;
    uVar6 = SignedSaturate(iVar8,0xf);
    SignedDoesSaturate(iVar8,0xf);
    iVar11 = (int)(short)uVar4;
    local_3c = CONCAT22((short)uVar6,(short)uVar16);
    uVar10 = iVar7 - iVar11;
    iVar7 = ((uVar10 & 0x7ffff) >> 1 | (((int)uVar10 >> 0x1f) << 0xd | uVar10 >> 0x13) << 0x12) -
            iVar7;
    iVar8 = (int)((iVar7 - uVar10) + iVar12) / 2;
    uVar16 = SignedSaturate(iVar8,0xf);
    SignedDoesSaturate(iVar8,0xf);
    uVar10 = iVar15 - iVar11;
    iVar15 = ((uVar10 & 0x7ffff) >> 1 | (((int)uVar10 >> 0x1f) << 0xd | uVar10 >> 0x13) << 0x12) -
             iVar15;
    iVar8 = (int)((iVar15 - uVar10) + iVar11) / 2;
    uVar4 = SignedSaturate(iVar8,0xf);
    SignedDoesSaturate(iVar8,0xf);
    iVar12 = (int)(short)uVar3;
    local_38 = CONCAT22((short)uVar4,(short)uVar16);
    uVar10 = iVar7 - iVar12;
    iVar7 = ((uVar10 & 0x7ffff) >> 1 | (((int)uVar10 >> 0x1f) << 0xd | uVar10 >> 0x13) << 0x12) -
            iVar7;
    iVar8 = (int)((iVar7 - uVar10) + iVar11) / 2;
    uVar16 = SignedSaturate(iVar8,0xf);
    SignedDoesSaturate(iVar8,0xf);
    uVar10 = iVar15 - iVar12;
    iVar15 = ((uVar10 & 0x7ffff) >> 1 | (((int)uVar10 >> 0x1f) << 0xd | uVar10 >> 0x13) << 0x12) -
             iVar15;
    iVar8 = (int)((iVar15 - uVar10) + iVar12) / 2;
    uVar3 = SignedSaturate(iVar8,0xf);
    SignedDoesSaturate(iVar8,0xf);
    iVar11 = (int)(short)uVar5;
    local_34 = CONCAT22((short)uVar3,(short)uVar16);
    uVar10 = iVar7 - iVar11;
    iVar7 = ((uVar10 & 0x7ffff) >> 1 | (((int)uVar10 >> 0x1f) << 0xd | uVar10 >> 0x13) << 0x12) -
            iVar7;
    iVar8 = (int)((iVar7 - uVar10) + iVar12) / 2;
    uVar16 = SignedSaturate(iVar8,0xf);
    SignedDoesSaturate(iVar8,0xf);
    uVar10 = iVar15 - iVar11;
    iVar15 = ((uVar10 & 0x7ffff) >> 1 | (((int)uVar10 >> 0x1f) << 0xd | uVar10 >> 0x13) << 0x12) -
             iVar15;
    iVar8 = (int)((iVar15 - uVar10) + iVar11) / 2;
    uVar3 = SignedSaturate(iVar8,0xf);
    SignedDoesSaturate(iVar8,0xf);
    uVar10 = 0;
    unaff_r8 = (short *)0x1;
    unaff_r7 = (short *)0x0;
    local_30 = CONCAT22((short)uVar3,(short)uVar16);
    uVar9 = (uint)*param_1;
    psVar14 = &sStack_3e;
    *(int *)(param_1 + 0x14) = -iVar11;
    *(int *)(param_1 + 0x16) = iVar15;
    *(int *)(param_1 + 0x18) = -iVar7;
    iVar7 = *(int *)(param_1 + 2);
    iVar8 = *(int *)(param_1 + 4);
    iVar15 = *(int *)(param_1 + 6);
    do {
      unaff_r6 = iVar15;
      psVar14 = psVar14 + 1;
      sVar1 = *psVar14;
      uVar10 = uVar10 >> 1;
      uVar9 = (uVar9 & 0x7fff) << 1;
      if (sVar1 * 0x400 < iVar7) {
        uVar10 = uVar10 | unaff_r9 & 0xffff;
        uVar9 = uVar9 | 1;
      }
      unaff_r5 = uVar9 & 0xf;
      if ((unaff_r5 == 0) || (unaff_r5 == 0xf)) {
        iVar8 = iVar8 + 0x2800;
        if (iVar8 < 0x140001) goto LAB_1401639c;
        iVar8 = 0x140000;
        param_1[4] = 0;
        param_1[5] = 0x14;
      }
      else {
        iVar8 = iVar8 - (iVar8 >> 10);
        if (iVar8 < 0x2800) {
          iVar8 = 0x2800;
        }
LAB_1401639c:
        *(int *)(param_1 + 4) = iVar8;
      }
      if (unaff_r6 != 0) {
        if (sVar1 * 0x400 < iVar7) {
          iVar7 = iVar7 - iVar8;
          iVar15 = DAT_140164c4;
          if (-0x2000001 < iVar7) goto LAB_14016472;
        }
        else {
          iVar7 = iVar7 + iVar8;
          iVar15 = DAT_140164c0;
          unaff_r5 = DAT_140164bc;
          if (iVar7 <= (int)DAT_140164bc) {
LAB_14016472:
            iVar15 = iVar7 - (iVar7 >> 5);
          }
        }
        *(int *)(param_1 + 2) = iVar15;
        if (unaff_r7 != (short *)0x7) {
          unaff_r6 = 0x140000;
          uVar16 = 0x2800;
          unaff_r7 = (short *)((int)&local_3c + (int)unaff_r7 * 2);
          unaff_r8 = (short *)((int)&local_30 + 2);
          goto LAB_1401641a;
        }
        break;
      }
      unaff_r7 = (short *)((int)unaff_r7 + 1);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[6] = 1;
      param_1[7] = 0;
      unaff_r6 = 1;
      iVar7 = 0;
      iVar15 = 1;
    } while (unaff_r7 != (short *)&NMI);
LAB_140163b2:
    *param_1 = (ushort)uVar9;
    unaff_r11 = unaff_r11 + 1;
    local_4c = local_4c + 1;
    *local_4c = (short)uVar10;
    if (unaff_r11 == param_4) {
      if (*DAT_140164b8 == local_2c) {
        return 1;
      }
LAB_1401647e:
      FUN_1401cfd0();
LAB_14016482:
      uVar16 = 0x14016489;
      uVar17 = FUN_1401d010(DAT_140164cc);
      iVar15 = extraout_r2;
      uVar9 = extraout_r3;
      iVar7 = extraout_r12;
      do {
        iVar8 = (int)((ulonglong)uVar17 >> 0x20);
        param_1 = (ushort *)uVar17;
        if (unaff_r5 == 0xf) break;
        iVar8 = iVar8 - (iVar8 >> 10);
        if (0x27ff < iVar8) goto LAB_140164a0;
        iVar8 = 0x2800;
        *(undefined4 *)(param_1 + 4) = uVar16;
LAB_14016450:
        if (iVar7 < iVar15) {
          iVar7 = iVar15 - iVar8;
          iVar15 = DAT_140164c4;
          if (-0x2000001 < iVar7) goto LAB_140164b0;
        }
        else {
          iVar7 = iVar15 + iVar8;
          iVar15 = DAT_140164c0;
          unaff_r5 = DAT_140164bc;
          if (iVar7 <= (int)DAT_140164bc) {
LAB_140164b0:
            iVar15 = iVar7 - (iVar7 >> 5);
          }
        }
        *(int *)(param_1 + 2) = iVar15;
        if (unaff_r7 == unaff_r8) goto LAB_140163b2;
LAB_1401641a:
        uVar17 = CONCAT44(iVar8,param_1);
        unaff_r7 = unaff_r7 + 1;
        uVar10 = uVar10 >> 1;
        uVar9 = (uVar9 & 0x7fff) << 1;
        iVar7 = (int)*unaff_r7 << 10;
        if (*unaff_r7 * 0x400 < iVar15) {
          uVar10 = uVar10 | unaff_r9 & 0xffff;
          uVar9 = uVar9 | 1;
        }
        unaff_r5 = uVar9 & 0xf;
      } while (unaff_r5 != 0);
      param_1 = (ushort *)uVar17;
      iVar8 = (int)((ulonglong)uVar17 >> 0x20) + 0x2800;
      if (iVar8 < 0x140001) {
LAB_140164a0:
        *(int *)(param_1 + 4) = iVar8;
      }
      else {
        iVar8 = 0x140000;
        *(int *)(param_1 + 4) = unaff_r6;
      }
      goto LAB_14016450;
    }
  } while( true );
}


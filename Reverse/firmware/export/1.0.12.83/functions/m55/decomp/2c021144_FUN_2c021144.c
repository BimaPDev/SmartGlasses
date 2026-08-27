/* FUN_2c021144 @ 0x2c021144 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c021144(ushort *param_1,int param_2,int param_3,uint param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  uint uStack_64;
  undefined2 *puStack_60;
  int iStack_5c;
  int iStack_58;
  short sStack_54;
  short sStack_50;
  short sStack_4c;
  short *psStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int aiStack_2c [2];
  
  aiStack_2c[0] = *_DAT_2c0211fc;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  if ((((int)param_4 < 1) || (param_2 == 0)) || (uStack_64 = (uint)(param_3 == 0), param_3 == 0)) {
    uVar18 = FUN_2c00f09c(_DAT_2c0215f4);
  }
  else {
    puStack_60 = (undefined2 *)(param_3 + -2);
    psStack_44 = (short *)(param_2 + -2);
    iStack_5c = *(int *)(param_1 + 6);
    iStack_58 = *(int *)(param_1 + 8);
    iVar9 = *(int *)(param_1 + 10);
    do {
      uVar14 = (uint)*param_1;
      psStack_44 = psStack_44 + 1;
      uVar6 = ((int)*psStack_44 & 0xffffffU) >> 8;
      iVar7 = *(int *)(param_1 + 4);
      iVar10 = *(int *)(param_1 + 2);
      piVar11 = &uStack_3c;
      do {
        uVar13 = uVar6 & 1;
        uVar8 = uVar14 << 1;
        uVar14 = uVar13 | uVar8 & 0xffff;
        uVar8 = uVar13 | uVar8 & 0xf;
        if ((uVar8 == 0) || (uVar8 == 0xf)) {
          iVar7 = iVar7 + 0x2800;
          if (iVar7 < 0x140001) goto LAB_2c0215c6;
          iVar7 = 0x140000;
          param_1[4] = 0;
          param_1[5] = 0x14;
        }
        else {
          iVar7 = iVar7 - (iVar7 >> 10);
          if (iVar7 < 0x2800) {
            iVar7 = 0x2800;
            param_1[4] = 0x2800;
            param_1[5] = 0;
          }
          else {
LAB_2c0215c6:
            *(int *)(param_1 + 4) = iVar7;
          }
        }
        iVar16 = _DAT_2c0215f0;
        iVar15 = _DAT_2c021204;
        if (uVar13 == 0) {
          iVar10 = iVar10 + iVar7;
          if (_DAT_2c021200 < iVar10) {
            *(int *)(param_1 + 2) = _DAT_2c021204;
            iVar16 = iVar15;
          }
          else {
LAB_2c02159a:
            iVar16 = iVar10 - (iVar10 >> 5);
            *(int *)(param_1 + 2) = iVar16;
            if (iVar16 < 1) {
              iVar10 = iVar16 + -0x266;
              goto LAB_2c021208;
            }
          }
          iVar10 = iVar16 + 0x266;
        }
        else {
          iVar10 = iVar10 - iVar7;
          if (-0x2000001 < iVar10) goto LAB_2c02159a;
          iVar10 = _DAT_2c0215f0 + -0x266;
          *(int *)(param_1 + 2) = _DAT_2c0215f0;
        }
LAB_2c021208:
        uVar6 = uVar6 >> 1;
        piVar12 = (int *)((int)piVar11 + 2);
        *(short *)piVar11 = (short)(iVar10 >> 10);
        iVar10 = iVar16;
        piVar11 = piVar12;
      } while (piVar12 != aiStack_2c);
      *param_1 = (ushort)uVar14;
      iVar7 = -(int)(short)uStack_3c - *(int *)(param_1 + 0x16);
      iVar10 = iVar7 + *(int *)(param_1 + 0x16);
      iVar7 = (iVar10 - iVar7) - *(int *)(param_1 + 0x12);
      if (iVar7 < 0) {
        iVar7 = iVar7 + 1;
      }
      uVar2 = SignedSaturate(iVar7 >> 1,0xf);
      SignedDoesSaturate(iVar7 >> 1,0xf);
      iVar7 = (iVar10 - (short)uStack_38) - iVar10;
      iVar10 = (int)uStack_3c._2_2_ + (iVar7 - (iVar10 - (short)uStack_38));
      if (iVar10 < 0) {
        iVar10 = iVar10 + 1;
      }
      uVar3 = SignedSaturate(iVar10 >> 1,0xf);
      SignedDoesSaturate(iVar10 >> 1,0xf);
      iVar10 = (iVar7 - (short)uStack_34) - iVar7;
      iVar7 = (int)uStack_38._2_2_ + (iVar10 - (iVar7 - (short)uStack_34));
      if (iVar7 < 0) {
        iVar7 = iVar7 + 1;
      }
      uVar4 = SignedSaturate(iVar7 >> 1,0xf);
      SignedDoesSaturate(iVar7 >> 1,0xf);
      iVar7 = (iVar10 - (short)uStack_30) - iVar10;
      iVar10 = (int)uStack_34._2_2_ + (iVar7 - (iVar10 - (short)uStack_30));
      if (iVar10 < 0) {
        iVar10 = iVar10 + 1;
      }
      uVar5 = SignedSaturate(iVar10 >> 1,0xf);
      SignedDoesSaturate(iVar10 >> 1,0xf);
      *(int *)(param_1 + 0x16) = -iVar7;
      iVar10 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xe);
      *(int *)(param_1 + 0x12) = -(int)uStack_30._2_2_;
      iVar16 = iVar10 * 0x6000 - *(int *)(param_1 + 0x10);
      iVar10 = iVar16 - iVar10;
      iVar15 = iVar10 - (short)uVar2;
      iVar10 = iVar15 - iVar10;
      iVar7 = *(int *)(param_1 + 0xc) - (int)(short)uVar2;
      *(int *)(param_1 + 0x14) = -(int)uStack_30._2_2_;
      iVar17 = iVar7 * 0x6000 - *(int *)(param_1 + 0xc);
      iVar7 = (iVar17 - iVar7) + (iVar10 - iVar15);
      if (iVar7 < 0) {
        iVar7 = iVar7 + 1;
      }
      uVar2 = SignedSaturate(iVar7 >> 1,0xf);
      SignedDoesSaturate(iVar7 >> 1,0xf);
      sStack_54 = (short)uVar3;
      iVar15 = iVar16 * 0x5fff + iVar10 * -0x6000;
      sStack_50 = (short)uVar4;
      iVar16 = iVar17 * 0x5fff + sStack_54 * -0x6000;
      iVar10 = iVar15 + sStack_54;
      iVar15 = iVar10 * 0x6000 - iVar15;
      iVar7 = iVar16 - sStack_50;
      iVar10 = iVar15 - iVar10;
      iVar17 = iVar10 - sStack_50;
      iVar10 = iVar17 - iVar10;
      iVar16 = iVar7 * 0x6000 - iVar16;
      iVar7 = (iVar16 - iVar7) + (iVar10 - iVar17);
      if (iVar7 < 0) {
        iVar7 = iVar7 + 1;
      }
      uVar3 = SignedSaturate(iVar7 >> 1,0xf);
      SignedDoesSaturate(iVar7 >> 1,0xf);
      sStack_4c = (short)uVar5;
      *(int *)(param_1 + 0x10) = iVar15 * 0x5fff + iVar10 * -0x6000;
      iVar7 = (iVar9 - iStack_58) * 0x4d00 - iVar9;
      iStack_58 = iVar7 - (iVar9 - iStack_58);
      *(int *)(param_1 + 0xe) = -(int)sStack_4c;
      iVar9 = iStack_5c - (short)uVar2;
      iVar10 = iStack_58 - (short)uVar2;
      *(int *)(param_1 + 0xc) = iVar16 * 0x5fff + sStack_4c * -0x6000;
      iStack_5c = iVar9 * 0x5400 - iStack_5c;
      iStack_58 = iVar10 * 0x1800 - iStack_58;
      iVar9 = (iStack_58 - iVar10) + (iStack_5c - iVar9);
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1;
      }
      uVar2 = SignedSaturate(iVar9 >> 1,0xf);
      SignedDoesSaturate(iVar9 >> 1,0xf);
      iStack_58 = iVar7 - iStack_58;
      puStack_60 = puStack_60 + 1;
      *puStack_60 = (short)uVar2;
      uStack_64 = uStack_64 + 1;
      iVar9 = iStack_58 * 0x4d00 - iVar7;
      iStack_5c = iStack_5c * 0x53ff + (short)uVar3 * -0x5400;
      iStack_58 = iVar9 - iStack_58;
      *(int *)(param_1 + 10) = iVar9;
      lVar1 = (longlong)(iStack_58 - (short)uVar3) * 0x1800;
      uVar18 = CONCAT44((int)((ulonglong)lVar1 >> 0x20),0x1800);
      *(int *)(param_1 + 6) = iStack_5c;
      iStack_58 = (int)lVar1 - iStack_58;
      *(int *)(param_1 + 8) = iStack_58;
    } while (param_4 != uStack_64);
    if (*_DAT_2c0215ec == aiStack_2c[0]) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c00b2e8((int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
}


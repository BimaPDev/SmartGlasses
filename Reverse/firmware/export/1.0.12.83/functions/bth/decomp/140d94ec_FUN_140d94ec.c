/* FUN_140d94ec @ 0x140d94ec */

float FUN_140d94ec(float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint in_fpscr;
  float extraout_s0;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar8 = ABS(param_2);
  fVar9 = param_1;
  if (fVar8 != 0.0) {
    fVar9 = ABS(param_1);
    if (((uint)fVar9 < 0x7f800001) && ((uint)fVar8 < 0x7f800001)) {
      iVar2 = 0;
      if ((int)param_1 < 0) {
        if (0x4b7fffff < (uint)fVar8) {
          iVar2 = 2;
          goto LAB_140d9568;
        }
        if ((0x3f7fffff < (uint)fVar8) &&
           (uVar4 = 0x96 - ((int)fVar8 >> 0x17), uVar5 = (int)fVar8 >> (uVar4 & 0xff),
           (float)(uVar5 << (uVar4 & 0xff)) == fVar8)) {
          iVar2 = 2 - (uVar5 & 1);
        }
      }
      else {
LAB_140d9568:
        if (fVar8 == INFINITY) {
          if (fVar9 == 1.0) {
            return 1.0;
          }
          if ((uint)fVar9 < 0x3f800001) {
            if (-1 < (int)param_2) {
              return DAT_140d99bc;
            }
            return -param_2;
          }
          return (float)((uint)(-1 < (int)param_2) * (int)param_2 +
                        (uint)(-1 >= (int)param_2) * (int)DAT_140d99bc);
        }
      }
      if (fVar8 == 1.0) {
        if (-1 < (int)param_2) {
          return param_1;
        }
        return 1.0 / param_1;
      }
      if (param_2 == 2.0) {
        return param_1 * param_1;
      }
      if ((param_2 == 0.5) && (-1 < (int)param_1)) {
        fVar9 = (float)FUN_140d9d6c();
        return fVar9;
      }
      iVar1 = FUN_140da798(param_1);
      if ((((uint)param_1 & 0x3fffffff) == 0x3f800000) ||
         (uVar5 = (uint)(fVar9 == 0.0), fVar9 == 0.0)) {
        fVar8 = extraout_s0;
        if ((int)param_2 < 0) {
          fVar8 = 1.0 / extraout_s0;
        }
        if (-1 < (int)param_1) {
          return fVar8;
        }
        if (fVar9 == 1.0 && iVar2 == 0) {
          return (fVar8 - fVar8) / (fVar8 - fVar8);
        }
        if (iVar2 != 1) {
          return fVar8;
        }
        return -fVar8;
      }
      if (iVar2 == 0 && (int)param_1 < 0) {
        return (param_1 - param_1) / (param_1 - param_1);
      }
      fVar12 = DAT_140da5c4;
      if (0x4d000000 < (uint)fVar8) {
        if (DAT_140d9984 < (int)fVar9) {
          if ((int)fVar9 <= DAT_140d9988) {
            fVar10 = extraout_s0 - 1.0;
            fVar9 = -(DAT_140d9990 *
                     fVar10 * fVar10 * (-(DAT_140d998c + -fVar10 * 0.25) * fVar10 + 0.5)) +
                    fVar10 * DAT_140d9994;
            fVar8 = (float)((uint)(fVar9 + fVar10 * DAT_140d9998) & 0xfffff000);
            fVar9 = fVar9 - (fVar8 + -fVar10 * DAT_140d9998);
            goto LAB_140d966a;
          }
          if (0 < (int)param_2) goto LAB_140d9a90;
        }
        else if ((int)param_2 < 0) {
LAB_140d9a90:
          iVar1 = 0;
          fVar12 = DAT_140da5d0;
          goto LAB_140da59c;
        }
        iVar1 = 0;
        goto LAB_140da59c;
      }
      if (((uint)param_1 & 0x7f800000) == 0) {
        uVar5 = 0xffffffe8;
        fVar9 = extraout_s0 * DAT_140d99c0;
      }
      uVar4 = (uint)fVar9 & 0x7fffff;
      iVar6 = uVar5 + ((int)fVar9 >> 0x17) + -0x7f;
      fVar8 = (float)(uVar4 | 0x3f800000);
      if (DAT_140d99c4 < (int)uVar4) {
        if (DAT_140d99c8 < (int)uVar4) {
          fVar15 = 1.0;
          iVar6 = iVar6 + 1;
          fVar8 = (float)((int)fVar8 - 0x800000);
          iVar1 = 0;
          fVar9 = DAT_140d99bc;
          fVar10 = DAT_140d99bc;
        }
        else {
          fVar15 = 1.5;
          iVar1 = 0x200000;
          fVar9 = DAT_140d9af8;
          fVar10 = DAT_140d9af4;
        }
      }
      else {
        fVar15 = 1.0;
        iVar1 = 0;
        fVar9 = DAT_140d9af0;
        fVar10 = DAT_140d9af0;
      }
      fVar14 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
      fVar17 = 1.0 / (fVar8 + fVar15);
      fVar7 = (float)(((int)fVar8 >> 1 | 0x20000000U) + 0x40000 + iVar1);
      fVar11 = (fVar8 - fVar15) * fVar17;
      fVar13 = fVar11 * fVar11;
      fVar16 = (float)((uint)fVar11 & DAT_140d99e0);
      fVar17 = ((fVar8 - fVar15) + -fVar16 * fVar7 + -fVar16 * (fVar8 - (fVar7 - fVar15))) * fVar17;
      fVar15 = (fVar11 + fVar16) * fVar17 +
               fVar13 * fVar13 *
               (DAT_140d99dc +
               (DAT_140d99d8 +
               (DAT_140d998c +
               (DAT_140d99d4 + (DAT_140d99d0 + fVar13 * DAT_140d99cc) * fVar13) * fVar13) * fVar13)
               * fVar13);
      fVar8 = (float)((uint)(fVar16 * fVar16 + 3.0 + fVar15) & DAT_140d99e0);
      fVar7 = (fVar15 - ((fVar8 - 3.0) + -fVar16 * fVar16)) * fVar11 + fVar17 * fVar8;
      fVar15 = (float)((uint)(fVar7 + fVar16 * fVar8) & DAT_140d99e0);
      fVar9 = (fVar7 - (fVar15 + -fVar16 * fVar8)) * DAT_140d99e4 + fVar15 * DAT_140d99e8 + fVar9;
      fVar8 = (float)((uint)(fVar9 + fVar15 * DAT_140d99ec + fVar10 + fVar14) & DAT_140d99e0);
      fVar9 = fVar9 - (((fVar8 - fVar14) - fVar10) + -fVar15 * DAT_140d99ec);
LAB_140d966a:
      fVar16 = (float)((uint)(iVar2 == 1 && (int)param_1 < 0) * -0x40800000 +
                      (uint)(iVar2 != 1 || (int)param_1 >= 0) * 0x3f800000);
      fVar10 = fVar8 * (float)((uint)param_2 & 0xfffff000);
      fVar15 = fVar9 * param_2 + (param_2 - (float)((uint)param_2 & 0xfffff000)) * fVar8;
      fVar8 = fVar15 + fVar10;
      fVar9 = ABS(fVar8);
      if (0 < (int)fVar8) {
        if ((int)fVar9 < 0x43000001) {
          if (fVar9 != 128.0) goto LAB_140d96be;
          if (fVar15 + DAT_140d9afc <= fVar8 - fVar10) goto LAB_140d9a08;
        }
        iVar2 = (uint)(fVar16 < 0.0) << 0x1f;
        if (iVar2 < 0) {
          iVar1 = 1;
        }
        fVar12 = DAT_140da5d0;
        if (-1 < iVar2) {
          iVar1 = 0;
        }
        goto LAB_140da59c;
      }
      if ((int)fVar9 <= (int)DAT_140d9ae8) {
        if (fVar9 == DAT_140d9ae8) {
          if (fVar15 <= fVar8 - fVar10) goto LAB_140d9ad8;
        }
        else {
LAB_140d96be:
          if ((int)fVar9 < 0x3f000001) {
            iVar1 = 0;
            iVar2 = 0;
            goto LAB_140d96ca;
          }
        }
LAB_140d9a08:
        uVar4 = (0x800000 >> (((int)fVar9 >> 0x17) - 0x7eU & 0xff)) + (int)fVar8;
        uVar5 = ((uVar4 & 0x7fffffff) >> 0x17) - 0x7f;
        iVar2 = (int)(uVar4 & 0x7fffff | 0x800000) >> (0x17 - uVar5 & 0xff);
        if ((int)fVar8 < 0) {
          iVar2 = -iVar2;
        }
        fVar10 = fVar10 - (float)(uVar4 & ~(DAT_140d9aec >> (uVar5 & 0xff)));
        iVar1 = iVar2 << 0x17;
        fVar8 = fVar15 + fVar10;
LAB_140d96ca:
        fVar8 = (float)((uint)fVar8 & 0xfffff000);
        fVar10 = fVar8 * DAT_140d999c + (fVar15 - (fVar8 - fVar10)) * DAT_140d99a0;
        fVar12 = fVar10 + fVar8 * DAT_140d99a4;
        fVar9 = fVar12 * fVar12;
        fVar10 = fVar10 - (fVar12 + -fVar8 * DAT_140d99a4);
        fVar9 = fVar12 + -(DAT_140d99b8 +
                          (DAT_140d99b4 +
                          (DAT_140d99b0 + (DAT_140d99ac + fVar9 * DAT_140d99a8) * fVar9) * fVar9) *
                          fVar9) * fVar9;
        fVar9 = (float)((int)(1.0 - (((fVar12 * fVar9) / (fVar9 - 2.0) - (fVar10 + fVar12 * fVar10))
                                    - fVar12)) + iVar1);
        if ((int)fVar9 < 0x800000) {
          fVar9 = (float)FUN_140da7d8(iVar2);
        }
        return fVar9 * fVar16;
      }
LAB_140d9ad8:
      iVar2 = (uint)(fVar16 < 0.0) << 0x1f;
      if (iVar2 < 0) {
        iVar1 = 1;
      }
      if (-1 < iVar2) {
        iVar1 = 0;
      }
LAB_140da59c:
      fVar9 = fVar12;
      if (iVar1 != 0) {
        fVar9 = -fVar12;
      }
      puVar3 = (undefined4 *)FUN_140da9c8();
      *puVar3 = 0x22;
      return fVar9 * fVar12;
    }
    fVar9 = param_2;
    if (param_1 != 1.0) goto LAB_140d9514;
  }
  if (((uint)fVar9 ^ 0x400000) * 2 < 0xff800001) {
    return 1.0;
  }
LAB_140d9514:
  return param_1 + param_2;
}


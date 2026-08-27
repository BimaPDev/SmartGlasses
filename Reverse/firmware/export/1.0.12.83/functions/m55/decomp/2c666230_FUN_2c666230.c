/* FUN_2c666230 @ 0x2c666230 */

float FUN_2c666230(float param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 in_r3;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint in_fpscr;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar12;
  double dVar11;
  float fVar13;
  double dVar14;
  
  dVar14 = (double)param_1;
  uVar3 = (uint)ABS(param_1) >> 0x14;
  if (uVar3 < 0x3f4) {
    dVar14 = dVar14 * dVar14;
    if (0x397 < uVar3) {
      return (float)(*(double *)(DAT_2c6663e0 + 0x30) + dVar14 * *(double *)(DAT_2c6663e0 + 0x38) +
                     dVar14 * dVar14 * *(double *)(DAT_2c6663e0 + 0x40) +
                    (*(double *)(DAT_2c6663e0 + 0x48) + dVar14 * *(double *)(DAT_2c6663e0 + 0x50)) *
                    dVar14 * dVar14 * dVar14);
    }
    return 1.0;
  }
  if (uVar3 < 0x42f) {
    iVar12 = VectorFloatToSigned(dVar14 * *(double *)(DAT_2c6663e0 + 0x20),3);
    uVar3 = iVar12 + 0x800000 >> 0x18;
    dVar11 = (double)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
    iVar12 = DAT_2c6663e0 + 0x70;
    if ((uVar3 & 2) == 0) {
      iVar12 = DAT_2c6663e0;
    }
    dVar14 = dVar14 + -dVar11 * *(double *)(DAT_2c6663e0 + 0x28);
    dVar11 = dVar14 * dVar14;
    if (-1 < (int)(uVar3 << 0x1f)) {
      dVar9 = dVar11 * dVar11;
      dVar6 = *(double *)(iVar12 + 0x38);
      dVar14 = *(double *)(iVar12 + 0x30);
      dVar7 = *(double *)(iVar12 + 0x50);
      dVar10 = *(double *)(iVar12 + 0x48);
      dVar8 = *(double *)(iVar12 + 0x40);
LAB_2c666314:
      return (float)(dVar14 + dVar11 * dVar6 + dVar9 * dVar8 +
                    (dVar10 + dVar11 * dVar7) * dVar11 * dVar9);
    }
    dVar6 = *(double *)(iVar12 + 0x68);
    dVar8 = *(double *)(iVar12 + 0x60);
    dVar7 = *(double *)(iVar12 + 0x58);
    dVar9 = *(double *)(DAT_2c6663e0 + (uVar3 & 3) * 8);
  }
  else {
    if (0x7f7 < uVar3) {
      fVar13 = (param_1 - param_1) / (param_1 - param_1);
      if (!NAN(param_1)) {
        puVar2 = (undefined4 *)FUN_2c6685e0();
        *puVar2 = 0x21;
        return fVar13;
      }
      return fVar13;
    }
    uVar3 = ((uint)param_1 & 0x3fffffff) >> 0x1a;
    iVar12 = DAT_2c6663e4 + uVar3 * 4;
    uVar4 = ((uint)param_1 & 0x7fffff | 0x800000) << (((uint)param_1 & 0x3ffffff) >> 0x17);
    lVar1 = (ulonglong)uVar4 * (ulonglong)*(uint *)(iVar12 + 0x10) +
            ((ulonglong)(uVar4 * *(int *)(DAT_2c6663e4 + uVar3 * 4)) << 0x20 |
            (ulonglong)uVar4 * (ulonglong)*(uint *)(iVar12 + 0x20) >> 0x20);
    iVar12 = (int)((ulonglong)lVar1 >> 0x20);
    uVar5 = iVar12 + 0x20000000U >> 0x1e;
    uVar3 = uVar5 - ((int)param_1 >> 0x1f);
    dVar14 = (double)FUN_2c6729ec((int)lVar1,iVar12 - (iVar12 + 0x20000000U & 0xc0000000),iVar12,
                                  uVar4,in_r3);
    iVar12 = DAT_2c6663e8;
    if ((uVar3 & 2) == 0) {
      iVar12 = DAT_2c6663e8 + -0x70;
    }
    dVar14 = dVar14 * DAT_2c6663d8;
    dVar11 = dVar14 * dVar14;
    if (-1 < (int)(uVar5 << 0x1f)) {
      dVar9 = dVar11 * dVar11;
      dVar6 = *(double *)(iVar12 + 0x38);
      dVar14 = *(double *)(iVar12 + 0x30);
      dVar7 = *(double *)(iVar12 + 0x50);
      dVar10 = *(double *)(iVar12 + 0x48);
      dVar8 = *(double *)(iVar12 + 0x40);
      goto LAB_2c666314;
    }
    dVar6 = *(double *)(iVar12 + 0x68);
    dVar8 = *(double *)(iVar12 + 0x60);
    dVar7 = *(double *)(iVar12 + 0x58);
    dVar9 = *(double *)(DAT_2c6663e8 + -0x70 + (uVar3 & 3) * 8);
  }
  dVar10 = dVar14 * dVar9 * dVar11;
  return (float)(dVar14 * dVar9 + dVar10 * dVar7 + (dVar8 + dVar11 * dVar6) * dVar11 * dVar10);
}


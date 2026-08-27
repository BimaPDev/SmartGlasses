/* FUN_2c6670a0 @ 0x2c6670a0 */

float FUN_2c6670a0(float param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint in_fpscr;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  int iVar10;
  
  dVar7 = (double)param_1;
  uVar3 = (uint)ABS(param_1) >> 0x14;
  if (uVar3 < 0x3f4) {
    dVar6 = dVar7 * dVar7;
    if (0x397 < uVar3) {
      return (float)(dVar7 + dVar7 * dVar6 * *(double *)(DAT_2c667298 + 0x58) +
                    (*(double *)(DAT_2c667298 + 0x60) + dVar6 * *(double *)(DAT_2c667298 + 0x68)) *
                    dVar6 * dVar7 * dVar6);
    }
  }
  else if (uVar3 < 0x42f) {
    iVar10 = VectorFloatToSigned(dVar7 * *(double *)(DAT_2c667298 + 0x20),3);
    uVar3 = iVar10 + 0x800000 >> 0x18;
    dVar6 = (double)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
    iVar10 = DAT_2c667298 + 0x70;
    if ((uVar3 & 2) == 0) {
      iVar10 = DAT_2c667298;
    }
    dVar7 = dVar7 + -dVar6 * *(double *)(DAT_2c667298 + 0x28);
    dVar6 = dVar7 * dVar7;
    if ((int)(uVar3 << 0x1f) < 0) {
      return (float)(*(double *)(iVar10 + 0x30) + dVar6 * *(double *)(iVar10 + 0x38) +
                     dVar6 * dVar6 * *(double *)(iVar10 + 0x40) +
                    (*(double *)(iVar10 + 0x48) + dVar6 * *(double *)(iVar10 + 0x50)) *
                    dVar6 * dVar6 * dVar6);
    }
    dVar7 = dVar7 * *(double *)(DAT_2c667298 + (uVar3 & 3) * 8);
    dVar8 = dVar7 * dVar6;
    param_1 = (float)(dVar7 + dVar8 * *(double *)(iVar10 + 0x58) +
                     (*(double *)(iVar10 + 0x60) + dVar6 * *(double *)(iVar10 + 0x68)) *
                     dVar6 * dVar8);
  }
  else {
    if (0x7f7 < uVar3) {
      fVar9 = (param_1 - param_1) / (param_1 - param_1);
      if (!NAN(param_1)) {
        puVar2 = (undefined4 *)FUN_2c6685e0();
        *puVar2 = 0x21;
        return fVar9;
      }
      return fVar9;
    }
    uVar3 = ((uint)param_1 & 0x3fffffff) >> 0x1a;
    iVar10 = DAT_2c66729c + uVar3 * 4;
    uVar4 = ((uint)param_1 & 0x7fffff | 0x800000) << (((uint)param_1 & 0x3ffffff) >> 0x17);
    lVar1 = (ulonglong)uVar4 * (ulonglong)*(uint *)(iVar10 + 0x10) +
            ((ulonglong)(uVar4 * *(int *)(DAT_2c66729c + uVar3 * 4)) << 0x20 |
            (ulonglong)uVar4 * (ulonglong)*(uint *)(iVar10 + 0x20) >> 0x20);
    iVar10 = (int)((ulonglong)lVar1 >> 0x20);
    uVar3 = iVar10 + 0x20000000;
    uVar5 = uVar3 >> 0x1e;
    uVar4 = uVar5 - ((int)param_1 >> 0x1f);
    dVar7 = (double)FUN_2c6729ec((int)lVar1,iVar10 - (uVar3 & 0xc0000000));
    iVar10 = DAT_2c6672a0;
    if ((uVar4 & 2) == 0) {
      iVar10 = DAT_2c6672a0 + -0x70;
    }
    dVar7 = dVar7 * DAT_2c667290;
    dVar6 = dVar7 * dVar7;
    if ((int)(uVar5 << 0x1f) < 0) {
      param_1 = (float)(*(double *)(iVar10 + 0x30) + dVar6 * *(double *)(iVar10 + 0x38) +
                        dVar6 * dVar6 * *(double *)(iVar10 + 0x40) +
                       (*(double *)(iVar10 + 0x48) + dVar6 * *(double *)(iVar10 + 0x50)) *
                       dVar6 * dVar6 * dVar6);
    }
    else {
      dVar7 = dVar7 * *(double *)(DAT_2c6672a0 + -0x70 + (uVar4 & 3) * 8);
      dVar8 = dVar7 * dVar6;
      param_1 = (float)(dVar7 + dVar8 * *(double *)(iVar10 + 0x58) +
                       (*(double *)(iVar10 + 0x60) + dVar6 * *(double *)(iVar10 + 0x68)) *
                       dVar6 * dVar8);
    }
  }
  return param_1;
}


/* FUN_2c666d78 @ 0x2c666d78 */

undefined4 * FUN_2c666d78(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  double *pdVar4;
  float fVar5;
  uint uVar6;
  uint in_fpscr;
  undefined4 in_cr7;
  float fVar7;
  longlong in_d0;
  float fVar9;
  double dVar8;
  double dVar10;
  double dVar11;
  
  fVar7 = (float)in_d0;
  fVar9 = (float)((ulonglong)in_d0 >> 0x20);
  puVar2 = (undefined4 *)0xfeffffff;
  uVar6 = (int)fVar9 * 2 - 1;
  fVar5 = fVar7;
  if ((int)fVar7 - 0x800000U < 0x7f000000) {
    if (0xfefffffe < uVar6) {
      return (undefined4 *)0xfeffffff;
    }
    iVar3 = 0;
  }
  else {
    if (0xfefffffe < uVar6) {
      return (undefined4 *)0xfeffffff;
    }
    if (0xfefffffe < (int)fVar7 * 2 - 1U) {
      if (((int)fVar7 < 0) && (((uint)ABS(fVar9) >> 0x17) - 0x7f < 0x18)) {
        uVar6 = 1 << (0x96 - ((uint)ABS(fVar9) >> 0x17) & 0xff);
        if ((uVar6 - 1 & (uint)fVar9) != 0) goto LAB_2c666fd4;
        puVar2 = (undefined4 *)0x0;
        if ((uVar6 & (uint)fVar9) != 0) {
          puVar2 = (undefined4 *)0x1;
        }
      }
      else {
LAB_2c666fd4:
        puVar2 = (undefined4 *)0x0;
      }
      if (((int)fVar7 * 2 != 0) || (-1 < in_d0)) {
        return puVar2;
      }
      uVar1 = 0x22;
      coprocessor_function2(10,4,1,in_cr7,in_cr7,in_cr7);
      goto LAB_2c6664e0;
    }
    if ((int)fVar7 < 0) {
      uVar6 = (uint)ABS(fVar9) >> 0x17;
      if (uVar6 < 0x7f) {
LAB_2c666f82:
        if (NAN(fVar7)) {
          return puVar2;
        }
        uVar1 = 0x21;
        goto LAB_2c6664e0;
      }
      if (uVar6 < 0x97) {
        uVar6 = 1 << (0x96 - uVar6 & 0xff);
        puVar2 = (undefined4 *)(uVar6 - 1);
        if (((uint)puVar2 & (uint)fVar9) != 0) goto LAB_2c666f82;
        iVar3 = 0;
        if ((uVar6 & (uint)fVar9) != 0) {
          iVar3 = 0x10000;
        }
      }
      else {
        iVar3 = 0;
      }
      fVar5 = ABS(fVar7);
    }
    else {
      iVar3 = 0;
    }
    if ((uint)fVar5 < 0x800000) {
      fVar5 = (float)((int)ABS(fVar7 * DAT_2c667098) + 0xf4800000);
    }
  }
  uVar6 = DAT_2c66708c & DAT_2c667088 + (int)fVar5;
  pdVar4 = (double *)(DAT_2c667090 + ((DAT_2c667088 + (int)fVar5 & 0x7fffffU) >> 0x13) * 0x10);
  dVar8 = (double)VectorSignedToFloat((int)uVar6 >> 0x17,(byte)(in_fpscr >> 0x16) & 3);
  dVar10 = *pdVar4 * (double)(float)((int)fVar5 - uVar6) + -1.0;
  dVar11 = dVar10 * dVar10;
  dVar8 = (double)fVar9 *
          (dVar8 + pdVar4[1] + dVar10 * *(double *)(DAT_2c667090 + 0x120) +
           dVar11 * (*(double *)(DAT_2c667090 + 0x118) + dVar10 * *(double *)(DAT_2c667090 + 0x110))
          + (*(double *)(DAT_2c667090 + 0x108) + dVar10 * *(double *)(DAT_2c667090 + 0x100)) *
            dVar11 * dVar11);
  if ((((uint)((ulonglong)dVar8 >> 0x20) & 0x7fffffff) >> 0xf < 0x80bf) ||
     (((dVar8 <= DAT_2c667068 && (DAT_2c667078 < dVar8)) &&
      (-1 < (int)((uint)(dVar8 < DAT_2c667080) << 0x1f))))) {
    return (undefined4 *)(iVar3 + SUB84(dVar8 + *(double *)(DAT_2c667094 + 0x100),0));
  }
  if (iVar3 == 0) {
    uVar1 = 0x22;
  }
  else {
    uVar1 = 0x22;
  }
LAB_2c6664e0:
  puVar2 = (undefined4 *)FUN_2c6685e0();
  *puVar2 = uVar1;
  return puVar2;
}


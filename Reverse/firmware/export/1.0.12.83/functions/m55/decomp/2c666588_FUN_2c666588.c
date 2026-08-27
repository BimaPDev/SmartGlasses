/* FUN_2c666588 @ 0x2c666588 */

undefined4 FUN_2c666588(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint in_fpscr;
  undefined4 in_cr5;
  undefined4 in_cr7;
  ulonglong in_d0;
  double dVar13;
  uint uVar14;
  double in_d1;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  uVar11 = (uint)(in_d0 >> 0x20);
  uVar7 = (uint)in_d0;
  uVar15 = (uint)((ulonglong)in_d1 >> 0x20);
  uVar4 = uVar11 >> 0x14;
  uVar14 = SUB84(in_d1,0);
  uVar12 = uVar15 >> 0x14;
  uVar8 = uVar11;
  dVar13 = DAT_2c666430;
  if ((uVar4 - 1 < 0x7fe) && ((uVar12 & 0x7ff) - 0x3be < 0x80)) {
    iVar3 = 0;
LAB_2c6665c8:
    uVar4 = DAT_2c666908 + uVar8;
    uVar11 = (uVar4 & 0xfffff) >> 0xd;
    dVar18 = (double)VectorSignedToFloat((int)uVar4 >> 0x14,(byte)(in_fpscr >> 0x16) & 3);
    dVar17 = DAT_2c666910[uVar11 * 4 + 0xb] + dVar18 * *DAT_2c666910;
    dVar20 = (double)CONCAT44(uVar8 - (DAT_2c66690c & uVar4),uVar7) * DAT_2c666910[uVar11 * 4 + 9] +
             -1.0;
    dVar16 = dVar20 + dVar17;
    dVar21 = dVar20 * dVar20 * DAT_2c666910[2];
    dVar19 = dVar16 + dVar21;
    dVar16 = DAT_2c666910[uVar11 * 4 + 0xc] + dVar18 * DAT_2c666910[1] + (dVar17 - dVar16) + dVar20
             + -dVar21 + dVar20 * DAT_2c666910[2] * dVar20 + (dVar16 - dVar19) + dVar21 +
             dVar20 * dVar21 *
             (DAT_2c666910[3] + dVar20 * DAT_2c666910[4] +
             dVar21 * (DAT_2c666910[5] + dVar20 * DAT_2c666910[6] +
                      dVar21 * (DAT_2c666910[7] + dVar20 * DAT_2c666910[8])));
    dVar17 = dVar19 + dVar16;
    dVar18 = in_d1 * dVar17;
    uVar8 = ((uint)((ulonglong)dVar18 >> 0x20) & 0x7fffffff) >> 0x14;
    if (0x3e < uVar8 - 0x3c9) {
      if ((int)(uVar8 - 0x3c9) < 0) {
        dVar13 = dVar18 + 1.0;
        if (iVar3 != 0) {
          dVar13 = -(dVar18 + 1.0);
        }
        goto LAB_2c66673e;
      }
      if (0x408 < uVar8) {
        if (-1 < (longlong)dVar18) {
LAB_2c6667e6:
          dVar13 = DAT_2c666440;
        }
        goto LAB_2c666404;
      }
      uVar8 = 0;
    }
    dVar13 = DAT_2c666914[1] + dVar18 * *DAT_2c666914;
    dVar20 = dVar13 - DAT_2c666914[1];
    uVar4 = SUB84(dVar13,0);
    iVar5 = (uVar4 & 0x7f) * 2 + 0xf;
    uVar6 = *(undefined4 *)(DAT_2c666914 + iVar5);
    iVar3 = *(int *)((int)DAT_2c666914 + iVar5 * 8 + 4) + (iVar3 + uVar4) * 0x2000;
    dVar13 = -dVar18 + in_d1 * dVar17 + in_d1 * ((dVar19 - dVar17) + dVar16) +
             dVar18 + dVar20 * DAT_2c666914[2] + dVar20 * DAT_2c666914[3];
    dVar16 = dVar13 * dVar13;
    dVar16 = dVar13 + DAT_2c666914[(uVar4 & 0x7f) * 2 + 0xe] +
             dVar16 * (DAT_2c666914[4] + dVar13 * DAT_2c666914[5]) +
             dVar16 * dVar16 * (DAT_2c666914[6] + dVar13 * DAT_2c666914[7]);
    if (uVar8 != 0) {
      dVar13 = (double)CONCAT44(iVar3,uVar6) + dVar16 * (double)CONCAT44(iVar3,uVar6);
LAB_2c66673e:
      return SUB84(dVar13,0);
    }
    if ((int)uVar4 < 0) {
      dVar17 = (double)CONCAT44(iVar3 + 0x3fe00000U,uVar6);
      dVar13 = dVar17 + dVar16 * dVar17;
      if ((int)((uint)(ABS(dVar13) < 1.0) << 0x1f) < 0) {
        dVar18 = -1.0;
        if (-1 < (int)((uint)(dVar13 < 0.0) << 0x1f)) {
          dVar18 = 1.0;
        }
        dVar13 = ((dVar18 - (dVar13 + dVar18)) + dVar13 + (dVar17 - dVar13) + dVar16 * dVar17 +
                 dVar13 + dVar18) - dVar18;
        if (dVar13 == 0.0) {
          dVar13 = (double)(((ulonglong)(iVar3 + 0x3fe00000U) & 0x80000000) << 0x20);
        }
      }
      dVar13 = dVar13 * DAT_2c6668f8;
      if (dVar13 != 0.0) {
        return SUB84(dVar13,0);
      }
      uVar6 = 0x22;
    }
    else {
      dVar13 = (double)CONCAT44(iVar3 + -0x3f100000,uVar6);
      dVar13 = (dVar13 + dVar16 * dVar13) * DAT_2c666b10;
      if (ABS(dVar13) <= DAT_2c6664d8) {
        return SUB84(dVar13,0);
      }
      uVar6 = 0x22;
    }
  }
  else {
    iVar5 = uVar14 * 2;
    iVar3 = uVar15 * 2 + (uint)CARRY4(uVar14,uVar14);
    uVar10 = iVar3 + -1 + (uint)(iVar5 != 0);
    if (0xffdffffe < uVar10 && (uint)(iVar5 != 0) <= -uVar10 - 0x200001) {
      if (iVar5 == 0 && iVar3 == 0) {
        uVar8 = (uVar11 ^ 0x80000) * 2 + (uint)CARRY4(uVar7,uVar7);
        if (DAT_2c666b18 <= uVar8 && (uint)((in_d0 & 0x7fffffff) == 0) <= DAT_2c666b18 - uVar8)
        goto LAB_2c666a74;
      }
      else if (uVar11 == DAT_2c666b1c && uVar7 == 0) {
        uVar8 = (uVar15 ^ 0x80000) * 2 + (uint)CARRY4(uVar14,uVar14);
        if (DAT_2c666b18 <= uVar8 &&
            (uint)(((ulonglong)in_d1 & 0x7fffffff) == 0) <= DAT_2c666b18 - uVar8) goto LAB_2c666a74;
      }
      else {
        uVar8 = uVar11 * 2 + (uint)CARRY4(uVar7,uVar7);
        if ((iVar5 != 0 || iVar3 != -0x200000) ||
           (DAT_2c666b20 < uVar8 || uVar8 - DAT_2c666b20 < (uint)(uVar7 * 2 != 0))) {
LAB_2c666a74:
          dVar13 = (double)(((ulonglong)uVar11 << 0x20) + (in_d0 & 0xffffffff)) + in_d1;
          goto LAB_2c66673e;
        }
        if (uVar8 != DAT_2c666b24 || uVar7 * 2 != 0) {
          dVar13 = DAT_2c666b08;
          if ((uint)(DAT_2c666b24 <= uVar8) == -((int)~uVar15 >> 0x1f)) {
            dVar13 = in_d1 * in_d1;
          }
          goto LAB_2c66673e;
        }
      }
LAB_2c6669b4:
      dVar13 = 0.0;
      goto LAB_2c66673e;
    }
    iVar5 = uVar7 * 2;
    iVar3 = uVar11 * 2 + (uint)CARRY4(uVar7,uVar7);
    uVar10 = iVar3 - (uint)(iVar5 == 0);
    if (0xffdffffe < uVar10 && (uint)(iVar5 != 0) <= -uVar10 - 0x200001) {
      dVar13 = (double)(((ulonglong)uVar11 << 0x20) + (in_d0 & 0xffffffff));
      dVar13 = dVar13 * dVar13;
      if (((longlong)in_d0 < 0) && ((uVar12 & 0x7ff) - 0x3ff < 0x35)) {
        iVar1 = -(uVar12 & 0x7ff);
        uVar4 = iVar1 + 0x433;
        uVar7 = iVar1 + 0x413;
        uVar8 = -1 << (uVar4 & 0xff);
        if (((uVar15 & ~(uVar8 | -1 << (uVar7 & 0xff) | 0xffffffffU >> (0x20 - uVar4 & 0xff))) == 0
             && (uVar14 & ~uVar8) == 0) &&
           (((uVar14 >> (uVar4 & 0xff) | uVar15 << (0x20 - uVar4 & 0xff) | uVar15 >> (uVar7 & 0xff))
            & 1) != 0)) {
          dVar13 = -dVar13;
        }
      }
      if (iVar5 == 0 && iVar3 == 0) {
        if (-1 < (longlong)in_d1) goto LAB_2c66673e;
        uVar6 = 0x22;
        coprocessor_function2(0xb,0,0,in_cr7,in_cr5,in_cr7);
        dVar13 = -1.0 / DAT_2c666478;
        goto LAB_2c6663ec;
      }
      if ((longlong)in_d1 < 0) {
        dVar13 = 1.0 / dVar13;
      }
      goto LAB_2c66673e;
    }
    if ((longlong)in_d0 < 0) {
      uVar8 = uVar12 & 0x7ff;
      if (uVar8 < 0x3ff) {
LAB_2c666978:
        dVar16 = (double)(((ulonglong)uVar11 << 0x20) + (in_d0 & 0xffffffff));
        dVar13 = (dVar16 - dVar16) / (dVar16 - dVar16);
        if (NAN(dVar16)) {
          return SUB84(dVar13,0);
        }
        uVar6 = 0x21;
        goto LAB_2c6663ec;
      }
      if (uVar8 < 0x434) {
        uVar10 = -uVar8 + 0x433;
        uVar9 = -1 << (uVar10 & 0xff);
        uVar8 = -uVar8 + 0x413;
        if ((uVar14 & ~uVar9) != 0 ||
            (uVar15 & ~(uVar9 | -1 << (uVar8 & 0xff) | 0xffffffffU >> (0x20 - uVar10 & 0xff))) != 0)
        goto LAB_2c666978;
        if (((uVar14 >> (uVar10 & 0xff) | uVar15 << (0x20 - uVar10 & 0xff) |
             uVar15 >> (uVar8 & 0xff)) & 1) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = 0x40000;
        }
      }
      else {
        iVar3 = 0;
      }
      uVar8 = uVar11 & 0x7fffffff;
      uVar4 = uVar4 & 0x7ff;
    }
    else {
      iVar3 = 0;
    }
    if ((uVar12 & 0x7ff) - 0x3be < 0x80) {
      if (uVar4 == 0) {
        dVar16 = (double)(((ulonglong)uVar11 << 0x20) + (in_d0 & 0xffffffff)) * DAT_2c666900;
        uVar7 = SUB84(dVar16,0);
        uVar8 = ((uint)((ulonglong)dVar16 >> 0x20) & 0x7fffffff) + 0xfcc00000;
      }
      goto LAB_2c6665c8;
    }
    iVar3 = 0;
    if (uVar8 == DAT_2c666918 && uVar7 == 0) goto LAB_2c6669b4;
    if ((uVar12 & 0x7ff) < 0x3be) {
      if (uVar8 < DAT_2c666918 || DAT_2c666918 - uVar8 < (uint)(uVar7 == 0)) {
        dVar13 = 1.0 - in_d1;
      }
      else {
        dVar13 = in_d1 + 1.0;
      }
      goto LAB_2c66673e;
    }
    if ((uVar8 <= DAT_2c666918 && (uint)(uVar7 != 0) <= uVar8 - DAT_2c666918) != uVar12 < 0x800)
    goto LAB_2c6667e6;
LAB_2c666404:
    dVar16 = dVar13;
    if (iVar3 != 0) {
      dVar16 = -dVar13;
    }
    uVar6 = 0x22;
    dVar13 = dVar13 * dVar16;
  }
LAB_2c6663ec:
  puVar2 = (undefined4 *)FUN_2c6685e0();
  *puVar2 = uVar6;
  return SUB84(dVar13,0);
}


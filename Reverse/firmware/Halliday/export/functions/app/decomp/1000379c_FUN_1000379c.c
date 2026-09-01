/* FUN_1000379c @ 0x1000379c */

ulonglong FUN_1000379c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  
  uVar7 = param_2 << 1;
  bVar13 = ((param_2 ^ param_4) & 0x7fffffff) == 0;
  bVar14 = bVar13 && param_1 == param_3;
  if (!bVar13 || param_1 != param_3) {
    bVar14 = uVar7 == 0 && param_1 == 0;
  }
  if (!bVar14) {
    bVar14 = param_4 << 1 == 0 && param_3 == 0;
  }
  iVar6 = (int)uVar7 >> 0x15;
  if (!bVar14) {
    bVar14 = iVar6 == -1;
  }
  iVar1 = (int)(param_4 << 1) >> 0x15;
  if (!bVar14) {
    bVar14 = iVar1 == -1;
  }
  if (bVar14) {
    if (iVar6 == -1 || iVar1 == -1) {
      uVar7 = param_3;
      uVar10 = param_4;
      if (iVar6 == -1) {
        uVar7 = param_1;
        uVar10 = param_2;
      }
      if (iVar6 != -1 || iVar1 != -1) {
        param_3 = uVar7;
        param_4 = uVar10;
      }
      bVar14 = (uVar10 & 0xfffff) == 0;
      bVar13 = uVar7 == 0 && bVar14;
      if (uVar7 == 0 && bVar14) {
        bVar13 = param_3 == 0 && (param_4 & 0xfffff) == 0;
      }
      if (!bVar13 || uVar10 != param_4) {
        uVar10 = uVar10 | 0x80000;
      }
      return CONCAT44(uVar10,uVar7);
    }
    if (((param_2 ^ param_4) & 0x7fffffff) != 0 || param_1 != param_3) {
      if (uVar7 == 0 && param_1 == 0) {
        param_1 = param_3;
        param_2 = param_4;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != param_4) {
      return 0;
    }
    if ((param_2 & 0x7fffffff) >> 0x14 == 0) {
      bVar14 = (param_1 & 0x80000000) != 0;
      uVar7 = param_2 * 2 + (uint)bVar14;
      if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar14)) {
        uVar7 = uVar7 | 0x80000000;
      }
      return CONCAT44(uVar7,param_1 << 1);
    }
    if (uVar7 < 0xffc00000) {
      return CONCAT44(param_2 + 0x100000,param_1);
    }
    param_2 = param_2 & 0x80000000;
LAB_100039dc:
    return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
  }
  uVar8 = (param_2 & 0x7fffffff) >> 0x14;
  uVar7 = (param_4 & 0x7fffffff) >> 0x14;
  uVar10 = uVar7 - uVar8;
  bVar14 = uVar10 != 0;
  if (uVar7 < uVar8) {
    uVar10 = -uVar10;
  }
  uVar9 = param_1;
  uVar5 = param_2;
  if (bVar14 && uVar8 <= uVar7) {
    uVar8 = uVar8 + uVar10;
    uVar9 = param_3;
    uVar5 = param_4;
    param_3 = param_1;
    param_4 = param_2;
  }
  if (0x36 < uVar10) {
    return CONCAT44(uVar5,uVar9);
  }
  uVar7 = uVar5 & 0xfffff | 0x100000;
  if ((uVar5 & 0x80000000) != 0) {
    bVar14 = uVar9 != 0;
    uVar9 = -uVar9;
    uVar7 = -uVar7 - (uint)bVar14;
  }
  uVar5 = param_4 & 0xfffff | 0x100000;
  if ((param_4 & 0x80000000) != 0) {
    bVar14 = param_3 != 0;
    param_3 = -param_3;
    uVar5 = -uVar5 - (uint)bVar14;
  }
  if (uVar8 == uVar10) {
    uVar5 = uVar5 ^ 0x100000;
    if (uVar8 == 0) {
      uVar7 = uVar7 ^ 0x100000;
      uVar8 = 1;
    }
    else {
      uVar10 = uVar10 - 1;
    }
  }
  uVar12 = -uVar10 + 0x20;
  if ((int)uVar10 < 0x21) {
    uVar11 = param_3 << (uVar12 & 0xff);
    param_3 = param_3 >> (uVar10 & 0xff);
    uVar3 = uVar9 + param_3;
    uVar4 = uVar5 << (uVar12 & 0xff);
    uVar12 = uVar3 + uVar4;
    uVar7 = uVar7 + CARRY4(uVar9,param_3) + ((int)uVar5 >> (uVar10 & 0xff)) +
            (uint)CARRY4(uVar3,uVar4);
  }
  else {
    uVar11 = uVar5 << (-uVar10 + 0x40 & 0xff);
    if (param_3 != 0) {
      uVar11 = uVar11 | 2;
    }
    uVar5 = (int)uVar5 >> (uVar10 - 0x20 & 0xff);
    uVar12 = uVar9 + uVar5;
    uVar7 = uVar7 + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar9,uVar5);
  }
  param_2 = uVar7 & 0x80000000;
  uVar10 = uVar7;
  if ((int)uVar7 < 0) {
    bVar14 = uVar11 == 0;
    uVar11 = -uVar11;
    uVar10 = -uVar12;
    uVar12 = -(uint)!bVar14 - uVar12;
    uVar10 = -(uint)(bVar14 <= uVar10) - uVar7;
  }
  if (0xfffff < uVar10) {
    uVar9 = uVar8 - 1;
    if (0x1fffff < uVar10) {
      uVar7 = uVar10 & 1;
      uVar10 = uVar10 >> 1;
      bVar2 = (byte)uVar12;
      uVar12 = (uint)(uVar7 != 0) << 0x1f | uVar12 >> 1;
      uVar11 = (uint)(bVar2 & 1) << 0x1f | uVar11 >> 1;
      uVar9 = uVar8;
      if (0xffbfffff < uVar8 * 0x200000) goto LAB_100039dc;
    }
LAB_100038a8:
    bVar14 = 0x7fffffff < uVar11;
    if (uVar11 == 0x80000000) {
      bVar14 = (uVar12 & 1) != 0;
    }
    return CONCAT44(uVar10 + uVar9 * 0x100000 + (uint)CARRY4(uVar12,(uint)bVar14) | param_2,
                    uVar12 + bVar14);
  }
  bVar13 = (uVar11 & 0x80000000) != 0;
  uVar11 = uVar11 << 1;
  uVar9 = uVar12 * 2;
  bVar14 = CARRY4(uVar12,uVar12);
  uVar12 = uVar12 * 2 + (uint)bVar13;
  uVar10 = uVar10 * 2 + (uint)(bVar14 || CARRY4(uVar9,(uint)bVar13));
  uVar9 = uVar8 - 2;
  if (uVar8 - 1 != 0 && 0xfffff < uVar10) goto LAB_100038a8;
  uVar5 = uVar12;
  uVar8 = uVar10;
  if (uVar10 == 0) {
    uVar5 = 0;
    uVar8 = uVar12;
  }
  iVar6 = LZCOUNT(uVar8);
  if (uVar10 == 0) {
    iVar6 = iVar6 + 0x20;
  }
  uVar4 = iVar6 - 0xb;
  bVar13 = SBORROW4(uVar4,0x20);
  uVar3 = iVar6 - 0x2b;
  bVar14 = uVar3 == 0;
  uVar10 = uVar3;
  uVar12 = uVar3;
  if ((int)uVar4 < 0x20) {
    bVar13 = SCARRY4(uVar3,0xc);
    uVar12 = iVar6 - 0x1f;
    bVar14 = uVar12 == 0;
    uVar10 = uVar4;
    if (!bVar14 && -0xd < (int)uVar3) {
      uVar5 = uVar8 << (uVar4 & 0xff);
      uVar8 = uVar8 >> (0xc - uVar12 & 0xff);
      goto LAB_10003920;
    }
  }
  if (bVar14 || (int)uVar12 < 0 != bVar13) {
    uVar11 = 0x20 - uVar10;
  }
  uVar8 = uVar8 << (uVar10 & 0xff);
  if (bVar14 || (int)uVar12 < 0 != bVar13) {
    uVar8 = uVar8 | uVar5 >> (uVar11 & 0xff);
    uVar5 = uVar5 << (uVar10 & 0xff);
  }
LAB_10003920:
  if ((int)uVar4 <= (int)uVar9) {
    return CONCAT44(uVar8 + (uVar9 - uVar4) * 0x100000 | param_2,uVar5);
  }
  uVar10 = ~(uVar9 - uVar4);
  if ((int)uVar10 < 0x1f) {
    if (uVar10 - 0x13 != 0 && -0xd < (int)(uVar10 - 0x1f)) {
      uVar10 = 0xc - (uVar10 - 0x13);
      return CONCAT44(uVar7,uVar5 >> (0x20 - uVar10 & 0xff) | uVar8 << (uVar10 & 0xff)) &
             0x80000000ffffffff;
    }
    uVar10 = uVar10 + 1;
    return CONCAT44(param_2 | uVar8 >> (uVar10 & 0xff),
                    uVar5 >> (uVar10 & 0xff) | uVar8 << (0x20 - uVar10 & 0xff));
  }
  return CONCAT44(uVar7,uVar8 >> (uVar10 - 0x1f & 0xff)) & 0x80000000ffffffff;
}


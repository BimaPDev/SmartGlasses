/* FUN_140e3490 @ 0x140e3490 */

ulonglong FUN_140e3490(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  
  uVar5 = param_4 ^ 0x80000000;
  uVar8 = param_2 << 1;
  bVar13 = ((param_2 ^ uVar5) & 0x7fffffff) == 0;
  bVar14 = bVar13 && param_1 == param_3;
  if (!bVar13 || param_1 != param_3) {
    bVar14 = uVar8 == 0 && param_1 == 0;
  }
  if (!bVar14) {
    bVar14 = param_4 << 1 == 0 && param_3 == 0;
  }
  iVar7 = (int)uVar8 >> 0x15;
  if (!bVar14) {
    bVar14 = iVar7 == -1;
  }
  iVar1 = (int)(param_4 << 1) >> 0x15;
  if (!bVar14) {
    bVar14 = iVar1 == -1;
  }
  if (bVar14) {
    if (iVar7 == -1 || iVar1 == -1) {
      uVar8 = param_3;
      uVar11 = uVar5;
      if (iVar7 == -1) {
        uVar8 = param_1;
        uVar11 = param_2;
      }
      if (iVar7 != -1 || iVar1 != -1) {
        param_3 = uVar8;
        uVar5 = uVar11;
      }
      bVar14 = (uVar11 & 0xfffff) == 0;
      bVar13 = uVar8 == 0 && bVar14;
      if (uVar8 == 0 && bVar14) {
        bVar13 = param_3 == 0 && (uVar5 & 0xfffff) == 0;
      }
      if (!bVar13 || uVar11 != uVar5) {
        uVar11 = uVar11 | 0x80000;
      }
      return CONCAT44(uVar11,uVar8);
    }
    if (((param_2 ^ uVar5) & 0x7fffffff) != 0 || param_1 != param_3) {
      if (uVar8 == 0 && param_1 == 0) {
        param_1 = param_3;
        param_2 = uVar5;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != uVar5) {
      return 0;
    }
    if ((param_2 & 0x7fffffff) >> 0x14 == 0) {
      bVar14 = (param_1 & 0x80000000) != 0;
      uVar5 = param_2 * 2 + (uint)bVar14;
      if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar14)) {
        uVar5 = uVar5 | 0x80000000;
      }
      return CONCAT44(uVar5,param_1 << 1);
    }
    if (uVar8 < 0xffc00000) {
      return CONCAT44(param_2 + 0x100000,param_1);
    }
    param_2 = param_2 & 0x80000000;
LAB_140e36d4:
    return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
  }
  uVar9 = (param_2 & 0x7fffffff) >> 0x14;
  uVar8 = (uVar5 & 0x7fffffff) >> 0x14;
  uVar11 = uVar8 - uVar9;
  bVar14 = uVar11 != 0;
  if (uVar8 < uVar9) {
    uVar11 = -uVar11;
  }
  uVar10 = param_1;
  uVar6 = param_2;
  if (bVar14 && uVar9 <= uVar8) {
    uVar9 = uVar9 + uVar11;
    uVar10 = param_3;
    uVar6 = uVar5;
    param_3 = param_1;
    uVar5 = param_2;
  }
  if (0x36 < uVar11) {
    return CONCAT44(uVar6,uVar10);
  }
  uVar8 = uVar6 & 0xfffff | 0x100000;
  if ((uVar6 & 0x80000000) != 0) {
    bVar14 = uVar10 != 0;
    uVar10 = -uVar10;
    uVar8 = -uVar8 - (uint)bVar14;
  }
  uVar6 = uVar5 & 0xfffff | 0x100000;
  if ((uVar5 & 0x80000000) != 0) {
    bVar14 = param_3 != 0;
    param_3 = -param_3;
    uVar6 = -uVar6 - (uint)bVar14;
  }
  if (uVar9 == uVar11) {
    uVar6 = uVar6 ^ 0x100000;
    if (uVar9 == 0) {
      uVar8 = uVar8 ^ 0x100000;
      uVar9 = 1;
    }
    else {
      uVar11 = uVar11 - 1;
    }
  }
  uVar5 = -uVar11 + 0x20;
  if ((int)uVar11 < 0x21) {
    uVar12 = param_3 << (uVar5 & 0xff);
    param_3 = param_3 >> (uVar11 & 0xff);
    uVar3 = uVar10 + param_3;
    uVar4 = uVar6 << (uVar5 & 0xff);
    uVar5 = uVar3 + uVar4;
    uVar8 = uVar8 + CARRY4(uVar10,param_3) + ((int)uVar6 >> (uVar11 & 0xff)) +
            (uint)CARRY4(uVar3,uVar4);
  }
  else {
    uVar12 = uVar6 << (-uVar11 + 0x40 & 0xff);
    if (param_3 != 0) {
      uVar12 = uVar12 | 2;
    }
    uVar6 = (int)uVar6 >> (uVar11 - 0x20 & 0xff);
    uVar5 = uVar10 + uVar6;
    uVar8 = uVar8 + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar10,uVar6);
  }
  param_2 = uVar8 & 0x80000000;
  uVar11 = uVar8;
  if ((int)uVar8 < 0) {
    bVar14 = uVar12 == 0;
    uVar12 = -uVar12;
    uVar11 = -uVar5;
    uVar5 = -(uint)!bVar14 - uVar5;
    uVar11 = -(uint)(bVar14 <= uVar11) - uVar8;
  }
  if (0xfffff < uVar11) {
    uVar10 = uVar9 - 1;
    if (0x1fffff < uVar11) {
      uVar8 = uVar11 & 1;
      uVar11 = uVar11 >> 1;
      bVar2 = (byte)uVar5;
      uVar5 = (uint)(uVar8 != 0) << 0x1f | uVar5 >> 1;
      uVar12 = (uint)(bVar2 & 1) << 0x1f | uVar12 >> 1;
      uVar10 = uVar9;
      if (0xffbfffff < uVar9 * 0x200000) goto LAB_140e36d4;
    }
LAB_140e35a0:
    bVar14 = 0x7fffffff < uVar12;
    if (uVar12 == 0x80000000) {
      bVar14 = (uVar5 & 1) != 0;
    }
    return CONCAT44(uVar11 + uVar10 * 0x100000 + (uint)CARRY4(uVar5,(uint)bVar14) | param_2,
                    uVar5 + bVar14);
  }
  bVar13 = (uVar12 & 0x80000000) != 0;
  uVar12 = uVar12 << 1;
  uVar10 = uVar5 * 2;
  bVar14 = CARRY4(uVar5,uVar5);
  uVar5 = uVar5 * 2 + (uint)bVar13;
  uVar11 = uVar11 * 2 + (uint)(bVar14 || CARRY4(uVar10,(uint)bVar13));
  uVar10 = uVar9 - 2;
  if (uVar9 - 1 != 0 && 0xfffff < uVar11) goto LAB_140e35a0;
  uVar6 = uVar5;
  uVar9 = uVar11;
  if (uVar11 == 0) {
    uVar6 = 0;
    uVar9 = uVar5;
  }
  iVar7 = LZCOUNT(uVar9);
  if (uVar11 == 0) {
    iVar7 = iVar7 + 0x20;
  }
  uVar4 = iVar7 - 0xb;
  bVar13 = SBORROW4(uVar4,0x20);
  uVar3 = iVar7 - 0x2b;
  bVar14 = uVar3 == 0;
  uVar5 = uVar3;
  uVar11 = uVar3;
  if ((int)uVar4 < 0x20) {
    bVar13 = SCARRY4(uVar3,0xc);
    uVar11 = iVar7 - 0x1f;
    bVar14 = uVar11 == 0;
    uVar5 = uVar4;
    if (!bVar14 && -0xd < (int)uVar3) {
      uVar6 = uVar9 << (uVar4 & 0xff);
      uVar9 = uVar9 >> (0xc - uVar11 & 0xff);
      goto LAB_140e3618;
    }
  }
  if (bVar14 || (int)uVar11 < 0 != bVar13) {
    uVar12 = 0x20 - uVar5;
  }
  uVar9 = uVar9 << (uVar5 & 0xff);
  if (bVar14 || (int)uVar11 < 0 != bVar13) {
    uVar9 = uVar9 | uVar6 >> (uVar12 & 0xff);
    uVar6 = uVar6 << (uVar5 & 0xff);
  }
LAB_140e3618:
  if ((int)uVar4 <= (int)uVar10) {
    return CONCAT44(uVar9 + (uVar10 - uVar4) * 0x100000 | param_2,uVar6);
  }
  uVar5 = ~(uVar10 - uVar4);
  if ((int)uVar5 < 0x1f) {
    if (uVar5 - 0x13 != 0 && -0xd < (int)(uVar5 - 0x1f)) {
      uVar5 = 0xc - (uVar5 - 0x13);
      return CONCAT44(uVar8,uVar6 >> (0x20 - uVar5 & 0xff) | uVar9 << (uVar5 & 0xff)) &
             0x80000000ffffffff;
    }
    uVar5 = uVar5 + 1;
    return CONCAT44(param_2 | uVar9 >> (uVar5 & 0xff),
                    uVar6 >> (uVar5 & 0xff) | uVar9 << (0x20 - uVar5 & 0xff));
  }
  return CONCAT44(uVar8,uVar9 >> (uVar5 - 0x1f & 0xff)) & 0x80000000ffffffff;
}


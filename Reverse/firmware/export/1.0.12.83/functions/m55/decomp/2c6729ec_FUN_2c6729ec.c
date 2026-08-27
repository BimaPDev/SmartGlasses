/* FUN_2c6729ec @ 0x2c6729ec */

ulonglong FUN_2c6729ec(uint param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  if (param_1 == 0 && param_2 == 0) {
    return CONCAT44(param_2,param_1);
  }
  uVar10 = param_2 & 0x80000000;
  uVar3 = param_2;
  if ((int)uVar10 < 0) {
    bVar12 = param_1 != 0;
    param_1 = -param_1;
    uVar3 = -param_2 - (uint)bVar12;
  }
  iVar9 = 0x432;
  uVar11 = 0;
  if (uVar3 >> 0x16 != 0) {
    iVar9 = 3;
    if (uVar3 >> 0x19 != 0) {
      iVar9 = 6;
    }
    if (uVar3 >> 0x1c != 0) {
      iVar9 = iVar9 + 3;
    }
    uVar6 = iVar9 - ((int)uVar3 >> 0x1f);
    uVar11 = param_1 << (0x20 - uVar6 & 0xff);
    param_1 = param_1 >> (uVar6 & 0xff) | uVar3 << (0x20 - uVar6 & 0xff);
    uVar3 = uVar3 >> (uVar6 & 0xff);
    iVar9 = uVar6 + 0x432;
  }
  if (0xfffff < uVar3) {
    if (0x1fffff < uVar3) {
      uVar6 = uVar3 & 1;
      uVar3 = uVar3 >> 1;
      bVar1 = (byte)param_1;
      param_1 = (uint)(uVar6 != 0) << 0x1f | param_1 >> 1;
      uVar11 = (uint)(bVar1 & 1) << 0x1f | uVar11 >> 1;
      iVar9 = iVar9 + 1;
      if (0xffbfffff < (uint)(iVar9 * 0x200000)) {
        return (ulonglong)(uVar10 | 0x7ff00000) << 0x20;
      }
    }
LAB_2c6727e8:
    bVar12 = 0x7fffffff < uVar11;
    if (uVar11 == 0x80000000) {
      bVar12 = (param_1 & 1) != 0;
    }
    return CONCAT44(uVar3 + iVar9 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar12) | uVar10,
                    param_1 + bVar12);
  }
  bVar13 = (uVar11 & 0x80000000) != 0;
  uVar11 = uVar11 << 1;
  uVar6 = param_1 * 2;
  bVar12 = CARRY4(param_1,param_1);
  param_1 = param_1 * 2 + (uint)bVar13;
  uVar3 = uVar3 * 2 + (uint)(bVar12 || CARRY4(uVar6,(uint)bVar13));
  bVar12 = iVar9 != 0;
  iVar9 = iVar9 + -1;
  if (bVar12 && 0xfffff < uVar3) goto LAB_2c6727e8;
  uVar2 = param_1;
  uVar6 = uVar3;
  if (uVar3 == 0) {
    uVar2 = 0;
    uVar6 = param_1;
  }
  iVar7 = LZCOUNT(uVar6);
  if (uVar3 == 0) {
    iVar7 = iVar7 + 0x20;
  }
  uVar8 = iVar7 - 0xb;
  bVar13 = SBORROW4(uVar8,0x20);
  uVar4 = iVar7 - 0x2b;
  bVar12 = uVar4 == 0;
  uVar3 = uVar4;
  uVar5 = uVar4;
  if ((int)uVar8 < 0x20) {
    bVar13 = SCARRY4(uVar4,0xc);
    uVar5 = iVar7 - 0x1f;
    bVar12 = uVar5 == 0;
    uVar3 = uVar8;
    if (!bVar12 && -0xd < (int)uVar4) {
      uVar2 = uVar6 << (uVar8 & 0xff);
      uVar6 = uVar6 >> (0xc - uVar5 & 0xff);
      goto LAB_2c672860;
    }
  }
  if (bVar12 || (int)uVar5 < 0 != bVar13) {
    uVar11 = 0x20 - uVar3;
  }
  uVar6 = uVar6 << (uVar3 & 0xff);
  if (bVar12 || (int)uVar5 < 0 != bVar13) {
    uVar6 = uVar6 | uVar2 >> (uVar11 & 0xff);
    uVar2 = uVar2 << (uVar3 & 0xff);
  }
LAB_2c672860:
  if ((int)uVar8 <= iVar9) {
    return CONCAT44(uVar6 + (iVar9 - uVar8) * 0x100000 | uVar10,uVar2);
  }
  uVar3 = ~(iVar9 - uVar8);
  if ((int)uVar3 < 0x1f) {
    if (uVar3 - 0x13 != 0 && -0xd < (int)(uVar3 - 0x1f)) {
      uVar3 = 0xc - (uVar3 - 0x13);
      return CONCAT44(param_2,uVar2 >> (0x20 - uVar3 & 0xff) | uVar6 << (uVar3 & 0xff)) &
             0x80000000ffffffff;
    }
    uVar3 = uVar3 + 1;
    return CONCAT44(uVar10 | uVar6 >> (uVar3 & 0xff),
                    uVar2 >> (uVar3 & 0xff) | uVar6 << (0x20 - uVar3 & 0xff));
  }
  return CONCAT44(param_2,uVar6 >> (uVar3 - 0x1f & 0xff)) & 0x80000000ffffffff;
}


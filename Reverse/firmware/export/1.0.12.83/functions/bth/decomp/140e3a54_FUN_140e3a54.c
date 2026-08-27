/* FUN_140e3a54 @ 0x140e3a54 */

ulonglong FUN_140e3a54(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  uint extraout_r2;
  uint uVar1;
  uint extraout_r3;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint unaff_r5;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint extraout_r12;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  undefined8 uVar15;
  
  uVar15 = CONCAT44(param_2,param_1);
  uVar11 = 0x7ff;
  uVar5 = param_2 >> 0x14 & 0x7ff;
  bVar12 = uVar5 == 0;
  if (!bVar12) {
    unaff_r5 = param_4 >> 0x14 & 0x7ff;
    bVar12 = unaff_r5 == 0;
  }
  if (!bVar12) {
    bVar12 = uVar5 == 0x7ff;
  }
  if (!bVar12) {
    bVar12 = unaff_r5 == 0x7ff;
  }
  if (bVar12) {
    uVar15 = FUN_140e3bc2();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    uVar11 = extraout_r12;
  }
  uVar7 = (uint)((ulonglong)uVar15 >> 0x20);
  uVar9 = (uint)uVar15;
  iVar6 = uVar5 - unaff_r5;
  if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
    uVar5 = (uVar7 ^ param_4) & 0x80000000 | uVar7 & 0xfffff;
    bVar13 = SCARRY4(iVar6,uVar11 >> 1);
    uVar7 = iVar6 + (uVar11 >> 1);
    bVar12 = (int)uVar7 < 0;
    bVar14 = uVar7 == 0;
    if (!bVar14 && bVar12 == bVar13) {
      bVar13 = SBORROW4(uVar11,uVar7);
      bVar12 = (int)(uVar11 - uVar7) < 0;
      bVar14 = uVar11 == uVar7;
    }
    if (!bVar14 && bVar12 == bVar13) {
      return CONCAT44(uVar5 | uVar7 * 0x100000,uVar9);
    }
    uVar5 = uVar5 | 0x100000;
    uVar11 = 0;
    bVar14 = SBORROW4(uVar7,1);
    uVar7 = uVar7 - 1;
    bVar12 = uVar7 == 0;
    uVar2 = uVar7;
  }
  else {
    uVar2 = (param_4 & 0xfffff) << 8 | 0x10000000 | param_3 >> 0x18;
    uVar11 = param_3 << 8;
    uVar8 = (uVar7 & 0xfffff) << 8 | 0x10000000 | uVar9 >> 0x18;
    uVar9 = uVar9 * 0x100;
    uVar5 = (uVar7 ^ param_4) & 0x80000000;
    bVar12 = uVar2 <= uVar8;
    if (uVar8 == uVar2) {
      bVar12 = uVar11 <= uVar9;
    }
    iVar6 = iVar6 + (uint)bVar12;
    uVar7 = iVar6 + 0x3fd;
    if (bVar12 == false) {
      uVar2 = uVar2 >> 1;
      uVar11 = (uint)((param_3 >> 0x18 & 1) != 0) << 0x1f | (param_3 & 0xffffff) << 7;
    }
    uVar10 = uVar9 - uVar11;
    uVar8 = (uVar8 - uVar2) - (uint)(uVar9 < uVar11);
    uVar3 = uVar2 >> 1;
    uVar1 = (uint)((uVar2 & 1) != 0) << 0x1f | uVar11 >> 1;
    uVar9 = 0x100000;
    uVar2 = 0x80000;
    while( true ) {
      bVar12 = uVar1 <= uVar10;
      if (uVar3 < uVar8 || uVar8 - uVar3 < (uint)bVar12) {
        uVar10 = uVar10 - uVar1;
        uVar9 = uVar9 | uVar2;
        uVar8 = (uVar8 - uVar3) - (uint)!bVar12;
      }
      uVar4 = uVar3 >> 1;
      uVar11 = (uint)((uVar3 & 1) != 0) << 0x1f | uVar1 >> 1;
      bVar12 = uVar11 <= uVar10;
      if (uVar4 < uVar8 || uVar8 - uVar4 < (uint)bVar12) {
        uVar10 = uVar10 - uVar11;
        uVar9 = uVar9 | uVar2 >> 1;
        uVar8 = (uVar8 - uVar4) - (uint)!bVar12;
      }
      uVar1 = uVar3 >> 2;
      uVar4 = (uint)((uVar4 & 1) != 0) << 0x1f | uVar11 >> 1;
      bVar12 = uVar4 <= uVar10;
      if (uVar1 < uVar8 || uVar8 - uVar1 < (uint)bVar12) {
        uVar10 = uVar10 - uVar4;
        uVar9 = uVar9 | uVar2 >> 2;
        uVar8 = (uVar8 - uVar1) - (uint)!bVar12;
      }
      uVar3 = uVar3 >> 3;
      uVar1 = (uint)((uVar1 & 1) != 0) << 0x1f | uVar4 >> 1;
      bVar12 = uVar1 <= uVar10;
      if (uVar3 < uVar8 || uVar8 - uVar3 < (uint)bVar12) {
        uVar10 = uVar10 - uVar1;
        uVar9 = uVar9 | uVar2 >> 3;
        uVar8 = (uVar8 - uVar3) - (uint)!bVar12;
      }
      uVar11 = uVar8 | uVar10;
      if (uVar11 == 0) break;
      uVar8 = uVar8 << 4 | uVar10 >> 0x1c;
      uVar10 = uVar10 << 4;
      uVar3 = uVar3 << 3 | uVar1 >> 0x1d;
      uVar1 = (uVar4 >> 1) << 3;
      uVar2 = uVar2 >> 4;
      if (uVar2 == 0) {
        if ((uVar5 & 0x100000) != 0) goto LAB_140e3b72;
        uVar5 = uVar5 | uVar9;
        uVar9 = 0;
        uVar2 = 0x80000000;
      }
    }
    if ((uVar5 & 0x100000) == 0) {
      uVar5 = uVar5 | uVar9;
      uVar9 = 0;
    }
LAB_140e3b72:
    bVar13 = 0xfc < uVar7;
    bVar14 = SBORROW4(uVar7,0xfd);
    uVar4 = iVar6 + 0x300;
    bVar12 = uVar4 == 0;
    uVar2 = uVar4;
    if (bVar13 && !bVar12) {
      bVar13 = 0x6ff < uVar4;
      bVar14 = SBORROW4(uVar4,0x700);
      uVar2 = iVar6 - 0x400;
      bVar12 = uVar4 == 0x700;
    }
    if (!bVar13 || bVar12) {
      bVar12 = uVar3 <= uVar8;
      if (uVar8 == uVar3) {
        bVar12 = uVar1 <= uVar10;
      }
      if (uVar8 == uVar3 && uVar10 == uVar1) {
        bVar12 = (uVar9 & 1) != 0;
      }
      return CONCAT44(uVar5 + uVar7 * 0x100000 + (uint)CARRY4(uVar9,(uint)bVar12),uVar9 + bVar12);
    }
  }
  if (!bVar12 && (int)uVar2 < 0 == bVar14) {
    return (ulonglong)(uVar5 & 0x80000000 | 0x7ff00000) << 0x20;
  }
  if ((int)uVar7 < -0x35) {
    return (ulonglong)(uVar5 & 0x80000000) << 0x20;
  }
  uVar2 = -uVar7;
  uVar8 = uVar2 - 0x20;
  if (0x1f < (int)uVar2) {
    uVar2 = uVar9 >> (uVar8 & 0xff) | uVar5 << (0x20 - uVar8 & 0xff);
    uVar7 = (uVar5 >> (uVar8 & 0xff) & ~((uVar5 & 0x80000000) >> (uVar8 & 0xff))) -
            ((int)uVar2 >> 0x1f);
    if ((uVar11 == 0 && uVar9 << (0x20 - uVar8 & 0xff) == 0) && (uVar2 & 0x7fffffff) == 0) {
      uVar7 = uVar7 & ~(uVar2 >> 0x1f);
    }
    return CONCAT44(uVar5,uVar7) & 0x80000000ffffffff;
  }
  if (uVar2 - 0x14 != 0 && -0xd < (int)uVar8) {
    uVar7 = 0xc - (uVar2 - 0x14);
    uVar2 = uVar9 << (uVar7 & 0xff);
    uVar9 = uVar9 >> (0x20 - uVar7 & 0xff) | uVar5 << (uVar7 & 0xff);
    uVar7 = uVar9 + -((int)uVar2 >> 0x1f);
    if (uVar11 == 0 && (uVar2 & 0x7fffffff) == 0) {
      uVar7 = uVar7 & ~(uVar2 >> 0x1f);
    }
    return CONCAT44((uVar5 & 0x80000000) + (uint)CARRY4(uVar9,-((int)uVar2 >> 0x1f)),uVar7);
  }
  uVar8 = uVar9 << (uVar7 + 0x20 & 0xff);
  uVar9 = uVar9 >> (uVar2 & 0xff) | uVar5 << (uVar7 + 0x20 & 0xff);
  uVar7 = uVar9 + -((int)uVar8 >> 0x1f);
  if (uVar11 == 0 && (uVar8 & 0x7fffffff) == 0) {
    uVar7 = uVar7 & ~(uVar8 >> 0x1f);
  }
  return CONCAT44((uVar5 & 0x80000000) +
                  ((uVar5 & 0x7fffffff) >> (uVar2 & 0xff)) +
                  (uint)CARRY4(uVar9,-((int)uVar8 >> 0x1f)),uVar7);
}


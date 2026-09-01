/* FUN_10116d2c @ 0x10116d2c */

undefined4 FUN_10116d2c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong in_d0;
  undefined8 uVar13;
  
  uVar9 = (uint)(in_d0 >> 0x20);
  uVar12 = (uint)in_d0;
  if ((DAT_10116ea4 & ~uVar9) == 0) {
    FUN_10003b08();
    uVar4 = FUN_1000379c();
    return uVar4;
  }
  if ((int)uVar9 < 1) {
    if ((in_d0 & 0x7fffffff00000000) == 0 && uVar12 == 0) goto LAB_10116e50;
    if (uVar9 != 0) {
      uVar13 = FUN_10003798();
      uVar4 = (undefined4)((ulonglong)uVar13 >> 0x20);
      uVar9 = FUN_10003d5c((int)uVar13,uVar4,(int)uVar13,uVar4);
      in_d0 = (ulonglong)uVar9;
      goto LAB_10116e50;
    }
    iVar10 = 0;
    do {
      uVar9 = uVar12 >> 0xb;
      iVar10 = iVar10 + -0x15;
      uVar12 = uVar12 << 0x15;
    } while (uVar9 == 0);
    if (-1 < (int)(uVar9 << 0xb)) goto LAB_10116e12;
    uVar3 = 0x20;
    uVar5 = 0xffffffff;
    uVar6 = uVar12;
LAB_10116e28:
    iVar1 = iVar10 - uVar5;
    uVar9 = uVar12 >> (uVar3 & 0xff) | uVar9;
  }
  else {
    iVar1 = (int)uVar9 >> 0x14;
    iVar10 = 0;
    uVar6 = uVar12;
    if (iVar1 == 0) {
LAB_10116e12:
      uVar6 = uVar9;
      uVar8 = 0;
      do {
        uVar5 = uVar8;
        uVar9 = uVar6 << 1;
        uVar8 = uVar5 + 1;
        iVar1 = uVar6 << 0xc;
        uVar6 = uVar9;
      } while (-1 < iVar1);
      uVar3 = 0x20 - uVar8;
      uVar6 = uVar12 << (uVar8 & 0xff);
      goto LAB_10116e28;
    }
  }
  uVar9 = uVar9 & 0xfffff | 0x100000;
  if (-1 < iVar1 << 0x1f) {
    uVar9 = uVar9 * 2 - ((int)uVar6 >> 0x1f);
    uVar6 = uVar6 << 1;
  }
  uVar12 = 0;
  iVar7 = 0x16;
  iVar1 = uVar9 * 2 - ((int)uVar6 >> 0x1f);
  iVar10 = 0;
  uVar6 = uVar6 << 1;
  uVar9 = 0x200000;
  do {
    iVar2 = iVar10 + uVar9;
    if (iVar2 <= iVar1) {
      iVar1 = iVar1 - iVar2;
      iVar10 = iVar2 + uVar9;
      uVar12 = uVar12 + uVar9;
    }
    iVar7 = iVar7 + -1;
    uVar9 = uVar9 >> 1;
    iVar1 = iVar1 * 2 - ((int)uVar6 >> 0x1f);
    uVar6 = uVar6 << 1;
  } while (iVar7 != 0);
  iVar2 = 0x20;
  uVar5 = 0x80000000;
  iVar7 = 0;
  uVar9 = 0;
  do {
    uVar3 = uVar5 + iVar7;
    iVar11 = iVar10;
    if (iVar10 < iVar1) {
      if ((int)uVar3 < 0) {
LAB_10116dea:
        if (-1 < (int)(uVar3 + uVar5)) {
          iVar11 = iVar10 + 1;
        }
      }
      iVar1 = iVar1 - iVar10;
      iVar10 = iVar11;
      if (uVar6 < uVar3) {
        iVar1 = iVar1 + -1;
      }
LAB_10116db4:
      iVar7 = uVar3 + uVar5;
      uVar6 = uVar6 - uVar3;
      uVar9 = uVar9 + uVar5;
    }
    else if ((iVar1 == iVar10) && (uVar3 <= uVar6)) {
      if ((int)uVar3 < 0) goto LAB_10116dea;
      iVar1 = 0;
      goto LAB_10116db4;
    }
    iVar2 = iVar2 + -1;
    uVar5 = uVar5 >> 1;
    iVar1 = iVar1 * 2 - ((int)uVar6 >> 0x1f);
    uVar6 = uVar6 << 1;
  } while (iVar2 != 0);
  if (iVar1 == 0 && uVar6 == 0) {
    uVar9 = uVar9 >> 1;
  }
  else if (uVar9 == 0xffffffff) {
    uVar12 = uVar12 + 1;
    uVar9 = 0;
  }
  else {
    uVar9 = uVar9 + 1 >> 1;
  }
  if ((uVar12 & 1) != 0) {
    uVar9 = uVar9 | 0x80000000;
  }
  in_d0 = (ulonglong)uVar9;
LAB_10116e50:
  return (int)in_d0;
}


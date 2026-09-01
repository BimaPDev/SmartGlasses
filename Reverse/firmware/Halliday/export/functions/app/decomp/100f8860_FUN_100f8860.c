/* FUN_100f8860 @ 0x100f8860 */

uint FUN_100f8860(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_30;
  
  uVar7 = *param_1;
  uVar2 = param_1[1];
  if ((int)uVar7 < 0) {
    iVar9 = -1;
    uVar7 = -uVar7;
    uVar5 = DAT_100f89bc;
  }
  else {
    iVar9 = 1;
    uVar5 = 0x10000;
  }
  if ((int)uVar2 < 0) {
    uVar2 = -uVar2;
    local_30 = -1;
    uVar3 = DAT_100f89bc;
  }
  else {
    uVar3 = 0x10000;
    local_30 = 1;
  }
  if (uVar7 == 0) {
    uVar7 = 0;
    if (uVar2 != 0) {
      param_1[1] = uVar3;
      return uVar2;
    }
  }
  else {
    if (uVar2 == 0) {
      *param_1 = uVar5;
      return uVar7;
    }
    if (uVar2 < uVar7) {
      uVar5 = uVar7 + (uVar2 >> 1);
    }
    else {
      uVar5 = uVar2 + (uVar7 >> 1);
    }
    iVar8 = LZCOUNT(uVar5);
    if (uVar5 < 0xaaaaaaaaU >> iVar8) {
      iVar4 = 0xf;
    }
    else {
      iVar4 = 0x10;
    }
    uVar3 = iVar8 - iVar4;
    if ((int)uVar3 < 1) {
      uVar1 = iVar4 - iVar8;
      uVar7 = uVar7 >> (uVar1 & 0xff);
      uVar2 = uVar2 >> (uVar1 & 0xff);
      uVar5 = uVar5 >> (uVar1 & 0xff);
    }
    else {
      uVar7 = uVar7 << (uVar3 & 0xff);
      uVar2 = uVar2 << (uVar3 & 0xff);
      if (uVar2 < uVar7) {
        uVar5 = uVar7 + (uVar2 >> 1);
      }
      else {
        uVar5 = uVar2 + (uVar7 >> 1);
      }
    }
    iVar6 = 0x10000 - uVar5;
    do {
      uVar1 = uVar2 + ((int)(uVar2 * iVar6) >> 0x10);
      uVar5 = uVar7 + ((int)(uVar7 * iVar6) >> 0x10);
      iVar10 = -(uVar5 * uVar5 + uVar1 * uVar1);
      if (iVar10 < 0) {
        iVar10 = iVar10 + 0x1ff;
      }
      iVar11 = (iVar6 + 0x10000 >> 8) * (iVar10 >> 9);
      iVar10 = iVar11;
      if (iVar11 < 0) {
        iVar10 = iVar11 + 0xffff;
      }
      iVar6 = iVar6 + (iVar10 >> 0x10);
    } while (0xffff < iVar11);
    iVar6 = uVar5 * uVar7 + uVar1 * uVar2;
    if (iVar9 == -1) {
      uVar5 = -uVar5;
    }
    if (local_30 == -1) {
      uVar1 = -uVar1;
    }
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xffff;
    }
    *param_1 = uVar5;
    param_1[1] = uVar1;
    iVar9 = (iVar6 >> 0x10) + 0x10000;
    if ((int)uVar3 < 1) {
      return iVar9 << (iVar4 - iVar8 & 0xffU);
    }
    uVar7 = (uint)(iVar9 + (1 << (uVar3 - 1 & 0xff))) >> (uVar3 & 0xff);
  }
  return uVar7;
}


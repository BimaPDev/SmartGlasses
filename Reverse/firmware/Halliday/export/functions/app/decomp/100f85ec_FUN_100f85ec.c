/* FUN_100f85ec @ 0x100f85ec */

uint FUN_100f85ec(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((int)param_1 < 0) {
    iVar8 = 1;
    iVar6 = -1;
    param_1 = -param_1;
  }
  else {
    iVar8 = -1;
    iVar6 = 1;
  }
  iVar7 = iVar6;
  if ((int)param_2 < 0) {
    param_2 = -param_2;
    iVar7 = iVar8;
    iVar8 = iVar6;
  }
  if ((int)param_3 < 0) {
    param_3 = -param_3;
    iVar7 = iVar8;
  }
  if (param_3 != 0) {
    if (param_1 + param_2 <= DAT_100f86dc - (param_3 >> 0x11)) {
      param_3 = (param_2 * param_1 + (param_3 >> 1)) / param_3;
      if (iVar7 == -1) {
        param_3 = -param_3;
      }
      return param_3;
    }
    uVar3 = (param_2 >> 0x10) * (param_1 & 0xffff);
    uVar1 = (param_2 & 0xffff) * (param_1 >> 0x10);
    uVar5 = (param_2 & 0xffff) * (param_1 & 0xffff);
    uVar2 = uVar3 + uVar1;
    uVar4 = uVar2 * 0x10000;
    if (CARRY4(uVar3,uVar1)) {
      iVar6 = 0x10000;
    }
    else {
      iVar6 = 0;
    }
    uVar3 = uVar5 + uVar4;
    uVar1 = (param_3 >> 1) + uVar3;
    uVar2 = (param_2 >> 0x10) * (param_1 >> 0x10) + (uVar2 >> 0x10) + (uint)CARRY4(uVar5,uVar4) +
            (uint)CARRY4(param_3 >> 1,uVar3) + iVar6;
    if (uVar2 == 0) {
      uVar1 = uVar1 / param_3;
      if (iVar7 == -1) {
        uVar1 = -uVar1;
      }
      return uVar1;
    }
    if (uVar2 < param_3) {
      iVar6 = LZCOUNT(uVar2);
      uVar4 = 0x20 - iVar6;
      uVar3 = uVar1 >> (uVar4 & 0xff) | uVar2 << iVar6;
      uVar2 = uVar3 / param_3;
      uVar3 = uVar3 - param_3 * uVar2;
      uVar1 = uVar1 << iVar6;
      do {
        uVar3 = uVar1 >> 0x1f | uVar3 << 1;
        uVar2 = uVar2 << 1;
        if (param_3 <= uVar3) {
          uVar3 = uVar3 - param_3;
          uVar2 = uVar2 | 1;
        }
        uVar4 = uVar4 - 1;
        uVar1 = uVar1 << 1;
      } while (uVar4 != 0);
      goto LAB_100f8636;
    }
  }
  uVar2 = 0x7fffffff;
LAB_100f8636:
  if (iVar7 == -1) {
    uVar2 = -uVar2;
  }
  return uVar2;
}


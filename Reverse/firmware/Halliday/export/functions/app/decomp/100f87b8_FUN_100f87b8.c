/* FUN_100f87b8 @ 0x100f87b8 */

uint FUN_100f87b8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if ((int)param_1 < 0) {
    iVar3 = 1;
    iVar5 = -1;
    param_1 = -param_1;
  }
  else {
    iVar3 = -1;
    iVar5 = 1;
  }
  if ((int)param_2 < 0) {
    param_2 = -param_2;
    iVar5 = iVar3;
  }
  if (param_2 != 0) {
    if (param_1 <= 0xffff - (param_2 >> 0x11)) {
      param_2 = ((param_2 >> 1) + param_1 * 0x10000) / param_2;
      if (iVar5 == -1) {
        param_2 = -param_2;
      }
      return param_2;
    }
    uVar2 = param_1 * 0x10000 + (param_2 >> 1);
    uVar1 = (uint)CARRY4(param_1 * 0x10000,param_2 >> 1) + (param_1 >> 0x10);
    if (uVar1 < param_2) {
      iVar3 = LZCOUNT(uVar1);
      uVar6 = 0x20 - iVar3;
      uVar4 = uVar1 << iVar3 | uVar2 >> (uVar6 & 0xff);
      uVar1 = uVar4 / param_2;
      uVar4 = uVar4 - param_2 * uVar1;
      uVar2 = uVar2 << iVar3;
      do {
        uVar4 = uVar2 >> 0x1f | uVar4 << 1;
        uVar1 = uVar1 << 1;
        if (param_2 <= uVar4) {
          uVar4 = uVar4 - param_2;
          uVar1 = uVar1 | 1;
        }
        uVar6 = uVar6 - 1;
        uVar2 = uVar2 << 1;
      } while (uVar6 != 0);
      if (iVar5 == -1) {
        uVar1 = -uVar1;
      }
      return uVar1;
    }
  }
  uVar1 = 0x7fffffff;
  if (iVar5 == -1) {
    uVar1 = 0x80000001;
  }
  return uVar1;
}


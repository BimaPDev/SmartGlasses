/* FUN_140e39dc @ 0x140e39dc */

ulonglong FUN_140e39dc(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r4;
  uint uVar4;
  uint uVar5;
  uint in_r12;
  bool bVar6;
  
  uVar4 = in_r12 & param_4 >> 0x14;
  if (unaff_r4 == in_r12 || uVar4 == in_r12) {
    bVar1 = (param_2 & 0x7fffffff) == 0;
    bVar6 = param_1 == 0 && bVar1;
    uVar5 = param_4;
    uVar2 = param_3;
    if (param_1 != 0 || !bVar1) {
      bVar6 = param_3 == 0 && (param_4 & 0x7fffffff) == 0;
      uVar5 = param_2;
      uVar2 = param_1;
    }
    uVar3 = uVar5;
    if (((!bVar6) && ((unaff_r4 != in_r12 || (uVar2 == 0 && (uVar5 & 0xfffff) == 0)))) &&
       ((uVar4 != in_r12 ||
        (uVar2 = param_3, uVar3 = param_4, param_3 == 0 && (param_4 & 0xfffff) == 0)))) {
      return (ulonglong)((uVar5 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
    }
    return CONCAT44(uVar3,uVar2) | 0x7ff8000000000000;
  }
  bVar1 = (param_2 & 0x7fffffff) == 0;
  bVar6 = param_1 == 0 && bVar1;
  if (param_1 != 0 || !bVar1) {
    bVar6 = param_3 == 0 && (param_4 & 0x7fffffff) == 0;
  }
  if (bVar6) {
    return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
  }
  if (unaff_r4 == 0) {
    uVar5 = param_2 & 0x80000000;
    do {
      uVar2 = param_1 & 0x80000000;
      param_1 = param_1 << 1;
      param_2 = param_2 * 2 + (uint)(uVar2 != 0);
    } while ((param_2 & 0x100000) == 0);
    param_2 = param_2 | uVar5;
    if (uVar4 != 0) {
      return CONCAT44(param_2,param_1);
    }
  }
  do {
    uVar4 = param_3 & 0x80000000;
    param_3 = param_3 << 1;
    param_4 = param_4 * 2 + (uint)(uVar4 != 0);
  } while ((param_4 & 0x100000) == 0);
  return CONCAT44(param_2,param_1);
}


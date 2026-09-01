/* FUN_10003eca @ 0x10003eca */

ulonglong FUN_10003eca(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint unaff_r4;
  uint uVar3;
  uint uVar4;
  uint in_r12;
  bool bVar5;
  
  uVar3 = in_r12 & param_4 >> 0x14;
  uVar4 = param_2;
  if (unaff_r4 != in_r12 || uVar3 != in_r12) {
    if (unaff_r4 == in_r12) {
      if ((param_1 == 0 && (param_2 & 0xfffff) == 0) &&
         (param_1 = param_3, uVar4 = param_4, uVar3 != in_r12)) {
LAB_10003d3c:
        return (ulonglong)((param_2 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
      }
    }
    else if (uVar3 == in_r12) {
      param_1 = param_3;
      uVar4 = param_4;
      if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
LAB_10003d00:
        return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
      }
    }
    else {
      bVar1 = (param_2 & 0x7fffffff) == 0;
      bVar5 = param_1 == 0 && bVar1;
      if (param_1 != 0 || !bVar1) {
        bVar5 = param_3 == 0 && (param_4 & 0x7fffffff) == 0;
      }
      if (!bVar5) {
        if (unaff_r4 == 0) {
          uVar4 = param_2 & 0x80000000;
          do {
            uVar2 = param_1 & 0x80000000;
            param_1 = param_1 << 1;
            param_2 = param_2 * 2 + (uint)(uVar2 != 0);
          } while ((param_2 & 0x100000) == 0);
          param_2 = param_2 | uVar4;
          if (uVar3 != 0) {
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
      if (param_1 != 0 || (param_2 & 0x7fffffff) != 0) goto LAB_10003d3c;
      if (param_3 != 0 || (param_4 & 0x7fffffff) != 0) goto LAB_10003d00;
    }
  }
  return CONCAT44(uVar4,param_1) | 0x7ff8000000000000;
}


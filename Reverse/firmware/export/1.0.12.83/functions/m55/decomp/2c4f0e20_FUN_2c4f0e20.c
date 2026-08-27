/* FUN_2c4f0e20 @ 0x2c4f0e20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4f0e20(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (((((uVar1 ^ param_2) & param_4) != 0) && ((int)(uVar1 << 0x16) >> 0x16 != -1)) &&
     ((param_3 & param_2) != (uVar1 & _DAT_2c4f0e80 | _LAB_2c4f0e84))) {
    if (((param_2 >> 0x14 & 0x700) == 0x400) &&
       ((param_2 & 0xfffff) >> 10 <= (uVar1 & 0xfffff) >> 10)) {
      *param_1 = uVar1 + (char)(param_2 >> 0x14) * 0x400;
      return 0;
    }
    return 0;
  }
  return 1;
}


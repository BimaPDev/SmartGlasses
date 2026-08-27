/* FUN_2c4bf116 @ 0x2c4bf116 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4bf116(uint param_1)

{
  uint uVar1;
  bool in_ZR;
  bool in_CY;
  
  uVar1 = param_1 >> 4;
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bf168,uVar1);
  }
  if ((param_1 & 8) == 0) {
    if ((1 << (param_1 & 0xf) & **(uint **)(_LAB_2c4bf160 + uVar1 * 4) & 0xff) == 0) {
      return 1;
    }
    func_0x2c4be854(uVar1);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4bf164,uVar1,param_1 & 0xf);
}


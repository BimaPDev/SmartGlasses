/* FUN_2c4bf0a6 @ 0x2c4bf0a6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4bf0a6(uint param_1,int param_2)

{
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bf0d0);
  }
  if (-1 < (int)(param_1 << 0x1c)) {
    return *(undefined4 *)(*(int *)(_LAB_2c4bf0cc + param_2 * 4) + ((param_1 & 0xf) + 8) * 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4bf0d4);
}


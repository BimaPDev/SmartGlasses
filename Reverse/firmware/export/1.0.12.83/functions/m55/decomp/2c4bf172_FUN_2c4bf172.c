/* FUN_2c4bf172 @ 0x2c4bf172 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_2c4bf172(uint param_1,int param_2)

{
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4bf1a8);
  }
  if (-1 < (int)(param_1 << 0x1c)) {
    return (1 << (param_1 & 0xf) & *(uint *)(*(int *)(_LAB_2c4bf1a4 + param_2 * 4) + 0x1c) & 0xff)
           != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4bf1ac);
}


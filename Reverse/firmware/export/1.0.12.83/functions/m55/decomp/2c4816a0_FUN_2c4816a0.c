/* FUN_2c4816a0 @ 0x2c4816a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4816a0(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c481b1c,_LAB_2c481b18,699,0);
  }
  if (3 < param_2) {
    uVar1 = FUN_2c481028();
    if (((uint)*(byte *)(param_1 + 2) == (uVar1 & 0xff)) &&
       ((uint)*(byte *)(param_1 + 3) == (uVar1 & 0xffffff) >> 8)) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x2c0,_LAB_2c48197c,_LAB_2c481978,_LAB_2c481974,_LAB_2c48196c,
            *(undefined1 *)(param_1 + 1));
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c481970,_LAB_2c48196c,0x2bd);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c481b1c,_LAB_2c481b18,700,0);
}


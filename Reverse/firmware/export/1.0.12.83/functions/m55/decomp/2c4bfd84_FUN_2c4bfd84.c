/* FUN_2c4bfd84 @ 0x2c4bfd84 */

undefined4 FUN_2c4bfd84(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*DAT_2c4bfdac == param_1) {
    iVar1 = 0;
  }
  else {
    if (DAT_2c4bfdac[8] != param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4bfdb4,DAT_2c4bfdb0,param_1,DAT_2c4bfdac,param_4);
    }
    iVar1 = 1;
  }
  return *(undefined4 *)(DAT_2c4bfdac + iVar1 * 8 + 4);
}


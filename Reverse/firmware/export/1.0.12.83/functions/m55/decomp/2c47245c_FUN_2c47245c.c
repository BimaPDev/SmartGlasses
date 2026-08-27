/* FUN_2c47245c @ 0x2c47245c */

undefined4 FUN_2c47245c(undefined4 param_1,uint param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = DAT_2c472514;
  piVar1 = DAT_2c4724f4;
  if (DAT_2c4724f0 <= param_2) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x119,DAT_2c472508,DAT_2c472504,DAT_2c472500,DAT_2c4724fc,DAT_2c4724f0);
  }
  if (param_2 != 0) {
    if (*DAT_2c4724f4 != 0) {
      FUN_2c644044(*DAT_2c472514,0xffffffff);
      uVar3 = FUN_2c472278(*piVar1,DAT_2c4724f8,param_1,param_2);
      FUN_2c644080(*puVar2);
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x123,DAT_2c472508,DAT_2c472504,DAT_2c472510,DAT_2c4724fc);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x11e,DAT_2c472508,DAT_2c472504,DAT_2c47250c,DAT_2c4724fc);
}


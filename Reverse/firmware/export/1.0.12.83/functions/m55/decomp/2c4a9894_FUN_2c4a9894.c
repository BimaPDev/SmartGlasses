/* FUN_2c4a9894 @ 0x2c4a9894 */

undefined4 FUN_2c4a9894(uint param_1)

{
  int iVar1;
  
  if (*DAT_2c4a9908 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x166,DAT_2c4a9914,DAT_2c4a9910,DAT_2c4a9918);
  }
  if (param_1 < 0x11) {
    if (param_1 == 0) {
      iVar1 = 0x2d0;
    }
    else {
      iVar1 = (param_1 - 1) * -0x18 + 0x168;
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x173,DAT_2c4a9914,DAT_2c4a9910,DAT_2c4a990c,param_1,iVar1);
  }
  return 0xffffffff;
}


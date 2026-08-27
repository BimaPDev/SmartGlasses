/* FUN_2c490020 @ 0x2c490020 */

void FUN_2c490020(uint param_1)

{
  int iVar1;
  
  if ((0xb < (param_1 - 6 & 0xff)) && (iVar1 = FUN_2c48f590(), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x196,DAT_2c490190,DAT_2c49018c,DAT_2c490198,param_1);
  }
  iVar1 = FUN_2c490d3c();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x19b,DAT_2c490190,DAT_2c49018c,DAT_2c4901a8);
  }
  if (param_1 < 0x15) {
    if (*(char *)(DAT_2c49017c + param_1 * 0x18 + 0xc) != '\0') {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1a7,DAT_2c490190,DAT_2c49018c,DAT_2c490180,DAT_2c490184,param_1);
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x1a3,DAT_2c490190,DAT_2c49018c,DAT_2c49019c,DAT_2c490184,param_1);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x19f,DAT_2c490190,DAT_2c49018c,DAT_2c4901ac,DAT_2c490184,param_1);
}


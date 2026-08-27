/* FUN_2c49666c @ 0x2c49666c */

void FUN_2c49666c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_2c490d3c();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x9e,DAT_2c4966a8,DAT_2c4966a4,DAT_2c4966a0,DAT_2c49669c);
  }
  iVar1 = FUN_2c48a2b8();
  if (iVar1 == 0) {
    if (param_1 == 1) {
      iVar1 = FUN_2c4932a0();
      if ((iVar1 != 0) || (iVar1 = FUN_2c4f860c(), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0xa8,DAT_2c49662c,DAT_2c496628,DAT_2c496658,DAT_2c49664c);
      }
      iVar1 = thunk_FUN_2c489a64();
      if (iVar1 == 0) {
        iVar1 = FUN_2c63c57c();
        if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0xb9,DAT_2c49662c,DAT_2c496628,DAT_2c496650,DAT_2c49664c);
        }
                    /* WARNING: Subroutine does not return */
        TRACE(4,0xbc,DAT_2c49662c,DAT_2c496628,DAT_2c496624,DAT_2c49664c,1);
      }
    }
    else {
      iVar1 = thunk_FUN_2c489a64();
      if (iVar1 == 0) {
        iVar1 = FUN_2c63c57c();
        if ((param_1 == 0) && (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0xb4,DAT_2c49662c,DAT_2c496628,DAT_2c49665c,DAT_2c49664c);
        }
                    /* WARNING: Subroutine does not return */
        TRACE(4,0xbc,DAT_2c49662c,DAT_2c496628,DAT_2c496624,DAT_2c49664c,param_1);
      }
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xad,DAT_2c49662c,DAT_2c496628,DAT_2c496648,DAT_2c49664c);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xa3,DAT_2c49662c,DAT_2c496628,DAT_2c496654,DAT_2c49664c);
}


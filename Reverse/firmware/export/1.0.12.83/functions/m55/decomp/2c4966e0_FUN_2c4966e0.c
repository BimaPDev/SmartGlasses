/* FUN_2c4966e0 @ 0x2c4966e0 */

void FUN_2c4966e0(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *DAT_2c496720;
  iVar2 = FUN_2c490d3c();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x9e,DAT_2c496730,DAT_2c49672c,DAT_2c496728,DAT_2c496724);
  }
  iVar2 = FUN_2c48a2b8();
  if (iVar2 == 0) {
    if (cVar1 == '\x01') {
      iVar2 = FUN_2c4932a0();
      if ((iVar2 != 0) || (iVar2 = FUN_2c4f860c(), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0xa8,DAT_2c49662c,DAT_2c496628,DAT_2c496658,DAT_2c49664c);
      }
      iVar2 = thunk_FUN_2c489a64();
      if (iVar2 == 0) {
        iVar2 = FUN_2c63c57c();
        if (iVar2 != 1) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0xb9,DAT_2c49662c,DAT_2c496628,DAT_2c496650,DAT_2c49664c);
        }
                    /* WARNING: Subroutine does not return */
        TRACE(4,0xbc,DAT_2c49662c,DAT_2c496628,DAT_2c496624,DAT_2c49664c,1);
      }
    }
    else {
      iVar2 = thunk_FUN_2c489a64();
      if (iVar2 == 0) {
        iVar2 = FUN_2c63c57c();
        if ((cVar1 == '\0') && (iVar2 == 1)) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0xb4,DAT_2c49662c,DAT_2c496628,DAT_2c49665c,DAT_2c49664c);
        }
                    /* WARNING: Subroutine does not return */
        TRACE(4,0xbc,DAT_2c49662c,DAT_2c496628,DAT_2c496624,DAT_2c49664c,cVar1);
      }
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xad,DAT_2c49662c,DAT_2c496628,DAT_2c496648,DAT_2c49664c);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xa3,DAT_2c49662c,DAT_2c496628,DAT_2c496654,DAT_2c49664c);
}


/* FUN_2c63c328 @ 0x2c63c328 */

/* WARNING: Removing unreachable block (ram,0x2c49651c) */
/* WARNING: Removing unreachable block (ram,0x2c496522) */
/* WARNING: Removing unreachable block (ram,0x2c49656c) */
/* WARNING: Removing unreachable block (ram,0x2c496528) */
/* WARNING: Removing unreachable block (ram,0x2c496530) */
/* WARNING: Removing unreachable block (ram,0x2c496608) */
/* WARNING: Removing unreachable block (ram,0x2c496538) */

void FUN_2c63c328(void)

{
  int iVar1;
  
  FUN_2c62be40();
  iVar1 = FUN_2c63c034();
  if (iVar1 == 0) {
    iVar1 = FUN_2c48a2b8();
  }
  else {
    FUN_2c620fa4(0xbbf,0);
    func_0x2c5e10f0();
    iVar1 = FUN_2c48a2b8();
  }
  if (iVar1 != 0) {
    return;
  }
  FUN_2c63b92c();
  iVar1 = FUN_2c490d3c();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x9e,DAT_2c4966a8,DAT_2c4966a4,DAT_2c4966a0,DAT_2c49669c);
  }
  iVar1 = FUN_2c48a2b8();
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_2c489a64();
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xad,DAT_2c49662c,DAT_2c496628,DAT_2c496648,DAT_2c49664c);
    }
    iVar1 = FUN_2c63c57c();
    if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xbc,DAT_2c49662c,DAT_2c496628,DAT_2c496624,DAT_2c49664c,0);
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xb4,DAT_2c49662c,DAT_2c496628,DAT_2c49665c,DAT_2c49664c);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xa3,DAT_2c49662c,DAT_2c496628,DAT_2c496654,DAT_2c49664c);
}


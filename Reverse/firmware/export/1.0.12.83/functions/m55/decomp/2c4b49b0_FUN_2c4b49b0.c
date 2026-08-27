/* FUN_2c4b49b0 @ 0x2c4b49b0 */

void FUN_2c4b49b0(void)

{
  int iVar1;
  
  iVar1 = FUN_2c4969a8();
  if (iVar1 == 0) {
    iVar1 = FUN_2c4b4e88(DAT_2c4b4a10,200);
  }
  else {
    FUN_2c4b4f50(0x28);
    iVar1 = FUN_2c4b4e88(DAT_2c4b4a10,200);
  }
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x177,DAT_2c4b4a20,DAT_2c4b4a1c,DAT_2c4b4a18,DAT_2c4b4a14,iVar1);
}


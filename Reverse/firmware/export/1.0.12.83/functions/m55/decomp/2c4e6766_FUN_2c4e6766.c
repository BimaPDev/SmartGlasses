/* FUN_2c4e6766 @ 0x2c4e6766 */

void FUN_2c4e6766(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_2c6685ec();
  iVar2 = *DAT_2c4e67b4;
  if ((uint)(iVar2 + iVar1) < DAT_2c4e67b8) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x217,DAT_2c4e67c8,DAT_2c4e67c0,DAT_2c4e67c4,DAT_2c4e67bc,DAT_2c4e67b8,iVar2,iVar1,
          DAT_2c4e67b8 - iVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c4e67cc,DAT_2c4e67bc,DAT_2c4e67b8,iVar2,iVar1);
}


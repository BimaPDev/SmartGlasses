/* FUN_2c63be0c @ 0x2c63be0c */

void FUN_2c63be0c(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_2c63be40;
  if (*DAT_2c63be40 != 0) {
    FUN_2c4c26a8();
    iVar2 = FUN_2c4c25c0(*piVar1);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x23b,DAT_2c63be4c,DAT_2c63be48,DAT_2c63be44);
    }
    *piVar1 = 0;
  }
  return;
}


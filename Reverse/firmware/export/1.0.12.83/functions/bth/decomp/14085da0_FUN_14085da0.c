/* FUN_14085da0 @ 0x14085da0 */

void FUN_14085da0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(DAT_14085e20 + 0x12) == '\0') {
    uVar2 = 0;
    iVar1 = DAT_14085e20;
  }
  else {
    if (*(char *)(DAT_14085e20 + 0x26) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_14085e28,DAT_14085e24);
    }
    uVar2 = 1;
    iVar1 = DAT_14085e20 + 0x14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x43,DAT_14085e2c,DAT_14085e24,iVar1,uVar2);
}


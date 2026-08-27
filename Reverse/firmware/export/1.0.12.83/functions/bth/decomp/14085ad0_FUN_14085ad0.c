/* FUN_14085ad0 @ 0x14085ad0 */

void FUN_14085ad0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(DAT_14085be4 + 0x34) == '\0') {
    uVar2 = 0;
    iVar1 = DAT_14085be4;
  }
  else {
    if (*(char *)(DAT_14085be4 + 0xcc) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_14085bec,DAT_14085be8);
    }
    uVar2 = 1;
    iVar1 = DAT_14085be4 + 0x98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x43,DAT_14085bf0,DAT_14085be8,iVar1,uVar2);
}


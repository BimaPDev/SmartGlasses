/* FUN_140959e4 @ 0x140959e4 */

undefined4 FUN_140959e4(undefined4 param_1)

{
  int iVar1;
  
  FUN_140755e4();
  iVar1 = FUN_14085e30(param_1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_14095aa8,DAT_14095a90);
  }
  if (*(char *)(iVar1 + 0x4b) != '\x03') {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_14095aa0,DAT_14095a90);
  }
  if (*(char *)(iVar1 + 0x3f) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_14095aa4,DAT_14095a90);
  }
  if (*(char *)(iVar1 + 0x3c) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x43,DAT_14095a94,DAT_14095a90,iVar1,*(char *)(iVar1 + 0x3c));
  }
  *(undefined1 *)(iVar1 + 0x3f) = 1;
  FUN_1407561c();
  return 2;
}


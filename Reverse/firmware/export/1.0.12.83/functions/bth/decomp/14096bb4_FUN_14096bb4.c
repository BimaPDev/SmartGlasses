/* FUN_14096bb4 @ 0x14096bb4 */

undefined4 FUN_14096bb4(void)

{
  int iVar1;
  
  iVar1 = FUN_14096b4c();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_14096c4c,DAT_14096c40);
  }
  if (*(char *)(iVar1 + 0x4b) != '\x03') {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_14096c44,DAT_14096c40);
  }
  FUN_140755e4();
  if (*(char *)(iVar1 + 0x3c) != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x44,DAT_14096c48,*(undefined1 *)(iVar1 + 0x52),*(char *)(iVar1 + 0x3c),
                 *(undefined1 *)(iVar1 + 0x40));
  }
  FUN_1407561c();
  return 2;
}


/* FUN_14088cf8 @ 0x14088cf8 */

void FUN_14088cf8(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_14088e14,DAT_14088df8);
  }
  iVar1 = FUN_14085c48();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x46,DAT_14088df4,*(undefined1 *)(iVar1 + 0x52),DAT_14088df8,iVar1,
                 *(undefined2 *)(iVar1 + 0x1c),*(undefined1 *)(iVar1 + 0x4b));
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x41,DAT_14088e18,DAT_14088df8);
}


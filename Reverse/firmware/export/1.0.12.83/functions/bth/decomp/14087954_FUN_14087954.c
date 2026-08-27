/* FUN_14087954 @ 0x14087954 */

undefined4 FUN_14087954(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_14085c48();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x40,DAT_140879d4);
  }
  iVar2 = FUN_14074b88(iVar1 + 8);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x40,DAT_140879d8);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x40,DAT_140879dc);
  }
  if (*(char *)(iVar1 + 0xf) != '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x43,DAT_140879d0,DAT_140879cc,iVar1,*(undefined1 *)(iVar1 + 0x11));
  }
  FUN_14087914(*(undefined2 *)(iVar1 + 0xc),param_2);
  return 0;
}


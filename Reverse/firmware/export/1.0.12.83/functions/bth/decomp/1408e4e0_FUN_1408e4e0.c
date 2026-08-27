/* FUN_1408e4e0 @ 0x1408e4e0 */

undefined2 FUN_1408e4e0(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 1;
  }
  iVar1 = FUN_1408a7dc();
  if (iVar1 != 0) {
    return *(undefined2 *)(iVar1 + 0x28);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x40,DAT_1408e500);
}


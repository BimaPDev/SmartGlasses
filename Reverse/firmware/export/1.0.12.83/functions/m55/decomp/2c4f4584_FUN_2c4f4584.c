/* FUN_2c4f4584 @ 0x2c4f4584 */

undefined4 FUN_2c4f4584(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if (*(int *)(iVar1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(2,*(undefined4 *)(param_1 + 0xc));
  }
  if (*(int *)(iVar1 + 0x34) != 0) {
    if (*(int *)(iVar1 + 0x38) != 0) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(2,*(undefined4 *)(param_1 + 100));
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(2,*(undefined4 *)(param_1 + 0x1c));
}


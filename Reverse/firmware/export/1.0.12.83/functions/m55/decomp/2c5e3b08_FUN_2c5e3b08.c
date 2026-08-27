/* FUN_2c5e3b08 @ 0x2c5e3b08 */

undefined4 FUN_2c5e3b08(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 4) != 0) {
    uVar1 = FUN_2c5e3cd8(*(int *)(param_2 + 4));
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5e3b48,0xc0,DAT_2c5e3b44,DAT_2c5e3b40);
}


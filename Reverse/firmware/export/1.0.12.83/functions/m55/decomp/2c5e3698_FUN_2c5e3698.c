/* FUN_2c5e3698 @ 0x2c5e3698 */

undefined4 FUN_2c5e3698(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    uVar1 = FUN_2c5e3cd8(*(undefined4 *)(param_2 + 4));
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5e36dc,0xea,DAT_2c5e36d8,LAB_2c5e36d4);
}


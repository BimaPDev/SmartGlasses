/* FUN_2c4fec8c @ 0x2c4fec8c */

void FUN_2c4fec8c(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c4fece4,0x494,DAT_2c4fece0,LAB_2c4fecdc,DAT_2c4fecd8);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10) = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,DAT_2c4fece4,0x496,DAT_2c4fece0,LAB_2c4fecdc,DAT_2c4fece8);
}


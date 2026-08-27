/* FUN_2c4fecec @ 0x2c4fecec */

void FUN_2c4fecec(int param_1,int param_2)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c4fed44,0x489,DAT_2c4fed40,DAT_2c4fed38,DAT_2c4fed48);
  }
  *(int *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c);
  if (param_2 != *(int *)(*(int *)(param_1 + 0xc) + 0x10)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c4fed44,0x48e,DAT_2c4fed40,DAT_2c4fed38,DAT_2c4fed3c);
  }
  return;
}


/* FUN_2c53bb9c @ 0x2c53bb9c */

void FUN_2c53bb9c(int param_1,int param_2)

{
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c53bc70,0xb6,DAT_2c53bc6c,DAT_2c53bc84,0);
  }
  *(int *)(param_1 + 4) = param_2;
  if (*(int *)(param_1 + 8) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c53bc70,0xbb,DAT_2c53bc6c,DAT_2c53bc68);
}


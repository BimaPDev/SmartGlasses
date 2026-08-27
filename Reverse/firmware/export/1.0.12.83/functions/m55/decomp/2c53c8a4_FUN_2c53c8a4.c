/* FUN_2c53c8a4 @ 0x2c53c8a4 */

void FUN_2c53c8a4(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c53c8dc,0x16c,DAT_2c53c8d8,DAT_2c53c8d4);
  }
  if (param_2 != 0) {
    FUN_2c638730();
    return;
  }
  FUN_2c638730(*(int *)(param_1 + 0x28),DAT_2c53c8d0);
  return;
}


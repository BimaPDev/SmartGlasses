/* FUN_2c52620c @ 0x2c52620c */

void FUN_2c52620c(int param_1)

{
  char local_8c [45];
  char local_5f;
  char local_37;
  undefined4 local_1c;
  
  local_1c = *DAT_2c526484;
  if (*(int *)(param_1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c526490,0x10a,DAT_2c5264a4,DAT_2c5264e0);
  }
  (**(code **)(*(int *)(param_1 + 0x54) + 0xbc))(local_8c);
  if (local_8c[0] == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c526490,0x10f,DAT_2c5264a4,DAT_2c5264b4);
  }
  if (local_5f == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c526490,0x113,DAT_2c5264a4,DAT_2c5264b8);
  }
  if (local_37 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c526490,0x1f1,DAT_2c52648c,DAT_2c526488);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c526490,0x117,DAT_2c5264a4,DAT_2c5264ac);
}


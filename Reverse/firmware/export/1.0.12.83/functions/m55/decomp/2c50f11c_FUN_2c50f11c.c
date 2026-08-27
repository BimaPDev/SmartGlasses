/* FUN_2c50f11c @ 0x2c50f11c */

void FUN_2c50f11c(int param_1,int *param_2)

{
  int iVar1;
  
  if ((uint)*(byte *)(param_1 + 0x104) == (uint)*(byte *)(param_1 + 0x105)) {
    if (*(char *)(param_1 + 0x106) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c50f1c8,0x574,DAT_2c50f1c4,DAT_2c50f1c0,DAT_2c50f1d0);
    }
  }
  else {
    if (*(char *)(param_1 + 0x106) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c50f1c8,0x577,DAT_2c50f1c4,DAT_2c50f1c0,DAT_2c50f1bc);
    }
    iVar1 = *(int *)(param_1 + (uint)*(byte *)(param_1 + 0x105) * 4);
    *param_2 = iVar1;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c50f1c8,0x579,DAT_2c50f1c4,DAT_2c50f1c0,DAT_2c50f1cc);
    }
    *(char *)(param_1 + 0x106) = *(char *)(param_1 + 0x106) + -1;
    *(byte *)(param_1 + 0x105) = *(char *)(param_1 + 0x105) + 1U & 0x3f;
  }
  return;
}


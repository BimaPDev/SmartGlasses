/* FUN_2c4f4c24 @ 0x2c4f4c24 */

void FUN_2c4f4c24(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x50) != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x168,DAT_2c4f4cfc,DAT_2c4f4cf8,DAT_2c4f4cf4,*(int *)(param_1 + 0x50),
          *(undefined4 *)(param_1 + 0x4c));
  }
  FUN_2c644044(*(undefined4 *)(param_1 + 0x54),0xffffffff);
  if (*(int *)(param_1 + 0x50) != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x170,DAT_2c4f4cfc,DAT_2c4f4cf8,DAT_2c4f4d00,*(int *)(param_1 + 0x50),
          *(undefined4 *)(param_1 + 0x4c));
  }
  iVar1 = FUN_2c47245c(1,*(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x1c));
  *(int *)(param_1 + 0x50) = iVar1;
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x17f,DAT_2c4f4cfc,DAT_2c4f4cf8,DAT_2c4f4d04,*(undefined4 *)(param_1 + 0x4c));
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x17a,DAT_2c4f4cfc,DAT_2c4f4cf8,DAT_2c4f4d0c);
}


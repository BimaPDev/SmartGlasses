/* FUN_2c53cf24 @ 0x2c53cf24 */

void FUN_2c53cf24(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c53cf88,0x114,DAT_2c53cf84,DAT_2c53cf80);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    return;
  }
  uVar1 = FUN_2c53cbcc(param_1,*(undefined2 *)(DAT_2c53cf7c + 0x10),
                       *(undefined2 *)(DAT_2c53cf7c + 0x12),param_2);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  FUN_2c606d60(uVar1,0xffffffff,0);
  FUN_2c628b70(*(undefined4 *)(param_1 + 0x1c),1,1,2,1,1,3);
  return;
}


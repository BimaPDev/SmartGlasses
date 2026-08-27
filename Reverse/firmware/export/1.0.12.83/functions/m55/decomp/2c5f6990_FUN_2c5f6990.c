/* FUN_2c5f6990 @ 0x2c5f6990 */

void FUN_2c5f6990(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5f6a1c,0x26,DAT_2c5f6a18,DAT_2c5f6a24,DAT_2c5f6a28);
  }
  if (param_1[2] <= param_2) {
    if (0x3fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5f6a1c,0x2c,DAT_2c5f6a18,DAT_2c5f6a14,0x3fffffff);
    }
    iVar1 = param_2;
    if (param_2 < 0) {
      iVar1 = param_2 + 1;
    }
    uVar2 = param_2 + (iVar1 >> 1) + 8U & 0xfffffff8;
    iVar1 = 0;
    if (param_1[2] != 0) {
      iVar1 = param_1[1];
    }
    iVar1 = (**(code **)(*param_1 + 4))(iVar1,uVar2);
    param_1[1] = iVar1;
    param_1[2] = uVar2;
  }
  return;
}


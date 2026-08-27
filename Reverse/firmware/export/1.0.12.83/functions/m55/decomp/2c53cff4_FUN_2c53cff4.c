/* FUN_2c53cff4 @ 0x2c53cff4 */

void FUN_2c53cff4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c53d058,0x150,DAT_2c53d054,DAT_2c53d050);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    return;
  }
  if (param_2 != *(int *)(param_1 + 0x34)) {
    *(int *)(param_1 + 0x34) = param_2;
  }
  uVar1 = FUN_2c53cbcc(param_1,*(undefined2 *)(DAT_2c53d04c + 10),
                       *(undefined2 *)(DAT_2c53d04c + 0xc),param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  FUN_2c628b70(uVar1,1,7,1,4,1,2);
  return;
}


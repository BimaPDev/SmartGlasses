/* FUN_2c5f6b40 @ 0x2c5f6b40 */

void FUN_2c5f6b40(int param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    FUN_2c5f6990(param_1,*(int *)(param_1 + 0xc) + param_3);
    FUN_2c673eb8(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc),param_2,param_3);
    param_3 = *(int *)(param_1 + 0xc) + param_3;
    *(int *)(param_1 + 0xc) = param_3;
    *(undefined1 *)(*(int *)(param_1 + 4) + param_3) = 0;
  }
  return;
}


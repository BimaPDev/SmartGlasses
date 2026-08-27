/* FUN_2c50d6b0 @ 0x2c50d6b0 */

void FUN_2c50d6b0(int param_1)

{
  if (*(char *)(param_1 + 0x28) != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
    (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),0);
    FUN_2c50ece8(param_1 + 0x2c,*(undefined4 *)(param_1 + 0x1c));
    FUN_2c606d90(*(undefined4 *)(param_1 + 0x18),0x4c,1);
    FUN_2c606d6c(*(undefined4 *)(param_1 + 0x18),0,0);
    return;
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),1);
  FUN_2c50ec60(param_1 + 0x2c,*(undefined4 *)(param_1 + 0x1c));
  FUN_2c606d90(*(undefined4 *)(param_1 + 0x18),0xff,1);
  FUN_2c603c40(*(undefined4 *)(param_1 + 0x18),0x21,0x19,0);
  return;
}


/* FUN_2c518b6c @ 0x2c518b6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c518b6c(int param_1)

{
  FUN_2c602ea8(*(undefined4 *)(param_1 + 4));
  FUN_2c60251c(*(undefined4 *)(param_1 + 4),_LAB_2c518b9c);
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0x40))();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_2c620f94();
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}


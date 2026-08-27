/* FUN_2c4e3d24 @ 0x2c4e3d24 */

undefined4 FUN_2c4e3d24(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_2c4df96c();
  if (iVar1 != 0) {
    if (*(int **)(param_1 + 0x30) != (int *)0x0) {
      if (*(char *)(param_1 + 0x34) != '\0') {
        (**(code **)(**(int **)(param_1 + 0x30) + 0x1c))();
        if (*(int **)(param_1 + 0x30) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x30) + 4))();
        }
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_2c4de692(param_1,param_1 + 0x38);
    }
  }
  return 1;
}


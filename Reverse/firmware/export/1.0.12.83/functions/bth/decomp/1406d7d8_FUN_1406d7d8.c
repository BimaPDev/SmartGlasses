/* FUN_1406d7d8 @ 0x1406d7d8 */

void FUN_1406d7d8(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    do {
      iVar1 = FUN_14073a58(param_1 + 4);
      (**(code **)(*(int *)(iVar1 + 4) + 4))();
    } while (*(int *)(param_1 + 4) != 0);
  }
  return;
}


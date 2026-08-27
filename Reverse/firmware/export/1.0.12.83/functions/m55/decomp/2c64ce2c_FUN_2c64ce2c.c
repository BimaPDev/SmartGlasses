/* FUN_2c64ce2c @ 0x2c64ce2c */

int FUN_2c64ce2c(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 8); uVar1 = uVar1 + 1) {
      if (*(int *)(*(int *)(param_1 + 4) + uVar1 * 4) != 0) {
        FUN_2c64cdce();
      }
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_2c669588();
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 8); uVar1 = uVar1 + 1) {
      if (*(int *)(*(int *)(param_1 + 0xc) + uVar1 * 4) != 0) {
        FUN_2c64cdce();
      }
    }
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    thunk_FUN_2c669588();
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x10) + iVar2) != 0) {
        thunk_FUN_2c669588();
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 != 0x18);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_2c669588();
  }
  return param_1;
}


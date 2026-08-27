/* FUN_2c5f6c14 @ 0x2c5f6c14 */

void FUN_2c5f6c14(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    return;
  }
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      iVar1 = FUN_2c5fb998((int)*(char *)(*(int *)(param_1 + 4) + iVar2));
      if (iVar1 == 0) {
        if (iVar2 == 0) goto LAB_2c5f6c3a;
        iVar1 = *(int *)(param_1 + 0xc);
        break;
      }
      iVar2 = iVar2 + 1;
      iVar1 = *(int *)(param_1 + 0xc);
    } while (iVar2 < iVar1);
    if (iVar1 <= iVar2) {
      iVar2 = iVar1;
    }
    *(int *)(param_1 + 0xc) = iVar1 - iVar2;
    iVar3 = 0;
    if (iVar1 - iVar2 != 0) {
      FUN_2c673eb8(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + iVar2);
      iVar3 = *(int *)(param_1 + 0xc);
    }
    *(undefined1 *)(*(int *)(param_1 + 4) + iVar3) = 0;
LAB_2c5f6c3a:
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 0) {
      return;
    }
    while (0 < iVar2) {
      iVar1 = FUN_2c5fb998((int)*(char *)(iVar2 + *(int *)(param_1 + 4) + -1));
      iVar2 = *(int *)(param_1 + 0xc);
      if (iVar1 == 0) break;
      iVar2 = iVar2 + -1;
      *(int *)(param_1 + 0xc) = iVar2;
    }
  }
  *(undefined1 *)(*(int *)(param_1 + 4) + iVar2) = 0;
  return;
}


/* FUN_2c5f6c90 @ 0x2c5f6c90 */

void FUN_2c5f6c90(int param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0xc) < 1) {
    return;
  }
  iVar5 = 0;
  iVar4 = 0;
  bVar2 = false;
  do {
    while (iVar3 = FUN_2c5fb998((int)*(char *)(*(int *)(param_1 + 4) + iVar4)), iVar3 == 0) {
      puVar1 = (undefined1 *)(*(int *)(param_1 + 4) + iVar4);
      iVar4 = iVar4 + 1;
      *(undefined1 *)(*(int *)(param_1 + 4) + iVar5) = *puVar1;
      iVar5 = iVar5 + 1;
      iVar3 = *(int *)(param_1 + 0xc);
      bVar2 = false;
      if (iVar3 <= iVar4) goto LAB_2c5f6cda;
    }
    if (!bVar2) {
      bVar2 = true;
      *(undefined1 *)(*(int *)(param_1 + 4) + iVar5) = 0x20;
      iVar5 = iVar5 + 1;
    }
    iVar4 = iVar4 + 1;
    iVar3 = *(int *)(param_1 + 0xc);
  } while (iVar4 < iVar3);
LAB_2c5f6cda:
  if (iVar5 < iVar3) {
    *(int *)(param_1 + 0xc) = iVar5;
    *(undefined1 *)(*(int *)(param_1 + 4) + iVar5) = 0;
  }
  return;
}


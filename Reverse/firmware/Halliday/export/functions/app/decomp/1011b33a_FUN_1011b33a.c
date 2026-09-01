/* FUN_1011b33a @ 0x1011b33a */

void FUN_1011b33a(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  FUN_1011ea40(iVar1 + 0x42,iVar1 + 0x142,*(undefined2 *)(iVar1 + 0x40));
  *(undefined2 *)(*(int *)(param_1 + 8) + 0x3c) = *(undefined2 *)(*(int *)(param_1 + 8) + 0x40);
  return;
}


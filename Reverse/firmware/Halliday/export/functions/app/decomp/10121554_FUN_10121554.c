/* FUN_10121554 @ 0x10121554 */

void FUN_10121554(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = iVar1;
  do {
    iVar3 = iVar2 + 0xc;
    *(short *)(iVar2 + 0x94) = *(short *)(iVar2 + 0x94) + 1;
    iVar2 = iVar3;
  } while (iVar3 != iVar1 + 0x30);
  *(undefined2 *)(*(int *)(iVar1 + 0x8c) + 4) = 0;
  return;
}


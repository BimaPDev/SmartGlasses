/* FUN_1011b2f0 @ 0x1011b2f0 */

void FUN_1011b2f0(int param_1)

{
  short sVar1;
  int iVar2;
  
  FUN_1011ea48(*(int *)(param_1 + 8) + 0x142,0,0x100);
  iVar2 = *(int *)(param_1 + 8);
  FUN_1011ea40(iVar2 + 0x142,iVar2 + 0x42,*(undefined2 *)(iVar2 + 0x3c));
  FUN_100595d4(*(int *)(param_1 + 8) + 0x142);
  if (*(int *)(param_1 + 8) == -0x142) {
    sVar1 = 0;
  }
  else {
    sVar1 = FUN_1011ea10();
  }
  *(short *)(*(int *)(param_1 + 8) + 0x40) = sVar1 + 1;
  return;
}


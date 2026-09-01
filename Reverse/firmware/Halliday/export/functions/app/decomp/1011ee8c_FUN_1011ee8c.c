/* FUN_1011ee8c @ 0x1011ee8c */

void FUN_1011ee8c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = **(int **)(param_1 + 4);
  bVar2 = 0;
  while (uVar1 = (uint)bVar2, 0 < (int)(param_3 - uVar1)) {
    bVar2 = bVar2 + 1;
    if (*(int *)(iVar3 + 0xc) << 0x19 < 0) break;
    *(uint *)(iVar3 + 8) = (uint)*(byte *)(param_2 + uVar1);
  }
  *(undefined4 *)(iVar3 + 0xc) = 2;
  return;
}


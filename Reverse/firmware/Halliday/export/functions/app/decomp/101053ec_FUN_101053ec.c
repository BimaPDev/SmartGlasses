/* FUN_101053ec @ 0x101053ec */

uint FUN_101053ec(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = *(uint *)(param_1 + 0x1e4);
  iVar4 = (*(int *)(param_1 + param_3 * 4 + 0x10c) + *(int *)(param_1 + 0x1e8)) - uVar3;
  iVar5 = *(int *)(param_1 + 0x1e0);
  if (-1 < param_2) {
    uVar1 = iVar5 * ((iVar4 + param_2) / iVar5) + uVar3;
    uVar2 = uVar1 & ~((int)uVar1 >> 0x20);
    if ((int)uVar1 < 0) {
      uVar2 = uVar3;
    }
    return uVar2;
  }
  iVar4 = iVar5 * ((iVar4 - param_2) / iVar5) + uVar3;
  uVar2 = -iVar4;
  if (iVar4 != 0 && -1 < (int)uVar2) {
    uVar2 = -uVar3;
  }
  return uVar2;
}


/* FUN_1011eeb0 @ 0x1011eeb0 */

void FUN_1011eeb0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = **(int **)(param_1 + 4);
  bVar2 = 0;
  while (uVar1 = (uint)bVar2, 0 < (int)(param_3 - uVar1)) {
    bVar2 = bVar2 + 1;
    if (*(int *)(iVar3 + 0xc) << 0x1a < 0) break;
    *(char *)(param_2 + uVar1) = (char)*(undefined4 *)(iVar3 + 4);
  }
  *(undefined4 *)(iVar3 + 0xc) = 1;
  return;
}


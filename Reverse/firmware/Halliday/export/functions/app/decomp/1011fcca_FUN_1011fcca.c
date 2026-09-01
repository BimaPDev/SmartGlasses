/* FUN_1011fcca @ 0x1011fcca */

void FUN_1011fcca(int param_1,undefined2 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  uVar2 = FUN_1011a8f2();
  bVar1 = *(byte *)(iVar3 + 0x46);
  *(undefined4 *)(param_2 + 2) = uVar2;
  param_2[1] = (ushort)bVar1;
  *param_2 = 1;
  return;
}


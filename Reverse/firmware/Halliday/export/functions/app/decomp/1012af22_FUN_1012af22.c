/* FUN_1012af22 @ 0x1012af22 */

void FUN_1012af22(ushort *param_1,ushort param_2,uint param_3)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  
  puVar2 = param_1;
  if (((uint)param_1 & 3) != 0) {
    puVar2 = param_1 + 1;
    *param_1 = param_2;
    param_3 = param_3 - 1;
  }
  iVar1 = (uint)param_2 * 0x10001;
  for (; 0x10 < param_3; param_3 = param_3 - 0x10) {
    *(int *)puVar2 = iVar1;
    *(int *)(puVar2 + 2) = iVar1;
    *(int *)(puVar2 + 4) = iVar1;
    *(int *)(puVar2 + 6) = iVar1;
    *(int *)(puVar2 + 8) = iVar1;
    *(int *)(puVar2 + 10) = iVar1;
    *(int *)(puVar2 + 0xc) = iVar1;
    *(int *)(puVar2 + 0xe) = iVar1;
    puVar2 = puVar2 + 0x10;
  }
  puVar3 = puVar2 + param_3;
  for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
    *puVar2 = param_2;
  }
  return;
}


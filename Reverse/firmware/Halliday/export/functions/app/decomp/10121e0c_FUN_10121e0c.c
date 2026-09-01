/* FUN_10121e0c @ 0x10121e0c */

void FUN_10121e0c(int param_1,int param_2,ushort param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(*(int *)(param_1 + 0xc) + 0x8c);
  iVar1 = *(int *)(puVar2 + 8);
  *(ushort *)(iVar1 + param_2 * 2) = *(ushort *)(iVar1 + param_2 * 2) & 0xf000 | param_3 & 0xfff;
  *puVar2 = 1;
  return;
}


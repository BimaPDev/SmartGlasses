/* FUN_2c57173c @ 0x2c57173c */

void FUN_2c57173c(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_2c55fddc(*(undefined4 *)(param_1 + 4));
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = FUN_2c571dd8(iVar2);
  *(int *)(iVar2 + 0xc) = iVar1 + 1;
  return;
}


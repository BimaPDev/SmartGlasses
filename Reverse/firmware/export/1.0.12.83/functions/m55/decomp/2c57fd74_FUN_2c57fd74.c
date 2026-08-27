/* FUN_2c57fd74 @ 0x2c57fd74 */

void FUN_2c57fd74(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    FUN_2c55fe40();
    iVar2 = *(int *)(param_1 + 0xc);
    iVar1 = func_0x2c58032c(iVar2);
    *(int *)(iVar2 + 0xc) = iVar1 + -1;
    return;
  }
  return;
}


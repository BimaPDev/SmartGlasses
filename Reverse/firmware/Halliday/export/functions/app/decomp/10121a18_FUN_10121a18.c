/* FUN_10121a18 @ 0x10121a18 */

void FUN_10121a18(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(short *)(iVar1 + 0x7e) = *(short *)(iVar1 + 0x7e) + 1;
  *(undefined2 *)(*(int *)(iVar1 + 0x74) + 6) = 0;
  return;
}


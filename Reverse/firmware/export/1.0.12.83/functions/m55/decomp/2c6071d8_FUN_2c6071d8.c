/* FUN_2c6071d8 @ 0x2c6071d8 */

void FUN_2c6071d8(int param_1,undefined2 param_2)

{
  int iVar1;
  
  func_0x2c606e80(param_1,param_2,0);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 1;
  iVar1 = FUN_2c604178(param_1);
  *(byte *)(iVar1 + 0x22) = *(byte *)(iVar1 + 0x22) | 2;
  iVar1 = FUN_2c604188();
  iVar1 = *(int *)(iVar1 + 4);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x14) = *(byte *)(iVar1 + 0x14) & 0xfe;
    return;
  }
  return;
}


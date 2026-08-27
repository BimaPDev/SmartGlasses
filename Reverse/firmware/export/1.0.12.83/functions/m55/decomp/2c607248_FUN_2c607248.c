/* FUN_2c607248 @ 0x2c607248 */

void FUN_2c607248(int param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 1;
  iVar1 = FUN_2c604178();
  *(byte *)(iVar1 + 0x22) = *(byte *)(iVar1 + 0x22) | 2;
  iVar1 = FUN_2c604188();
  if (*(int *)(iVar1 + 4) != 0) {
    FUN_2c62be4c();
    return;
  }
  return;
}


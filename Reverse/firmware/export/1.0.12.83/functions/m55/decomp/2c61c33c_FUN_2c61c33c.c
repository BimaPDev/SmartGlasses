/* FUN_2c61c33c @ 0x2c61c33c */

void FUN_2c61c33c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  uVar1 = FUN_2c629df4();
  *(undefined4 *)(iVar2 + 0x70) = uVar1;
  *(undefined4 *)(iVar2 + 0x74) = 0;
  return;
}


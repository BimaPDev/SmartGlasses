/* FUN_2c518d4c @ 0x2c518d4c */

void FUN_2c518d4c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  uVar1 = FUN_2c629df4();
  *(undefined4 *)(iVar2 + 0xa8) = uVar1;
  *(undefined4 *)(iVar2 + 0xac) = 0;
  return;
}


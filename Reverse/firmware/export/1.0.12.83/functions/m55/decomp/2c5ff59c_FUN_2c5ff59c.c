/* FUN_2c5ff59c @ 0x2c5ff59c */

void FUN_2c5ff59c(int param_1)

{
  undefined4 uVar1;
  
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
  uVar1 = FUN_2c629df4();
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = FUN_2c629df4();
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  return;
}


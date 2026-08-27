/* FUN_2c61929c @ 0x2c61929c */

void FUN_2c61929c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_2c60272c(param_2);
  *(undefined4 *)(param_2 + 0x24) = uVar1;
  *(undefined1 *)(param_2 + 0x28) = 0xff;
  return;
}


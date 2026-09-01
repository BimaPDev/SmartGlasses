/* FUN_10121a2c @ 0x10121a2c */

undefined4 FUN_10121a2c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined1 *)(iVar1 + 0x7c) = 0;
  *(undefined2 *)(iVar1 + 0x7e) = 0;
  *(int *)(iVar1 + 0x80) = iVar1 + 0x1110;
  *(int *)(iVar1 + 0x84) = iVar1 + 0x1910;
  *(undefined2 *)(iVar1 + 0x78) = 0xffff;
  *(int *)(iVar1 + 0x88) = iVar1 + 0x1950;
  return 1;
}


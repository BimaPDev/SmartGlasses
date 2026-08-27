/* FUN_2c5f031c @ 0x2c5f031c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5f031c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_2c5fefc8(_LAB_2c5f0344,param_1);
  FUN_2c5ff0b8();
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined1 *)(iVar1 + 0x25) = 1;
  FUN_2c627e28(iVar1);
  return iVar1;
}


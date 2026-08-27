/* FUN_2c4f4b4c @ 0x2c4f4b4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4f4b4c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_2c4f4b88;
  uVar2 = func_0x2c4f4e44();
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  uVar2 = func_0x2c4f4e4c();
  *(undefined4 *)(iVar1 + 0x18) = uVar2;
  uVar2 = FUN_2c4f4e54();
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  *(undefined4 *)(iVar1 + 0x20) = 0x1a00;
  uVar2 = FUN_2c4f4e5c();
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  uVar2 = FUN_2c4f4e60();
  *(undefined4 *)(iVar1 + 0x28) = uVar2;
  uVar2 = FUN_2c4f4e68();
  *(undefined4 *)(iVar1 + 0x2c) = uVar2;
  FUN_2c4f4c24(iVar1);
  return 0;
}


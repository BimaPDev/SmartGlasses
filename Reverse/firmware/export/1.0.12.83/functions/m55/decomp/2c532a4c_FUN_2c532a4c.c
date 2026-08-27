/* FUN_2c532a4c @ 0x2c532a4c */

undefined4 FUN_2c532a4c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_2c530d48(param_1 + 0x2c);
  if ((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c), *(int *)(param_1 + 0xc) != iVar1)) {
    if (iVar1 != *(int *)(param_1 + 0x20)) {
      uVar2 = FUN_2c53c04c(*(undefined4 *)(iVar1 + -8));
      return uVar2;
    }
    uVar2 = FUN_2c53c04c(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + -4) + 0x1ec));
    return uVar2;
  }
  return 0;
}


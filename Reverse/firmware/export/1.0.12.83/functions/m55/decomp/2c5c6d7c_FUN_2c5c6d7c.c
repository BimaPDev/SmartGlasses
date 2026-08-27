/* FUN_2c5c6d7c @ 0x2c5c6d7c */

undefined4 FUN_2c5c6d7c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x2e0) != 0) {
    uVar1 = FUN_2c5cdbd0(param_1 + 0x2d8,*(undefined4 *)(*(int *)(param_1 + 0x2e0) + 0x18));
    uVar2 = FUN_2c66c4ec();
    FUN_2c5cdc20(param_1 + 0x318,0,*(undefined4 *)(param_1 + 0x31c),uVar1,uVar2);
    return *(undefined4 *)(param_1 + 0x318);
  }
  return DAT_2c5cdde4;
}


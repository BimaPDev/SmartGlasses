/* FUN_2c566c9c @ 0x2c566c9c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c566c9c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_2c48e738();
  FUN_2c48e5b4(uVar1,_LAB_2c566cc8,*(undefined4 *)(param_1 + 4));
  FUN_2c48e5b4(uVar1,_LAB_2c566ccc,*(undefined4 *)(param_1 + 0x1c));
  FUN_2c48e5b4(uVar1,_LAB_2c566cd0,*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x34),
               *(int *)(param_1 + 0x4c),param_4);
  return uVar1;
}


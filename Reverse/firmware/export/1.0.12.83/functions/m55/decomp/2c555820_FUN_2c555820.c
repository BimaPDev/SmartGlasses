/* FUN_2c555820 @ 0x2c555820 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c555820(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_2c48e738();
  uVar2 = FUN_2c58c354(_LAB_2c555860,*(undefined1 *)(param_1 + 0x1c));
  FUN_2c48e5b4(uVar1,_LAB_2c555864,uVar2);
  if (*(int *)(param_1 + 8) != 0) {
    FUN_2c48e5b4(uVar1,_LAB_2c55586c,*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8),param_4);
  }
  uVar2 = FUN_2c48e3b8(*(undefined4 *)(param_1 + 0x20));
  FUN_2c48e474(uVar1,_LAB_2c555868,uVar2);
  return uVar1;
}


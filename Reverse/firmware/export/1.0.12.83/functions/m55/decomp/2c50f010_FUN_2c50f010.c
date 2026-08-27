/* FUN_2c50f010 @ 0x2c50f010 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50f010(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    *(undefined1 *)(param_1 + 0x30) = 0;
    FUN_2c602ea8(*(undefined4 *)(param_1 + 4));
    uVar1 = FUN_2c512714();
    func_0x2c5129c4(uVar1,0);
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  uVar1 = FUN_2c602de4();
  FUN_2c602df0();
  FUN_2c602f64(uVar1,*(undefined4 *)(param_1 + 4));
  FUN_2c603110(*(undefined4 *)(param_1 + 4));
  FUN_2c602454(*(undefined4 *)(param_1 + 4),_LAB_2c50f074,0xd,param_1);
  uVar1 = FUN_2c512714();
  func_0x2c51285c(uVar1,0,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x14),param_1);
  return;
}


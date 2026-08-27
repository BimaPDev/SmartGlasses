/* FUN_2c518b1c @ 0x2c518b1c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c518b1c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = lv_mem_alloc(0x8c);
  FUN_2c51a078(uVar1,*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_2c602de4();
  FUN_2c602df0();
  FUN_2c602f64(uVar1,*(undefined4 *)(param_1 + 4));
  FUN_2c603110(*(undefined4 *)(param_1 + 4));
  FUN_2c602454(*(undefined4 *)(param_1 + 4),_LAB_2c518b64,0xd,param_1);
  uVar1 = FUN_2c620f0c(11000,_LAB_2c518b68,param_1);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  return;
}


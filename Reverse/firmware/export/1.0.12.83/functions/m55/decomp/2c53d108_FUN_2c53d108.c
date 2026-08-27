/* FUN_2c53d108 @ 0x2c53d108 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c53d108(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_2c6043d8();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_2c6043d8();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  uVar1 = FUN_2c53cbcc(param_1,0x20,0x20,0);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  FUN_2c6072bc(uVar1,8,0);
  uVar1 = FUN_2c5c55d8();
  uVar1 = func_0x2c5c5af4(uVar1,*(undefined4 *)(param_1 + 0x18),2,_LAB_2c53d150);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  return;
}


/* FUN_2c5964e4 @ 0x2c5964e4 */

undefined4 FUN_2c5964e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_2c5479e0(*(undefined4 *)(param_1 + 0x3c),
                       *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x10));
  if ((((iVar1 == 0) &&
       (iVar1 = FUN_2c5479e0(*(undefined4 *)(param_1 + 0x3c),
                             *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x18)), iVar1 == 0)) &&
      (iVar1 = FUN_2c5479e0(*(undefined4 *)(param_1 + 0x3c),
                            *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x20)), iVar1 == 0)) &&
     (((iVar1 = FUN_2c5479e0(*(undefined4 *)(param_1 + 0x3c),
                             *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x14)), iVar1 == 0 &&
       (iVar1 = FUN_2c5479e0(*(undefined4 *)(param_1 + 0x3c),
                             *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2c)), iVar1 == 0)) &&
      ((iVar1 = FUN_2c5479e0(*(undefined4 *)(param_1 + 0x3c),
                             *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xc)), iVar1 == 0 &&
       (iVar1 = FUN_2c5479e0(*(undefined4 *)(param_1 + 0x3c),
                             *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x24)), iVar1 == 0)))))) {
    uVar2 = FUN_2c5479e0(*(undefined4 *)(param_1 + 0x3c),
                         *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x1c));
    return uVar2;
  }
  return 1;
}


/* FUN_2c64fe74 @ 0x2c64fe74 */

void FUN_2c64fe74(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  int iStack_10;
  
  uStack_14 = param_2;
  iStack_10 = param_3;
  uVar1 = FUN_2c65f6c6(param_2);
  *(undefined4 *)(param_3 + 0x14) = uVar1;
  uVar1 = FUN_2c65f6cc(param_2);
  *(undefined4 *)(param_3 + 0x18) = uVar1;
  uVar1 = FUN_2c65f70a(param_2);
  *(undefined4 *)(param_3 + 0x34) = uVar1;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined4 *)(param_3 + 0x24) = 0;
  *(undefined4 *)(param_3 + 0x2c) = 0;
  *(undefined1 *)(param_3 + 0x6c) = 1;
  FUN_2c65f6d2(&uStack_14,param_2);
  uVar1 = FUN_2c64f3c0(param_3 + 8,&uStack_14);
  *(undefined4 *)(param_3 + 0xc) = uVar1;
  FUN_2c650e60(&uStack_14);
  FUN_2c65f6e0(&uStack_14,param_2);
  uVar1 = FUN_2c64f3ea(param_3 + 0x1c,&uStack_14);
  *(undefined4 *)(param_3 + 0x20) = uVar1;
  FUN_2c6515c0(&uStack_14);
  FUN_2c65f6ee(&uStack_14,param_2);
  uVar1 = FUN_2c64f3ea(param_3 + 0x24,&uStack_14);
  *(undefined4 *)(param_3 + 0x28) = uVar1;
  FUN_2c6515c0(&uStack_14);
  FUN_2c65f6fc(&uStack_14,param_2);
  uVar1 = FUN_2c64f3ea(param_3 + 0x2c,&uStack_14);
  *(undefined4 *)(param_3 + 0x30) = uVar1;
  FUN_2c6515c0(&uStack_14);
  uVar1 = FUN_2c65f710(param_2);
  *(undefined4 *)(param_3 + 0x38) = uVar1;
  uVar1 = FUN_2c65f71a(param_2);
  *(undefined4 *)(param_3 + 0x3c) = uVar1;
  return;
}


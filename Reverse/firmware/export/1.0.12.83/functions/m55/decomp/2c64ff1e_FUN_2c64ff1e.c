/* FUN_2c64ff1e @ 0x2c64ff1e */

void FUN_2c64ff1e(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  int iStack_10;
  
  uStack_14 = param_2;
  iStack_10 = param_3;
  uVar1 = FUN_2c65f668(param_2);
  *(undefined4 *)(param_3 + 0x14) = uVar1;
  uVar1 = FUN_2c65f66e(param_2);
  *(undefined4 *)(param_3 + 0x18) = uVar1;
  uVar1 = FUN_2c65f6ac(param_2);
  *(undefined4 *)(param_3 + 0x34) = uVar1;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined4 *)(param_3 + 0x24) = 0;
  *(undefined4 *)(param_3 + 0x2c) = 0;
  *(undefined1 *)(param_3 + 0x6c) = 1;
  FUN_2c65f674(&uStack_14,param_2);
  uVar1 = FUN_2c64f3c0(param_3 + 8,&uStack_14);
  *(undefined4 *)(param_3 + 0xc) = uVar1;
  FUN_2c650e60(&uStack_14);
  FUN_2c65f682(&uStack_14,param_2);
  uVar1 = FUN_2c64f3ea(param_3 + 0x1c,&uStack_14);
  *(undefined4 *)(param_3 + 0x20) = uVar1;
  FUN_2c6515c0(&uStack_14);
  FUN_2c65f690(&uStack_14,param_2);
  uVar1 = FUN_2c64f3ea(param_3 + 0x24,&uStack_14);
  *(undefined4 *)(param_3 + 0x28) = uVar1;
  FUN_2c6515c0(&uStack_14);
  FUN_2c65f69e(&uStack_14,param_2);
  uVar1 = FUN_2c64f3ea(param_3 + 0x2c,&uStack_14);
  *(undefined4 *)(param_3 + 0x30) = uVar1;
  FUN_2c6515c0(&uStack_14);
  uVar1 = FUN_2c65f6b2(param_2);
  *(undefined4 *)(param_3 + 0x38) = uVar1;
  uVar1 = FUN_2c65f6bc(param_2);
  *(undefined4 *)(param_3 + 0x3c) = uVar1;
  return;
}


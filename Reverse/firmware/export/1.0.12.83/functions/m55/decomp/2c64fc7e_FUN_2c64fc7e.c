/* FUN_2c64fc7e @ 0x2c64fc7e */

void FUN_2c64fc7e(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  int iStack_10;
  
  uStack_14 = param_2;
  iStack_10 = param_3;
  uVar1 = FUN_2c65f824(param_2);
  *(undefined4 *)(param_3 + 0x24) = uVar1;
  uVar1 = FUN_2c65f82a(param_2);
  *(undefined4 *)(param_3 + 0x28) = uVar1;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined1 *)(param_3 + 0x124) = 1;
  FUN_2c65f830(&uStack_14,param_2);
  uVar1 = FUN_2c64f3c0(param_3 + 8,&uStack_14);
  *(undefined4 *)(param_3 + 0xc) = uVar1;
  FUN_2c650e60(&uStack_14);
  FUN_2c65f83e(&uStack_14,param_2);
  uVar1 = FUN_2c64f3ea(param_3 + 0x14,&uStack_14);
  *(undefined4 *)(param_3 + 0x18) = uVar1;
  FUN_2c6515c0(&uStack_14);
  FUN_2c65f84c(&uStack_14,param_2);
  uVar1 = FUN_2c64f3ea(param_3 + 0x1c,&uStack_14);
  *(undefined4 *)(param_3 + 0x20) = uVar1;
  FUN_2c6515c0(&uStack_14);
  return;
}


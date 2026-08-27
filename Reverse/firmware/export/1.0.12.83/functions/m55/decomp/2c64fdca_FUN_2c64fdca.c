/* FUN_2c64fdca @ 0x2c64fdca */

void FUN_2c64fdca(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  int iStack_10;
  
  uStack_14 = param_2;
  iStack_10 = param_3;
  uVar1 = FUN_2c65909c(param_2);
  *(undefined1 *)(param_3 + 0x11) = uVar1;
  uVar1 = FUN_2c6590a2(param_2);
  *(undefined1 *)(param_3 + 0x12) = uVar1;
  uVar2 = FUN_2c6590e0(param_2);
  *(undefined4 *)(param_3 + 0x2c) = uVar2;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined4 *)(param_3 + 0x24) = 0;
  *(undefined1 *)(param_3 + 0x43) = 1;
  FUN_2c6590a8(&uStack_14,param_2);
  uVar2 = FUN_2c64f3c0(param_3 + 8,&uStack_14);
  *(undefined4 *)(param_3 + 0xc) = uVar2;
  FUN_2c650e60(&uStack_14);
  FUN_2c6590b6(&uStack_14,param_2);
  uVar2 = FUN_2c64f3c0(param_3 + 0x14,&uStack_14);
  *(undefined4 *)(param_3 + 0x18) = uVar2;
  FUN_2c650e60(&uStack_14);
  FUN_2c6590c4(&uStack_14,param_2);
  uVar2 = FUN_2c64f3c0(param_3 + 0x1c,&uStack_14);
  *(undefined4 *)(param_3 + 0x20) = uVar2;
  FUN_2c650e60(&uStack_14);
  FUN_2c6590d2(&uStack_14,param_2);
  uVar2 = FUN_2c64f3c0(param_3 + 0x24,&uStack_14);
  *(undefined4 *)(param_3 + 0x28) = uVar2;
  FUN_2c650e60(&uStack_14);
  uVar2 = FUN_2c6590e6(param_2);
  *(undefined4 *)(param_3 + 0x30) = uVar2;
  uVar2 = FUN_2c6590f0(param_2);
  *(undefined4 *)(param_3 + 0x34) = uVar2;
  return;
}


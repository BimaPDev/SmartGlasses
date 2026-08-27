/* FUN_140c828a @ 0x140c828a */

void FUN_140c828a(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 auStack_28 [28];
  
  uVar1 = FUN_140c9418(param_2);
  *(undefined4 *)(param_3 + 0x14) = uVar1;
  uVar1 = FUN_140c941e(param_2);
  *(undefined4 *)(param_3 + 0x18) = uVar1;
  uVar1 = FUN_140c945c(param_2);
  *(undefined4 *)(param_3 + 0x34) = uVar1;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined4 *)(param_3 + 0x24) = 0;
  *(undefined4 *)(param_3 + 0x2c) = 0;
  *(undefined1 *)(param_3 + 0x6c) = 1;
  FUN_140c9424(auStack_28,param_2);
  uVar1 = FUN_140c76c8(param_3 + 8,auStack_28);
  *(undefined4 *)(param_3 + 0xc) = uVar1;
  FUN_140d18d4(auStack_28);
  FUN_140c9432(auStack_28,param_2);
  uVar1 = FUN_140c76ee(param_3 + 0x1c,auStack_28);
  *(undefined4 *)(param_3 + 0x20) = uVar1;
  FUN_140d77c4(auStack_28);
  FUN_140c9440(auStack_28,param_2);
  uVar1 = FUN_140c76ee(param_3 + 0x24,auStack_28);
  *(undefined4 *)(param_3 + 0x28) = uVar1;
  FUN_140d77c4(auStack_28);
  FUN_140c944e(auStack_28,param_2);
  uVar1 = FUN_140c76ee(param_3 + 0x2c,auStack_28);
  *(undefined4 *)(param_3 + 0x30) = uVar1;
  FUN_140d77c4(auStack_28);
  uVar1 = FUN_140c9462(param_2);
  *(undefined4 *)(param_3 + 0x38) = uVar1;
  uVar1 = FUN_140c946c(param_2);
  *(undefined4 *)(param_3 + 0x3c) = uVar1;
  return;
}


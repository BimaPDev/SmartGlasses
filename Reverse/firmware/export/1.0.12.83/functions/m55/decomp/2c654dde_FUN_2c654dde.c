/* FUN_2c654dde @ 0x2c654dde */

void FUN_2c654dde(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [28];
  
  uVar1 = FUN_2c6525c6(param_2);
  *(undefined1 *)(param_3 + 0x24) = uVar1;
  uVar1 = FUN_2c6525cc(param_2);
  *(undefined1 *)(param_3 + 0x25) = uVar1;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined1 *)(param_3 + 100) = 1;
  FUN_2c6525d2(auStack_28,param_2);
  uVar2 = FUN_2c654540(param_3 + 8,auStack_28);
  *(undefined4 *)(param_3 + 0xc) = uVar2;
  FUN_2c65e94c(auStack_28);
  FUN_2c6525e0(auStack_28,param_2);
  uVar2 = FUN_2c654540(param_3 + 0x14,auStack_28);
  *(undefined4 *)(param_3 + 0x18) = uVar2;
  FUN_2c65e94c(auStack_28);
  FUN_2c6525ee(auStack_28,param_2);
  uVar2 = FUN_2c654540(param_3 + 0x1c,auStack_28);
  *(undefined4 *)(param_3 + 0x20) = uVar2;
  FUN_2c65e94c(auStack_28);
  return;
}


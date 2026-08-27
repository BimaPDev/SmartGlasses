/* FUN_2c654e5a @ 0x2c654e5a */

void FUN_2c654e5a(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 auStack_28 [28];
  
  uVar1 = FUN_2c656420(param_2);
  *(undefined4 *)(param_3 + 0x24) = uVar1;
  uVar1 = FUN_2c656426(param_2);
  *(undefined4 *)(param_3 + 0x28) = uVar1;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined1 *)(param_3 + 0x124) = 1;
  FUN_2c65642c(auStack_28,param_2);
  uVar1 = FUN_2c654540(param_3 + 8,auStack_28);
  *(undefined4 *)(param_3 + 0xc) = uVar1;
  FUN_2c65e94c(auStack_28);
  FUN_2c65643a(auStack_28,param_2);
  uVar1 = FUN_2c654566(param_3 + 0x14,auStack_28);
  *(undefined4 *)(param_3 + 0x18) = uVar1;
  FUN_2c6648a4(auStack_28);
  FUN_2c656448(auStack_28,param_2);
  uVar1 = FUN_2c654566(param_3 + 0x1c,auStack_28);
  *(undefined4 *)(param_3 + 0x20) = uVar1;
  FUN_2c6648a4(auStack_28);
  return;
}


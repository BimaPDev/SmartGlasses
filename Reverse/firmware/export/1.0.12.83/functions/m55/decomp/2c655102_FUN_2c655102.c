/* FUN_2c655102 @ 0x2c655102 */

void FUN_2c655102(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 auStack_28 [28];
  
  uVar1 = FUN_2c656290(param_2);
  *(undefined4 *)(param_3 + 0x14) = uVar1;
  uVar1 = FUN_2c656296(param_2);
  *(undefined4 *)(param_3 + 0x18) = uVar1;
  uVar1 = FUN_2c6562d4(param_2);
  *(undefined4 *)(param_3 + 0x34) = uVar1;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined4 *)(param_3 + 0x24) = 0;
  *(undefined4 *)(param_3 + 0x2c) = 0;
  *(undefined1 *)(param_3 + 0x6c) = 1;
  FUN_2c65629c(auStack_28,param_2);
  uVar1 = FUN_2c654540(param_3 + 8,auStack_28);
  *(undefined4 *)(param_3 + 0xc) = uVar1;
  FUN_2c65e94c(auStack_28);
  FUN_2c6562aa(auStack_28,param_2);
  uVar1 = FUN_2c654566(param_3 + 0x1c,auStack_28);
  *(undefined4 *)(param_3 + 0x20) = uVar1;
  FUN_2c6648a4(auStack_28);
  FUN_2c6562b8(auStack_28,param_2);
  uVar1 = FUN_2c654566(param_3 + 0x24,auStack_28);
  *(undefined4 *)(param_3 + 0x28) = uVar1;
  FUN_2c6648a4(auStack_28);
  FUN_2c6562c6(auStack_28,param_2);
  uVar1 = FUN_2c654566(param_3 + 0x2c,auStack_28);
  *(undefined4 *)(param_3 + 0x30) = uVar1;
  FUN_2c6648a4(auStack_28);
  uVar1 = FUN_2c6562da(param_2);
  *(undefined4 *)(param_3 + 0x38) = uVar1;
  uVar1 = FUN_2c6562e4(param_2);
  *(undefined4 *)(param_3 + 0x3c) = uVar1;
  return;
}


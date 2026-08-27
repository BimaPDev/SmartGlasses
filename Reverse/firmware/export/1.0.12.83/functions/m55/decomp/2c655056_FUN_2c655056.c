/* FUN_2c655056 @ 0x2c655056 */

void FUN_2c655056(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 auStack_28 [28];
  
  uVar1 = FUN_2c6562ee(param_2);
  *(undefined4 *)(param_3 + 0x14) = uVar1;
  uVar1 = FUN_2c6562f4(param_2);
  *(undefined4 *)(param_3 + 0x18) = uVar1;
  uVar1 = FUN_2c656332(param_2);
  *(undefined4 *)(param_3 + 0x34) = uVar1;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined4 *)(param_3 + 0x24) = 0;
  *(undefined4 *)(param_3 + 0x2c) = 0;
  *(undefined1 *)(param_3 + 0x6c) = 1;
  FUN_2c6562fa(auStack_28,param_2);
  uVar1 = FUN_2c654540(param_3 + 8,auStack_28);
  *(undefined4 *)(param_3 + 0xc) = uVar1;
  FUN_2c65e94c(auStack_28);
  FUN_2c656308(auStack_28,param_2);
  uVar1 = FUN_2c654566(param_3 + 0x1c,auStack_28);
  *(undefined4 *)(param_3 + 0x20) = uVar1;
  FUN_2c6648a4(auStack_28);
  FUN_2c656316(auStack_28,param_2);
  uVar1 = FUN_2c654566(param_3 + 0x24,auStack_28);
  *(undefined4 *)(param_3 + 0x28) = uVar1;
  FUN_2c6648a4(auStack_28);
  FUN_2c656324(auStack_28,param_2);
  uVar1 = FUN_2c654566(param_3 + 0x2c,auStack_28);
  *(undefined4 *)(param_3 + 0x30) = uVar1;
  FUN_2c6648a4(auStack_28);
  uVar1 = FUN_2c656338(param_2);
  *(undefined4 *)(param_3 + 0x38) = uVar1;
  uVar1 = FUN_2c656342(param_2);
  *(undefined4 *)(param_3 + 0x3c) = uVar1;
  return;
}


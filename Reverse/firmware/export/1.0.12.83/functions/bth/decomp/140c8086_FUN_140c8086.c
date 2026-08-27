/* FUN_140c8086 @ 0x140c8086 */

void FUN_140c8086(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [28];
  
  uVar1 = FUN_140c5614(param_2);
  *(undefined1 *)(param_3 + 0x11) = uVar1;
  uVar1 = FUN_140c561a(param_2);
  *(undefined1 *)(param_3 + 0x12) = uVar1;
  uVar2 = FUN_140c5658(param_2);
  *(undefined4 *)(param_3 + 0x2c) = uVar2;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined4 *)(param_3 + 0x24) = 0;
  *(undefined1 *)(param_3 + 0x43) = 1;
  FUN_140c5620(auStack_28,param_2);
  uVar2 = FUN_140c76c8(param_3 + 8,auStack_28);
  *(undefined4 *)(param_3 + 0xc) = uVar2;
  FUN_140d18d4(auStack_28);
  FUN_140c562e(auStack_28,param_2);
  uVar2 = FUN_140c76c8(param_3 + 0x14,auStack_28);
  *(undefined4 *)(param_3 + 0x18) = uVar2;
  FUN_140d18d4(auStack_28);
  FUN_140c563c(auStack_28,param_2);
  uVar2 = FUN_140c76c8(param_3 + 0x1c,auStack_28);
  *(undefined4 *)(param_3 + 0x20) = uVar2;
  FUN_140d18d4(auStack_28);
  FUN_140c564a(auStack_28,param_2);
  uVar2 = FUN_140c76c8(param_3 + 0x24,auStack_28);
  *(undefined4 *)(param_3 + 0x28) = uVar2;
  FUN_140d18d4(auStack_28);
  uVar2 = FUN_140c565e(param_2);
  *(undefined4 *)(param_3 + 0x30) = uVar2;
  uVar2 = FUN_140c5668(param_2);
  *(undefined4 *)(param_3 + 0x34) = uVar2;
  return;
}


/* FUN_140c8132 @ 0x140c8132 */

void FUN_140c8132(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [28];
  
  uVar1 = FUN_140c55b6(param_2);
  *(undefined1 *)(param_3 + 0x11) = uVar1;
  uVar1 = FUN_140c55bc(param_2);
  *(undefined1 *)(param_3 + 0x12) = uVar1;
  uVar2 = FUN_140c55fa(param_2);
  *(undefined4 *)(param_3 + 0x2c) = uVar2;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined4 *)(param_3 + 0x24) = 0;
  *(undefined1 *)(param_3 + 0x43) = 1;
  FUN_140c55c2(auStack_28,param_2);
  uVar2 = FUN_140c76c8(param_3 + 8,auStack_28);
  *(undefined4 *)(param_3 + 0xc) = uVar2;
  FUN_140d18d4(auStack_28);
  FUN_140c55d0(auStack_28,param_2);
  uVar2 = FUN_140c76c8(param_3 + 0x14,auStack_28);
  *(undefined4 *)(param_3 + 0x18) = uVar2;
  FUN_140d18d4(auStack_28);
  FUN_140c55de(auStack_28,param_2);
  uVar2 = FUN_140c76c8(param_3 + 0x1c,auStack_28);
  *(undefined4 *)(param_3 + 0x20) = uVar2;
  FUN_140d18d4(auStack_28);
  FUN_140c55ec(auStack_28,param_2);
  uVar2 = FUN_140c76c8(param_3 + 0x24,auStack_28);
  *(undefined4 *)(param_3 + 0x28) = uVar2;
  FUN_140d18d4(auStack_28);
  uVar2 = FUN_140c5600(param_2);
  *(undefined4 *)(param_3 + 0x30) = uVar2;
  uVar2 = FUN_140c560a(param_2);
  *(undefined4 *)(param_3 + 0x34) = uVar2;
  return;
}


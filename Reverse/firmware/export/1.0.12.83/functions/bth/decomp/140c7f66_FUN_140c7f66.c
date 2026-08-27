/* FUN_140c7f66 @ 0x140c7f66 */

void FUN_140c7f66(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [28];
  
  uVar1 = FUN_140c574a(param_2);
  *(undefined1 *)(param_3 + 0x24) = uVar1;
  uVar1 = FUN_140c5750(param_2);
  *(undefined1 *)(param_3 + 0x25) = uVar1;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined1 *)(param_3 + 100) = 1;
  FUN_140c5756(auStack_28,param_2);
  uVar2 = FUN_140c76c8(param_3 + 8,auStack_28);
  *(undefined4 *)(param_3 + 0xc) = uVar2;
  FUN_140d18d4(auStack_28);
  FUN_140c5764(auStack_28,param_2);
  uVar2 = FUN_140c76c8(param_3 + 0x14,auStack_28);
  *(undefined4 *)(param_3 + 0x18) = uVar2;
  FUN_140d18d4(auStack_28);
  FUN_140c5772(auStack_28,param_2);
  uVar2 = FUN_140c76c8(param_3 + 0x1c,auStack_28);
  *(undefined4 *)(param_3 + 0x20) = uVar2;
  FUN_140d18d4(auStack_28);
  return;
}


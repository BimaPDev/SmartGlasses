/* FUN_140c7fe2 @ 0x140c7fe2 */

void FUN_140c7fe2(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 auStack_28 [28];
  
  uVar1 = FUN_140c95a8(param_2);
  *(undefined4 *)(param_3 + 0x24) = uVar1;
  uVar1 = FUN_140c95ae(param_2);
  *(undefined4 *)(param_3 + 0x28) = uVar1;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined1 *)(param_3 + 0x124) = 1;
  FUN_140c95b4(auStack_28,param_2);
  uVar1 = FUN_140c76c8(param_3 + 8,auStack_28);
  *(undefined4 *)(param_3 + 0xc) = uVar1;
  FUN_140d18d4(auStack_28);
  FUN_140c95c2(auStack_28,param_2);
  uVar1 = FUN_140c76ee(param_3 + 0x14,auStack_28);
  *(undefined4 *)(param_3 + 0x18) = uVar1;
  FUN_140d77c4(auStack_28);
  FUN_140c95d0(auStack_28,param_2);
  uVar1 = FUN_140c76ee(param_3 + 0x1c,auStack_28);
  *(undefined4 *)(param_3 + 0x20) = uVar1;
  FUN_140d77c4(auStack_28);
  return;
}


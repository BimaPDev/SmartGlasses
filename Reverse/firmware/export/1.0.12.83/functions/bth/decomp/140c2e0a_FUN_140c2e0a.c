/* FUN_140c2e0a @ 0x140c2e0a */

void FUN_140c2e0a(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  int iStack_10;
  
  uStack_14 = param_2;
  iStack_10 = param_3;
  uVar1 = FUN_140d2738(param_2);
  *(undefined4 *)(param_3 + 0x24) = uVar1;
  uVar1 = FUN_140d273e(param_2);
  *(undefined4 *)(param_3 + 0x28) = uVar1;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined1 *)(param_3 + 0x124) = 1;
  FUN_140d2744(&uStack_14,param_2);
  uVar1 = FUN_140c254c(param_3 + 8,&uStack_14);
  *(undefined4 *)(param_3 + 0xc) = uVar1;
  FUN_140c3fe4(&uStack_14);
  FUN_140d2752(&uStack_14,param_2);
  uVar1 = FUN_140c2576(param_3 + 0x14,&uStack_14);
  *(undefined4 *)(param_3 + 0x18) = uVar1;
  FUN_140c4744(&uStack_14);
  FUN_140d2760(&uStack_14,param_2);
  uVar1 = FUN_140c2576(param_3 + 0x1c,&uStack_14);
  *(undefined4 *)(param_3 + 0x20) = uVar1;
  FUN_140c4744(&uStack_14);
  return;
}


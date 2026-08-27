/* FUN_140c2eac @ 0x140c2eac */

void FUN_140c2eac(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  int iStack_10;
  
  uStack_14 = param_2;
  iStack_10 = param_3;
  uVar1 = FUN_140cc156(param_2);
  *(undefined1 *)(param_3 + 0x11) = uVar1;
  uVar1 = FUN_140cc15c(param_2);
  *(undefined1 *)(param_3 + 0x12) = uVar1;
  uVar2 = FUN_140cc19a(param_2);
  *(undefined4 *)(param_3 + 0x2c) = uVar2;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined4 *)(param_3 + 0x24) = 0;
  *(undefined1 *)(param_3 + 0x43) = 1;
  FUN_140cc162(&uStack_14,param_2);
  uVar2 = FUN_140c254c(param_3 + 8,&uStack_14);
  *(undefined4 *)(param_3 + 0xc) = uVar2;
  FUN_140c3fe4(&uStack_14);
  FUN_140cc170(&uStack_14,param_2);
  uVar2 = FUN_140c254c(param_3 + 0x14,&uStack_14);
  *(undefined4 *)(param_3 + 0x18) = uVar2;
  FUN_140c3fe4(&uStack_14);
  FUN_140cc17e(&uStack_14,param_2);
  uVar2 = FUN_140c254c(param_3 + 0x1c,&uStack_14);
  *(undefined4 *)(param_3 + 0x20) = uVar2;
  FUN_140c3fe4(&uStack_14);
  FUN_140cc18c(&uStack_14,param_2);
  uVar2 = FUN_140c254c(param_3 + 0x24,&uStack_14);
  *(undefined4 *)(param_3 + 0x28) = uVar2;
  FUN_140c3fe4(&uStack_14);
  uVar2 = FUN_140cc1a0(param_2);
  *(undefined4 *)(param_3 + 0x30) = uVar2;
  uVar2 = FUN_140cc1aa(param_2);
  *(undefined4 *)(param_3 + 0x34) = uVar2;
  return;
}


/* FUN_140c2d90 @ 0x140c2d90 */

void FUN_140c2d90(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  int iStack_10;
  
  uStack_14 = param_2;
  iStack_10 = param_3;
  uVar1 = FUN_140cc2b4(param_2);
  *(undefined1 *)(param_3 + 0x24) = uVar1;
  uVar1 = FUN_140cc2ba(param_2);
  *(undefined1 *)(param_3 + 0x25) = uVar1;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined1 *)(param_3 + 100) = 1;
  FUN_140cc2c0(&uStack_14,param_2);
  uVar2 = FUN_140c254c(param_3 + 8,&uStack_14);
  *(undefined4 *)(param_3 + 0xc) = uVar2;
  FUN_140c3fe4(&uStack_14);
  FUN_140cc2ce(&uStack_14,param_2);
  uVar2 = FUN_140c254c(param_3 + 0x14,&uStack_14);
  *(undefined4 *)(param_3 + 0x18) = uVar2;
  FUN_140c3fe4(&uStack_14);
  FUN_140cc2dc(&uStack_14,param_2);
  uVar2 = FUN_140c254c(param_3 + 0x1c,&uStack_14);
  *(undefined4 *)(param_3 + 0x20) = uVar2;
  FUN_140c3fe4(&uStack_14);
  return;
}


/* FUN_140c3000 @ 0x140c3000 */

void FUN_140c3000(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  int iStack_10;
  
  uStack_14 = param_2;
  iStack_10 = param_3;
  uVar1 = FUN_140d25da(param_2);
  *(undefined4 *)(param_3 + 0x14) = uVar1;
  uVar1 = FUN_140d25e0(param_2);
  *(undefined4 *)(param_3 + 0x18) = uVar1;
  uVar1 = FUN_140d261e(param_2);
  *(undefined4 *)(param_3 + 0x34) = uVar1;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  *(undefined4 *)(param_3 + 0x24) = 0;
  *(undefined4 *)(param_3 + 0x2c) = 0;
  *(undefined1 *)(param_3 + 0x6c) = 1;
  FUN_140d25e6(&uStack_14,param_2);
  uVar1 = FUN_140c254c(param_3 + 8,&uStack_14);
  *(undefined4 *)(param_3 + 0xc) = uVar1;
  FUN_140c3fe4(&uStack_14);
  FUN_140d25f4(&uStack_14,param_2);
  uVar1 = FUN_140c2576(param_3 + 0x1c,&uStack_14);
  *(undefined4 *)(param_3 + 0x20) = uVar1;
  FUN_140c4744(&uStack_14);
  FUN_140d2602(&uStack_14,param_2);
  uVar1 = FUN_140c2576(param_3 + 0x24,&uStack_14);
  *(undefined4 *)(param_3 + 0x28) = uVar1;
  FUN_140c4744(&uStack_14);
  FUN_140d2610(&uStack_14,param_2);
  uVar1 = FUN_140c2576(param_3 + 0x2c,&uStack_14);
  *(undefined4 *)(param_3 + 0x30) = uVar1;
  FUN_140c4744(&uStack_14);
  uVar1 = FUN_140d2624(param_2);
  *(undefined4 *)(param_3 + 0x38) = uVar1;
  uVar1 = FUN_140d262e(param_2);
  *(undefined4 *)(param_3 + 0x3c) = uVar1;
  return;
}


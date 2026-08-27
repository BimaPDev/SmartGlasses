/* FUN_2c59baa8 @ 0x2c59baa8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c59baa8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_2c637344(param_2);
  uVar3 = _LAB_2c59bb38;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  lv_style_init_or_reset(uVar3);
  FUN_2c62c7c0(_LAB_2c59bb38,0xff00ff00);
  FUN_2c6036dc(*(undefined4 *)(param_1 + 0x1c),_LAB_2c59bb38,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x1c),0x27d1);
  iVar2 = FUN_2c5e33e4();
  if ((iVar2 == 0xd) || (iVar2 = FUN_2c5e33e4(), iVar2 == 0xf)) {
    FUN_2c6072bc(*(undefined4 *)(param_1 + 0x1c),9,0,0x14);
  }
  else {
    FUN_2c6072bc(*(undefined4 *)(param_1 + 0x1c),9,0,6);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = registry_lookup(0x8001);
  FUN_2c638730(uVar1,uVar3);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = FUN_2c5e2e80(_LAB_2c59bb3c);
  FUN_2c606e38(uVar1,uVar3,0);
  FUN_2c603c40(*(undefined4 *)(param_1 + 0x1c),0x5b,2,0);
  return;
}


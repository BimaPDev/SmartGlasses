/* FUN_2c59bcd8 @ 0x2c59bcd8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c59bcd8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_2c637344(param_2);
  uVar1 = _LAB_2c59bd4c;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  lv_style_init_or_reset(uVar1);
  FUN_2c62c7c0(uVar1,0xff00ff00);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = FUN_2c5e2e80(_LAB_2c59bd50);
  FUN_2c606e38(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = registry_lookup(0x8003);
  FUN_2c638730(uVar3,uVar2);
  FUN_2c6036dc(*(undefined4 *)(param_1 + 0x20),uVar1,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x20),0x27d1);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x20),9,0,0x53);
  FUN_2c603c40(*(undefined4 *)(param_1 + 0x20),0x5b,2,0);
  return;
}


/* FUN_2c5d33ac @ 0x2c5d33ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d33ac(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_2c5cfd1c(param_2);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  FUN_2c606e68(uVar1,0x10,0);
  FUN_2c606d9c(*(undefined4 *)(param_1 + 0x44),1,0);
  FUN_2c606d84(*(undefined4 *)(param_1 + 0x44),0xff00ff00,0);
  FUN_2c606d90(*(undefined4 *)(param_1 + 0x44),0x4c,0);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x44),1);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x44),2,0,8);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x44),0x144,0x50);
  uVar1 = FUN_2c6313f4(*(undefined4 *)(param_1 + 0x44));
  uVar2 = FUN_2c5e2e8c(_LAB_2c5d348c);
  FUN_2c63140c(uVar1,uVar2);
  FUN_2c606f34(uVar1,0xc,0x12);
  uVar1 = FUN_2c637344(*(undefined4 *)(param_1 + 0x44));
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  FUN_2c607048(uVar1,0xf0,0x38);
  FUN_2c606f34(*(undefined4 *)(param_1 + 0x48),0x48,0xc);
  FUN_2c6388cc(*(undefined4 *)(param_1 + 0x48),2);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x48),1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  uVar1 = registry_lookup(0x1022);
  FUN_2c638730(uVar2,uVar1);
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  uVar1 = FUN_2c5e2e80(_LAB_2c5d3490);
  FUN_2c606e38(uVar2,uVar1,0);
  FUN_2c606d18(*(undefined4 *)(param_1 + 0x48),4,0);
  FUN_2c603c40(*(undefined4 *)(param_1 + 0x48),0x55,0xff00ff00,0);
  return;
}


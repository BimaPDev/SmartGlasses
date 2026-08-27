/* FUN_2c5d3d24 @ 0x2c5d3d24 */

void FUN_2c5d3d24(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_2c5cfd1c(param_2);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  FUN_2c606e68(uVar1,0x10,0);
  FUN_2c606d9c(*(undefined4 *)(param_1 + 0x6c),1,0);
  FUN_2c606d84(*(undefined4 *)(param_1 + 0x6c),0xff00ff00,0);
  FUN_2c606d90(*(undefined4 *)(param_1 + 0x6c),0x4c,0);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x6c),1);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x6c),2,0,8);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x6c),0x144,0x50);
  uVar2 = FUN_2c6313f4(*(undefined4 *)(param_1 + 0x6c));
  uVar1 = DAT_2c5d3e78;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  uVar1 = FUN_2c5e2e8c(uVar1);
  FUN_2c63140c(uVar2,uVar1);
  FUN_2c606f34(*(undefined4 *)(param_1 + 0x70),0xc,0x10);
  uVar1 = FUN_2c637344(*(undefined4 *)(param_1 + 0x6c));
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  FUN_2c607048(uVar1,0xf0,0x1c);
  FUN_2c606f34(*(undefined4 *)(param_1 + 0x74),0x48,10);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x74),1,0);
  FUN_2c638730(*(undefined4 *)(param_1 + 0x74),DAT_2c5d3e7c);
  FUN_2c6388dc(*(undefined4 *)(param_1 + 0x74),1);
  uVar2 = *(undefined4 *)(param_1 + 0x74);
  uVar1 = FUN_2c5e2e80(DAT_2c5d3e80);
  FUN_2c606e38(uVar2,uVar1,0);
  FUN_2c606d18(*(undefined4 *)(param_1 + 0x74),4,0);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x74),0xff00ff00,0);
  FUN_2c602454(*(undefined4 *)(param_1 + 0x74),DAT_2c5d3e88,*DAT_2c5d3e84,0);
  FUN_2c620f3c(0x1f53,*(undefined4 *)(param_1 + 0x74),param_1);
  uVar1 = FUN_2c637344(*(undefined4 *)(param_1 + 0x6c));
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  FUN_2c607048(uVar1,0xf0,0x18);
  FUN_2c606f34(*(undefined4 *)(param_1 + 0x78),0x48,0x26);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x78),1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  uVar1 = registry_lookup(0x1069);
  FUN_2c638730(uVar2,uVar1);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  uVar1 = FUN_2c5e2e80(DAT_2c5d3e8c);
  FUN_2c606e38(uVar2,uVar1,0);
  FUN_2c606d18(*(undefined4 *)(param_1 + 0x78),4,0);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x78),0xff00ff00,0);
  FUN_2c5d3c08(param_1);
  return;
}


/* FUN_2c5d3260 @ 0x2c5d3260 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5d3260(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_2c5cfd1c(param_2);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  lv_obj_add_flag_invalidate(uVar1,1);
  uVar1 = _LAB_2c5d33a0;
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x30),2,0,8);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x30),0x144,0x6e);
  FUN_2c606e68(*(undefined4 *)(param_1 + 0x30),0x10,0);
  FUN_2c606d9c(*(undefined4 *)(param_1 + 0x30),1,0);
  FUN_2c606d84(*(undefined4 *)(param_1 + 0x30),0xff00ff00,0);
  FUN_2c606d90(*(undefined4 *)(param_1 + 0x30),0x4c,0);
  uVar2 = FUN_2c6313f4(*(undefined4 *)(param_1 + 0x30));
  uVar3 = FUN_2c5e2e8c(_LAB_2c5d33a4);
  FUN_2c63140c(uVar2,uVar3);
  FUN_2c606f34(uVar2,0xc,0x10);
  uVar2 = FUN_2c637344(*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  FUN_2c607048(uVar2,0xf0,0x1c);
  FUN_2c606f34(*(undefined4 *)(param_1 + 0x34),0x48,0xc);
  uVar2 = _LAB_2c5d33a8;
  FUN_2c6388cc(*(undefined4 *)(param_1 + 0x34),1);
  FUN_2c6388dc(*(undefined4 *)(param_1 + 0x34),1);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x34),1,0);
  FUN_2c638730(*(undefined4 *)(param_1 + 0x34),uVar1);
  uVar4 = *(undefined4 *)(param_1 + 0x34);
  uVar3 = FUN_2c5e2e80(uVar2);
  FUN_2c606e38(uVar4,uVar3,0);
  FUN_2c606d18(*(undefined4 *)(param_1 + 0x34),2,0);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x34),0xff00ff00,0);
  uVar3 = FUN_2c637344(*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  FUN_2c607048(uVar3,0xf0,0x38);
  FUN_2c606f34(*(undefined4 *)(param_1 + 0x38),0x48,0x2a);
  FUN_2c6388cc(*(undefined4 *)(param_1 + 0x38),3);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x38),1,0);
  FUN_2c638730(*(undefined4 *)(param_1 + 0x38),uVar1);
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  uVar1 = FUN_2c5e2e80(uVar2);
  FUN_2c606e38(uVar3,uVar1,0);
  FUN_2c606d18(*(undefined4 *)(param_1 + 0x38),2,0);
  FUN_2c603c40(*(undefined4 *)(param_1 + 0x38),0x55,0xff00ff00,0);
  return;
}


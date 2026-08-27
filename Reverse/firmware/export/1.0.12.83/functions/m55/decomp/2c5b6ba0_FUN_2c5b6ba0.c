/* FUN_2c5b6ba0 @ 0x2c5b6ba0 */

void FUN_2c5b6ba0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = DAT_2c5b6d98;
  *(undefined1 *)(param_1 + 0x38) = 1;
  uVar1 = FUN_2c606a10(param_2);
  FUN_2c5b6b00(param_1);
  FUN_2c6036dc(uVar1,param_1 + 0x18,0);
  FUN_2c6070bc(uVar1,0x72);
  FUN_2c60710c(uVar1,0x34);
  FUN_2c6072bc(uVar1,4,0x49,0xffffffd8);
  FUN_2c606abc(uVar1,0x10);
  FUN_2c606abc(uVar1,2);
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar2 = FUN_2c606a10(uVar1);
  FUN_2c5b6b4c(param_1);
  FUN_2c6036dc(uVar2,param_1 + 0x20,0);
  FUN_2c607048(uVar2,0x34);
  FUN_2c6072b4(uVar2,7);
  FUN_2c606abc(uVar2,0x10);
  FUN_2c606abc(uVar2,2);
  uVar3 = FUN_2c5e2e8c(uVar5);
  FUN_2c606d78(uVar2,uVar3,0);
  uVar4 = FUN_2c637344(uVar2);
  uVar3 = DAT_2c5b6d80;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  FUN_2c638730(uVar4,uVar3);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x10),0x27d1,0x1c);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x10),2,0,4);
  FUN_2c606d18(*(undefined4 *)(param_1 + 0x10),2,0);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = FUN_2c5e2e80(DAT_2c5b6d84);
  FUN_2c606e38(uVar4,uVar3,0);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x10),0xff00ff00,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x10),9,0);
  uVar2 = FUN_2c637344(uVar2);
  uVar3 = DAT_2c5b6d88;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  FUN_2c638730(uVar2,uVar3);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x14),0x27d1,0x18);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x14),5,0,0xfffffffc);
  FUN_2c606d18(*(undefined4 *)(param_1 + 0x14),2,0);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = FUN_2c5e2e80(DAT_2c5b6d8c);
  FUN_2c606e38(uVar2,uVar3,0);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x14),0xff00ff00,0);
  FUN_2c606e2c(*(undefined4 *)(param_1 + 0x14),0xcc,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x14),9,0);
  uVar3 = FUN_2c6313f4(uVar1);
  *(undefined4 *)(param_1 + 8) = uVar3;
  uVar5 = FUN_2c5e2e8c(uVar5);
  FUN_2c63140c(uVar3,uVar5);
  FUN_2c607048(*(undefined4 *)(param_1 + 8),0x34);
  FUN_2c6072b4(*(undefined4 *)(param_1 + 8),8);
  uVar3 = FUN_2c637344(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  FUN_2c6070bc(uVar3,0x27d1);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0xc),2,0);
  FUN_2c6072b4(*(undefined4 *)(param_1 + 0xc),9);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = FUN_2c5e2e80(DAT_2c5b6d90);
  FUN_2c606e38(uVar5,uVar3,0);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0xc),0xff00ff00,0);
  FUN_2c638730(*(undefined4 *)(param_1 + 0xc),DAT_2c5b6d94);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 4),1);
  return;
}


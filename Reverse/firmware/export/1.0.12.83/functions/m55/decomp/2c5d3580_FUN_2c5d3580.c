/* FUN_2c5d3580 @ 0x2c5d3580 */

void FUN_2c5d3580(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_2c5cfd1c(param_2);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  lv_obj_add_flag_invalidate(uVar1,1);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x54),0x144,0x27d1);
  uVar1 = FUN_2c5cfd1c(*(undefined4 *)(param_1 + 0x54));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  FUN_2c607048(uVar1,0x27d1);
  FUN_2c606e68(*(undefined4 *)(param_1 + 0x58),0x10,0);
  FUN_2c606d9c(*(undefined4 *)(param_1 + 0x58),1,0);
  FUN_2c606d84(*(undefined4 *)(param_1 + 0x58),0xff00ff00,0);
  FUN_2c606d90(*(undefined4 *)(param_1 + 0x58),0x99,0);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x58),1,0);
  uVar1 = FUN_2c637344(*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  FUN_2c6072bc(uVar1,9,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x5c),0x27d1);
  FUN_2c6388cc(*(undefined4 *)(param_1 + 0x5c),2);
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  FUN_2c606d30(uVar1,0xe,0);
  FUN_2c606d3c(uVar1,0xe,0);
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  FUN_2c606d18(uVar1,0xe,0);
  FUN_2c606d24(uVar1,0xe,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x5c),1,0);
  uVar2 = *(undefined4 *)(param_1 + 0x5c);
  uVar1 = FUN_2c5e2e80(DAT_2c5d366c);
  FUN_2c606e38(uVar2,uVar1,0);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x5c),0xff00ff00,0);
  return;
}


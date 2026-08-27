/* FUN_2c51ba5c @ 0x2c51ba5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c51ba5c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = _LAB_2c51bbf0;
  uVar1 = _LAB_2c51bbd8;
  uVar3 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  uVar4 = FUN_2c6313f4();
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  FUN_2c607048(uVar4,0x27d1);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = FUN_2c5e2e4c(_LAB_2c51bbdc);
  FUN_2c63140c(uVar5,uVar4);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0xc),2,0,0x50);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0xc),1);
  uVar4 = FUN_2c637344(uVar3);
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  FUN_2c607048(uVar4,0x27d1);
  uVar5 = *_LAB_2c51bbe0;
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x10),uVar5,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x10),2,0);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x10),2,0,0xf0);
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = FUN_2c5e2e80(uVar2);
  FUN_2c606e38(uVar6,uVar4,0);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x10),1);
  uVar4 = FUN_2c62fe4c(uVar3);
  uVar3 = _DAT_2c51bbe4;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_2c603a04(uVar4,0,uVar3);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x14),2,0,0x13c);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x14),0x88,0x2c);
  FUN_2c606dc0(*(undefined4 *)(param_1 + 0x14),*_LAB_2c51bbe8,0);
  FUN_2c606dcc(*(undefined4 *)(param_1 + 0x14),0xff,0);
  FUN_2c606db4(*(undefined4 *)(param_1 + 0x14),1,0);
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x14),uVar5,0);
  FUN_2c606d6c(*(undefined4 *)(param_1 + 0x14),0x19,0);
  FUN_2c606e68(*(undefined4 *)(param_1 + 0x14),0xc,0);
  uVar3 = FUN_2c637344(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  FUN_2c607048(uVar3,0x27d1);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x18),9,0);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = registry_lookup(uVar1);
  FUN_2c638730(uVar4,uVar3);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = FUN_2c5e2e80(uVar2);
  FUN_2c606e38(uVar4,uVar3,0);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x18),uVar5,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x18),2,0);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x14),1);
  FUN_2c51b9b0(param_1);
  FUN_2c5eb89c(uVar1,*(undefined4 *)(param_1 + 0x14),0,_LAB_2c51bbec,param_1);
  return;
}


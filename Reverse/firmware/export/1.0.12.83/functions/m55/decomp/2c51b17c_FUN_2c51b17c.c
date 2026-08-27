/* FUN_2c51b17c @ 0x2c51b17c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c51b17c(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar1 = _LAB_2c51b4d0;
  uVar2 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  uVar3 = FUN_2c637344();
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  FUN_2c6072bc(uVar3,2,0,0x50);
  FUN_2c607048(*(undefined4 *)(param_1 + 0xc),0x27d1,0x1c);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0xc),*puVar1,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0xc),2,0);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = FUN_2c5e2e80(DAT_2c51b4d4);
  FUN_2c606e38(uVar5,uVar3,0);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = registry_lookup(DAT_2c51b4d8);
  FUN_2c638730(uVar5,uVar3);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0xc),1);
  uVar5 = FUN_2c6313f4(uVar2);
  uVar3 = DAT_2c51b4dc;
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  uVar3 = FUN_2c5e2e4c(uVar3);
  FUN_2c63140c(uVar5,uVar3);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x10),0x27d1);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x10),2,0,0x78);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x10),1);
  uVar3 = FUN_2c637344(uVar2);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  iVar4 = FUN_2c5e33e4();
  if (iVar4 == 2) {
    FUN_2c6072bc(*(undefined4 *)(param_1 + 0x14),1,0x34,0xf0);
  }
  else {
    FUN_2c6072bc(*(undefined4 *)(param_1 + 0x14),2,0,0xf0);
  }
  FUN_2c607048(*(undefined4 *)(param_1 + 0x14),0x27d1,0x18);
  uVar5 = *puVar1;
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x14),uVar5,0);
  FUN_2c606e2c(*(undefined4 *)(param_1 + 0x14),0x99,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x14),2,0);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = FUN_2c5e2e80(DAT_2c51b4e0);
  FUN_2c606e38(uVar6,uVar3,0);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = registry_lookup(DAT_2c51b4e4);
  FUN_2c638730(uVar6,uVar3);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x14),1);
  uVar3 = FUN_2c637344(uVar2);
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  FUN_2c6072bc(uVar3,2,0,0x10a);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x18),0x27d1);
  FUN_2c638730(*(undefined4 *)(param_1 + 0x18),DAT_2c51b4e8);
  uVar3 = FUN_2c6313f4(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_2c6072bc(uVar3,1,0,9);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = FUN_2c5e2e4c(DAT_2c51b4ec);
  FUN_2c63140c(uVar6,uVar3);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x1c),0x27d1);
  uVar3 = FUN_2c637344(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  FUN_2c6072bc(uVar3,7,0xc,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x20),0x27d1);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x20),uVar5,0);
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = FUN_2c5e2e80(DAT_2c51b4d4);
  FUN_2c606e38(uVar6,uVar3,0);
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = registry_lookup(DAT_2c51b4f0);
  FUN_2c638730(uVar6,uVar3);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x18),1);
  uVar3 = FUN_2c637344(uVar2);
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  FUN_2c608808(uVar3,*(undefined4 *)(param_1 + 0x18),0xd,0,4);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x24),0x27d1);
  FUN_2c638730(*(undefined4 *)(param_1 + 0x24),DAT_2c51b4e8);
  uVar3 = FUN_2c6313f4(*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  FUN_2c6072bc(uVar3,1,0,9);
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = FUN_2c5e2e4c(DAT_2c51b4ec);
  FUN_2c63140c(uVar6,uVar3);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x28),0x27d1);
  uVar3 = FUN_2c637344(*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  FUN_2c6072bc(uVar3,7,0xc,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x2c),0x27d1);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x2c),uVar5,0);
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  uVar3 = FUN_2c5e2e80(DAT_2c51b4d4);
  FUN_2c606e38(uVar5,uVar3,0);
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  uVar3 = registry_lookup(DAT_2c51b4f4);
  FUN_2c638730(uVar5,uVar3);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x24),1);
  uVar2 = FUN_2c62fe4c(uVar2);
  uVar3 = DAT_2c51b4f8;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  FUN_2c603a04(uVar2,0,uVar3);
  iVar4 = FUN_2c5e33e4();
  if (iVar4 == 2) {
    uVar3 = 0xffffffd8;
  }
  else {
    uVar3 = 0xffffffb0;
  }
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x30),5,0,uVar3);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x30),0x98,0x2c);
  FUN_2c606dc0(*(undefined4 *)(param_1 + 0x30),*DAT_2c51b4fc,0);
  FUN_2c606dcc(*(undefined4 *)(param_1 + 0x30),0xff,0);
  FUN_2c606db4(*(undefined4 *)(param_1 + 0x30),1,0);
  uVar2 = *puVar1;
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x30),uVar2,0);
  FUN_2c606d6c(*(undefined4 *)(param_1 + 0x30),0x19,0);
  FUN_2c606e68(*(undefined4 *)(param_1 + 0x30),0xc,0);
  uVar3 = FUN_2c637344(*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  FUN_2c607048(uVar3,0x27d1);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x34),9,0);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar3 = registry_lookup(DAT_2c51b500);
  FUN_2c638730(uVar5,uVar3);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar3 = FUN_2c5e2e80(DAT_2c51b4d4);
  FUN_2c606e38(uVar5,uVar3,0);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x34),uVar2,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x34),2,0);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x30),1);
  FUN_2c51b0c8(param_1);
  FUN_2c5eb89c(DAT_2c51b528,*(undefined4 *)(param_1 + 0x30),0,DAT_2c51b524,param_1);
  return;
}


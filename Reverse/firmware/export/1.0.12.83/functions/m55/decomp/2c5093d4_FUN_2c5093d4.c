/* FUN_2c5093d4 @ 0x2c5093d4 */

void FUN_2c5093d4(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  puVar1 = DAT_2c50970c;
  uVar2 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  uVar3 = FUN_2c637344();
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  FUN_2c6072bc(uVar3,2,0,0x1c);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x18),0x27d1,0x1c);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x18),*puVar1,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x18),2,0);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = FUN_2c5e2e80(DAT_2c509710);
  FUN_2c606e38(uVar6,uVar3,0);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = registry_lookup(DAT_2c509714);
  FUN_2c638730(uVar6,uVar3);
  if (*(int *)(param_1 + 0x18) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x18),1);
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar6 = 0xec;
    uVar3 = 0xa8;
    uVar5 = 100;
  }
  else {
    uVar6 = FUN_2c606a10(uVar2);
    uVar3 = DAT_2c5098c0;
    *(undefined4 *)(param_1 + 0x2c) = uVar6;
    FUN_2c603a04(uVar6,0,uVar3);
    FUN_2c607048(*(undefined4 *)(param_1 + 0x2c),0x1e8,0x38);
    FUN_2c6072bc(*(undefined4 *)(param_1 + 0x2c),2,0,100);
    FUN_2c6036dc(*(undefined4 *)(param_1 + 0x2c),param_1 + 0x1c,0);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x2c),1);
      uVar3 = *(undefined4 *)(param_1 + 0x2c);
    }
    uVar3 = FUN_2c637344(uVar3);
    *(undefined4 *)(param_1 + 0x30) = uVar3;
    FUN_2c6072bc(uVar3,7,0x14,0);
    FUN_2c607048(*(undefined4 *)(param_1 + 0x30),0x27d1);
    FUN_2c606e20(*(undefined4 *)(param_1 + 0x30),*puVar1,0);
    FUN_2c606e5c(*(undefined4 *)(param_1 + 0x30),2,0);
    uVar6 = *(undefined4 *)(param_1 + 0x30);
    uVar3 = FUN_2c5e2e80(DAT_2c5098c4);
    FUN_2c606e38(uVar6,uVar3,0);
    uVar6 = *(undefined4 *)(param_1 + 0x30);
    uVar3 = registry_lookup(DAT_2c5098c8);
    FUN_2c638730(uVar6,uVar3);
    if (*(int *)(param_1 + 0x30) == 0) {
      uVar6 = 0x130;
      uVar3 = 0xec;
      uVar5 = 0xa8;
    }
    else {
      uVar6 = 0x130;
      lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x30),1);
      uVar3 = 0xec;
      uVar5 = 0xa8;
    }
  }
  iVar7 = param_1 + 0x1c;
  uVar4 = FUN_2c606a10(uVar2);
  uVar8 = DAT_2c509718;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  FUN_2c603a04(uVar4,0,uVar8);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x34),0x1e8,0x38);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x34),2,0,uVar5);
  FUN_2c6036dc(*(undefined4 *)(param_1 + 0x34),iVar7,0);
  uVar5 = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x34),1);
    uVar5 = *(undefined4 *)(param_1 + 0x34);
  }
  uVar5 = FUN_2c637344(uVar5);
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  FUN_2c6072bc(uVar5,7,0x14,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x38),0x27d1);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x38),*puVar1,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x38),2,0);
  uVar8 = *(undefined4 *)(param_1 + 0x38);
  uVar5 = FUN_2c5e2e80(DAT_2c509710);
  FUN_2c606e38(uVar8,uVar5,0);
  uVar8 = *(undefined4 *)(param_1 + 0x38);
  uVar5 = registry_lookup(DAT_2c50971c);
  FUN_2c638730(uVar8,uVar5);
  if (*(int *)(param_1 + 0x38) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x38),1);
  }
  uVar8 = FUN_2c606a10(uVar2);
  uVar5 = DAT_2c509718;
  *(undefined4 *)(param_1 + 0x3c) = uVar8;
  FUN_2c603a04(uVar8,0,uVar5);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x3c),0x1e8,0x38);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x3c),2,0,uVar3);
  FUN_2c6036dc(*(undefined4 *)(param_1 + 0x3c),iVar7,0);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x3c),1);
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
  }
  uVar3 = FUN_2c637344(uVar3);
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  FUN_2c6072bc(uVar3,7,0x14,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x40),0x27d1);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x40),*puVar1,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x40),2,0);
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  uVar3 = FUN_2c5e2e80(DAT_2c509710);
  FUN_2c606e38(uVar5,uVar3,0);
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  uVar3 = registry_lookup(DAT_2c509720);
  FUN_2c638730(uVar5,uVar3);
  if (*(int *)(param_1 + 0x40) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x40),1);
  }
  uVar5 = FUN_2c606a10(uVar2);
  uVar3 = DAT_2c509718;
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  FUN_2c603a04(uVar5,0,uVar3);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x44),0x1e8,0x38);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x44),2,0,uVar6);
  FUN_2c6036dc(*(undefined4 *)(param_1 + 0x44),iVar7,0);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x44),1);
    uVar3 = *(undefined4 *)(param_1 + 0x44);
  }
  uVar3 = FUN_2c637344(uVar3);
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  FUN_2c6072bc(uVar3,7,0x14,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x48),0x27d1);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x48),*puVar1,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x48),2,0);
  uVar6 = *(undefined4 *)(param_1 + 0x48);
  uVar3 = FUN_2c5e2e80(DAT_2c509710);
  FUN_2c606e38(uVar6,uVar3,0);
  uVar6 = *(undefined4 *)(param_1 + 0x48);
  uVar3 = registry_lookup(DAT_2c509724);
  FUN_2c638730(uVar6,uVar3);
  if (*(int *)(param_1 + 0x48) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x48),1);
  }
  uVar3 = FUN_2c637344(uVar2);
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  FUN_2c6072bc(uVar3,2,0,0x1ac);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x4c),0x27d1);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x4c),*puVar1,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x4c),2,0);
  uVar6 = *(undefined4 *)(param_1 + 0x4c);
  uVar3 = FUN_2c5e2e80(DAT_2c509710);
  FUN_2c606e38(uVar6,uVar3,0);
  uVar6 = *(undefined4 *)(param_1 + 0x4c);
  uVar3 = registry_lookup(DAT_2c509728);
  FUN_2c638730(uVar6,uVar3);
  if (*(int *)(param_1 + 0x4c) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x4c),1);
  }
  uVar3 = FUN_2c606a10(uVar2);
  uVar2 = DAT_2c509718;
  *(undefined4 *)(param_1 + 400) = uVar3;
  FUN_2c603a04(uVar3,0,uVar2);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 400),1,0x208,0x72);
  FUN_2c607048(*(undefined4 *)(param_1 + 400),0x1c);
  FUN_2c606e68(*(undefined4 *)(param_1 + 400),0x10,0);
  FUN_2c606d60(*(undefined4 *)(param_1 + 400),*puVar1,0);
  FUN_2c606d6c(*(undefined4 *)(param_1 + 400),0xff,0);
  uVar3 = FUN_2c606a10(*(undefined4 *)(param_1 + 400));
  uVar2 = DAT_2c509718;
  *(undefined4 *)(param_1 + 0x194) = uVar3;
  FUN_2c603a04(uVar3,0,uVar2);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x194),9,0,0xffffffff);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x194),0x11,10);
  FUN_2c606d00(*(undefined4 *)(param_1 + 0x194),8,0);
  FUN_2c606d0c(*(undefined4 *)(param_1 + 0x194),5,0);
  FUN_2c606cf4(*(undefined4 *)(param_1 + 0x194),DAT_2c5098bc,0);
  uVar3 = FUN_2c606a10(*(undefined4 *)(param_1 + 0x194));
  uVar2 = DAT_2c5098c0;
  *(undefined4 *)(param_1 + 0x198) = uVar3;
  FUN_2c603a04(uVar3,0,uVar2);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x198),1,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x198),4,10);
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x198),0xff000000,0);
  FUN_2c606d6c(*(undefined4 *)(param_1 + 0x198),0xff,0);
  uVar3 = FUN_2c606a10(*(undefined4 *)(param_1 + 0x194));
  uVar2 = DAT_2c5098c0;
  *(undefined4 *)(param_1 + 0x19c) = uVar3;
  FUN_2c603a04(uVar3,0,uVar2);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x19c),4,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x19c),0x10,4);
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x19c),0xff000000,0);
  FUN_2c606d6c(*(undefined4 *)(param_1 + 0x19c),0xff,0);
  if (*(int *)(param_1 + 400) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 400),1);
    return;
  }
  return;
}


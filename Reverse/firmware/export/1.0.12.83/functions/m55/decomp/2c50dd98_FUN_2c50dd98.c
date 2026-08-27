/* FUN_2c50dd98 @ 0x2c50dd98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50dd98(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar1 = _LAB_2c50e0bc;
  uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))();
  *(undefined1 *)(param_1 + 0x2c) = uVar2;
  uVar3 = (**(code **)(**(int **)(param_1 + 4) + 4))(*(int **)(param_1 + 4));
  uVar4 = FUN_2c637344();
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  FUN_2c6072bc(uVar4,2,0,0x1c);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x10),0x27d1,0x1c);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x10),*puVar1,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x10),2,0);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = FUN_2c5e2e80(_LAB_2c50e0c0);
  FUN_2c606e38(uVar5,uVar4,0);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = registry_lookup(_LAB_2c50e0c4);
  FUN_2c638730(uVar5,uVar4);
  if (*(int *)(param_1 + 0x10) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x10),1);
  }
  uVar5 = FUN_2c606a10(uVar3);
  uVar4 = _DAT_2c50e0c8;
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  FUN_2c603a04(uVar5,0,uVar4);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x14),0x1e8,0x27d1);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x14),2,0,100);
  FUN_2c606d18(*(undefined4 *)(param_1 + 0x14),8,0);
  FUN_2c606d24(*(undefined4 *)(param_1 + 0x14),8,0);
  FUN_2c606e68(*(undefined4 *)(param_1 + 0x14),0xc,1);
  FUN_2c606d9c(*(undefined4 *)(param_1 + 0x14),1);
  FUN_2c606d84(*(undefined4 *)(param_1 + 0x14),*puVar1,1);
  FUN_2c606d90(*(undefined4 *)(param_1 + 0x14),0x4c,1);
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x14),0xff000000,1);
  FUN_2c606b6c(*(undefined4 *)(param_1 + 0x14),1);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x14),1);
    uVar4 = *(undefined4 *)(param_1 + 0x14);
  }
  uVar4 = FUN_2c637344(uVar4);
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  FUN_2c607048(uVar4,0x27d1,0x1c);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x24),1,0x14,0);
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  uVar4 = registry_lookup(_LAB_2c50e0cc);
  FUN_2c638730(uVar5,uVar4);
  uVar6 = *puVar1;
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x24),uVar6,0);
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  uVar4 = FUN_2c5e2e80(_LAB_2c50e0c0);
  FUN_2c606e38(uVar5,uVar4,0);
  uVar4 = FUN_2c637344(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  FUN_2c608808(uVar4,*(undefined4 *)(param_1 + 0x24),0xd,0,0);
  FUN_2c6388dc(*(undefined4 *)(param_1 + 0x28),0);
  FUN_2c6070bc(*(undefined4 *)(param_1 + 0x28),400);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = registry_lookup(_LAB_2c50e0d0);
  FUN_2c638730(uVar5,uVar4);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x28),uVar6,0);
  FUN_2c606e2c(*(undefined4 *)(param_1 + 0x28),0x66,0);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = FUN_2c5e2e80(_LAB_2c50e0c0);
  FUN_2c606e38(uVar5,uVar4,0);
  uVar5 = FUN_2c606a10(*(undefined4 *)(param_1 + 0x14));
  uVar4 = _DAT_2c50e0c8;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  FUN_2c603a04(uVar5,0,uVar4);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x18),3,0xffffffec,0x12);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x18),0x28,0x16);
  FUN_2c606e68(*(undefined4 *)(param_1 + 0x18),0xb,0);
  FUN_2c606d9c(*(undefined4 *)(param_1 + 0x18),1);
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x18),uVar6,1);
  FUN_2c606d6c(*(undefined4 *)(param_1 + 0x18),0,0);
  FUN_2c606d84(*(undefined4 *)(param_1 + 0x18),uVar6,1);
  FUN_2c606b6c(*(undefined4 *)(param_1 + 0x18),1);
  FUN_2c606d90(*(undefined4 *)(param_1 + 0x18),0x4c,1);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x18),1);
    uVar4 = *(undefined4 *)(param_1 + 0x18);
  }
  uVar5 = FUN_2c606a10(uVar4);
  uVar4 = _DAT_2c50e0c8;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  FUN_2c603a04(uVar5,0,uVar4);
  if (*(char *)(param_1 + 0x2c) == '\0') {
    FUN_2c6072bc(*(undefined4 *)(param_1 + 0x1c),7,7,0);
    FUN_2c607048(*(undefined4 *)(param_1 + 0x1c),9,4);
    FUN_2c606e68(*(undefined4 *)(param_1 + 0x1c),2,0);
    FUN_2c606d60(*(undefined4 *)(param_1 + 0x1c),*puVar1,0);
    FUN_2c606d6c(*(undefined4 *)(param_1 + 0x1c),0x99,0);
  }
  else {
    FUN_2c6072bc(*(undefined4 *)(param_1 + 0x1c),7,0x17,0);
    FUN_2c607048(*(undefined4 *)(param_1 + 0x1c),0xe);
    FUN_2c606e68(*(undefined4 *)(param_1 + 0x1c),0xb,0);
    FUN_2c606d60(*(undefined4 *)(param_1 + 0x1c),*puVar1,0);
    FUN_2c606d6c(*(undefined4 *)(param_1 + 0x1c),0xff,0);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x1c),1);
  }
  uVar4 = FUN_2c637344(uVar3);
  uVar3 = _DAT_2c50e0c8;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  FUN_2c603a04(uVar4,0,uVar3);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x20),5,0,0xffffffe4);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x20),0x27d1);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = FUN_2c5e2e80(_LAB_2c50e0c0);
  FUN_2c606e38(uVar4,uVar3,0);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x20),*puVar1,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x20),2,0);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = registry_lookup(DAT_2c50e0d4);
  FUN_2c638730(uVar4,uVar3);
  if (*(int *)(param_1 + 0x20) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x20),1);
    return;
  }
  return;
}


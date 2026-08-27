/* FUN_2c505fec @ 0x2c505fec */

/* WARNING: Removing unreachable block (ram,0x2c606a44) */
/* WARNING: Removing unreachable block (ram,0x2c606a84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c505fec(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar2 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  uVar3 = FUN_2c6313f4();
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  FUN_2c607048(uVar3,0x27d1,0x78);
  uVar8 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = FUN_2c5e2e4c(_LAB_2c506294);
  FUN_2c63140c(uVar8,uVar3);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x14),2,0,0x50);
  if (*(int *)(param_1 + 0x14) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x14),1);
  }
  uVar3 = FUN_2c6313f4(uVar2);
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  FUN_2c607048(uVar3,100);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x18),2,0,0x78);
  uVar8 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = FUN_2c5e2e4c(_DAT_2c506298);
  FUN_2c63140c(uVar8,uVar3);
  if (*(int *)(param_1 + 0x18) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x18),1);
  }
  puVar1 = _LAB_2c50629c;
  uVar3 = FUN_2c637344(uVar2);
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_2c6388dc(uVar3,0);
  FUN_2c6070bc(*(undefined4 *)(param_1 + 0x1c),600);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x1c),*puVar1,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x1c),2,0);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x1c),2,0,0xf0);
  uVar8 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = FUN_2c5e2e80(_LAB_2c5062a0);
  FUN_2c606e38(uVar8,uVar3,0);
  if (*(int *)(param_1 + 0x1c) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x1c),1);
  }
  uVar8 = FUN_2c62fe4c(uVar2);
  uVar3 = _DAT_2c5062a4;
  *(undefined4 *)(param_1 + 0x20) = uVar8;
  FUN_2c603a04(uVar8,0,uVar3);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x20),2,0,0x13c);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x20),0x88,0x2c);
  uVar9 = *puVar1;
  FUN_2c606dc0(*(undefined4 *)(param_1 + 0x20),uVar9,0);
  FUN_2c606db4(*(undefined4 *)(param_1 + 0x20),1,0);
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x20),uVar9,0);
  FUN_2c606d6c(*(undefined4 *)(param_1 + 0x20),0x19,0);
  FUN_2c606e68(*(undefined4 *)(param_1 + 0x20),0xc,0);
  uVar3 = FUN_2c637344(*(undefined4 *)(param_1 + 0x20));
  FUN_2c607048(uVar3,0x27d1);
  FUN_2c6072bc(uVar3,9,0);
  uVar8 = registry_lookup(_LAB_2c5062a8);
  FUN_2c638730(uVar3,uVar8);
  uVar8 = FUN_2c5e2e80(_LAB_2c5062a0);
  FUN_2c606e38(uVar3,uVar8,0);
  FUN_2c606e20(uVar3,uVar9,0);
  FUN_2c606e5c(uVar3,2,0);
  if (*(int *)(param_1 + 0x20) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x20),1);
  }
  uVar8 = FUN_2c606a10(uVar2);
  uVar3 = _DAT_2c5062a4;
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  FUN_2c603a04(uVar8,0,uVar3);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x24),0x27d1,0x1c);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x24),2,0,0x144);
  uVar3 = FUN_2c61c7d0(*(undefined4 *)(param_1 + 0x24));
  FUN_2c607048(uVar3,0x14);
  FUN_2c6072bc(uVar3,7,0);
  FUN_2c606e14(uVar3,0x33,0);
  FUN_2c606e14(uVar3,0xff,0x20000);
  uVar3 = FUN_2c637344(*(undefined4 *)(param_1 + 0x24));
  FUN_2c6072bc(uVar3,7,0x20,0);
  FUN_2c607048(uVar3,0x27d1,0x14);
  FUN_2c606e20(uVar3,*puVar1,0);
  FUN_2c606e5c(uVar3,2,0);
  uVar8 = FUN_2c5e2e80(_LAB_2c5062a0);
  FUN_2c606e38(uVar3,uVar8,0);
  uVar8 = registry_lookup(_LAB_2c5062ac);
  FUN_2c638730(uVar3,uVar8);
  if (*(int *)(param_1 + 0x24) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x24),1);
  }
  uVar2 = FUN_2c637344(uVar2);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  FUN_2c6072bc(uVar2,2,0,0x1ac);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x28),0x27d1);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x28),*puVar1,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x28),9,0);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = FUN_2c5e2e80(_LAB_2c5062a0);
  FUN_2c606e38(uVar3,uVar2,0);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = registry_lookup(_LAB_2c5062b0);
  FUN_2c638730(uVar3,uVar2);
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 == 0) {
    return;
  }
  iVar7 = *DAT_2c606ab8;
  iVar5 = FUN_2c607214();
  FUN_2c607df0(iVar4);
  *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 1;
  FUN_2c607df0(iVar4);
  iVar6 = FUN_2c607214(iVar4);
  if (iVar6 != iVar5) {
    FUN_2c6041d4(iVar4);
    FUN_2c607248();
    FUN_2c607248(iVar4);
  }
  if (*DAT_2c606ab8 != iVar7) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}


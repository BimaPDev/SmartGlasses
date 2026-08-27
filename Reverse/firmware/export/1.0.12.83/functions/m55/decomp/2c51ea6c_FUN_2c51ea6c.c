/* FUN_2c51ea6c @ 0x2c51ea6c */

/* WARNING: Removing unreachable block (ram,0x2c606a44) */
/* WARNING: Removing unreachable block (ram,0x2c606a84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c51ea6c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar1 = _LAB_2c51ec84;
  uVar4 = _DAT_2c51ec80;
  uVar2 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  uVar3 = FUN_2c637344();
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  FUN_2c6388dc(uVar3,1);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0xc),2,0,0x50);
  FUN_2c607048(*(undefined4 *)(param_1 + 0xc),0xbc,0x27d1);
  uVar10 = *_LAB_2c51ec6c;
  FUN_2c606e20(*(undefined4 *)(param_1 + 0xc),uVar10,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0xc),2,0);
  uVar9 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = FUN_2c5e2e80(_LAB_2c51ec70);
  FUN_2c606e38(uVar9,uVar3,0);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0xc),1);
  uVar3 = FUN_2c6313f4(uVar2);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  FUN_2c6072bc(uVar3,2,0,0x78);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x14),0x27d1);
  uVar9 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = FUN_2c5e2e4c(_LAB_2c51ec74);
  FUN_2c63140c(uVar9,uVar3);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x14),1);
  uVar3 = FUN_2c606a10(uVar2);
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  FUN_2c603a04(uVar3,0,uVar4);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x18),0x27d1,0x18);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x18),2,0,0xf8);
  uVar3 = FUN_2c637344(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_2c6072bc(uVar3,7,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x1c),0x27d1,0x18);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x1c),uVar10,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x1c),2,0);
  FUN_2c606e2c(*(undefined4 *)(param_1 + 0x1c),0xff,0);
  uVar9 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = FUN_2c5e2e80(uVar1);
  FUN_2c606e38(uVar9,uVar3,0);
  uVar9 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = registry_lookup(_LAB_2c51ec78);
  FUN_2c638730(uVar9,uVar3);
  uVar3 = func_0x2c518ec0(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  uVar9 = FUN_2c5e2e4c(_LAB_2c51ec7c);
  FUN_2c518ed8(uVar3,uVar9);
  FUN_2c606e74(*(undefined4 *)(param_1 + 0x20),0x99,0);
  FUN_2c608808(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c),0x15,2,0xfffffffa);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x18),1);
  uVar2 = FUN_2c606a10(uVar2);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  FUN_2c603a04(uVar2,0,uVar4);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x24),0x27d1,0x18);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x24),2,0,0xf8);
  uVar4 = FUN_2c6313f4(*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  FUN_2c607048(uVar4,0x27d1);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x28),7,0);
  uVar4 = FUN_2c637344(*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  FUN_2c607048(uVar4,0x27d1);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x2c),uVar10,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x2c),2,0);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = FUN_2c5e2e80(uVar1);
  FUN_2c606e38(uVar2,uVar4,0);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x2c),7,0x1a,1);
  iVar5 = *(int *)(param_1 + 0x24);
  iVar8 = *DAT_2c606ab8;
  iVar6 = FUN_2c607214();
  FUN_2c607df0(iVar5);
  *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 1;
  FUN_2c607df0(iVar5);
  iVar7 = FUN_2c607214(iVar5);
  if (iVar7 != iVar6) {
    FUN_2c6041d4(iVar5);
    FUN_2c607248();
    FUN_2c607248(iVar5);
  }
  if (*DAT_2c606ab8 != iVar8) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}


/* FUN_2c51f154 @ 0x2c51f154 */

/* WARNING: Removing unreachable block (ram,0x2c606a44) */
/* WARNING: Removing unreachable block (ram,0x2c606a84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c51f154(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  uVar2 = FUN_2c6313f4();
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  FUN_2c6072bc(uVar2,1,0xdc,0x80);
  FUN_2c607048(*(undefined4 *)(param_1 + 0xc),0x27d1);
  uVar7 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = FUN_2c5e2e4c(_LAB_2c51f2a4);
  FUN_2c63140c(uVar7,uVar2);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0xc),1);
  uVar2 = FUN_2c6313f4(uVar1);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  FUN_2c6072bc(uVar2,1,0x15a,0xac);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x10),0x27d1);
  uVar8 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = FUN_2c5e2e4c(_LAB_2c51f2a8);
  uVar2 = _LAB_2c51f2ac;
  FUN_2c63140c(uVar8,uVar7);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x10),1);
  uVar7 = FUN_2c637344(uVar1);
  *(undefined4 *)(param_1 + 0x14) = uVar7;
  FUN_2c6072bc(uVar7,2,0,0x104);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x14),0x27d1);
  uVar8 = *_LAB_2c51f2b0;
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x14),uVar8,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x14),2,0);
  uVar9 = *(undefined4 *)(param_1 + 0x14);
  uVar7 = FUN_2c5e2e80(uVar2);
  FUN_2c606e38(uVar9,uVar7,0);
  FUN_2c606e44(*(undefined4 *)(param_1 + 0x14),0xc,0);
  uVar9 = *(undefined4 *)(param_1 + 0x14);
  uVar7 = registry_lookup(_LAB_2c51f2b4);
  FUN_2c638730(uVar9,uVar7);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x14),1);
  uVar1 = FUN_2c637344(uVar1);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  FUN_2c6072bc(uVar1,2,0,0x120);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x18),0x27d1);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x18),uVar8,0);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = FUN_2c5e2e80(uVar2);
  FUN_2c606e38(uVar1,uVar2,0);
  FUN_2c606e44(*(undefined4 *)(param_1 + 0x18),0xc,0);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = registry_lookup(_LAB_2c51f2b8);
  FUN_2c638730(uVar1,uVar2);
  iVar3 = *(int *)(param_1 + 0x18);
  iVar6 = *DAT_2c606ab8;
  iVar4 = FUN_2c607214();
  FUN_2c607df0(iVar3);
  *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 1;
  FUN_2c607df0(iVar3);
  iVar5 = FUN_2c607214(iVar3);
  if (iVar5 != iVar4) {
    FUN_2c6041d4(iVar3);
    FUN_2c607248();
    FUN_2c607248(iVar3);
  }
  if (*DAT_2c606ab8 != iVar6) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}


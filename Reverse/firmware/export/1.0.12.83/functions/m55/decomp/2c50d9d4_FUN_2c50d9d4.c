/* FUN_2c50d9d4 @ 0x2c50d9d4 */

/* WARNING: Removing unreachable block (ram,0x2c606a44) */
/* WARNING: Removing unreachable block (ram,0x2c606a84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50d9d4(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  puVar1 = _LAB_2c50daa8;
  uVar2 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  uVar3 = FUN_2c637344();
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  FUN_2c6072bc(uVar3,2,0,0x1c);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x10),0x27d1,0x1c);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x10),*puVar1,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x10),2,0);
  uVar8 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = FUN_2c5e2e80(_LAB_2c50daac);
  FUN_2c606e38(uVar8,uVar3,0);
  FUN_2c50d948(param_1);
  if (*(int *)(param_1 + 0x10) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x10),1);
  }
  uVar3 = FUN_2c637344(uVar2);
  uVar2 = _DAT_2c50dab0;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  FUN_2c603a04(uVar3,0,uVar2);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x14),5,0,0xffffffe4);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x14),0x27d1);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = FUN_2c5e2e80(_LAB_2c50daac);
  FUN_2c606e38(uVar3,uVar2,0);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x14),*puVar1,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x14),2,0);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = registry_lookup(_LAB_2c50dab4);
  FUN_2c638730(uVar3,uVar2);
  iVar4 = *(int *)(param_1 + 0x14);
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


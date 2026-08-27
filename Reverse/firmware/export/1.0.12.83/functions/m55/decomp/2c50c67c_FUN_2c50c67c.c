/* FUN_2c50c67c @ 0x2c50c67c */

/* WARNING: Removing unreachable block (ram,0x2c606a44) */
/* WARNING: Removing unreachable block (ram,0x2c606a84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50c67c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  FUN_2c5eba54(*(undefined4 *)(param_1 + 0x24),_LAB_2c50c708);
  if (*(int *)(param_1 + 0x20) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x20),1);
  }
  puVar6 = (undefined4 *)(param_1 + 0x30);
  do {
    puVar7 = puVar6 + 1;
    piVar4 = (int *)*puVar6;
    if (*piVar4 != 0) {
      lv_obj_add_flag_invalidate(*piVar4,1);
      piVar4 = (int *)*puVar6;
    }
    if (piVar4[1] != 0) {
      lv_obj_add_flag_invalidate(piVar4[1],1);
    }
    puVar6 = puVar7;
  } while ((undefined4 *)(param_1 + 0x44) != puVar7);
  if (*(int *)(param_1 + 0x24) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x24),1);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x28),1);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x2c),1);
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x44),1);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x48),1);
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x4c),1);
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != 0) {
    iVar5 = *DAT_2c606ab8;
    iVar2 = FUN_2c607214();
    FUN_2c607df0(iVar1);
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 1;
    FUN_2c607df0(iVar1);
    iVar3 = FUN_2c607214(iVar1);
    if (iVar3 != iVar2) {
      FUN_2c6041d4(iVar1);
      FUN_2c607248();
      FUN_2c607248(iVar1);
    }
    if (*DAT_2c606ab8 != iVar5) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
  return;
}


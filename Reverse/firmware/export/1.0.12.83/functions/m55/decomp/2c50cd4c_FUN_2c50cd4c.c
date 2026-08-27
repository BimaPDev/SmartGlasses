/* FUN_2c50cd4c @ 0x2c50cd4c */

/* WARNING: Removing unreachable block (ram,0x2c606a44) */
/* WARNING: Removing unreachable block (ram,0x2c606a84) */

void FUN_2c50cd4c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
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
  } while (puVar7 != (undefined4 *)(param_1 + 0x44));
  if (*(int *)(param_1 + 0x24) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x24),1);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x28),1);
  }
  iVar1 = *(int *)(param_1 + 0x2c);
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


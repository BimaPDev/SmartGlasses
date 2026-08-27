/* FUN_2c505f8c @ 0x2c505f8c */

/* WARNING: Removing unreachable block (ram,0x2c606a44) */
/* WARNING: Removing unreachable block (ram,0x2c606a84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c505f8c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_2c5eba54(*(undefined4 *)(param_1 + 0x20),_LAB_2c505fe8);
  uVar1 = FUN_2c504998();
  FUN_2c504b9c(uVar1,param_1 + 0x10);
  if (*(int *)(param_1 + 0x14) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x14),1);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x18),1);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x1c),1);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x20),1);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x24),1);
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == 0) {
    return;
  }
  iVar5 = *DAT_2c606ab8;
  iVar3 = FUN_2c607214();
  FUN_2c607df0(iVar2);
  *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 1;
  FUN_2c607df0(iVar2);
  iVar4 = FUN_2c607214(iVar2);
  if (iVar4 != iVar3) {
    FUN_2c6041d4(iVar2);
    FUN_2c607248();
    FUN_2c607248(iVar2);
  }
  if (*DAT_2c606ab8 != iVar5) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}


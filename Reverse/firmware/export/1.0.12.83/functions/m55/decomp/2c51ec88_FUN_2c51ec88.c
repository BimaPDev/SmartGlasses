/* FUN_2c51ec88 @ 0x2c51ec88 */

/* WARNING: Removing unreachable block (ram,0x2c606a44) */
/* WARNING: Removing unreachable block (ram,0x2c606a84) */

void FUN_2c51ec88(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined1 *)(param_1 + 0x34) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0xc),1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x14),1);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x18),1);
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
    return;
  }
  iVar4 = *DAT_2c606ab8;
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
  if (*DAT_2c606ab8 != iVar4) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}


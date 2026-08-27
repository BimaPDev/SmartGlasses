/* FUN_2c5b77d0 @ 0x2c5b77d0 */

void FUN_2c5b77d0(int param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  int local_54;
  int local_50;
  undefined1 *local_4c;
  undefined4 uStack_48;
  undefined1 local_44 [16];
  undefined1 *local_34;
  undefined4 uStack_30;
  undefined1 local_2c [16];
  int local_1c;
  
  *(undefined1 *)(param_1 + 0x14) = param_4;
  FUN_2c5b7774();
  local_1c = *DAT_2c5b7240;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5b7258,0x76,DAT_2c5b7254,DAT_2c5b7250);
  }
  local_44[0] = 0;
  local_2c[0] = 0;
  uStack_48 = 0;
  uStack_30 = 0;
  local_4c = local_44;
  local_34 = local_2c;
  FUN_2c5b4728(*(undefined4 *)(param_3 + 0xc),&local_4c,&local_34,DAT_2c5b7244);
  FUN_2c638730(*(undefined4 *)(*(int *)(param_1 + 4) + 8),local_4c);
  FUN_2c638730(*(undefined4 *)(*(int *)(param_1 + 4) + 0xc),local_34);
  local_54 = 0;
  local_50 = 0;
  FUN_2c5b44a0(*(undefined4 *)(param_3 + 0x10),&local_54,&local_50);
  FUN_2c638814(*(undefined4 *)(*(int *)(param_1 + 8) + 8),DAT_2c5b7248,local_54);
  FUN_2c638814(*(undefined4 *)(*(int *)(param_1 + 8) + 0x10),DAT_2c5b7248,local_50);
  if (local_54 == 0) {
    lv_obj_add_flag_invalidate(*(undefined4 *)(*(int *)(param_1 + 8) + 8),1);
    lv_obj_add_flag_invalidate(*(undefined4 *)(*(int *)(param_1 + 8) + 0xc),1);
    if (local_50 != 0 || local_54 != 0) goto LAB_2c5b71d6;
  }
  else {
    FUN_2c606abc(*(undefined4 *)(*(int *)(param_1 + 8) + 8),1);
    FUN_2c606abc(*(undefined4 *)(*(int *)(param_1 + 8) + 0xc),1);
    if (local_50 != 0 || local_54 != 0) goto LAB_2c5b71d6;
  }
  FUN_2c638730(*(undefined4 *)(*(int *)(param_1 + 8) + 0x10),DAT_2c5b724c);
LAB_2c5b71d6:
  if (local_34 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_4c != local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*DAT_2c5b7240 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


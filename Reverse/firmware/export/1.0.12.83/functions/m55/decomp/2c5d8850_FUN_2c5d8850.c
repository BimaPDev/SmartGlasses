/* FUN_2c5d8850 @ 0x2c5d8850 */

void FUN_2c5d8850(int param_1,int param_2,int param_3)

{
  undefined1 auStack_58 [48];
  undefined4 local_28;
  int local_14;
  
  local_14 = *DAT_2c5d8920;
  if (param_2 == 0) {
    if (param_3 == 0) {
      FUN_2c606abc(*(undefined4 *)(param_1 + 4),1,0,0);
      if (*DAT_2c5d8920 == local_14) {
        FUN_2c606e74(*(undefined4 *)(param_1 + 4),0xff,0,0);
        return;
      }
      goto LAB_2c5d891c;
    }
    FUN_2c5cfd9c(auStack_58,*(undefined4 *)(param_1 + 4),0,0xff,DAT_2c5d8928,DAT_2c5d892c,0,
                 DAT_2c5d8924,300);
    local_28 = DAT_2c5d8930;
    FUN_2c62e8ec(auStack_58);
  }
  else {
    if (param_3 == 0) {
      lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 4),1);
      if (*DAT_2c5d8920 == local_14) {
        FUN_2c606e74(*(undefined4 *)(param_1 + 4),0,0);
        return;
      }
      goto LAB_2c5d891c;
    }
    FUN_2c5cfd9c(auStack_58,*(undefined4 *)(param_1 + 4),0xff,0,0,DAT_2c5d892c,DAT_2c5d8934,
                 DAT_2c5d8924,300);
    FUN_2c62e8ec(auStack_58);
  }
  if (*DAT_2c5d8920 == local_14) {
    return;
  }
LAB_2c5d891c:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


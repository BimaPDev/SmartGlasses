/* FUN_2c5b314c @ 0x2c5b314c */

void FUN_2c5b314c(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 8),1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5b3178,0x8a,DAT_2c5b3174,DAT_2c5b3170);
}


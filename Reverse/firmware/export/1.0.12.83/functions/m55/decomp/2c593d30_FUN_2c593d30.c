/* FUN_2c593d30 @ 0x2c593d30 */

void FUN_2c593d30(int param_1,int param_2,undefined4 param_3)

{
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  
  local_c = *DAT_2c593d84;
  if (*(char *)(*(int *)(param_1 + 8) + 8) == '\0') {
    if (*DAT_2c593d84 == local_c) {
      FUN_2c593ae0(param_1,DAT_2c593d8c,0,0);
      return;
    }
  }
  else {
    uStack_10 = *(undefined4 *)(param_2 + 4);
    local_14 = DAT_2c593d88;
    FUN_2c593758(param_1,&local_14,param_3,0);
    if (*DAT_2c593d84 == local_c) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


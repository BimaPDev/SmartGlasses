/* FUN_2c4dd950 @ 0x2c4dd950 */

void FUN_2c4dd950(int param_1,undefined4 param_2)

{
  undefined1 auStack_10c [256];
  int local_c;
  
  local_c = *DAT_2c4dd9a8;
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_2c4dd724(param_1,auStack_10c,0x100,param_2);
    if (*DAT_2c4dd9a8 == local_c) {
      return;
    }
  }
  else if (local_c == *DAT_2c4dd9a8) {
    FUN_2c4dd724(param_1,*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


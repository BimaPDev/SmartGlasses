/* FUN_2c6298c0 @ 0x2c6298c0 */

void FUN_2c6298c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r1;
  undefined1 auStack_1c [4];
  undefined2 local_18;
  uint local_c;
  
  local_c = *DAT_2c6298f8;
  FUN_2c629814(param_1,auStack_1c,param_2,param_3);
  if ((*DAT_2c6298f8 ^ local_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(local_18,extraout_r1,*DAT_2c6298f8 ^ local_c,0);
}


/* FUN_2c6074f4 @ 0x2c6074f4 */

void FUN_2c6074f4(undefined4 param_1)

{
  undefined4 extraout_r1;
  short local_10 [2];
  uint local_c;
  
  local_c = *DAT_2c60753c;
  local_10[1] = 0xe001;
  local_10[0] = 0;
  FUN_2c602340(param_1,0x2c,local_10);
  if ((*DAT_2c60753c ^ local_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)local_10[0],extraout_r1,*DAT_2c60753c ^ local_c,0);
}


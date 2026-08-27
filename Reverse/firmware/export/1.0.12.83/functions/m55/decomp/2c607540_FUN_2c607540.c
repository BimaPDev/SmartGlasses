/* FUN_2c607540 @ 0x2c607540 */

void FUN_2c607540(undefined4 param_1)

{
  undefined4 extraout_r1;
  undefined2 local_10;
  short local_e;
  uint local_c;
  
  local_c = *DAT_2c607584;
  local_e = 0;
  local_10 = 0xe001;
  FUN_2c602340(param_1,0x2c,&local_10);
  if ((*DAT_2c607584 ^ local_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)local_e,extraout_r1,*DAT_2c607584 ^ local_c,0);
}


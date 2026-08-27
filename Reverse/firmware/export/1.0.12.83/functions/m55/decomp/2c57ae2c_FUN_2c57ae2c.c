/* FUN_2c57ae2c @ 0x2c57ae2c */

void FUN_2c57ae2c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 extraout_r1;
  undefined1 uStack_14;
  char local_13;
  int local_10;
  uint local_c;
  
  local_c = *DAT_2c57ae80;
  FUN_2c5e9058(&uStack_14,param_2,param_3,0);
  bVar1 = local_10 != 0 && local_13 == '\x01';
  if (bVar1) {
    if (*(int *)(local_10 + 0x24) == 0) {
      bVar1 = false;
    }
    else {
      *(undefined4 *)(local_10 + 0x44) = 0xd4;
    }
  }
  if ((*DAT_2c57ae80 ^ local_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(bVar1,extraout_r1,*DAT_2c57ae80 ^ local_c,0);
}


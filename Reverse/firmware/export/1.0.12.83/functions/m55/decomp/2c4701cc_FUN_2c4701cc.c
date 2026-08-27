/* FUN_2c4701cc @ 0x2c4701cc */

void FUN_2c4701cc(void)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  
  local_c = *DAT_2c470204;
  local_18 = *DAT_2c470208;
  uStack_14 = DAT_2c470208[1];
  uStack_10 = DAT_2c470208[2];
  FUN_2c486974(3,&local_18);
  if (*DAT_2c470204 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


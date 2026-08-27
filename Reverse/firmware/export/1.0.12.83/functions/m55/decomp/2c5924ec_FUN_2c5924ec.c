/* FUN_2c5924ec @ 0x2c5924ec */

void FUN_2c5924ec(void)

{
  undefined2 local_20 [2];
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  
  local_c = *DAT_2c59a8c0;
  local_20[0] = 3;
  local_1c = DAT_2c5924f4;
  uStack_18 = DAT_2c5924f8;
  local_14 = 0;
  uStack_10 = 0;
  FUN_2c5245b0(local_20);
  if (*DAT_2c59a8c0 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


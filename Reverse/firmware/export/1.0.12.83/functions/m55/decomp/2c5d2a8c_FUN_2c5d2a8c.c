/* FUN_2c5d2a8c @ 0x2c5d2a8c */

void FUN_2c5d2a8c(int param_1)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  int local_14;
  
  local_14 = *DAT_2c5d2ae8;
  local_18 = 0;
  local_28 = DAT_2c5d2aec;
  uStack_24 = 3;
  local_20 = 0;
  uStack_1c = 0;
  FUN_2c620fa4(0x3fa,&local_28);
  FUN_2c620fa4(0x7d2,DAT_2c5d2af0);
  FUN_2c620fa4(0x7d3,0);
  FUN_2c5db9a0(param_1 + 0x98);
  if (*DAT_2c5d2ae8 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


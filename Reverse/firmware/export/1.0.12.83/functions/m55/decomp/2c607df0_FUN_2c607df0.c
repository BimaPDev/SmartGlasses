/* FUN_2c607df0 @ 0x2c607df0 */

void FUN_2c607df0(int param_1)

{
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  int local_c;
  
  local_c = *DAT_2c607e4c;
  local_14 = FUN_2c600c2c();
  local_e = *(short *)(param_1 + 0x1a) + local_14;
  local_10 = local_14 + *(short *)(param_1 + 0x18);
  local_12 = *(short *)(param_1 + 0x16) - local_14;
  local_14 = *(short *)(param_1 + 0x14) - local_14;
  FUN_2c6078f0(param_1,&local_14);
  if (*DAT_2c607e4c == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


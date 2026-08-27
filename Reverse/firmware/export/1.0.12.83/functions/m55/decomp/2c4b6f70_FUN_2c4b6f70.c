/* FUN_2c4b6f70 @ 0x2c4b6f70 */

void FUN_2c4b6f70(int param_1,undefined4 param_2,undefined4 param_3)

{
  ushort local_e;
  int local_c;
  
  local_c = *DAT_2c4b6fc0;
  FUN_2c673e88(0x4009,&local_e,param_3,0);
  if (param_1 == 0) {
    local_e = local_e & 0xff7f;
  }
  else {
    local_e = local_e | 0x80;
  }
  FUN_2c673d68(0x4009);
  if (*DAT_2c4b6fc0 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


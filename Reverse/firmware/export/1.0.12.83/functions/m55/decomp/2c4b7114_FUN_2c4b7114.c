/* FUN_2c4b7114 @ 0x2c4b7114 */

void FUN_2c4b7114(int param_1)

{
  ushort local_e;
  int local_c;
  
  local_c = *DAT_2c4b7170;
  FUN_2c673978();
  if (*DAT_2c4b7174 == '\0') {
    FUN_2c673e88(0x4009,&local_e);
    if (param_1 == 0) {
      local_e = local_e & 0xfdff;
    }
    else {
      local_e = local_e | 0x200;
    }
    FUN_2c673d68(0x4009);
  }
  if (*DAT_2c4b7170 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


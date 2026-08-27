/* FUN_2c4b723c @ 0x2c4b723c */

void FUN_2c4b723c(ushort param_1)

{
  ushort local_e;
  int local_c;
  
  local_c = *DAT_2c4b7294;
  FUN_2c673de8();
  if (*DAT_2c4b7298 == '\0') {
    FUN_2c673e88(0x400b,&local_e);
    local_e = param_1 & 0xf | local_e & 0xfff0;
    FUN_2c673d68(0x400b);
  }
  if (*DAT_2c4b7294 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


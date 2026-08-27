/* FUN_2c4b7178 @ 0x2c4b7178 */

void FUN_2c4b7178(ushort param_1)

{
  ushort local_e;
  int local_c;
  
  local_c = *DAT_2c4b71d4;
  FUN_2c673c28();
  if (*DAT_2c4b71d8 == '\0') {
    FUN_2c673e88(0x400b,&local_e);
    local_e = (param_1 & 0xf) << 8 | local_e & 0xf0ff;
    FUN_2c673d68(0x400b);
  }
  if (*DAT_2c4b71d4 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


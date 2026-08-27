/* FUN_2c4b71dc @ 0x2c4b71dc */

void FUN_2c4b71dc(char param_1)

{
  ushort local_e;
  int local_c;
  
  local_c = *DAT_2c4b7234;
  FUN_2c674298();
  if (*DAT_2c4b7238 == '\0') {
    FUN_2c673e88(0x400b,&local_e);
    local_e = (ushort)(byte)(param_1 << 4) | local_e & 0xff0f;
    FUN_2c673d68(0x400b);
  }
  if (*DAT_2c4b7234 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


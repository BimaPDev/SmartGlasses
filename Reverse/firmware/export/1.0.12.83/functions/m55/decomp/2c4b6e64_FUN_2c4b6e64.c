/* FUN_2c4b6e64 @ 0x2c4b6e64 */

void FUN_2c4b6e64(int param_1)

{
  ushort local_e;
  int local_c;
  
  local_c = *DAT_2c4b6ec0;
  FUN_2c673a98();
  if (*DAT_2c4b6ec4 == '\0') {
    FUN_2c673e88(0x400a,&local_e);
    if (param_1 == 0) {
      local_e = local_e & 0xdfff;
    }
    else {
      local_e = local_e | 0x2000;
    }
    FUN_2c673d68(0x400a);
  }
  if (*DAT_2c4b6ec0 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


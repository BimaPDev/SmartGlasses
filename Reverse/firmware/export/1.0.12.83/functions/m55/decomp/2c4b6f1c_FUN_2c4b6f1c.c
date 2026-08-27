/* FUN_2c4b6f1c @ 0x2c4b6f1c */

void FUN_2c4b6f1c(int param_1,undefined4 param_2,undefined4 param_3)

{
  ushort local_e;
  int local_c;
  
  local_c = *DAT_2c4b6f6c;
  FUN_2c673e88(0x4009,&local_e,param_3,0);
  if (param_1 == 0) {
    local_e = local_e & 0xfeff;
  }
  else {
    local_e = local_e | 0x100;
  }
  FUN_2c673d68(0x4009);
  if (*DAT_2c4b6f6c == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


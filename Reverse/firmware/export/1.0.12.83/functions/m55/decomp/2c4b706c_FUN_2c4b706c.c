/* FUN_2c4b706c @ 0x2c4b706c */

void FUN_2c4b706c(ushort param_1,undefined4 param_2,undefined4 param_3)

{
  ushort local_e;
  int local_c;
  
  local_c = *DAT_2c4b70bc;
  FUN_2c673e88(0x400a,&local_e,param_3,0);
  local_e = local_e & 0xfe1f | (param_1 & 0xf) << 5;
  FUN_2c673d68(0x400a);
  if (*DAT_2c4b70bc == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


/* FUN_2c4b7018 @ 0x2c4b7018 */

void FUN_2c4b7018(ushort param_1,undefined4 param_2,undefined4 param_3)

{
  ushort local_e;
  int local_c;
  
  local_c = *DAT_2c4b7068;
  FUN_2c673e88(0x400a,&local_e,param_3,0);
  local_e = local_e & 0xe1ff | (param_1 & 0xf) << 9;
  FUN_2c673d68(0x400a);
  if (*DAT_2c4b7068 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


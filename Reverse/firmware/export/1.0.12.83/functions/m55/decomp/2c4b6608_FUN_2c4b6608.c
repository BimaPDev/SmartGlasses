/* FUN_2c4b6608 @ 0x2c4b6608 */

void FUN_2c4b6608(int param_1,undefined4 param_2,undefined4 param_3)

{
  ushort local_10;
  ushort local_e;
  int local_c;
  
  local_c = *DAT_2c4b6694;
  FUN_2c673e88(0x10d9,&local_10,param_3,0);
  FUN_2c673e88(0x106c,&local_e);
  if (param_1 == 0) {
    local_10 = local_10 & 0xffcf;
    FUN_2c673d68(0x10d9);
    local_e = local_e & 0xf7ff;
    FUN_2c673d68(0x106c);
  }
  else {
    local_10 = local_10 | 0x30;
    FUN_2c673d68(0x10d9);
    local_e = local_e | 0x800;
    FUN_2c673d68(0x106c);
  }
  if (*DAT_2c4b6694 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


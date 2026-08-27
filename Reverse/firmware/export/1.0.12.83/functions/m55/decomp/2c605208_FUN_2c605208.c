/* FUN_2c605208 @ 0x2c605208 */

void FUN_2c605208(int param_1,undefined4 param_2)

{
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  
  local_c = *DAT_2c605250;
  FUN_2c608c7c();
  local_10 = 0;
  local_e = 0;
  FUN_2c604d1c(param_1 + 0x14,param_1,&local_10,param_2);
  if (*DAT_2c605250 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


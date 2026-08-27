/* FUN_2c46fd3c @ 0x2c46fd3c */

void FUN_2c46fd3c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_f;
  int local_c;
  
  local_c = *DAT_2c46fd9c;
  FUN_2c648600(DAT_2c46fda4,DAT_2c46fda0,param_3,0);
  FUN_2c62c3a8(&local_28);
  FUN_2c648600(DAT_2c46fda8,local_28,local_24,local_20,local_1c,local_18,local_14,local_10,local_f);
  FUN_2c648600(DAT_2c46fdac,DAT_2c46fda0);
  if (*DAT_2c46fd9c == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


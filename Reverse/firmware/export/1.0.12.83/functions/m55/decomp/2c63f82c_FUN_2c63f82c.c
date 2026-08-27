/* FUN_2c63f82c @ 0x2c63f82c */

void FUN_2c63f82c(void)

{
  undefined8 uVar1;
  undefined4 local_20 [5];
  uint local_c;
  
  local_c = *DAT_2c63f868;
  uVar1 = FUN_2c63ed48(3,local_20,1,0);
  if ((int)uVar1 == 0) {
    local_20[0] = 0xffffffff;
  }
  if ((*DAT_2c63f868 ^ local_c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(local_20[0],(int)((ulonglong)uVar1 >> 0x20),*DAT_2c63f868 ^ local_c,0);
  }
  return;
}


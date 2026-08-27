/* FUN_2c63e0e0 @ 0x2c63e0e0 */

void FUN_2c63e0e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 local_18 [12];
  uint local_c;
  
  local_c = *DAT_2c63e128;
  uVar1 = FUN_2c5e31b4(0x1f,local_18,param_3,0);
  if ((int)uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c63e134,0x178,DAT_2c63e130,DAT_2c63e12c);
  }
  if ((*DAT_2c63e128 ^ local_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(local_18[0],(int)((ulonglong)uVar1 >> 0x20),*DAT_2c63e128 ^ local_c,0);
}


/* FUN_2c63f8a8 @ 0x2c63f8a8 */

void FUN_2c63f8a8(undefined4 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_20 [8];
  undefined4 local_18;
  uint local_c;
  
  local_c = *DAT_2c63f8e0;
  uVar1 = FUN_2c63ed48(param_1,auStack_20,1,0);
  if ((int)uVar1 == 0) {
    local_18 = 0xffffffff;
  }
  if ((*DAT_2c63f8e0 ^ local_c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(local_18,(int)((ulonglong)uVar1 >> 0x20),*DAT_2c63f8e0 ^ local_c,0);
  }
  return;
}


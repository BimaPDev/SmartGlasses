/* FUN_2c49b8e8 @ 0x2c49b8e8 */

void FUN_2c49b8e8(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  byte local_d;
  uint local_c;
  
  uVar1 = 0;
  local_c = *DAT_2c49b94c;
  local_d = 0;
  if ((*(int *)(DAT_2c49b948 + 4) == 1) && (uVar1 = *DAT_2c49b950, (int)uVar1 < 0)) {
    uVar2 = FUN_2c49b318(0x30,&local_d,0);
    param_2 = (undefined4)((ulonglong)uVar2 >> 0x20);
    if ((int)uVar2 == 0) {
      uVar1 = (local_d & 0x7f) >> 5;
      if (uVar1 == 1) {
        uVar1 = 2;
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  if ((*DAT_2c49b94c ^ local_c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(uVar1,param_2,*DAT_2c49b94c ^ local_c,0);
  }
  return;
}


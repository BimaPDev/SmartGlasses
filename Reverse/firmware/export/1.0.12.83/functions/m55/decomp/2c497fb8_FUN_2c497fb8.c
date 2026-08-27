/* FUN_2c497fb8 @ 0x2c497fb8 */

void FUN_2c497fb8(undefined4 param_1)

{
  undefined1 local_10;
  undefined1 local_f;
  int local_c;
  
  local_c = *DAT_2c497ffc;
  local_f = (undefined1)param_1;
  local_10 = (undefined1)((uint)param_1 >> 8);
  FUN_2c497644(0x36,&local_10,2);
  if (*DAT_2c497ffc == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


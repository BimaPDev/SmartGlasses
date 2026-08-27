/* FUN_2c497f70 @ 0x2c497f70 */

void FUN_2c497f70(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_10;
  undefined1 local_f;
  int local_c;
  
  local_c = *DAT_2c497fb4;
  local_f = (undefined1)param_2;
  local_10 = (undefined1)((uint)param_2 >> 8);
  FUN_2c4975e8(param_1,0x36,&local_10,2);
  if (*DAT_2c497fb4 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


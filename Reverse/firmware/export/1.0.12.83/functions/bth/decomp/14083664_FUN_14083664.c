/* FUN_14083664 @ 0x14083664 */

void FUN_14083664(int param_1)

{
  int local_28 [7];
  
  local_28[5] = *DAT_140836d0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[1] = 0;
  local_28[4] = 0;
  if (param_1 != 0) {
    local_28[0] = param_1;
    FUN_1408ad10(1,DAT_140836d4,local_28,0);
    if (local_28[4] != 0) {
      if (*DAT_140836d0 == local_28[5]) {
        FUN_140834b4(local_28[4],0,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14039adc();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x41,DAT_140836d8,param_1);
}


/* FUN_14038d14 @ 0x14038d14 */

void FUN_14038d14(void)

{
  undefined4 local_10;
  int local_c;
  
  local_c = *DAT_14038d5c;
  FUN_1402a6e8(4,0x3a1,DAT_14038d60,DAT_14038d64,DAT_14038d58);
  local_10 = DAT_14038d68;
  FUN_140315b0(&local_10,4);
  if (*DAT_14038d5c == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}


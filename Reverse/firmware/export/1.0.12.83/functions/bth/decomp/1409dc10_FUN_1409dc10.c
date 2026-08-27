/* FUN_1409dc10 @ 0x1409dc10 */

void FUN_1409dc10(undefined1 param_1)

{
  undefined1 local_10;
  undefined1 local_f;
  int local_c;
  
  local_c = *DAT_1409dc4c;
  local_10 = 1;
  local_f = param_1;
  FUN_1409d948(&local_10);
  if (*DAT_1409dc4c == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}


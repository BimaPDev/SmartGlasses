/* caseD_0 @ 0x14044b04 */

void switchD_14034b48::caseD_0(void)

{
  undefined1 local_118 [268];
  int local_c;
  
  local_c = *DAT_14044b54;
  FUN_1402a6e8(4,0x5b2,DAT_14044b58,DAT_14044b5c,DAT_14044b4c,DAT_14044b50);
  local_118[0] = 0xf;
  FUN_14041ad8(local_118,0);
  if (*DAT_14044b54 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}


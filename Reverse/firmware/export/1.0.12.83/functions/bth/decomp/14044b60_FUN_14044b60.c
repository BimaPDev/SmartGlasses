/* FUN_14044b60 @ 0x14044b60 */

void FUN_14044b60(void)

{
  undefined1 local_118 [268];
  int local_c;
  
  local_c = *DAT_14044bb0;
  FUN_1402a6e8(4,0x5bc,DAT_14044bb4,DAT_14044bb8,DAT_14044ba8,DAT_14044bac);
  local_118[0] = 0x12;
  FUN_14041ad8(local_118,0);
  if (*DAT_14044bb0 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}


/* FUN_14044818 @ 0x14044818 */

void FUN_14044818(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  undefined1 auStack_14c [320];
  int local_c;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  FUN_140419cc();
  FUN_140b36d0(2);
  FUN_1403f404();
  local_c = *DAT_14044814;
  uVar1 = FUN_14041b40(auStack_14c);
  FUN_14041c5c(auStack_14c,uVar1);
  if (*DAT_14044814 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}


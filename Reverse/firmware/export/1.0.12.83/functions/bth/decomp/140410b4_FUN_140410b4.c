/* FUN_140410b4 @ 0x140410b4 */

void FUN_140410b4(void)

{
  undefined4 uVar1;
  undefined1 auStack_14c [320];
  int local_c;
  
  local_c = *DAT_140410f4;
  FUN_1409fca4();
  *DAT_140410f8 = 0;
  uVar1 = FUN_14041b40(auStack_14c);
  FUN_14041c5c(auStack_14c,uVar1);
  if (*DAT_140410f4 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}


/* FUN_14038898 @ 0x14038898 */

void FUN_14038898(void)

{
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  
  local_14 = *DAT_140388dc;
  uStack_10 = DAT_140388dc[1];
  local_c = *DAT_140388e0;
  FUN_1403282c(0xfc81,8,&local_14,0);
  FUN_140e5398(0x10);
  if (*DAT_140388e0 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}


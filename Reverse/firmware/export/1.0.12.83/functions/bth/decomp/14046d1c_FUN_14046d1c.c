/* FUN_14046d1c @ 0x14046d1c */

void FUN_14046d1c(undefined4 param_1)

{
  undefined4 local_14;
  undefined1 local_10;
  int local_c;
  
  local_c = *DAT_14046d78;
  FUN_1402a6e8(4,0xb0,DAT_14046d80,DAT_14046d7c,DAT_14046d70,DAT_14046d74,param_1);
  local_14 = FUN_14050a40();
  local_10 = (undefined1)param_1;
  FUN_14050a78(0x60,local_14,&local_14,8);
  if (*DAT_14046d78 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}


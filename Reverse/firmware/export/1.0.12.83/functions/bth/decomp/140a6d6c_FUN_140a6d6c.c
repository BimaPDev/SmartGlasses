/* FUN_140a6d6c @ 0x140a6d6c */

void FUN_140a6d6c(void)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  int local_c;
  
  local_c = *DAT_140a6dbc;
  local_20 = *DAT_140a6dc0;
  uStack_1c = DAT_140a6dc0[1];
  uStack_18 = DAT_140a6dc0[2];
  uStack_14 = DAT_140a6dc0[3];
  local_10 = DAT_140a6dc0[4];
  FUN_1402a6e8(4,0xd4,DAT_140a6dd0,DAT_140a6dcc,DAT_140a6dc8,DAT_140a6dc4);
  FUN_140ade54(&local_20);
  if (*DAT_140a6dbc == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}


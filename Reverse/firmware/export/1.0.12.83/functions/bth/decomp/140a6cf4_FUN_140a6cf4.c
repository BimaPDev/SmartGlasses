/* FUN_140a6cf4 @ 0x140a6cf4 */

void FUN_140a6cf4(void)

{
  undefined1 auStack_5c [20];
  undefined1 auStack_48 [20];
  undefined1 auStack_34 [20];
  undefined1 auStack_20 [20];
  int local_c;
  
  local_c = *DAT_140a6d54;
  FUN_140e5278(auStack_5c,DAT_140a6d58,0x50,0);
  FUN_1402a6e8(4,0xb7,DAT_140a6d68,DAT_140a6d64,DAT_140a6d60,DAT_140a6d5c);
  FUN_140adea0();
  FUN_140ade54(auStack_5c);
  FUN_140ade54(auStack_48);
  FUN_140ade54(auStack_34);
  FUN_140ade54(auStack_20);
  if (*DAT_140a6d54 == local_c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}


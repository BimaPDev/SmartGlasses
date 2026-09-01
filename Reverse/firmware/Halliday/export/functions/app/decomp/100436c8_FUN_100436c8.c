/* FUN_100436c8 @ 0x100436c8 */

void FUN_100436c8(void)

{
  undefined4 local_10c;
  undefined1 auStack_108 [252];
  int local_c;
  
  local_c = *DAT_10043708;
  local_10c = 0;
  FUN_1011ea48(auStack_108,0,0xfc,0);
  thunk_FUN_1009efe8(DAT_1004370c,&local_10c,0x100);
  FUN_1012d1ae(DAT_1004370c);
  if (*DAT_10043708 != local_c) {
    FUN_1013cdc0();
  }
  return;
}


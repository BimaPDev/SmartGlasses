/* FUN_10052f48 @ 0x10052f48 */

void FUN_10052f48(void)

{
  int iVar1;
  undefined4 local_4c;
  undefined1 auStack_48 [60];
  int local_c;
  
  local_c = *DAT_10052fbc;
  if (*DAT_10052fc0 != '\0') {
    *DAT_10052fc0 = '\0';
    iVar1 = FUN_1003fc40();
    if (iVar1 != 0) {
      FUN_10052c38(0,1,0);
      FUN_1003fc78();
    }
    local_4c = 0;
    FUN_1011ea48(auStack_48,0,0x3c);
    FUN_1013d306(&local_4c,0,0x40,DAT_10052fd0,*DAT_10052fcc,*DAT_10052fc8,*DAT_10052fc4);
    FUN_10052c38(0,0,&local_4c);
  }
  if (*DAT_10052fbc != local_c) {
    FUN_1013cdc0();
  }
  return;
}


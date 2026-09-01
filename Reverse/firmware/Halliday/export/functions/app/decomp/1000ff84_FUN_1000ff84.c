/* FUN_1000ff84 @ 0x1000ff84 */

void FUN_1000ff84(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [5];
  undefined1 auStack_73 [20];
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 auStack_5c [32];
  undefined1 auStack_3c [48];
  int local_c;
  
  local_c = *DAT_10010010;
  FUN_1000b78c(1,auStack_5c,0,0x20);
  FUN_1000b78c(2,auStack_78,0,0x1c);
  uVar2 = FUN_1013d306(auStack_3c,0,0x30,DAT_10010014,auStack_5c);
  FUN_100b6474(auStack_3c,uVar2,10);
  uVar2 = FUN_1013d306(auStack_3c,0,0x30,DAT_10010018,auStack_73,local_5f,local_5e);
  FUN_100b6474(auStack_3c,uVar2,10);
  iVar1 = DAT_1001001c;
  do {
    FUN_1011dbc8(100);
  } while (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c) << 0x1f));
  if (*DAT_10010010 != local_c) {
    FUN_1013cdc0();
  }
  return;
}


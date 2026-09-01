/* FUN_100bf3ec @ 0x100bf3ec */

undefined4 FUN_100bf3ec(void)

{
  int iVar1;
  uint uVar2;
  
  FUN_1011dbf4(DAT_100bf460,0xffffffff);
  iVar1 = DAT_100bf464;
  uVar2 = (DAT_100bf46c - DAT_100bf468) * 0x20 & 0xff00;
  if (*(char *)(DAT_100bf464 + 0xc) < '\0') {
    FUN_100a5b78(DAT_100bf470 | uVar2,DAT_100bf478,DAT_100bf474);
  }
  else {
    FUN_100a5b78(DAT_100bf47c | uVar2,DAT_100bf478,DAT_100bf480);
    *(byte *)(iVar1 + 0xc) = *(byte *)(iVar1 + 0xc) | 0x80;
    if (*(char *)(iVar1 + 0xf) != '\x02') {
      *(undefined1 *)(iVar1 + 0xf) = 0;
    }
    *(undefined1 *)(iVar1 + 0x11) = 0;
    *(byte *)(iVar1 + 0xd) = *(byte *)(iVar1 + 0xd) & 0xfc;
    FUN_100be38c(1);
    FUN_1011dc0a(DAT_100bf484,0);
  }
  thunk_FUN_10113e2c(DAT_100bf460);
  return 0;
}


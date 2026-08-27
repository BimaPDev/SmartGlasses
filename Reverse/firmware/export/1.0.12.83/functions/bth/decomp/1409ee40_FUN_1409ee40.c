/* FUN_1409ee40 @ 0x1409ee40 */

byte FUN_1409ee40(void)

{
  byte bVar1;
  
  if (*DAT_1409ee90 == 0) {
    return 0xff;
  }
  if (*DAT_1409ee94 == '\x01') {
    FUN_1402a6e8(4,0xff,DAT_1409eea0,DAT_1409ee9c,DAT_1409eea4);
    bVar1 = 0xff;
  }
  else {
    bVar1 = *(byte *)(*DAT_1409ee90 + 0x24f);
    if (1 < bVar1) {
      FUN_1402a6e8(4,0x104,DAT_1409eea0,DAT_1409ee9c,DAT_1409ee98,bVar1);
      return 0xff;
    }
  }
  return bVar1;
}


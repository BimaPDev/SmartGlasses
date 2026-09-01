/* FUN_100da24c @ 0x100da24c */

undefined4 FUN_100da24c(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_1013213a();
  uVar2 = (DAT_100da288 - DAT_100da28c) * 0x20 & 0xff00;
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100da290 | uVar2,DAT_100da298,DAT_100da294);
    uVar3 = 0;
  }
  else {
    FUN_100a5b78(uVar2 | 0x1b00011,DAT_100da298,DAT_100da29c);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


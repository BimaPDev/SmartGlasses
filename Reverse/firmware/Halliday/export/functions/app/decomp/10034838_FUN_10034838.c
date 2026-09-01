/* FUN_10034838 @ 0x10034838 */

undefined4 FUN_10034838(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *DAT_100348ac;
  if (*DAT_100348b0 == '\0') {
    FUN_100347c4();
  }
  uVar4 = (DAT_100348b4 - DAT_100348b8) * 0x20 & 0xff00;
  if (((param_1 != 0x10) && (param_1 != 0x14)) && (param_1 != 0x16)) {
    FUN_100a5b78(DAT_100348bc | uVar4,DAT_100348c4,DAT_100348c0,param_1);
    param_1 = 0x14;
  }
  uVar2 = DAT_100348c4;
  uVar1 = *DAT_100348c8;
  *DAT_100348c8 = (char)param_1;
  FUN_100a5b78(uVar4 | 0x1600032,uVar2,DAT_100348cc,uVar1,param_1);
  if (*DAT_100348ac != iVar3) {
    FUN_1013cdc0();
  }
  return 0;
}


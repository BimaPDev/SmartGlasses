/* FUN_100d5dd0 @ 0x100d5dd0 */

uint FUN_100d5dd0(void)

{
  int iVar1;
  undefined4 in_r3;
  uint uVar2;
  
  iVar1 = FUN_100d456c();
  if (iVar1 == 0) {
    uVar2 = (DAT_100d5e04 - DAT_100d5e00) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100d5e08 | uVar2,DAT_100d5e10,DAT_100d5e0c,uVar2,in_r3);
    uVar2 = 0xffffffed;
  }
  else {
    uVar2 = (*(byte *)(iVar1 + 0x38) & 0x7f) >> 4;
  }
  return uVar2;
}


/* FUN_100ba3ac @ 0x100ba3ac */

void FUN_100ba3ac(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if ((*(byte *)(param_1 + 8) & 0xe) != 0) {
    return;
  }
  uVar4 = (DAT_100ba408 - DAT_100ba404) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100ba410 | uVar4,DAT_100ba414,DAT_100ba40c,*(undefined4 *)(param_1 + 0xc));
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  FUN_100ba32c(2);
  iVar1 = FUN_100bdd78(param_1);
  uVar2 = DAT_100ba424;
  uVar3 = DAT_100ba420;
  if (iVar1 != 0) {
    uVar2 = DAT_100ba41c;
    uVar3 = DAT_100ba418;
  }
  FUN_100a5b78(uVar2 | uVar4,DAT_100ba414,uVar3,*(undefined4 *)(param_1 + 0xc));
  return;
}


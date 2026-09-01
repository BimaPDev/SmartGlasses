/* FUN_100db60c @ 0x100db60c */

undefined4 FUN_100db60c(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = param_1;
  iVar1 = FUN_10131efc();
  uVar2 = (DAT_100db644 - DAT_100db648) * 0x20 & 0xff00;
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100db64c | uVar2,DAT_100db654,DAT_100db650,param_1,uVar3);
  }
  else {
    FUN_100a5b78(DAT_100db658 | uVar2,DAT_100db654,DAT_100db65c);
  }
  return 0;
}


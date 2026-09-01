/* FUN_100d976c @ 0x100d976c */

undefined4 FUN_100d976c(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  uint uVar4;
  
  iVar1 = FUN_10131f18();
  uVar4 = (DAT_100d97a0 - DAT_100d97a4) * 0x20 & 0xff00;
  if (iVar1 == 0) {
    uVar2 = uVar4 | 0x2a00031;
    uVar3 = DAT_100d97a8;
  }
  else {
    uVar2 = DAT_100d97b0 | uVar4;
    uVar3 = DAT_100d97b4;
  }
  FUN_100a5b78(uVar2,DAT_100d97ac,uVar3,uVar4,in_r3);
  return 0;
}


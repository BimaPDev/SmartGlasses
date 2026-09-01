/* FUN_1006405c @ 0x1006405c */

undefined4 FUN_1006405c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  uint uVar4;
  
  iVar2 = FUN_10112e84(DAT_100640a0);
  iVar1 = DAT_100640a8;
  *DAT_100640a4 = iVar2;
  uVar4 = (DAT_100640ac - iVar1) * 0x20 & 0xff00;
  if (iVar2 == 0) {
    FUN_100a5b78(uVar4 | 0x230011,DAT_100640b4,DAT_100640b0,uVar4,in_r3);
    uVar3 = 0xffffffed;
  }
  else {
    FUN_100a5b78(uVar4 | 0x260031,DAT_100640b4,DAT_100640b8,uVar4,in_r3);
    uVar3 = 0;
  }
  return uVar3;
}


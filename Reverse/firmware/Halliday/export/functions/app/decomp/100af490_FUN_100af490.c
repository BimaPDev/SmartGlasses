/* FUN_100af490 @ 0x100af490 */

undefined4 FUN_100af490(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  uint uVar4;
  
  iVar1 = FUN_1009e9f8(DAT_100af4c8);
  if (iVar1 == 0) {
    iVar1 = FUN_1009e86c(DAT_100af4c8);
    uVar4 = (DAT_100af4cc - DAT_100af4d0) * 0x20 & 0xff00;
    if (iVar1 == 0) {
      uVar2 = uVar4 | 0x3480011;
      uVar3 = DAT_100af4d4;
    }
    else {
      uVar2 = DAT_100af4d8 | uVar4;
      uVar3 = DAT_100af4dc;
    }
    FUN_100a5b78(uVar2,uVar3,DAT_100af4d0,uVar4,in_r3);
  }
  return 0;
}


/* FUN_14046f4c @ 0x14046f4c */

undefined4 FUN_14046f4c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = DAT_14046fc8;
  FUN_1402a6e8(4,0x75,DAT_14046fd0,DAT_14046fcc,DAT_14046fc4,DAT_14046fc8);
  iVar4 = FUN_1404a1b4(0);
  if (iVar4 == 0) {
    FUN_1402a6e8(4,0x7c,DAT_14046fd0,DAT_14046fcc,DAT_14046fe0,uVar6);
    uVar6 = 0xffffffff;
  }
  else {
    uVar5 = FUN_1404f50c(*(undefined1 *)(iVar4 + 10));
    uVar3 = DAT_14046fd4;
    uVar2 = DAT_14046fd0;
    uVar1 = DAT_14046fcc;
    *DAT_14046fd8 = (char)uVar5;
    FUN_1402a6e8(4,0x81,uVar2,uVar1,uVar3,uVar6,uVar5);
    uVar1 = DAT_14046fdc;
    FUN_1409a4c0(0);
    FUN_1402a6e8(4,0x85,DAT_14046fd0,DAT_14046fcc,uVar1,uVar6);
    uVar6 = 0;
  }
  return uVar6;
}


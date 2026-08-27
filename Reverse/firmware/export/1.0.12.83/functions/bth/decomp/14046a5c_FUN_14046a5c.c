/* FUN_14046a5c @ 0x14046a5c */

undefined4 FUN_14046a5c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = DAT_14046ab4;
  FUN_1402a6e8(4,0x51,DAT_14046abc,DAT_14046ab8,DAT_14046ab0,DAT_14046ab4);
  iVar2 = FUN_14047534();
  if (iVar2 == 0) {
    uVar3 = 0x53;
    uVar4 = DAT_14046ac0;
  }
  else {
    FUN_14051938();
    iVar2 = FUN_1404a1b4();
    if (iVar2 != 0) {
      FUN_1404907c(0x4b);
      return 0;
    }
    uVar3 = 0x5b;
    uVar4 = DAT_14046ac4;
  }
  FUN_1402a6e8(4,uVar3,DAT_14046abc,DAT_14046ab8,uVar4,uVar1);
  return 0xffffffff;
}


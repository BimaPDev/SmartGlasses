/* FUN_140469f0 @ 0x140469f0 */

undefined4 FUN_140469f0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = DAT_14046a48;
  FUN_1402a6e8(4,0x41,DAT_14046a50,DAT_14046a4c,DAT_14046a44,DAT_14046a48);
  iVar2 = FUN_14047534();
  if (iVar2 == 0) {
    uVar3 = 0x43;
    uVar4 = DAT_14046a54;
  }
  else {
    FUN_14051938();
    iVar2 = FUN_1404a1b4();
    if (iVar2 != 0) {
      FUN_1404907c(0x4c);
      return 0;
    }
    uVar3 = 0x4b;
    uVar4 = DAT_14046a58;
  }
  FUN_1402a6e8(4,uVar3,DAT_14046a50,DAT_14046a4c,uVar4,uVar1);
  return 0xffffffff;
}


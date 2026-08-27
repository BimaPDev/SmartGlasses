/* FUN_14046990 @ 0x14046990 */

undefined4 FUN_14046990(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_140469e0;
  FUN_1402a6e8(4,0x32,DAT_140469e8,DAT_140469e4,DAT_140469dc,DAT_140469e0);
  iVar1 = FUN_14047534();
  if (iVar1 == 0) {
    FUN_1402a6e8(4,0x34,DAT_140469e8,DAT_140469e4,DAT_140469ec,uVar2);
    uVar2 = 0xffffffff;
  }
  else {
    FUN_14051938();
    FUN_1404a1b4();
    FUN_1404907c(0x46);
    uVar2 = 0;
  }
  return uVar2;
}


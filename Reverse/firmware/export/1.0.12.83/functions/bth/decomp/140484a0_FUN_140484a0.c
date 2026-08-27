/* FUN_140484a0 @ 0x140484a0 */

undefined4 FUN_140484a0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_140e56e8(DAT_140484d8,0);
  *DAT_140484dc = iVar1;
  if (iVar1 == 0) {
    FUN_1402a6e8(4,0x1fb,DAT_140484ec,DAT_140484e8,DAT_140484e4);
    uVar2 = 0xffffffff;
  }
  else {
    FUN_1405016c(1,DAT_140484e0);
    uVar2 = 0;
  }
  return uVar2;
}


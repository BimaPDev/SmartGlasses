/* FUN_14046930 @ 0x14046930 */

undefined4 FUN_14046930(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_14046980;
  FUN_1402a6e8(4,0x23,DAT_14046988,DAT_14046984,DAT_1404697c,DAT_14046980);
  iVar1 = FUN_14047534();
  if (iVar1 == 0) {
    FUN_1402a6e8(4,0x25,DAT_14046988,DAT_14046984,DAT_1404698c,uVar2);
    uVar2 = 0xffffffff;
  }
  else {
    FUN_14051938();
    FUN_1404a1b4();
    FUN_1404907c(0x44);
    uVar2 = 0;
  }
  return uVar2;
}


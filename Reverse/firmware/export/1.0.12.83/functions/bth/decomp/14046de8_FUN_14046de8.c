/* FUN_14046de8 @ 0x14046de8 */

undefined4 FUN_14046de8(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = DAT_14046e90;
  uVar3 = DAT_14046e90;
  FUN_1402a6e8(4,0x43,DAT_14046e98,DAT_14046e94,DAT_14046e8c,DAT_14046e90);
  iVar2 = FUN_14049358();
  if ((((iVar2 - 1U & 0xff) < 3) || (*DAT_14046e9c == 0x14)) || (iVar2 == 6)) {
    if (*DAT_14046ea0 == 0x14) {
      FUN_1402a6e8(4,0x4c,DAT_14046e98,DAT_14046e94,DAT_14046ea8,uVar3);
      thunk_FUN_1404f348(0,2);
      FUN_14048cd8(9);
      *DAT_14046eac = 1;
    }
    else {
      FUN_14048cd8(9);
    }
  }
  else {
    if (*DAT_14046e9c != 5) {
      FUN_1402a6e8(4,0x5b,DAT_14046e98,DAT_14046e94,DAT_14046eb0,uVar1,iVar2);
      return 0xffffffff;
    }
    FUN_14048cd8(0x1a);
  }
  FUN_1402a6e8(4,0x5f,DAT_14046e98,DAT_14046e94,DAT_14046ea4,uVar1);
  return 0;
}


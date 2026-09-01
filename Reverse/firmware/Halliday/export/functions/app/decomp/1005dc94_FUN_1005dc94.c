/* FUN_1005dc94 @ 0x1005dc94 */

void FUN_1005dc94(void)

{
  undefined4 extraout_r2;
  undefined8 uVar1;
  
  uVar1 = FUN_100568bc();
  if (*DAT_1005dcc4 == 0) {
    FUN_10119dc2(DAT_1005dcd0,DAT_1005dccc,DAT_1005dcc8,0x61,uVar1);
    FUN_1011a1f0(DAT_1005dcc8,0x61,extraout_r2,0);
  }
  FUN_1005dbec(*(undefined4 *)((int)uVar1 + 8));
  return;
}


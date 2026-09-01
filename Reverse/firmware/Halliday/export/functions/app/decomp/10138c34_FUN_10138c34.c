/* FUN_10138c34 @ 0x10138c34 */

byte FUN_10138c34(void)

{
  byte bVar1;
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined2 uStack_18;
  undefined2 uStack_16;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iStack_14 = FUN_100e7e2c();
  if (iStack_14 == 0) {
    uStack_1c = 0;
    uStack_1a = 9;
    uStack_19 = 0x20;
    uStack_10 = 0;
    uStack_c = 0;
    uStack_18 = 0;
    uStack_16 = 0;
    bVar1 = FUN_1009ece8(DAT_100e7d68,&uStack_1c);
    return bVar1 ^ 1;
  }
  FUN_100f4f4c();
  return 0;
}


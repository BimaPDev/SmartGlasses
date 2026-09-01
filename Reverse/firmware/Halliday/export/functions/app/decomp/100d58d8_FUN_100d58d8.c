/* FUN_100d58d8 @ 0x100d58d8 */

undefined4 FUN_100d58d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)*DAT_100d5910;
  do {
    piVar1 = (int *)*piVar1;
    if (piVar1 == (int *)0x0) {
      uVar2 = (DAT_100d5918 - DAT_100d5914) * 0x20 & 0xff00;
      FUN_100a5b78(DAT_100d591c | uVar2,DAT_100d5924,DAT_100d5920,uVar2,param_4);
      return 0xffffffed;
    }
  } while (param_1 != piVar1[4]);
  piVar1[0xd] = 0;
  piVar1[4] = 0;
  return 0;
}


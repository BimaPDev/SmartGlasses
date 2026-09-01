/* FUN_100d5f44 @ 0x100d5f44 */

void FUN_100d5f44(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_100d456c();
  if ((int)uVar2 == 0) {
    FUN_100a5b78(DAT_100d5f8c | (DAT_100d5f88 - DAT_100d5f84) * 0x20 & 0xff00U,DAT_100d5f94,
                 DAT_100d5f90,param_4);
    return;
  }
  uVar1 = FUN_1011ea10((int)((ulonglong)uVar2 >> 0x20));
  FUN_1011ea40((int)uVar2 + 0x78,param_2,uVar1,param_4);
  return;
}


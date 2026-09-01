/* FUN_100eb2a8 @ 0x100eb2a8 */

void FUN_100eb2a8(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = DAT_100eb2d4;
  if (*DAT_100eb2d4 == 0) {
    FUN_100eae68();
    FUN_100eb04c();
    uVar2 = FUN_10138fdc();
    *DAT_100eb2d8 = uVar2;
    FUN_1013c856(DAT_100eb2dc);
    FUN_1013c856(DAT_100eb2e0);
    *piVar1 = 1;
  }
  return;
}


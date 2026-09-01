/* FUN_10064624 @ 0x10064624 */

void FUN_10064624(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*DAT_10064650 == 0) {
    uVar1 = 0xfd;
    uVar2 = DAT_10064654;
  }
  else {
    if (param_1 != 0) {
      FUN_1011dc6e(*DAT_10064650,param_1,0x88,0);
      return;
    }
    uVar1 = 0xff;
    uVar2 = DAT_10064660;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(DAT_1006465c,uVar1,DAT_10064658,uVar2);
}


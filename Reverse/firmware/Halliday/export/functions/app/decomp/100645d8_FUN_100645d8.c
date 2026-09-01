/* FUN_100645d8 @ 0x100645d8 */

void FUN_100645d8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*DAT_10064610 == 0) {
    uVar1 = 0xec;
    uVar2 = DAT_10064614;
  }
  else {
    if (param_1 != 0) {
      if (param_2 == 0) {
        uVar2 = 0x8a;
      }
      else {
        uVar2 = 0x89;
      }
      FUN_1011dc6e(*DAT_10064610,param_1,uVar2,0);
      return;
    }
    uVar1 = 0xee;
    uVar2 = DAT_10064620;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(DAT_1006461c,uVar1,DAT_10064618,uVar2);
}


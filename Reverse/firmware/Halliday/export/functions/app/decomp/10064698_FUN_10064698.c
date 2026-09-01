/* FUN_10064698 @ 0x10064698 */

void FUN_10064698(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = param_2;
  uStack_c = param_3;
  if (*DAT_100646d0 == 0) {
    uVar1 = 0x137;
    uVar2 = DAT_100646d4;
  }
  else {
    if (param_1 != 0) {
      FUN_1011dc6e(*DAT_100646d0,param_1,0x96,&local_10);
      return;
    }
    uVar1 = 0x139;
    uVar2 = DAT_100646e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(DAT_100646dc,uVar1,DAT_100646d8,uVar2);
}


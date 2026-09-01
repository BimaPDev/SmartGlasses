/* FUN_10064518 @ 0x10064518 */

void FUN_10064518(int param_1,undefined3 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*DAT_1006454c == 0) {
    uVar1 = 0xcd;
    uVar2 = DAT_10064550;
  }
  else {
    if (param_1 != 0) {
      FUN_1011dc6e(*DAT_1006454c,param_1,6,&stack0xfffffff7,param_1,CONCAT13((char)param_2,param_2))
      ;
      return;
    }
    uVar1 = 0xcf;
    uVar2 = DAT_1006455c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(DAT_10064558,uVar1,DAT_10064554,uVar2);
}


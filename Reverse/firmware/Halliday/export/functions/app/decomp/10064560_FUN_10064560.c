/* FUN_10064560 @ 0x10064560 */

undefined4 FUN_10064560(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = 0;
  uStack_8 = param_3;
  if (*DAT_100645b4 == 0) {
    uVar2 = 0xda;
    uVar3 = DAT_100645b8;
  }
  else {
    if (param_1 != 0) {
      iVar1 = FUN_1011dc6e(*DAT_100645b4,param_1,0x87,&local_c,param_1);
      if (iVar1 != 0) {
        FUN_100a5b78((DAT_100645c8 - DAT_100645cc) * 0x20 & 0xff00U | 0xdf0011,DAT_100645d4,
                     DAT_100645d0);
      }
      return local_c;
    }
    uVar2 = 0xdc;
    uVar3 = DAT_100645c4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10117c88(DAT_100645c0,uVar2,DAT_100645bc,uVar3);
}


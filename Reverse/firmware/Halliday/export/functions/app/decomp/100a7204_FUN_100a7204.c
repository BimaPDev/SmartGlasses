/* FUN_100a7204 @ 0x100a7204 */

int FUN_100a7204(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (DAT_100a72a8 - DAT_100a72a4) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100a72ac | uVar4,DAT_100a72b4,DAT_100a72b0,param_1,param_1,param_2,param_3);
  piVar1 = DAT_100a72b8;
  switch(param_1) {
  case 5:
  case 0xb:
  case 0x12:
  case 0x13:
  case 0x15:
    if (*DAT_100a72b8 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *DAT_100a72c4;
      if (*DAT_100a72c4 == 0) {
        iVar3 = (int)*(short *)(*DAT_100a72b8 + 10);
      }
    }
    break;
  case 6:
    iVar3 = 0;
    if (*DAT_100a72b8 != 0) {
      iVar3 = (int)*(short *)(*DAT_100a72b8 + 6);
    }
    break;
  default:
    iVar3 = 0;
    break;
  case 10:
    iVar3 = 0;
    if (*DAT_100a72b8 != 0) {
      iVar2 = FUN_10041a00();
      iVar3 = *DAT_100a72c8;
      if (*DAT_100a72c8 == 0) {
        iVar3 = iVar2;
      }
    }
    break;
  case 0x16:
    iVar3 = 0;
    if (*DAT_100a72b8 != 0) {
      iVar3 = (int)*(short *)(*DAT_100a72b8 + 8);
    }
  }
  FUN_100a5b78(DAT_100a72bc | uVar4,DAT_100a72b4,DAT_100a72c0,param_1,iVar3,*piVar1,param_3);
  return iVar3;
}


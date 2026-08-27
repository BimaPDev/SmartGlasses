/* FUN_2c4996ec @ 0x2c4996ec */

undefined4 FUN_2c4996ec(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r4;
  undefined1 *puVar5;
  
  puVar5 = &stack0xfffffff0;
  if ((0x1bc5 < param_1) && (param_1 != 0x1c03)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x573,DAT_2c4998c8,DAT_2c4998c4);
  }
  iVar4 = ((int)((int)((ulonglong)((longlong)DAT_2c4998b4 * (longlong)(int)param_1) >> 0x20) +
                param_1) >> 6) - ((int)param_1 >> 0x1f);
  if (iVar4 == 0) {
    return 0xffffffff;
  }
  if ((int)param_1 < 0x899) {
    if (0x46 < (int)param_1) {
      iVar3 = iVar4 + -1;
      switch(iVar4 + -1) {
      case 0:
        param_1 = 4;
        iVar3 = iRam2c4a9820;
        iVar4 = iRam2c4a981c;
      case 0x1d:
                    /* WARNING: Subroutine does not return */
        TRACE(param_1,&switchD_2c499792::switchdataD_2c499798,iVar3,iVar4);
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x132,DAT_2c4a9794,DAT_2c4a9790);
      case 9:
        puVar5 = &stack0xffffffe8;
        unaff_r4 = DAT_2c4a9880;
      case 0x13:
        *(undefined4 *)(puVar5 + -8) = unaff_r4;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x152,DAT_2c4a9888,DAT_2c4a9884);
      }
    }
switchD_2c499728_caseD_29:
    uVar1 = FUN_2c499598(iVar4,(int)((longlong)DAT_2c4998b4 * (longlong)(int)param_1));
    *DAT_2c4998b8 = uVar1;
    uVar2 = uVar1 & 0xff;
  }
  else {
    switch(iVar4) {
    case 0x28:
      uVar2 = 0xf;
      *DAT_2c4998b8 = 0xf;
      uVar1 = 0xf;
      break;
    default:
      goto switchD_2c499728_caseD_29;
    case 0x32:
      uVar2 = 0x14;
      *DAT_2c4998b8 = 0x14;
      uVar1 = 0x14;
      break;
    case 0x3c:
      uVar2 = 0x1c;
      *DAT_2c4998b8 = 0x1c;
      uVar1 = 0x1c;
      break;
    case 0x46:
      uVar2 = 0x25;
      *DAT_2c4998b8 = 0x25;
      uVar1 = 0x25;
      break;
    case 0x50:
      uVar2 = 0x2f;
      *DAT_2c4998b8 = 0x2f;
      uVar1 = 0x2f;
      break;
    case 0x5a:
      uVar2 = 0x38;
      *DAT_2c4998b8 = 0x38;
      uVar1 = 0x38;
      break;
    case 100:
    case 0x65:
      uVar2 = 0x3d;
      *DAT_2c4998b8 = 0x3d;
      uVar1 = 0x3d;
    }
  }
  *(uint *)(DAT_2c4998bc + 0x20) = uVar1;
  FUN_2c497f54(uVar2);
  return 0;
}


/* FUN_2c4998cc @ 0x2c4998cc */

int FUN_2c4998cc(uint param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint unaff_r4;
  undefined1 *unaff_r5;
  undefined4 *puVar5;
  
  uVar3 = LAB_2c4a99b8;
  puVar5 = DAT_2c499aec;
  if ((0x1bc5 < param_1) && (param_1 != 0x1c03)) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x5bc,DAT_2c499b00,DAT_2c499afc,DAT_2c499af8);
  }
  iVar2 = ((int)((int)((ulonglong)((longlong)DAT_2c499ae8 * (longlong)(int)param_1) >> 0x20) +
                param_1) >> 6) - ((int)param_1 >> 0x1f);
  if (iVar2 == 0) {
    return -1;
  }
  if ((int)param_1 < 0x899) {
    if (0x46 < (int)param_1) {
      uVar4 = iVar2 - 1;
      switch(uVar4) {
      case 0:
        param_2 = 0x19a;
        iVar2 = 4;
        uVar4 = uRam2c4a9a70;
        param_1 = uRam2c4a9a6c;
      case 9:
                    /* WARNING: Subroutine does not return */
        TRACE(iVar2,param_2,uRam2c4a9a74,uVar4,param_1);
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
        iVar2 = (uint)((ulonglong)uVar4 * (ulonglong)param_1 >> 0x24) + 1;
        *unaff_r5 = (char)iVar2;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x192,DAT_2c4a99c0,DAT_2c4a99bc,uVar3,&switchD_2c499986::switchdataD_2c49998c,iVar2)
        ;
      case 0x1d:
        iVar2 = -1;
      case 0x13:
        if ((*puRam2c4a9a68 ^ unaff_r4) != 0) {
                    /* WARNING: Subroutine does not return */
          stack_chk_fail(iVar2,param_2,*puRam2c4a9a68 ^ unaff_r4,0);
        }
        return iVar2;
      }
    }
switchD_2c49990a_caseD_29:
    uVar3 = FUN_2c499598(iVar2,param_2,(int)((longlong)DAT_2c499ae8 * (longlong)(int)param_1));
    puVar5 = DAT_2c499aec;
    *DAT_2c499aec = uVar3;
  }
  else {
    switch(iVar2) {
    case 0x28:
      uVar3 = 0xf;
      *DAT_2c499aec = 0xf;
      break;
    default:
      goto switchD_2c49990a_caseD_29;
    case 0x32:
      uVar3 = 0x14;
      *DAT_2c499aec = 0x14;
      break;
    case 0x3c:
      uVar3 = 0x1c;
      *DAT_2c499aec = 0x1c;
      break;
    case 0x46:
      uVar3 = 0x25;
      *DAT_2c499aec = 0x25;
      break;
    case 0x50:
      uVar3 = 0x2f;
      *DAT_2c499aec = 0x2f;
      break;
    case 0x5a:
      uVar3 = 0x38;
      *DAT_2c499aec = 0x38;
      break;
    case 100:
    case 0x65:
      uVar3 = 0x3d;
      *DAT_2c499aec = 0x3d;
    }
  }
  uVar1 = (undefined1)uVar3;
  *(undefined4 *)(DAT_2c499af0 + 0x20) = uVar3;
  if (((int)param_1 < 0x2c6) && (param_1 != 0)) {
    *DAT_2c499af4 = 1;
    thunk_FUN_2c4975bc(0xa9);
    uVar3 = 2000;
  }
  else {
    if (((int)param_1 < 0x2c6) || (*DAT_2c499af4 == 2)) goto LAB_2c499972;
    *DAT_2c499af4 = 2;
    thunk_FUN_2c4975bc(0xa9);
    uVar3 = 0x1bc5;
  }
  FUN_2c497fb8(uVar3);
  thunk_FUN_2c4975bc(0xa3);
  thunk_FUN_2c4975bc(0x97);
  FUN_2c497510(1);
  uVar1 = (undefined1)*puVar5;
LAB_2c499972:
  FUN_2c497f54(uVar1);
  return 0;
}


/* FUN_1408df8c @ 0x1408df8c */

void FUN_1408df8c(undefined4 param_1,uint param_2,uint param_3,int param_4,undefined1 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  uVar5 = DAT_1408e228;
  piVar8 = DAT_1408e224 + 8;
  piVar7 = DAT_1408e224;
  do {
    piVar9 = piVar7 + 1;
    iVar6 = *piVar7;
    if ((iVar6 != 0) && (*(ushort *)(iVar6 + 0xe) == param_3)) {
      switch(param_2) {
      case 1:
        goto switchD_1408e014_caseD_1;
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x40,DAT_1408e20c);
      case 3:
        piVar7 = (int *)(iVar6 + 0x14);
        break;
      case 4:
        piVar7 = (int *)(iVar6 + 0x14);
        do {
          piVar7 = piVar7 + 1;
          iVar2 = *piVar7;
          if (iVar2 != 0) {
            if (*(char *)(iVar2 + 0x96) == '\x03') {
              FUN_1408b85c(param_1,iVar2,3,0);
              FUN_1408c5a4(param_1,iVar2,param_5);
            }
            else if (*(char *)(iVar2 + 0x96) == '\x02') {
              FUN_1408c5a4(param_1,iVar2,param_5);
            }
          }
        } while (piVar7 != (int *)(iVar6 + 0x44));
        return;
      default:
        goto switchD_1408e014_default;
      }
      goto LAB_1408e152;
    }
    piVar7 = piVar9;
  } while (piVar9 != piVar8);
  if (param_2 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x40,DAT_1408e20c);
  }
  if (param_2 < 3) {
    if (param_2 == 1) {
      piVar7 = DAT_1408e224;
      if (param_4 != 0) {
        do {
          piVar9 = piVar7 + 1;
          iVar6 = *piVar7;
          if ((iVar6 != 0) && (iVar2 = FUN_140db784(param_4,iVar6 + 8,6), iVar2 == 0))
          goto switchD_1408e014_caseD_1;
          piVar7 = piVar9;
        } while (piVar9 != piVar8);
      }
      iVar6 = FUN_1408ab6c(param_3,param_4);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x41,DAT_1408e21c,DAT_1408e220);
      }
      *(ushort *)(iVar6 + 0xe) = (ushort)((param_3 << 0x14) >> 0x14);
      *(char *)(iVar6 + 0x11) = (char)param_1;
    }
  }
  else {
    uVar5 = DAT_1408e208;
    if (param_2 - 3 < 2) {
LAB_1408dfc6:
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x40,uVar5);
    }
  }
switchD_1408e014_default:
  return;
LAB_1408e152:
  piVar7 = piVar7 + 1;
  iVar2 = *piVar7;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x96);
    if (cVar1 == '\x03') {
      iVar3 = FUN_1408b85c(param_1,iVar2,0);
      if (iVar3 == 1) goto LAB_1408e086;
      *(undefined1 *)(iVar2 + 0x96) = 5;
      FUN_14075168(iVar2 + 0x22,500,uVar5,iVar2,1);
      FUN_14075074(iVar2 + 0x22);
    }
    else if (cVar1 == '\x04') {
      if (*(char *)(iVar2 + 0x21) != '\0') {
        FUN_14074f94(iVar2 + 0x21);
        *(undefined1 *)(iVar2 + 0x21) = 0;
      }
    }
    else if (cVar1 == '\x02') {
      *(undefined1 *)(iVar2 + 0x96) = 4;
      iVar3 = FUN_1408b72c(param_1,iVar2);
      if (iVar3 == 1) goto LAB_1408e086;
    }
  }
  if (piVar7 == (int *)(iVar6 + 0x44)) {
    return;
  }
  goto LAB_1408e152;
switchD_1408e014_caseD_1:
  *(ushort *)(iVar6 + 0xe) = (ushort)((param_3 << 0x14) >> 0x14);
  *(char *)(iVar6 + 0x11) = (char)param_1;
  piVar7 = (int *)(iVar6 + 0x14);
  do {
    piVar7 = piVar7 + 1;
    iVar2 = *piVar7;
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0x96) == '\x02')) {
      iVar3 = FUN_14085e30(*(ushort *)(iVar6 + 0xe) & 0xfff);
      uVar5 = DAT_1408e214;
      if ((iVar3 == 0) || (uVar5 = DAT_1408e218, *(char *)(iVar3 + 0x46) != '\0'))
      goto LAB_1408dfc6;
      if ((*(short *)(iVar2 + 0x16) == 1) || (iVar4 = FUN_140863cc(), iVar4 == 0)) {
        *(undefined1 *)(iVar2 + 0x96) = 4;
        iVar3 = FUN_1408b72c(param_1,iVar2);
        if (iVar3 == 1) {
LAB_1408e086:
          FUN_1408c5a4(param_1,iVar2,param_5);
          return;
        }
      }
      else {
        FUN_140864e4(*(undefined1 *)(iVar3 + 0x52),*(undefined2 *)(iVar6 + 0xe),
                     *(undefined2 *)(iVar2 + 0x16),iVar2);
        *(undefined1 *)(iVar2 + 0x96) = 2;
      }
    }
    if ((int *)(iVar6 + 0x44) == piVar7) {
      return;
    }
  } while( true );
}


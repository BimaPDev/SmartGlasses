/* FUN_100da314 @ 0x100da314 */

undefined4 FUN_100da314(uint param_1,uint param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  code *pcVar17;
  uint uVar18;
  int local_24;
  
  uVar14 = param_1;
  local_24 = param_4;
  if (*(char *)(param_1 + 3) == '\'') {
    iVar16 = *(int *)(param_1 + 8);
    if (iVar16 != 0) {
      iVar7 = FUN_1013662e(iVar16);
      if (iVar7 != 0) {
        FUN_10138a52(iVar16);
        iVar7 = FUN_101364ba(iVar16);
        if (((iVar7 == 0) && (iVar7 = FUN_100d6414(iVar16), iVar7 != 0)) &&
           (iVar8 = FUN_101165e0(), iVar8 == 0)) {
          FUN_101164a0(iVar7,DAT_100da618,iVar16);
          FUN_10116500(iVar7,1000,0);
        }
      }
      goto LAB_100da366;
    }
switchD_100da376_caseD_27:
    pcVar17 = *(code **)*DAT_100da970;
    uVar11 = FUN_10131c1c(*(undefined4 *)(param_1 + 8));
    uVar12 = 0;
    goto LAB_100da6b0;
  }
  if (*(char *)(param_1 + 3) == '(') {
    iVar16 = *(int *)(param_1 + 8);
    if (iVar16 != 0) {
      iVar7 = FUN_1013662e(iVar16);
      if (((iVar7 != 0) && (iVar16 = FUN_100d6414(iVar16), iVar16 != 0)) &&
         (iVar7 = FUN_101165e0(), iVar7 != 0)) {
        FUN_10116598(iVar16);
      }
      goto LAB_100da366;
    }
switchD_100da376_caseD_28:
    pcVar17 = *(code **)*DAT_100da970;
    uVar11 = FUN_10131c1c(*(undefined4 *)(param_1 + 8));
    uVar12 = 1;
LAB_100da6b0:
    (*pcVar17)(uVar11,uVar12,0);
    return 0;
  }
LAB_100da366:
  iVar16 = DAT_100da974;
  bVar1 = *(byte *)(param_1 + 3);
  if (0x30 < bVar1) {
    if (bVar1 != 0x8e) {
      if (bVar1 != 0x8f) {
        return 0;
      }
      FUN_100da068(*(undefined4 *)(param_1 + 8));
      return 0;
    }
    uVar13 = (DAT_100da974 - DAT_100da97c) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100da9b4 | uVar13,DAT_100da9b0,DAT_100da9b8,uVar13,uVar14,param_2,param_3);
    iVar16 = FUN_100d50e4();
    if (iVar16 == 0) {
      return 0;
    }
    iVar7 = FUN_1013655c();
    if (iVar7 != 0) {
      return 0;
    }
    iVar7 = FUN_10132214(iVar16);
LAB_100da5c6:
    if (iVar7 != 0) {
      return 0;
    }
    FUN_1013653e(iVar16,1);
    return 0;
  }
  if (bVar1 < 0x23) {
    return 0;
  }
  switch(bVar1) {
  case 0x24:
    uVar13 = (DAT_100da620 - DAT_100da61c) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100da630 | uVar13,DAT_100da62c,DAT_100da634,uVar13,uVar14,param_2,param_3);
    FUN_100da1c4();
    break;
  case 0x25:
    uVar13 = (DAT_100da620 - DAT_100da61c) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100da638 | uVar13,DAT_100da62c,DAT_100da63c,uVar13,uVar14,param_2,param_3);
    iVar16 = FUN_101364ae(*(undefined4 *)(param_1 + 8));
    if (iVar16 != 0) {
      FUN_100da24c();
    }
    break;
  case 0x26:
    uVar13 = (DAT_100da620 - DAT_100da61c) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100da640 | uVar13,DAT_100da62c,DAT_100da644,uVar13,uVar14,param_2,param_3);
    iVar16 = FUN_101364ae(*(undefined4 *)(param_1 + 8));
    if (iVar16 != 0) {
      FUN_100da1f4();
    }
    break;
  case 0x27:
    goto switchD_100da376_caseD_27;
  case 0x28:
    goto switchD_100da376_caseD_28;
  case 0x29:
    piVar15 = *(int **)(param_1 + 8);
    iVar7 = *piVar15;
    uVar18 = (uint)*(byte *)(piVar15 + 1);
    uVar10 = (uint)*(byte *)((int)piVar15 + 5);
    local_24 = 0;
    uVar6 = *(ushort *)(*DAT_100da978 + 0x32);
    iVar16 = DAT_100da974 - DAT_100da97c;
    uVar11 = FUN_10131c1c(iVar7);
    uVar13 = iVar16 * 0x20 & 0xff00;
    uVar14 = uVar18;
    param_2 = uVar10;
    FUN_100a5b78(uVar13 | 0x4c0033,DAT_100da984,DAT_100da980,uVar11,uVar18,uVar10);
    if ((uVar18 - 1 < 2) || (uVar18 == 0xd)) {
      FUN_100a5b78(uVar13 | 0x540032,DAT_100da984,DAT_100da98c,DAT_100da990,0x54,param_2);
      if (uVar18 == 0xd) {
        iVar16 = FUN_1013650a();
        if (((iVar7 == iVar16) && (iVar16 = FUN_100d4dbc(), iVar16 != 0)) ||
           (iVar16 = FUN_1013662e(iVar7), iVar16 != 0)) {
          iVar16 = FUN_1013662e(iVar7);
          if (iVar16 == 0) {
            FUN_100a5b78(uVar13 | 0x660032,DAT_100da984,DAT_100da98c,DAT_100da990,0x66);
            FUN_100d4f4c(iVar7,&local_24);
            if (local_24 == 0) {
              return 0;
            }
            iVar16 = FUN_10136c54();
            if ((uint)(iVar16 - local_24) <= (uint)uVar6) {
              return 0;
            }
            iVar16 = FUN_101165e0(DAT_100da994);
            if (iVar16 != 0) {
              return 0;
            }
            pcVar17 = *(code **)(*DAT_100da970 + 8);
          }
          else {
            FUN_100a5b78(uVar13 | 0x5f0032,DAT_100da984,DAT_100da98c,DAT_100da990,0x5f);
            pcVar17 = *(code **)(*DAT_100da970 + 0x18);
            if (pcVar17 == (code *)0x0) {
              return 0;
            }
          }
          uVar11 = FUN_10131c1c(iVar7);
          (*pcVar17)(uVar11,uVar10);
          return 0;
        }
      }
      else {
        if (uVar18 == 2) {
          uVar14 = 6;
          goto LAB_100da7aa;
        }
        if ((uVar18 == 1) && (uVar10 < 3)) {
          uVar14 = (uint)*(char *)(DAT_100da998 + uVar10);
          goto LAB_100da7aa;
        }
      }
      uVar14 = 0xffffffff;
LAB_100da7aa:
      FUN_100a5b78(uVar13 | 0x8c0032,DAT_100da984,DAT_100da98c,DAT_100da990,0x8c,param_2);
      if ((int)uVar14 < 1) {
        return 0;
      }
      iVar16 = thunk_FUN_1013650a();
      if (iVar7 != iVar16) {
        return 0;
      }
      FUN_100a5b78(uVar13 | 0x8e0032,DAT_100da984,DAT_100da98c,DAT_100da990,0x8e);
      pcVar17 = *(code **)*DAT_100da970;
      uVar11 = FUN_10131c1c(iVar7);
      (*pcVar17)(uVar11,uVar14 & 0xff,0);
      return 0;
    }
    uVar13 = uVar13 | 0x510021;
    uVar11 = DAT_100da984;
    uVar12 = DAT_100da988;
    goto LAB_100da71a;
  case 0x2a:
    piVar15 = *(int **)(param_1 + 8);
    uVar18 = (uint)*(byte *)(piVar15 + 1);
    uVar10 = (uint)*(byte *)((int)piVar15 + 5);
    iVar8 = *piVar15;
    iVar7 = FUN_100e782c(iVar8,uVar18,uVar10);
    uVar13 = (iVar16 - DAT_100da97c) * 0x20 & 0xff00;
    if (iVar7 == 0) {
      uVar14 = uVar10;
      FUN_100a5b78(uVar13 | 0xe80032,DAT_100da9a0,DAT_100da9a4,uVar18,uVar10);
      if ((uVar10 ^ 0x80) < 2) {
        if (uVar10 != 0x80) {
          return 0;
        }
        pcVar9 = (char *)FUN_100d5130(iVar8);
        if (pcVar9 == (char *)0x0) {
          return 0;
        }
        if ((byte)pcVar9[1] != uVar18) {
          return 0;
        }
        if (*pcVar9 != '\x01') {
          return 0;
        }
        *pcVar9 = '\x02';
        uVar11 = FUN_10136c54();
        *(undefined4 *)(pcVar9 + 4) = uVar11;
        return 0;
      }
      iVar16 = thunk_FUN_1013650a();
      if (iVar8 != iVar16) {
        return 0;
      }
      switch(uVar18) {
      case 0x41:
        uVar11 = 5;
        break;
      case 0x42:
        uVar11 = 6;
        break;
      case 0x43:
        uVar11 = 7;
        break;
      case 0x44:
        uVar11 = 0;
        break;
      default:
        uVar13 = uVar13 | 0x1000000;
        uVar11 = DAT_100da9a0;
        uVar12 = DAT_100da9a8;
        goto LAB_100da55e;
      case 0x46:
        uVar11 = 1;
      }
      pcVar17 = *(code **)(*DAT_100da970 + 0x10);
      uVar12 = FUN_10131c1c(iVar8);
      (*pcVar17)(uVar12,uVar11,uVar10);
      return 0;
    }
    uVar13 = uVar13 | 0xe30032;
    uVar11 = DAT_100da9a0;
    uVar12 = DAT_100da99c;
LAB_100da51c:
    FUN_100a5b78(uVar13,uVar11,uVar12,uVar18,uVar10);
    break;
  case 0x2b:
    FUN_100da068(*(undefined4 *)(param_1 + 8));
    break;
  case 0x2c:
    uVar13 = (DAT_100da620 - DAT_100da61c) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100da648 | uVar13,DAT_100da62c,DAT_100da64c,*(undefined4 *)(param_1 + 8),uVar14
                 ,param_2,param_3);
    uVar18 = (uint)*(byte *)(param_1 + 8);
    uVar11 = thunk_FUN_1013650a();
    if (uVar18 < 0xc) {
      cVar3 = *(char *)(DAT_100da650 + uVar18);
      cVar4 = *(char *)(DAT_100da654 + uVar18);
      cVar5 = *(char *)(DAT_100da658 + uVar18);
      pcVar9 = (char *)FUN_100d5130();
      if (pcVar9 == (char *)0x0) {
        iVar16 = -5;
        goto LAB_100da4ce;
      }
      cVar2 = *pcVar9;
      if (cVar5 == '\0') {
        if (cVar2 == '\0') {
          pcVar9[1] = cVar3;
          *pcVar9 = '\x01';
          uVar12 = FUN_10136c54();
          *(undefined4 *)(pcVar9 + 4) = uVar12;
          iVar16 = FUN_101165e0(DAT_100da680);
          if (iVar16 == 0) {
            FUN_10116500(DAT_100da680,5);
          }
          goto LAB_100da4fa;
        }
        cVar3 = pcVar9[1];
        uVar14 = DAT_100da67c;
      }
      else {
        if (cVar4 == '\0') {
          if (cVar2 == '\x03') {
            pcVar9[0] = '\0';
            pcVar9[1] = '\0';
            goto LAB_100da4fa;
          }
        }
        else if (cVar2 == '\0') {
          pcVar9[1] = cVar3;
          *pcVar9 = '\x03';
LAB_100da4fa:
          iVar16 = FUN_10132172(uVar11,cVar3,cVar4);
          if (iVar16 < 0) goto LAB_100da4ce;
          uVar10 = FUN_10131c1c(uVar11);
          uVar13 = DAT_100da674 | uVar13;
          uVar11 = DAT_100da670;
          uVar12 = DAT_100da678;
          goto LAB_100da51c;
        }
        cVar3 = pcVar9[1];
        uVar14 = DAT_100da660;
      }
      FUN_100a5b78(uVar14 | uVar13,DAT_100da65c,DAT_100da664,cVar2,cVar3);
      iVar16 = -0x10;
LAB_100da4ce:
      uVar11 = FUN_10131c1c(uVar11);
      FUN_100a5b78(DAT_100da668 | uVar13,DAT_100da670,DAT_100da66c,uVar18,iVar16,uVar11);
      return 0;
    }
    uVar13 = uVar13 | 0x23c0000;
    uVar11 = DAT_100da670;
    uVar12 = DAT_100da684;
LAB_100da55e:
    uVar13 = uVar13 | 0x11;
LAB_100da71a:
    FUN_100a5b78(uVar13,uVar11,uVar12,uVar18,uVar14,param_2);
    break;
  case 0x2d:
    FUN_100a5b78((DAT_100da974 - DAT_100da97c) * 0x20 & 0xff00U | 0x3140031,DAT_100da9b0,
                 DAT_100da9ac,DAT_100da97c,uVar14,param_2,param_3);
    iVar16 = FUN_100d5e14();
    if (iVar16 != 3) {
      FUN_100da2a0();
    }
    break;
  case 0x2e:
    uVar13 = (DAT_100da620 - DAT_100da61c) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100da688 | uVar13,DAT_100da62c,DAT_100da68c,uVar13,uVar14,param_2,param_3);
    iVar16 = thunk_FUN_1013650a();
    if (iVar16 != 0) {
      FUN_101321ba();
    }
    break;
  case 0x2f:
    uVar13 = (DAT_100da620 - DAT_100da61c) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100da690 | uVar13,DAT_100da62c,DAT_100da694,uVar13,uVar14,param_2,param_3);
    iVar16 = thunk_FUN_1013650a();
    if (iVar16 == 0) {
      return 0;
    }
    iVar7 = FUN_1013655c();
    if (iVar7 != 0) {
      return 0;
    }
    iVar7 = FUN_101321d6(iVar16);
    goto LAB_100da5c6;
  case 0x30:
    FUN_100a5b78(DAT_100da698 | (DAT_100da620 - DAT_100da61c) * 0x20 & 0xff00U,DAT_100da62c,
                 DAT_100da69c,*(undefined4 *)(param_1 + 8),uVar14,param_2,param_3);
    uVar13 = *(uint *)(param_1 + 8);
    uVar14 = uVar13 & 0xff;
    if (uVar14 == 3) {
      iVar16 = FUN_100d6220();
    }
    else {
      if (uVar14 != 1) {
        return 0;
      }
      iVar16 = thunk_FUN_1013650a();
    }
    if (iVar16 != 0) {
      FUN_101321f2(iVar16,uVar13);
    }
    break;
  default:
    uVar13 = (DAT_100da620 - DAT_100da61c) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_100da624 | uVar13,DAT_100da62c,DAT_100da628,uVar13,uVar14,param_2,param_3);
    FUN_100da180(*(undefined4 *)(param_1 + 8));
  }
  return 0;
}


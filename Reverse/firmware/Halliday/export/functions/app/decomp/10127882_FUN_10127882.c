/* FUN_10127882 @ 0x10127882 */

uint FUN_10127882(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint extraout_r2_03;
  uint extraout_r2_04;
  uint extraout_r2_05;
  uint extraout_r2_06;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int extraout_r3_02;
  int extraout_r3_03;
  int extraout_r3_04;
  int extraout_r3_05;
  int extraout_r3_06;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  iVar9 = *(int *)(param_5 + 0x2c);
  param_3 = param_3 - *(int *)(param_5 + 0x20);
  iVar6 = *(int *)(param_5 + 0x1c);
  bVar2 = *(byte *)(param_5 + 0x34);
  iVar11 = param_2 - iVar6;
  uVar4 = bVar2 & 1;
  if (iVar9 == 0) {
    bVar1 = *(byte *)(param_5 + 0x18);
    if ((bVar2 & 1) != 0) {
      if ((bVar1 & 2) == 0) {
        return uVar4;
      }
      if ((bVar1 & 3) == 2) {
        return param_3 + 1U >> 0x1f;
      }
      if ((bVar1 & 3) != 3) {
        return 0;
      }
      if (param_3 < 1) {
        return 0;
      }
      return uVar4;
    }
    if ((bVar1 & 2) != 0) {
      return 1;
    }
    if ((bVar1 & 3) == 1) {
      if (0 < iVar11) {
        return 1;
      }
    }
    else if ((bVar1 & 3) == 0) {
      uVar4 = iVar11 + param_4;
      if ((int)uVar4 < 0) {
        return 1;
      }
      iVar6 = iVar6 - param_2;
      if (iVar6 < 0) {
        return 0;
      }
      if (param_4 <= iVar6) {
        return 2;
      }
      goto LAB_10127b36;
    }
    if ((iVar11 + param_4 < 0) ||
       (uVar4 = iVar6 - param_2 & ~(iVar6 - param_2 >> 0x1f), param_4 <= (int)uVar4)) {
      return 0;
    }
  }
  else {
    if ((bVar2 & 1) != 0) {
      iVar5 = *(int *)(param_5 + 0x28);
      iVar10 = iVar5 * iVar11 >> 10;
      if (iVar5 < 1) {
        if (iVar10 < param_3) goto LAB_10127932;
      }
      else if (param_3 < iVar10) {
LAB_10127932:
        if ((bVar2 & 2) != 0) {
          return 1;
        }
        return bVar2 & 2;
      }
      iVar11 = iVar5 * (iVar11 + param_4) >> 10;
      if (iVar5 < 1) {
        if (param_3 < iVar11) goto LAB_10127950;
        param_3 = param_3 * *(int *)(param_5 + 0x24) + *(int *)(param_5 + 0x24);
      }
      else {
        if (iVar11 < param_3) {
LAB_10127950:
          return (uint)((bVar2 & 2) == 0);
        }
        param_3 = *(int *)(param_5 + 0x24) * param_3;
      }
      uVar4 = (param_3 << 8) >> 10 & 0xff;
      if (uVar4 != 0) {
        iVar9 = *(int *)(param_5 + 0x30) * (0xff - uVar4);
      }
      if (uVar4 != 0) {
        iVar9 = 0xff - (iVar9 >> 8);
      }
      else {
        iVar9 = 0xff;
      }
      uVar7 = (iVar6 - param_2) + ((param_3 << 8) >> 0x12);
      uVar8 = uVar7;
      if (uVar4 != 0) {
        if ((-1 < (int)uVar7) && ((int)uVar7 < param_4)) {
          uVar4 = ((0xff - uVar4) * (0xff - iVar9) & 0x1ffff) >> 9;
          if ((bVar2 & 2) == 0) {
            uVar4 = ~uVar4 & 0xff;
          }
          uVar3 = FUN_10127860(*(undefined1 *)(param_1 + uVar7),uVar4);
          *(undefined1 *)(param_1 + extraout_r2) = uVar3;
          uVar7 = extraout_r2;
          param_4 = extraout_r3;
        }
        uVar8 = uVar7 + 1;
      }
      do {
        if (iVar9 <= *(int *)(param_5 + 0x30)) {
          if (((int)uVar8 < param_4) && (-1 < (int)uVar8)) {
            uVar4 = (iVar9 * (iVar9 * *(int *)(param_5 + 0x24) >> 10) & 0x1ffffU) >> 9;
            if (*(int *)(param_5 + 0x28) < 0) {
              uVar4 = ~uVar4 & 0xff;
            }
            if ((*(byte *)(param_5 + 0x34) & 2) != 0) {
              uVar4 = ~uVar4 & 0xff;
            }
            uVar3 = FUN_10127860(*(undefined1 *)(param_1 + uVar8),uVar4);
            *(undefined1 *)(param_1 + uVar8) = uVar3;
            uVar7 = extraout_r2_00;
            param_4 = extraout_r3_00;
          }
          break;
        }
        if ((-1 < (int)uVar8) && ((int)uVar8 < param_4)) {
          uVar4 = iVar9 - (*(int *)(param_5 + 0x30) >> 1) & 0xff;
          if ((*(byte *)(param_5 + 0x34) & 2) != 0) {
            uVar4 = ~uVar4 & 0xff;
          }
          uVar3 = FUN_10127860(*(undefined1 *)(param_1 + uVar8),uVar4);
          *(undefined1 *)(param_1 + uVar8) = uVar3;
          uVar7 = extraout_r2_01;
          param_4 = extraout_r3_01;
        }
        uVar8 = uVar8 + 1;
        iVar9 = iVar9 - *(int *)(param_5 + 0x30);
      } while ((int)uVar8 < param_4);
      if (-1 < (int)((uint)*(byte *)(param_5 + 0x34) << 0x1e)) {
        iVar6 = uVar8 + 1;
        if (iVar6 < 0) {
          return 0;
        }
        bVar12 = SBORROW4(param_4,iVar6);
        iVar9 = param_4 - iVar6;
LAB_10127a42:
        if (iVar9 < 0 != bVar12) {
          return 2;
        }
        uVar4 = param_4 - iVar6;
        param_1 = iVar6 + param_1;
        goto LAB_10127a4a;
      }
LAB_10127a26:
      uVar4 = uVar7;
      if (param_4 < (int)uVar7) {
        return 0;
      }
joined_r0x10127a2e:
      if ((int)uVar4 < 0) {
        return 2;
      }
      goto LAB_10127a4a;
    }
    iVar5 = *(int *)(param_5 + 0x24);
    uVar4 = iVar5 * param_3;
    iVar9 = (int)uVar4 >> 10;
    iVar10 = iVar9;
    if (0 < iVar5) {
      iVar10 = iVar9 + 1;
    }
    if (iVar10 < iVar11) goto LAB_10127932;
    if (iVar11 + param_4 < iVar9) goto LAB_10127950;
    iVar9 = param_3 * iVar5 + iVar5;
    iVar10 = (int)(uVar4 * 0x100) >> 0x12;
    iVar11 = iVar9 * 0x100 >> 0x12;
    uVar8 = (uVar4 & 0x3ff) >> 2;
    uVar7 = (iVar6 - param_2) + iVar10;
    uVar4 = uVar7;
    if (iVar10 == iVar11) {
LAB_10127bb2:
      if ((-1 < (int)uVar4) && ((int)uVar4 < param_4)) {
        uVar7 = ((iVar9 * 0x100 & 0x3ffffU) >> 10) + uVar8 >> 1;
        if ((bVar2 & 2) != 0) {
          uVar7 = ~uVar7 & 0xff;
        }
        uVar3 = FUN_10127860(*(undefined1 *)(param_1 + uVar4),uVar7);
        *(undefined1 *)(param_1 + extraout_r2_06) = uVar3;
        uVar4 = extraout_r2_06;
        param_4 = extraout_r3_06;
      }
      if ((int)((uint)*(byte *)(param_5 + 0x34) << 0x1e) < 0) {
        uVar4 = (iVar6 - param_2) + iVar11;
        if (param_4 <= (int)uVar4) {
          return 0;
        }
        goto joined_r0x10127a2e;
      }
      iVar6 = uVar4 + 1;
    }
    else {
      if (iVar5 < 0) {
        uVar4 = uVar7 - 1;
        if (uVar8 != 0) {
          iVar6 = (int)-(*(int *)(param_5 + 0x28) * uVar8) >> 10;
          if ((-1 < (int)uVar7) && ((int)uVar7 < param_4)) {
            uVar8 = (iVar6 * uVar8 & 0x1ffff) >> 9;
            if ((bVar2 & 2) != 0) {
              uVar8 = ~uVar8 & 0xff;
            }
            uVar3 = FUN_10127860(*(undefined1 *)(param_1 + uVar7),uVar8);
            *(undefined1 *)(param_1 + extraout_r2_02) = uVar3;
            uVar7 = extraout_r2_02;
            param_4 = extraout_r3_02;
          }
          if ((-1 < (int)uVar4) && ((int)uVar4 < param_4)) {
            uVar7 = (((iVar6 + -0xff) * *(int *)(param_5 + 0x24) >> 10) * (0xff - iVar6) & 0x1ffffU)
                    >> 9;
            bVar12 = -1 < (int)((uint)*(byte *)(param_5 + 0x34) << 0x1e);
            if (bVar12) {
              uVar7 = ~uVar7;
            }
            if (bVar12) {
              uVar7 = uVar7 & 0xff;
            }
            uVar3 = FUN_10127860(*(undefined1 *)(param_1 + uVar4),uVar7);
            *(undefined1 *)(param_1 + uVar4) = uVar3;
            uVar7 = extraout_r2_03;
            param_4 = extraout_r3_03;
          }
          if ((int)((uint)*(byte *)(param_5 + 0x34) << 0x1e) < 0) {
            if (param_4 < (int)uVar4) {
              return 2;
            }
            if ((int)uVar4 < 1) {
              return 2;
            }
            goto LAB_10127a4a;
          }
          iVar6 = uVar7 + 1;
          if (param_4 < iVar6) {
            return 1;
          }
          bVar12 = false;
          iVar9 = iVar6;
          goto LAB_10127a42;
        }
        uVar8 = 0xff;
        goto LAB_10127bb2;
      }
      iVar6 = (int)((0xff - uVar8) * *(int *)(param_5 + 0x28)) >> 10;
      if ((-1 < (int)uVar7) && ((int)uVar7 < param_4)) {
        uVar4 = (iVar6 * (0xff - uVar8) & 0x1ffff) >> 9;
        if ((bVar2 & 2) == 0) {
          uVar4 = ~uVar4 & 0xff;
        }
        uVar3 = FUN_10127860(*(undefined1 *)(param_1 + uVar7),uVar4);
        *(undefined1 *)(param_1 + extraout_r2_04) = uVar3;
        uVar7 = extraout_r2_04;
        param_4 = extraout_r3_04;
      }
      iVar9 = uVar7 + 1;
      if ((-1 < iVar9) && (iVar9 < param_4)) {
        iVar6 = 0xff - iVar6;
        uVar4 = ((iVar6 * *(int *)(param_5 + 0x24) >> 10) * iVar6 & 0x1ffffU) >> 9;
        bVar12 = (int)((uint)*(byte *)(param_5 + 0x34) << 0x1e) < 0;
        if (bVar12) {
          uVar4 = ~uVar4;
        }
        if (bVar12) {
          uVar4 = uVar4 & 0xff;
        }
        uVar3 = FUN_10127860(*(undefined1 *)(param_1 + iVar9),uVar4);
        *(undefined1 *)(param_1 + iVar9) = uVar3;
        uVar7 = extraout_r2_05;
        param_4 = extraout_r3_05;
      }
      if ((int)((uint)*(byte *)(param_5 + 0x34) << 0x1e) < 0) goto LAB_10127a26;
      iVar6 = uVar7 + 2;
    }
    if (param_4 <= iVar6) {
      iVar6 = param_4;
    }
    if (iVar6 == 0) {
      return 0;
    }
    if (iVar6 < 1) {
      return 2;
    }
    uVar4 = param_4 - iVar6;
LAB_10127b36:
    param_1 = param_1 + iVar6;
  }
LAB_10127a4a:
  FUN_1012787a(param_1,uVar4);
  return 2;
}


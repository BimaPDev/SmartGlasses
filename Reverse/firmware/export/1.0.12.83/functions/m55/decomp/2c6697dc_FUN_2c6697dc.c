/* FUN_2c6697dc @ 0x2c6697dc */

undefined8 FUN_2c6697dc(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  
  piVar3 = (int *)FUN_2c6705d0();
  FUN_2c66962c(param_1);
  uVar13 = param_1[5];
  iVar12 = param_1[3] + -1 + *(int *)(DAT_2c669abc + param_1[4] * 4);
  if (((1 < param_1[4]) && ((uVar13 & 3) == 0)) &&
     ((uVar13 != ((int)uVar13 / 100) * 100 ||
      (uVar13 + 0x76c == ((int)(uVar13 + 0x76c) / 400) * 400)))) {
    iVar12 = iVar12 + 1;
  }
  param_1[7] = iVar12;
  if (20000 < uVar13 + 10000) {
    iVar6 = -1;
    iVar4 = -1;
    goto LAB_2c669a9a;
  }
  if ((int)uVar13 < 0x47) {
    if (uVar13 != 0x46) {
      for (uVar8 = 0x45; (int)uVar13 < (int)uVar8; uVar8 = uVar8 - 1) {
        if ((uVar8 & 3) == 0) {
          if (uVar8 == ((int)uVar8 / 100) * 100) {
            if ((int)(uVar8 + 0x76c) % 400 == 0) {
              iVar6 = 0x16e;
            }
            else {
              iVar6 = 0x16d;
            }
          }
          else {
            iVar6 = 0x16e;
          }
        }
        else {
          iVar6 = 0x16d;
        }
        iVar12 = iVar12 - iVar6;
      }
      if ((uVar8 & 3) == 0) {
        if (uVar13 == ((int)uVar13 / 100) * 100) {
          iVar6 = 0x16d;
          if ((int)(uVar13 + 0x76c) % 400 == 0) {
            iVar6 = 0x16e;
          }
        }
        else {
          iVar6 = 0x16e;
        }
      }
      else {
        iVar6 = 0x16d;
      }
      iVar12 = iVar12 - iVar6;
    }
  }
  else {
    uVar8 = 0x46;
    do {
      if ((uVar8 & 3) == 0) {
        if ((int)uVar8 % 100 == 0) {
          if ((int)(uVar8 + 0x76c) % 400 == 0) {
            iVar6 = 0x16e;
          }
          else {
            iVar6 = 0x16d;
          }
        }
        else {
          iVar6 = 0x16e;
        }
      }
      else {
        iVar6 = 0x16d;
      }
      uVar8 = uVar8 + 1;
      iVar12 = iVar12 + iVar6;
    } while (uVar13 != uVar8);
  }
  lVar1 = (longlong)iVar12 * (longlong)DAT_2c669ac0 +
          (longlong)(param_1[2] * 0xe10 + param_1[1] * 0x3c + *param_1);
  uVar11 = (uint)lVar1;
  iVar6 = (int)((ulonglong)lVar1 >> 0x20);
  FUN_2c66d84c();
  FUN_2c66d864();
  uVar8 = 0;
  if (*DAT_2c669ac4 == 0) {
LAB_2c66991e:
    uVar13 = piVar3[10];
    iVar6 = uVar13 + (uint)lVar1;
    iVar4 = (int)((ulonglong)lVar1 >> 0x20) +
            ((int)uVar13 >> 0x1f) + (uint)CARRY4(uVar13,(uint)lVar1);
  }
  else {
    uVar15 = param_1[8];
    uVar14 = uVar15;
    if (0 < (int)uVar15) {
      uVar14 = 1;
    }
    if ((piVar3[1] == param_1[5] + 0x76c) || (iVar4 = FUN_2c66d6f8(), iVar4 != 0)) {
      uVar5 = piVar3[0x14];
      uVar8 = piVar3[8] - uVar5;
      iVar9 = (piVar3[9] - ((int)uVar5 >> 0x1f)) - (uint)((uint)piVar3[8] < uVar5);
      uVar7 = piVar3[10];
      uVar10 = piVar3[0x12];
      uVar16 = uVar10 - uVar7;
      iVar4 = (piVar3[0x13] - ((int)uVar7 >> 0x1f)) - (uint)(uVar10 < uVar7);
      if (((int)((iVar6 - iVar4) - (uint)(uVar11 < uVar16)) < 0 ==
           (SBORROW4(iVar6,iVar4) != SBORROW4(iVar6 - iVar4,(uint)(uVar11 < uVar16)))) &&
         (iVar17 = (piVar3[0x13] - ((int)uVar5 >> 0x1f)) - (uint)(uVar10 < uVar5),
         bVar18 = uVar11 < uVar10 - uVar5,
         (int)((iVar6 - iVar17) - (uint)bVar18) < 0 !=
         (SBORROW4(iVar6,iVar17) != SBORROW4(iVar6 - iVar17,(uint)bVar18)))) goto LAB_2c669a68;
      if (*piVar3 != 0) {
        if ((int)((iVar6 - iVar9) - (uint)(uVar11 < uVar8)) < 0 ==
            (SBORROW4(iVar6,iVar9) != SBORROW4(iVar6 - iVar9,(uint)(uVar11 < uVar8))))
        goto LAB_2c66990c;
LAB_2c669914:
        uVar8 = 0;
        if ((int)uVar15 < 0) goto LAB_2c66991e;
LAB_2c6699f6:
        uVar11 = uVar14 ^ uVar8;
        uVar14 = uVar8;
        if (uVar11 == 1) {
          if (uVar8 == 0) {
            iVar6 = uVar5 - uVar7;
          }
          else {
            iVar6 = uVar7 - uVar5;
          }
          iVar4 = param_1[3];
          lVar2 = lVar1 + iVar6;
          *param_1 = *param_1 + iVar6;
          FUN_2c66962c(param_1);
          iVar4 = param_1[3] - iVar4;
          lVar1 = lVar1 + iVar6;
          if (iVar4 != 0) {
            if (iVar4 < 2) {
              if (iVar4 < -1) {
                iVar4 = 1;
              }
            }
            else {
              iVar4 = -1;
            }
            iVar12 = iVar12 + iVar4;
            iVar4 = iVar4 + param_1[7];
            if (iVar4 < 0) {
              uVar8 = uVar13 - 1;
              if ((uVar8 & 3) == 0) {
                if (uVar8 == ((int)uVar8 / 100) * 100) {
                  iVar4 = 0x16d;
                  if ((int)(uVar13 + 0x76b) % 400 != 0) {
                    iVar4 = 0x16c;
                  }
                }
                else {
                  iVar4 = 0x16d;
                }
              }
              else {
                iVar4 = 0x16c;
              }
            }
            else {
              if ((uVar13 & 3) == 0) {
                if (uVar13 == ((int)uVar13 / 100) * 100) {
                  iVar6 = 0x16d;
                  if ((int)(uVar13 + 0x76c) % 400 == 0) {
                    iVar6 = 0x16e;
                  }
                }
                else {
                  iVar6 = 0x16e;
                }
              }
              else {
                iVar6 = 0x16d;
              }
              if (iVar6 <= iVar4) {
                iVar4 = iVar4 - iVar6;
              }
            }
            param_1[7] = iVar4;
            lVar1 = lVar2;
          }
        }
        goto LAB_2c669a68;
      }
      if ((int)((iVar6 - iVar9) - (uint)(uVar11 < uVar8)) < 0 !=
          (SBORROW4(iVar6,iVar9) != SBORROW4(iVar6 - iVar9,(uint)(uVar11 < uVar8)))) {
LAB_2c66990c:
        if ((int)((iVar6 - iVar4) - (uint)(uVar11 < uVar16)) < 0 ==
            (SBORROW4(iVar6,iVar4) != SBORROW4(iVar6 - iVar4,(uint)(uVar11 < uVar16))))
        goto LAB_2c669914;
      }
      if (-1 < (int)uVar15) {
        uVar8 = 1;
        goto LAB_2c6699f6;
      }
    }
    else {
LAB_2c669a68:
      uVar8 = uVar14;
      if (uVar14 != 1) goto LAB_2c66991e;
    }
    uVar13 = piVar3[0x14];
    uVar8 = 1;
    iVar6 = uVar13 + (uint)lVar1;
    iVar4 = (int)((ulonglong)lVar1 >> 0x20) +
            ((int)uVar13 >> 0x1f) + (uint)CARRY4(uVar13,(uint)lVar1);
  }
  FUN_2c66d858();
  param_1[8] = uVar8;
  iVar12 = (iVar12 + 4) % 7;
  if (iVar12 < 0) {
    iVar12 = iVar12 + 7;
  }
  param_1[6] = iVar12;
LAB_2c669a9a:
  return CONCAT44(iVar4,iVar6);
}


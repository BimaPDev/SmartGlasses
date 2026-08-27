/* FUN_2c61b9d4 @ 0x2c61b9d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c61b9d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  code *pcVar16;
  bool bVar17;
  undefined8 uVar18;
  char acStack_41 [17];
  char cStack_30;
  char acStack_2f [3];
  int iStack_2c;
  int iStack_28;
  int aiStack_24 [3];
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar3 = FUN_2c602110(_LAB_2c61bbbc);
  if (iVar3 != 1) {
    return;
  }
  iVar4 = FUN_2c602408(param_2);
  iVar5 = FUN_2c602400(param_2);
  iVar3 = 1;
  if (iVar4 == 8) {
    FUN_2c5ff4d8();
    iVar4 = FUN_2c5ff4e4();
    if (iVar4 != 4) {
      iVar3 = func_0x2c6335d0();
      uVar8 = *(uint *)(iVar5 + 0x44);
      if (*(char *)(iVar3 + uVar8) == '.') {
        func_0x2c633a84(iVar5);
        uVar8 = *(uint *)(iVar5 + 0x44);
      }
      else {
        uVar14 = FUN_2c66c4ec();
        if (uVar14 == uVar8) {
          FUN_2c63339c(iVar5,uVar8 - 1);
          uVar8 = *(uint *)(iVar5 + 0x44);
        }
        else if (uVar8 == 0) {
          if (-1 < *(int *)(iVar5 + 0x6c)) {
            uVar14 = (*(byte *)(iVar5 + 0x74) & 0xf) - 1;
            goto LAB_2c61ba66;
          }
          FUN_2c63339c(iVar5,1);
          uVar8 = *(uint *)(iVar5 + 0x44);
        }
      }
      bVar1 = *(byte *)(iVar5 + 0x74);
      uVar14 = uVar8 & 0xffff;
      if ((bVar1 >> 4 < uVar8) && ((bVar1 & 0xf0) != 0)) {
        iVar3 = *(int *)(iVar5 + 0x6c);
        uVar14 = uVar14 - 1 & 0xffff;
      }
      else {
        iVar3 = *(int *)(iVar5 + 0x6c);
      }
      uVar14 = ((bVar1 & 0xf) - 1) - uVar14;
      if (iVar3 < 0) {
        uVar14 = uVar14 + 1;
      }
LAB_2c61ba66:
      iVar3 = 1;
      *(undefined4 *)(iVar5 + 0x70) = 1;
      if (uVar14 == 0) {
        return;
      }
      uVar8 = 0;
      do {
        uVar8 = uVar8 + 1 & 0xffff;
        iVar3 = iVar3 * 10;
      } while (uVar8 < uVar14);
      *(int *)(iVar5 + 0x70) = iVar3;
      return;
    }
    FUN_2c606bc0(iVar5);
    iVar4 = func_0x2c603124();
    if (iVar4 == 0) {
      return;
    }
    uVar8 = *(byte *)(iVar5 + 0x74) & 0xf;
    if ((*(byte *)(iVar5 + 0x74) & 0xf) == 0 || uVar8 == 1) {
      return;
    }
    if ((*(byte *)(iVar5 + 0x75) & 6) == 4) {
      iVar4 = *(int *)(iVar5 + 0x70);
      if (iVar4 < 2) {
        iVar4 = func_0x2c62e468(10,0,uVar8 - 2);
        iVar3 = *(int *)(iVar5 + 0x6c);
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        if (iVar3 < *(int *)(iVar5 + 0x68)) {
          iVar3 = *(int *)(iVar5 + 0x68);
        }
        if (iVar4 * 10 <= iVar3) {
          iVar4 = iVar4 * 10;
        }
        *(int *)(iVar5 + 0x70) = iVar4;
        goto FUN_2c61b7b8;
      }
      goto LAB_2c61baac;
    }
    uVar14 = *(uint *)(iVar5 + 0x70);
    uVar18 = func_0x2c62e468(10,0,uVar8 - 1);
    iVar13 = (int)((ulonglong)uVar18 >> 0x20);
    bVar17 = uVar14 < (uint)uVar18;
    iVar4 = (int)uVar14 >> 0x1f;
    if ((int)((iVar4 - iVar13) - (uint)bVar17) < 0 !=
        (SBORROW4(iVar4,iVar13) != SBORROW4(iVar4 - iVar13,(uint)bVar17))) goto LAB_2c61bb0a;
LAB_2c61babc:
    *(int *)(iVar5 + 0x70) = iVar3;
  }
  else {
    if (iVar4 != 0xd) {
      return;
    }
    FUN_2c5ff4d8();
    iVar4 = FUN_2c5ff4e4();
    piVar6 = (int *)FUN_2c602410(param_2);
    iStack_2c = *piVar6;
    if (iStack_2c == 0x13) {
      if (iVar4 != 4) {
        iVar4 = *(int *)(iVar5 + 0x70);
LAB_2c61baac:
        if (9 < iVar4) {
          iVar3 = (int)((longlong)_LAB_2c61bbc0 * (longlong)iVar4 >> 0x22) - (iVar4 >> 0x1f);
        }
        goto LAB_2c61babc;
      }
LAB_2c61b950:
      iVar4 = *(int *)(iVar5 + 100);
      iVar3 = *(int *)(iVar5 + 0x68);
      iVar13 = iVar4 + *(int *)(iVar5 + 0x70);
      if (iVar3 < iVar13) {
        if ((iVar4 != iVar3) || (-1 < (int)((uint)*(byte *)(iVar5 + 0x75) << 0x1f))) {
          *(int *)(iVar5 + 100) = iVar3;
          goto FUN_2c61b7b8;
        }
        iVar13 = *(int *)(iVar5 + 0x6c);
      }
      else if ((0 < iVar13) && (iVar4 < 0)) {
        iVar13 = *(int *)(iVar5 + 0x70) - iVar4;
      }
      *(int *)(iVar5 + 100) = iVar13;
    }
    else {
      if (iStack_2c == 0x14) {
        if (iVar4 != 4) {
LAB_2c61bb0a:
          iVar3 = *(int *)(iVar5 + 0x6c);
          if (iVar3 < 0) {
            iVar3 = -iVar3;
          }
          if (iVar3 < *(int *)(iVar5 + 0x68)) {
            iVar3 = *(int *)(iVar5 + 0x68);
          }
          if (*(int *)(iVar5 + 0x70) * 10 <= iVar3) {
            *(int *)(iVar5 + 0x70) = *(int *)(iVar5 + 0x70) * 10;
          }
          goto FUN_2c61b7b8;
        }
      }
      else {
        if (iStack_2c == 0x11) goto LAB_2c61b950;
        if (iStack_2c != 0x12) {
          aiStack_24[2] = *_LAB_2c6338ac;
          if ((-1 < (int)((uint)*(byte *)(iVar5 + 0x60) << 0x1c)) ||
             ((iStack_2c != 10 && (iStack_2c != 0xd)))) {
            aiStack_24[1] = 0;
            aiStack_24[0] = iStack_2c;
            iVar3 = func_0x2c633748(iVar5,aiStack_24);
            puVar2 = _LAB_2c6338b0;
            if (iVar3 == 1) {
              iVar3 = (*(code *)*_LAB_2c6338b0)(&iStack_2c,0);
              if (*(int *)(iVar5 + 0x38) != 0) {
                pcVar16 = (code *)*_LAB_2c6338b4;
                if ((int)((uint)*(byte *)(iVar5 + 0x60) << 0x1d) < 0) {
                  uVar15 = *(undefined4 *)(iVar5 + 0x2c);
                }
                else {
                  uVar15 = FUN_2c63736c(*(undefined4 *)(iVar5 + 0x24));
                }
                uVar8 = (*pcVar16)(uVar15);
                if (*(uint *)(iVar5 + 0x38) <= uVar8) goto LAB_2c6337ee;
              }
              pcVar7 = *(char **)(iVar5 + 0x34);
              if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
LAB_2c633800:
                if ((int)((uint)*(byte *)(iVar5 + 0x60) << 0x1d) < 0) {
                  func_0x2c633234(iVar5);
                }
                if ((*(int *)(iVar5 + 0x28) != 0) &&
                   (pcVar7 = (char *)FUN_2c63736c(*(undefined4 *)(iVar5 + 0x24)), *pcVar7 == '\0'))
                {
                  FUN_2c607df0(iVar5);
                }
                FUN_2c6387a8(*(undefined4 *)(iVar5 + 0x24),*(undefined4 *)(iVar5 + 0x44),aiStack_24)
                ;
                FUN_2c6335f4(iVar5);
                if ((int)((uint)*(byte *)(iVar5 + 0x60) << 0x1d) < 0) {
                  uVar15 = *(undefined4 *)(iVar5 + 0x2c);
                  iVar3 = FUN_2c66c4ec(uVar15);
                  iVar4 = FUN_2c66c4ec(aiStack_24);
                  iVar3 = FUN_2c62bebc(uVar15,iVar4 + iVar3 + 1);
                  *(int *)(iVar5 + 0x2c) = iVar3;
                  if (iVar3 == 0) goto LAB_2c6337ee;
                  FUN_2c62ba80(iVar3,*(undefined4 *)(iVar5 + 0x44),aiStack_24);
                  func_0x2c633318(iVar5);
                }
                FUN_2c63339c(iVar5,*(int *)(iVar5 + 0x44) + 1);
                FUN_2c602340(iVar5,0x1c,0);
              }
              else {
                iStack_28 = 0;
                while (pcVar7[iStack_28] != '\0') {
                  iVar4 = (*(code *)*puVar2)(pcVar7,&iStack_28);
                  if (iVar3 == iVar4) goto LAB_2c633800;
                  pcVar7 = *(char **)(iVar5 + 0x34);
                }
              }
            }
          }
LAB_2c6337ee:
          if (*_LAB_2c6338ac != aiStack_24[2]) {
                    /* WARNING: Subroutine does not return */
            stack_chk_fail();
          }
          return;
        }
      }
      iVar13 = *(int *)(iVar5 + 100);
      iVar3 = *(int *)(iVar5 + 0x6c);
      iVar4 = iVar13 - *(int *)(iVar5 + 0x70);
      if (iVar4 < iVar3) {
        if ((iVar13 == iVar3) && ((int)((uint)*(byte *)(iVar5 + 0x75) << 0x1f) < 0)) {
          *(undefined4 *)(iVar5 + 100) = *(undefined4 *)(iVar5 + 0x68);
        }
        else {
          *(int *)(iVar5 + 100) = iVar3;
        }
      }
      else {
        if ((iVar4 < 0) && (0 < iVar13)) {
          iVar4 = -*(int *)(iVar5 + 0x70) - iVar13;
        }
        *(int *)(iVar5 + 100) = iVar4;
      }
    }
  }
FUN_2c61b7b8:
  aiStack_24[2] = *_LAB_2c61b8f8;
  FUN_2c62c3b0(&cStack_30,0x12);
  iVar3 = *(int *)(iVar5 + 100);
  if (*(int *)(iVar5 + 0x6c) < 0) {
    iVar4 = 0;
    pcVar7 = acStack_2f;
    if (iVar3 < 0) {
      cStack_30 = '-';
    }
    else {
      cStack_30 = '+';
    }
  }
  else {
    iVar4 = 1;
    pcVar7 = &cStack_30;
  }
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  FUN_2c62dbd4(acStack_41 + 1,0xe,_LAB_2c61b8fc,iVar3);
  iVar3 = FUN_2c66c4ec(acStack_41 + 1);
  bVar1 = *(byte *)(iVar5 + 0x74);
  uVar8 = bVar1 & 0xf;
  if (0 < (int)(uVar8 - iVar3)) {
    pcVar9 = acStack_41 + iVar3 + 2;
    pcVar11 = acStack_41 + uVar8 + 1;
    do {
      pcVar9 = pcVar9 + -1;
      *pcVar11 = *pcVar9;
      pcVar11 = pcVar11 + -1;
    } while (pcVar9 != acStack_41 + 1);
    pcVar9 = acStack_41 + 1;
    do {
      pcVar11 = pcVar9 + 1;
      *pcVar9 = '0';
      pcVar9 = pcVar11;
    } while (pcVar11 != acStack_41 + (uVar8 - iVar3) + 1);
  }
  if ((bVar1 & 0xf0) == 0) {
    uVar14 = uVar8;
    if ((bVar1 & 0xf) == 0) goto LAB_2c61b85a;
LAB_2c61b840:
    iVar3 = 0;
    pcVar9 = acStack_41 + 1;
    pcVar11 = pcVar7;
    do {
      pcVar7 = pcVar11;
      if (*pcVar9 == '\0') break;
      iVar3 = iVar3 + 1;
      pcVar7 = pcVar11 + 1;
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar7;
    } while (iVar3 < (int)uVar14);
    if ((bVar1 & 0xf0) == 0) goto LAB_2c61b85a;
  }
  else {
    uVar14 = (uint)(bVar1 >> 4);
    if (uVar14 != 0) goto LAB_2c61b840;
    iVar3 = 0;
  }
  *pcVar7 = '.';
  if (iVar3 < (int)uVar8) {
    pcVar9 = acStack_41 + iVar3;
    pcVar11 = pcVar7 + 1;
    do {
      pcVar9 = pcVar9 + 1;
      if (*pcVar9 == '\0') break;
      pcVar12 = pcVar11 + 1;
      *pcVar11 = *pcVar9;
      pcVar11 = pcVar12;
    } while (pcVar12 != pcVar7 + ((uVar8 + 1) - iVar3));
  }
LAB_2c61b85a:
  func_0x2c633974(iVar5,&cStack_30);
  uVar8 = *(uint *)(iVar5 + 0x70);
  uVar10 = *(byte *)(iVar5 + 0x74) & 0xf;
  if (9 < (int)uVar8) {
    do {
      uVar10 = uVar10 - 1 & 0xff;
      bVar17 = 99 < (int)uVar8;
      uVar8 = (uint)((ulonglong)_LAB_2c61b900 * (ulonglong)uVar8 >> 0x23);
    } while (bVar17);
  }
  if (uVar14 < uVar10) {
    uVar10 = uVar10 + 1 & 0xff;
  }
  FUN_2c63339c(iVar5,uVar10 - iVar4 & 0xff);
  if (*_LAB_2c61b8f8 != aiStack_24[2]) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}


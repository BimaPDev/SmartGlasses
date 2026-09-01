/* FUN_101261bc @ 0x101261bc */

void FUN_101261bc(int param_1,int *param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  bool bVar20;
  
  FUN_1012a82e(param_2,0,0,0xffffffff,0xffffffff);
  FUN_1012a82e(param_3,0,0,0xffffffff,0xffffffff);
  uVar2 = FUN_10124cb8(param_1,0x10);
  if (uVar2 == 0) {
    return;
  }
  iVar3 = FUN_10125fbe(param_1);
  if (iVar3 == 0) {
    return;
  }
  iVar4 = FUN_10093034(0);
  if (iVar3 == 2) {
    while( true ) {
      if (iVar4 == 0) {
        return;
      }
      iVar5 = FUN_101246e6(iVar4);
      if (param_1 == iVar5) break;
      iVar4 = FUN_10093034(iVar4);
    }
  }
  iVar5 = FUN_10126008(param_1);
  iVar6 = FUN_10089f60(param_1);
  iVar7 = FUN_1008a000(param_1);
  iVar8 = FUN_1008a0c0(param_1);
  uVar9 = FUN_10125fd0(param_1);
  uVar18 = 0;
  if (((uVar9 & 0xc) != 0) && (uVar18 = uVar2, iVar3 != 1)) {
    if (iVar3 == 3) {
      if (iVar5 < 1) {
        if (iVar6 < 1) {
          uVar18 = 0;
        }
        else {
          uVar18 = 1;
        }
      }
    }
    else if (iVar3 == 2) {
      iVar10 = FUN_101246ca(iVar4);
      uVar18 = (uint)(iVar10 == 0xc);
    }
    else {
      uVar18 = 0;
    }
  }
  if ((uVar9 & 3) != 0) {
    if (iVar3 == 1) goto LAB_101262c2;
    if (iVar3 == 3) {
      if ((0 < iVar7) || (0 < iVar8)) goto LAB_101262c2;
    }
    else if ((iVar3 == 2) && (iVar3 = FUN_101246ca(iVar4), iVar3 == 3)) goto LAB_101262c2;
  }
  if (uVar18 == 0) {
    return;
  }
  uVar2 = 0;
LAB_101262c2:
  iVar4 = FUN_10125f40(param_1,0x10000);
  iVar10 = FUN_1012691c(param_1,0x10000,0x10);
  uVar9 = FUN_1012691c(param_1,0x10000,0x11);
  iVar11 = FUN_1012691c(param_1,0x10000,0x12);
  uVar12 = FUN_1012691c(param_1,0x10000,0x13);
  iVar13 = FUN_1012691c(param_1,0x10000,1);
  iVar14 = FUN_10125790(param_1);
  iVar15 = FUN_10125786(param_1);
  iVar3 = iVar13;
  if (uVar18 == 0) {
    iVar3 = 0;
  }
  iVar17 = iVar13;
  if (uVar2 == 0) {
    iVar17 = 0;
  }
  bVar1 = FUN_1012691c(param_1,0x10000,0x21);
  if ((1 < bVar1) || (bVar1 = FUN_1012691c(param_1,0x10000,0x31), 1 < bVar1)) {
    if (uVar18 != 0) {
      iVar5 = iVar5 + iVar6;
      if (iVar14 + iVar5 != 0) {
        param_3[1] = *(int *)(param_1 + 0x18);
        param_3[3] = *(int *)(param_1 + 0x20);
        if (iVar4 == 1) {
          iVar16 = *(int *)(param_1 + 0x14) + iVar11;
          *param_3 = iVar16;
          param_3[2] = iVar16 + iVar13 + -1;
        }
        else {
          iVar16 = *(int *)(param_1 + 0x1c) - uVar12;
          param_3[2] = iVar16;
          *param_3 = iVar16 + (1 - iVar13);
        }
        iVar19 = (iVar14 - (uVar9 + iVar10)) - iVar17;
        iVar16 = (iVar19 * iVar14) / (iVar14 + iVar5);
        iVar14 = FUN_10092f48(0);
        if (iVar14 * 0x1e + 0x50 < 0x140) {
          iVar14 = 1;
        }
        else {
          iVar14 = FUN_10092f48(0);
          iVar14 = (iVar14 * 0x1e + 0x50) / 0xa0;
        }
        if (iVar16 <= iVar14) {
          iVar14 = FUN_10092f48(0);
          if (iVar14 * 0x1e + 0x50 < 0x140) {
            iVar16 = 1;
          }
          else {
            iVar14 = FUN_10092f48(0);
            iVar16 = (iVar14 * 0x1e + 0x50) / 0xa0;
          }
        }
        iVar14 = *(int *)(param_1 + 0x18) + iVar10;
        if (iVar5 < 1) {
          param_3[1] = iVar14;
          param_3[3] = (~uVar9 + *(int *)(param_1 + 0x20)) - iVar17;
        }
        else {
          iVar19 = iVar19 - iVar16;
          iVar6 = (iVar14 + iVar19) - (iVar19 * iVar6) / iVar5;
          param_3[1] = iVar6;
          iVar5 = *(int *)(param_1 + 0x18);
          param_3[3] = iVar16 + -1 + iVar6;
          iVar10 = iVar10 + iVar5;
          if (iVar6 < iVar10) {
            param_3[1] = iVar10;
            iVar5 = FUN_10092f48(0);
            if (iVar5 * 0x1e + 0x50 < 0x140) {
              iVar5 = 1;
            }
            else {
              iVar5 = FUN_10092f48(0);
              iVar5 = (iVar5 * 0x1e + 0x50) / 0xa0;
            }
            if (param_3[3] < iVar5 + iVar10) {
              iVar6 = param_3[1];
              iVar5 = FUN_10092f48(0);
              if (iVar5 * 0x1e + 0x50 < 0x140) {
                iVar5 = 1;
              }
              else {
                iVar5 = FUN_10092f48(0);
                iVar5 = (iVar5 * 0x1e + 0x50) / 0xa0;
              }
              param_3[3] = iVar5 + iVar6;
            }
          }
          iVar17 = (*(int *)(param_1 + 0x20) - uVar9) - iVar17;
          if (iVar17 < param_3[3]) {
            param_3[3] = iVar17;
            iVar5 = FUN_10092f48(0);
            if (iVar5 * 0x1e + 0x50 < 0x140) {
              iVar5 = 1;
            }
            else {
              iVar5 = FUN_10092f48(0);
              iVar5 = (iVar5 * 0x1e + 0x50) / 0xa0;
            }
            if (iVar17 - iVar5 < param_3[1]) {
              iVar6 = param_3[3];
              iVar5 = FUN_10092f48(0);
              if (iVar5 * 0x1e + 0x50 < 0x140) {
                iVar5 = 1;
              }
              else {
                iVar5 = FUN_10092f48(0);
                iVar5 = (iVar5 * 0x1e + 0x50) / 0xa0;
              }
              param_3[1] = iVar6 - iVar5;
            }
          }
        }
      }
    }
    if (uVar2 != 0) {
      iVar7 = iVar7 + iVar8;
      if (iVar15 + iVar7 != 0) {
        iVar5 = *(int *)(param_1 + 0x20) - uVar9;
        param_2[3] = iVar5;
        iVar6 = *(int *)(param_1 + 0x14);
        param_2[1] = (1 - iVar13) + iVar5;
        *param_2 = iVar6;
        param_2[2] = *(int *)(param_1 + 0x1c);
        iVar10 = (iVar15 - (uVar12 + iVar11)) - iVar3;
        iVar5 = (iVar10 * iVar15) / (iVar15 + iVar7);
        iVar6 = FUN_10092f48(0);
        if (iVar6 * 0x1e + 0x50 < 0x140) {
          iVar6 = 1;
        }
        else {
          iVar6 = FUN_10092f48(0);
          iVar6 = (iVar6 * 0x1e + 0x50) / 0xa0;
        }
        if (iVar5 <= iVar6) {
          iVar5 = FUN_10092f48(0);
          if (iVar5 * 0x1e + 0x50 < 0x140) {
            iVar5 = 1;
          }
          else {
            iVar5 = FUN_10092f48(0);
            iVar5 = (iVar5 * 0x1e + 0x50) / 0xa0;
          }
        }
        iVar6 = *(int *)(param_1 + 0x14);
        if (iVar7 < 1) {
          iVar5 = *(int *)(param_1 + 0x1c);
          if (iVar4 == 1) {
            *param_2 = iVar6 + iVar11 + -1 + iVar3;
            param_2[2] = iVar5 - uVar12;
          }
          else {
            *param_2 = iVar11 + iVar6;
            param_2[2] = (~uVar12 + iVar5) - iVar3;
          }
        }
        else {
          iVar10 = iVar10 - iVar5;
          iVar10 = iVar10 - (iVar10 * iVar8) / iVar7;
          if (iVar4 == 1) {
            iVar10 = iVar6 + iVar11 + iVar3 + iVar10;
            *param_2 = iVar10;
            iVar3 = iVar11 + *(int *)(param_1 + 0x14) + iVar3;
            param_2[2] = iVar10 + iVar5 + -1;
            if (iVar10 < iVar3) {
              *param_2 = iVar3;
              iVar4 = FUN_10092f48(0);
              if (iVar4 * 0x1e + 0x50 < 0x140) {
                iVar4 = 1;
              }
              else {
                iVar4 = FUN_10092f48(0);
                iVar4 = (iVar4 * 0x1e + 0x50) / 0xa0;
              }
              if (param_2[2] < iVar4 + iVar3) {
                iVar4 = *param_2;
                iVar3 = FUN_10092f48(0);
                if (iVar3 * 0x1e + 0x50 < 0x140) {
                  iVar3 = 1;
                }
                else {
                  iVar3 = FUN_10092f48(0);
                  iVar3 = (iVar3 * 0x1e + 0x50) / 0xa0;
                }
                param_2[2] = iVar3 + iVar4;
              }
            }
            iVar3 = *(int *)(param_1 + 0x1c) - uVar12;
            if (param_2[2] <= iVar3) {
              return;
            }
            param_2[2] = iVar3;
            iVar4 = FUN_10092f48(0);
            if (iVar4 * 0x1e + 0x50 < 0x140) {
              iVar4 = 1;
            }
            else {
              iVar4 = FUN_10092f48(0);
              iVar4 = (iVar4 * 0x1e + 0x50) / 0xa0;
            }
            bVar20 = SBORROW4(iVar3 - iVar4,*param_2);
            iVar3 = (iVar3 - iVar4) - *param_2;
          }
          else {
            iVar10 = iVar6 + iVar11 + iVar10;
            *param_2 = iVar10;
            iVar11 = iVar11 + *(int *)(param_1 + 0x14);
            param_2[2] = iVar10 + iVar5 + -1;
            if (iVar10 < iVar11) {
              *param_2 = iVar11;
              iVar4 = FUN_10092f48(0);
              if (iVar4 * 0x1e + 0x50 < 0x140) {
                iVar4 = 1;
              }
              else {
                iVar4 = FUN_10092f48(0);
                iVar4 = (iVar4 * 0x1e + 0x50) / 0xa0;
              }
              if (param_2[2] < iVar11 + iVar4) {
                iVar5 = *param_2;
                iVar4 = FUN_10092f48(0);
                if (iVar4 * 0x1e + 0x50 < 0x140) {
                  iVar4 = 1;
                }
                else {
                  iVar4 = FUN_10092f48(0);
                  iVar4 = (iVar4 * 0x1e + 0x50) / 0xa0;
                }
                param_2[2] = iVar4 + iVar5;
              }
            }
            iVar3 = (*(int *)(param_1 + 0x1c) - uVar12) - iVar3;
            if (param_2[2] <= iVar3) {
              return;
            }
            param_2[2] = iVar3;
            iVar4 = FUN_10092f48(0);
            if (iVar4 * 0x1e + 0x50 < 0x140) {
              iVar4 = 1;
            }
            else {
              iVar4 = FUN_10092f48(0);
              iVar4 = (iVar4 * 0x1e + 0x50) / 0xa0;
            }
            bVar20 = SBORROW4(iVar3 - iVar4,*param_2);
            iVar3 = (iVar3 - iVar4) - *param_2;
          }
          if (iVar3 < 0 != bVar20) {
            iVar4 = param_2[2];
            iVar3 = FUN_10092f48(0);
            if (iVar3 * 0x1e + 0x50 < 0x140) {
              iVar3 = 1;
            }
            else {
              iVar3 = FUN_10092f48(0);
              iVar3 = (iVar3 * 0x1e + 0x50) / 0xa0;
            }
            *param_2 = iVar4 - iVar3;
          }
        }
      }
    }
  }
  return;
}


/* FUN_10087738 @ 0x10087738 */

void FUN_10087738(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  
  piVar1 = DAT_10087a10;
  iVar3 = *(int *)(param_1 + 0x44);
  iVar8 = (uint)*(byte *)(param_1 + 1) << 0x1c;
  *DAT_10087a10 = iVar3;
  piVar2 = DAT_10087a14;
  if (iVar8 < 0) {
    return;
  }
  uVar11 = *(undefined4 *)(*(int *)*DAT_10087a14 + 0x10);
  if ((iVar3 == 0) ||
     ((*(int *)(param_1 + 0x4c) == 0 &&
      (iVar3 = FUN_10124cb8(iVar3,0x2000,iVar8,0,param_4), iVar3 == 0)))) {
    iVar8 = param_1 + 4;
    uVar4 = FUN_10086c48(uVar11);
    iVar3 = FUN_10124726(uVar4,iVar8);
    *piVar1 = iVar3;
    if (iVar3 == 0) {
      uVar4 = FUN_10086c14(uVar11);
      iVar3 = FUN_10124726(uVar4,iVar8);
      *piVar1 = iVar3;
      if (iVar3 == 0) {
        uVar11 = FUN_10086bac(uVar11);
        iVar3 = FUN_10124726(uVar11,iVar8);
        *piVar1 = iVar3;
      }
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      FUN_1008895c(param_1);
      iVar3 = FUN_100874e0(param_1);
      if (iVar3 != 0) {
        return;
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x44);
  if (iVar3 == *piVar1) goto LAB_100877b4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 8);
  if (iVar3 != 0) {
    FUN_10086f50(iVar3,3,*piVar2);
    iVar3 = FUN_100874e0(param_1);
    if (iVar3 != 0) {
      return;
    }
  }
  iVar3 = *piVar1;
  *(int *)(param_1 + 0x44) = iVar3;
  *(int *)(param_1 + 0x48) = iVar3;
  if (iVar3 == 0) goto LAB_100877b4;
  uVar11 = FUN_1012a75c();
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfe;
  *(undefined4 *)(param_1 + 0x70) = uVar11;
  *(ushort *)(param_1 + 0x6c) = *(ushort *)(param_1 + 0x6c) & 0xfe00;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_10086f50(*piVar1,1,*piVar2);
  iVar3 = FUN_100874e0(param_1);
  if (iVar3 != 0) {
    return;
  }
  iVar3 = *piVar2;
  if ((int)((uint)*(byte *)(iVar3 + 5) << 0x1c) < 0) {
    return;
  }
  iVar8 = FUN_10124cb8(*piVar1,4);
  if ((iVar8 != 0) && (*(int *)(iVar3 + 0x54) != *piVar1)) {
    iVar8 = FUN_10124ce2();
    iVar14 = iVar3 + 4;
    if (*(int *)(iVar3 + 0x54) == 0) {
      if (iVar8 != 0) {
LAB_10087a40:
        iVar10 = *(int *)(iVar3 + 0x54);
        iVar5 = 0;
        if (iVar10 == 0) goto LAB_10087a66;
        uVar11 = 0xf;
        iVar9 = *piVar2;
LAB_10087a4a:
        FUN_10086f50(iVar10,uVar11,iVar9);
        iVar5 = FUN_100874e0(iVar14);
        if (iVar5 == 0) goto LAB_10087a58;
        goto LAB_10087a02;
      }
LAB_10087a92:
      if (*(int *)(iVar3 + 0x54) != 0) {
        FUN_10086f50(*(int *)(iVar3 + 0x54),0xf,*piVar2);
        iVar8 = FUN_100874e0(iVar14);
        if (iVar8 != 0) goto LAB_10087a02;
      }
      iVar8 = *piVar2;
      iVar5 = *piVar1;
LAB_10087a9e:
      FUN_10086f50(iVar5,0xe,iVar8);
    }
    else {
      iVar5 = FUN_10124ce2();
      if (iVar8 == iVar5) {
        if (iVar8 == 0) goto LAB_10087a92;
        iVar5 = *piVar1;
      }
      else {
        if (iVar5 == 0) goto LAB_10087a40;
LAB_10087a66:
        iVar10 = *(int *)(iVar3 + 0x54);
        if (iVar10 != 0) {
          iVar9 = *piVar2;
          if (iVar5 == 0) {
            uVar11 = 0xf;
          }
          else {
            uVar11 = 0x10;
          }
          goto LAB_10087a4a;
        }
LAB_10087a58:
        iVar5 = *piVar1;
        if (iVar8 == 0) {
          iVar8 = *piVar2;
          goto LAB_10087a9e;
        }
      }
      FUN_101245ce(iVar5);
    }
    iVar8 = FUN_100874e0(iVar14);
    if (iVar8 == 0) {
      *(int *)(iVar3 + 0x54) = *piVar1;
    }
  }
LAB_10087a02:
  iVar3 = FUN_100874e0(param_1);
  if (iVar3 != 0) {
    return;
  }
LAB_100877b4:
  iVar3 = *(int *)(param_1 + 4) - *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x24) = iVar3;
  iVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x28) = iVar8;
  *(int *)(param_1 + 0x34) = (iVar3 + *(int *)(param_1 + 0x34)) / 2;
  *(int *)(param_1 + 0x38) = (iVar8 + *(int *)(param_1 + 0x38)) / 2;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x38);
  if (*piVar1 != 0) {
    FUN_10086f50(*piVar1,2,*piVar2);
    iVar3 = FUN_100874e0(param_1);
    if ((iVar3 == 0) && (-1 < (int)((uint)*(byte *)(*piVar2 + 5) << 0x1c))) {
      FUN_10088488(param_1);
      iVar3 = FUN_100874e0(param_1);
      if (iVar3 == 0) {
        if ((*(int *)(param_1 + 0x4c) == 0) && (-1 < (int)((uint)*(byte *)(param_1 + 0x6d) << 0x1f))
           ) {
          for (iVar3 = *(int *)(param_1 + 0x44); iVar3 != 0; iVar3 = FUN_10126fae(iVar3)) {
            iVar8 = FUN_10124cb8(iVar3,0x8000);
            if (iVar8 == 0) {
              uVar7 = *(uint *)(param_1 + 0x24);
              iVar8 = *(int *)*piVar2;
              uVar13 = (uint)*(byte *)(iVar8 + 0x1a);
              uVar12 = *(uint *)(param_1 + 0x28);
              if (((int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)) < (int)uVar13) &&
                 ((int)((uVar12 ^ (int)uVar12 >> 0x1f) - ((int)uVar12 >> 0x1f)) < (int)uVar13)) {
                *(undefined4 *)(param_1 + 100) = 0;
                *(undefined4 *)(param_1 + 0x68) = 0;
              }
              uVar7 = uVar7 + *(int *)(param_1 + 100);
              *(uint *)(param_1 + 100) = uVar7;
              uVar12 = *(int *)(param_1 + 0x68) + uVar12;
              *(uint *)(param_1 + 0x68) = uVar12;
              uVar13 = (uint)*(byte *)(iVar8 + 0x1b);
              iVar14 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f);
              iVar8 = (uVar12 ^ (int)uVar12 >> 0x1f) - ((int)uVar12 >> 0x1f);
              if (((int)uVar13 < iVar14) || ((int)uVar13 < iVar8)) {
                *(byte *)(param_1 + 0x6d) = *(byte *)(param_1 + 0x6d) | 1;
                if (iVar8 < iVar14) {
                  if ((int)uVar7 < 1) {
                    cVar6 = '\x01';
                  }
                  else {
                    cVar6 = '\x02';
                  }
                }
                else if ((int)uVar12 < 1) {
                  cVar6 = '\x04';
                }
                else {
                  cVar6 = '\b';
                }
                *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xf | cVar6 << 4;
                FUN_10086f50(iVar3,0xc);
                FUN_100874e0(param_1);
              }
              break;
            }
          }
        }
        iVar3 = FUN_100874e0(param_1);
        if ((iVar3 == 0) && (*(int *)(param_1 + 0x4c) == 0)) {
          if (-1 < (int)((uint)*(byte *)(param_1 + 1) << 0x1f)) {
            uVar12 = FUN_1012a764(*(undefined4 *)(param_1 + 0x70));
            if (*(ushort *)(*(int *)*piVar2 + 0x1c) < uVar12) {
              FUN_10086f50(*piVar1,5);
              iVar3 = FUN_100874e0(param_1);
              if (iVar3 != 0) {
                return;
              }
              *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
              uVar11 = FUN_1012a75c();
              *(undefined4 *)(param_1 + 0x74) = uVar11;
            }
            if (*(int *)(param_1 + 0x4c) != 0) {
              return;
            }
            if (-1 < (int)((uint)*(byte *)(param_1 + 1) << 0x1f)) {
              return;
            }
          }
          uVar12 = FUN_1012a764(*(undefined4 *)(param_1 + 0x74));
          if (*(ushort *)(*(int *)*piVar2 + 0x1e) < uVar12) {
            FUN_10086f50(*piVar1,6);
            iVar3 = FUN_100874e0(param_1);
            if (iVar3 == 0) {
              uVar11 = FUN_1012a75c();
              *(undefined4 *)(param_1 + 0x74) = uVar11;
            }
          }
        }
      }
    }
  }
  return;
}


/* FUN_100ec360 @ 0x100ec360 */

int FUN_100ec360(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  undefined1 *local_48;
  uint local_44;
  short local_38;
  char local_36;
  ushort local_34;
  ushort local_2e;
  
  iVar1 = thunk_FUN_1009f30c(0x48,DAT_100ec648);
  uVar13 = (DAT_100ec64c - DAT_100ec650) * 0x20 & 0xff00;
  if (iVar1 == 0) {
    FUN_100a5b78(DAT_100ec654 | uVar13,DAT_100ec65c,DAT_100ec658);
    return 0;
  }
  FUN_1011ea48(iVar1,0,0x48);
  if (param_1 != 0) {
    FUN_100a5b78(DAT_100ec660 | uVar13,DAT_100ec65c,DAT_100ec664,param_1);
    iVar2 = FUN_10138fe6();
    if (iVar2 == 0) {
      iVar3 = FUN_1006ba84(iVar1,param_1,1);
      iVar2 = 0;
      if (iVar3 < 0) {
        FUN_100a5b78(DAT_100ec6a8 | uVar13,DAT_100ec65c,DAT_100ec680,param_1);
        goto LAB_100ec3de;
      }
LAB_100ec4da:
      iVar3 = FUN_1011ea10(param_1);
      uVar5 = thunk_FUN_1009f30c(iVar3 + 1,DAT_100ec648);
      *(undefined4 *)(iVar1 + 0x34) = uVar5;
      iVar3 = FUN_1011ea10(param_1);
      FUN_1011ea48(uVar5,0,iVar3 + 1);
      FUN_1011e9f0(*(undefined4 *)(iVar1 + 0x34),param_1);
      goto LAB_100ec504;
    }
    iVar2 = FUN_1011ea10(param_1);
    iVar2 = thunk_FUN_1009f30c(iVar2 + 1,DAT_100ec648);
    if (iVar2 == 0) {
      FUN_100a5b78(DAT_100ec668 | uVar13,DAT_100ec65c,DAT_100ec66c);
      goto LAB_100ec3de;
    }
    iVar3 = FUN_1011ea10(param_1);
    FUN_1011ea48(iVar2,0,iVar3 + 1);
    FUN_1011e9f0(iVar2,param_1);
    iVar3 = FUN_1011ea08(iVar2,0x3a);
    uVar8 = DAT_100ec6bc;
    if (iVar3 != -1) {
      FUN_100a5b78(DAT_100ec670 | uVar13,DAT_100ec65c,DAT_100ec674,1);
      FUN_100a5b78(uVar13 | uVar8,DAT_100ec65c,DAT_100ec678,1,*(undefined1 *)(iVar3 + 1));
      *(undefined1 *)(iVar3 + 1) = 0x42;
      iVar4 = FUN_1006ba84(iVar1,iVar2,1);
      if (-1 < iVar4) {
        uVar5 = 1;
LAB_100ec4c8:
        FUN_100a5b78(uVar13 | 0x6800032,DAT_100ec65c,DAT_100ec684,uVar5,iVar2);
        goto LAB_100ec4da;
      }
      FUN_100a5b78(uVar13 | uVar8,DAT_100ec65c,DAT_100ec678,0,*(undefined1 *)(iVar3 + 1));
      *(undefined1 *)(iVar3 + 1) = 0x41;
      iVar3 = FUN_1006ba84(iVar1,iVar2,1);
      if (-1 < iVar3) {
        uVar5 = 0;
        goto LAB_100ec4c8;
      }
      iVar3 = FUN_1006ba84(iVar1,param_1,1);
      if (-1 < iVar3) goto LAB_100ec4da;
      uVar13 = DAT_100ec67c | uVar13;
      uVar5 = DAT_100ec680;
      param_3 = param_1;
LAB_100ec4ba:
      FUN_100a5b78(uVar13,DAT_100ec65c,uVar5,param_3);
    }
    goto LAB_100ec4be;
  }
  FUN_100a5b78(DAT_100ec6ac | uVar13,DAT_100ec65c,DAT_100ec6b0);
  iVar2 = 0;
LAB_100ec504:
  uVar8 = DAT_100ecba8;
  uVar5 = DAT_100ecba4;
  uVar10 = DAT_100ecba0;
  if (param_2 == 0) {
LAB_100ec63e:
    FUN_100a5b78(uVar8 | uVar13,uVar5,uVar10);
  }
  else {
    FUN_100a5b78(DAT_100ec688 | uVar13,DAT_100ec65c,DAT_100ec68c,param_2);
    iVar3 = FUN_10138fca(0,0x38,DAT_100ec690);
    *(int *)(iVar1 + 0x40) = iVar3;
    if (iVar3 == 0) {
      FUN_100a5b78(uVar13 | 0x4800031,DAT_100ec698,DAT_100ec694);
LAB_100ec53a:
      FUN_100ebda8();
    }
    else {
      FUN_1011ea48(iVar3,0,0x38);
      iVar3 = FUN_1011ea10(param_2);
      iVar3 = thunk_FUN_1009f30c(iVar3 + 1,DAT_100ec690);
      uVar8 = DAT_100ec6b8;
      uVar5 = DAT_100ec698;
      uVar10 = DAT_100ec6b4;
      if (iVar3 == 0) goto LAB_100ec63e;
      iVar4 = FUN_1011ea10(param_2);
      FUN_1011ea48(iVar3,0,iVar4 + 1);
      FUN_1011e9f0(iVar3,param_2);
      iVar4 = FUN_10138fe6();
      if ((iVar4 == 0) || (iVar4 = FUN_1011ea08(iVar3,0x3a), 0x42 < *(byte *)(iVar4 + 1))) {
        local_48 = (undefined1 *)0x0;
        local_44 = 0;
      }
      else {
        local_48 = (undefined1 *)(iVar4 + 1);
        local_44 = 1;
      }
      iVar4 = 0;
      uVar8 = DAT_100ec9a8 | uVar13;
      do {
        if (local_48 != (undefined1 *)0x0) {
          *local_48 = *(undefined1 *)(iVar4 + DAT_100ec9ac);
        }
        if (iVar4 == 0) {
          iVar14 = iVar1 + 0xc;
          iVar6 = FUN_1006ba84(iVar14,iVar3,1);
          if (iVar6 < 0) {
            FUN_100a5b78(DAT_100ec9b0 | uVar13,DAT_100ec9b8,DAT_100ec9b4,iVar3);
          }
          else {
            FUN_1006bd24(iVar14,0,0);
            uVar7 = FUN_1006bc84(iVar14,&local_38,0x10);
            uVar9 = DAT_100ec9c0;
            uVar5 = DAT_100ec9bc;
            if (((0xf < uVar7) && (uVar9 = DAT_100ec9c8, uVar5 = DAT_100ec9c4, local_38 == 0x4552))
               && (local_36 == 'S')) {
              piVar12 = (int *)FUN_10138fca(0,(uint)local_34 << 4,DAT_100ec9cc);
              if (piVar12 == (int *)0x0) {
                FUN_100a5b78(DAT_100ec9d0 | uVar13,DAT_100ec9b8,DAT_100ec9d4);
              }
              else {
                uVar9 = FUN_1006bc84(iVar14,piVar12,(uint)local_34 << 4);
                uVar7 = (uint)local_34;
                if (uVar9 < uVar7 << 4) {
                  FUN_100a5b78(uVar13 | 0x4d80031,DAT_100ec9b8,DAT_100ec9d8);
                  FUN_10138fd0(0,piVar12);
                  goto LAB_100ec76a;
                }
                iVar6 = *(int *)(iVar1 + 0x40);
                *(undefined4 *)(iVar6 + 0xc) = 1;
                *(uint *)(iVar6 + 0x10) = uVar7;
                uVar5 = FUN_10138fca(0,uVar7 << 2,DAT_100ec9cc);
                *(undefined4 *)(iVar6 + 0x14) = uVar5;
                iVar6 = *(int *)(iVar1 + 0x40);
                if (*(int *)(iVar6 + 0x14) == 0) {
                  FUN_100a5b78(DAT_100ec9dc | uVar13,DAT_100ec9b8,DAT_100ec9e0);
                  FUN_10138fd0(0,piVar12);
                }
                else {
                  uVar5 = FUN_10138fca(0,(uint)local_34 << 2,DAT_100ec9cc);
                  *(undefined4 *)(iVar6 + 0x18) = uVar5;
                  iVar6 = *(int *)(iVar1 + 0x40);
                  if (*(int *)(iVar6 + 0x18) != 0) {
                    FUN_100a5b78(uVar13 | 0x4f80032,DAT_100ec9b8,DAT_100ec9e8,
                                 *(undefined4 *)(iVar6 + 0xc),*(undefined4 *)(iVar6 + 0x10));
                    piVar11 = piVar12;
                    for (iVar6 = 0; iVar6 < (int)(uint)local_34; iVar6 = iVar6 + 1) {
                      iVar14 = *(int *)(*(int *)(iVar1 + 0x40) + 0x18);
                      *(int *)(*(int *)(*(int *)(iVar1 + 0x40) + 0x14) + iVar6 * 4) = *piVar11 + 4;
                      *(uint *)(iVar14 + iVar6 * 4) =
                           CONCAT12(*(undefined1 *)((int)piVar11 + 0xf),(short)piVar11[1]) - 4;
                      piVar11 = piVar11 + 4;
                    }
                    goto LAB_100ec884;
                  }
                  FUN_100a5b78(DAT_100ec9e4 | uVar13,DAT_100ec9b8,DAT_100ec9e0);
                  FUN_10138fd0(0,piVar12);
                  FUN_10138fd0(0,*(undefined4 *)(*(int *)(iVar1 + 0x40) + 0x14));
                  iVar14 = *(int *)(iVar1 + 0x40);
                  *(undefined4 *)(iVar14 + 0x14) = 0;
                }
              }
LAB_100ec7ac:
              FUN_1006bc30(iVar14);
              FUN_1012d1f4(iVar3);
              goto LAB_100ec53a;
            }
            FUN_100a5b78(uVar9 | uVar13,DAT_100ec9b8,uVar5);
LAB_100ec76a:
            FUN_1006bc30(iVar14);
          }
          break;
        }
        iVar6 = FUN_1006ba84(*(int *)(iVar1 + 0x40) + 0x1c,iVar3,1);
        if (-1 < iVar6) {
          FUN_1006bd24(*(int *)(iVar1 + 0x40) + 0x1c,0);
          uVar9 = FUN_1006bc84(*(int *)(iVar1 + 0x40) + 0x1c,&local_38,0x10);
          if (0xf < uVar9) {
            piVar12 = (int *)FUN_10138fca(0,(uint)local_34 << 4,DAT_100ec9cc);
            if (piVar12 == (int *)0x0) {
              FUN_100a5b78(DAT_100ec9f0 | uVar13,DAT_100ec9b8,DAT_100ec9d4);
LAB_100ec924:
              iVar14 = *(int *)(iVar1 + 0x40);
            }
            else {
              uVar9 = FUN_1006bc84(*(int *)(iVar1 + 0x40) + 0x1c,piVar12,(uint)local_34 << 4);
              uVar7 = (uint)local_34;
              if (uVar9 < uVar7 << 4) {
                FUN_100a5b78(DAT_100ec9f4 | uVar13,DAT_100ec9b8,DAT_100ec9d8);
                FUN_10138fd0(0,piVar12);
                iVar14 = *(int *)(iVar1 + 0x40) + 0x1c;
                goto LAB_100ec76a;
              }
              iVar6 = *(int *)(iVar1 + 0x40);
              *(uint *)(iVar6 + 0x28) = (uint)local_2e;
              *(uint *)(iVar6 + 0x2c) = local_2e + uVar7 + -1;
              uVar5 = FUN_10138fca(0,uVar7 << 2,DAT_100ec9cc);
              *(undefined4 *)(iVar6 + 0x30) = uVar5;
              iVar6 = *(int *)(iVar1 + 0x40);
              if (*(int *)(iVar6 + 0x30) == 0) {
                FUN_100a5b78(uVar13 | 0x5280031,DAT_100ec9b8,DAT_100ec9e0);
                FUN_10138fd0(0,piVar12);
                goto LAB_100ec924;
              }
              uVar5 = FUN_10138fca(0,(uint)local_34 << 2,DAT_100ecb8c);
              iVar14 = *(int *)(iVar1 + 0x40);
              *(undefined4 *)(iVar6 + 0x34) = uVar5;
              if (*(int *)(iVar14 + 0x34) != 0) {
                FUN_100a5b78(uVar8,DAT_100ecb98,DAT_100ecb9c,*(undefined4 *)(iVar14 + 0x28),
                             *(undefined4 *)(iVar14 + 0x2c));
                piVar11 = piVar12;
                for (iVar6 = 0; iVar6 < (int)(uint)local_34; iVar6 = iVar6 + 1) {
                  iVar14 = *(int *)(*(int *)(iVar1 + 0x40) + 0x34);
                  *(int *)(*(int *)(*(int *)(iVar1 + 0x40) + 0x30) + iVar6 * 4) = *piVar11 + 4;
                  *(uint *)(iVar14 + iVar6 * 4) =
                       CONCAT12(*(undefined1 *)((int)piVar11 + 0xf),(short)piVar11[1]) - 4;
                  piVar11 = piVar11 + 4;
                }
LAB_100ec884:
                FUN_10138fd0(0,piVar12);
                *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + 1;
                goto LAB_100ec892;
              }
              FUN_100a5b78(DAT_100ecb90 | uVar13,DAT_100ecb98,DAT_100ecb94);
              FUN_10138fd0(0,piVar12);
              FUN_10138fd0(0,*(undefined4 *)(*(int *)(iVar1 + 0x40) + 0x30));
              iVar14 = *(int *)(iVar1 + 0x40);
              *(undefined4 *)(iVar14 + 0x30) = 0;
            }
            iVar14 = iVar14 + 0x1c;
            goto LAB_100ec7ac;
          }
          FUN_100a5b78(DAT_100ec9ec | uVar13,DAT_100ec9b8,DAT_100ec9bc);
          break;
        }
LAB_100ec892:
        uVar9 = iVar4 + 1;
        iVar4 = 1;
      } while (uVar9 <= local_44);
      FUN_1012d1f4(iVar3);
    }
  }
  if (param_3 != 0) {
    FUN_100a5b78(DAT_100ec69c | uVar13,DAT_100ec65c,DAT_100ec6a0,param_3);
    iVar3 = FUN_10138fe6();
    iVar4 = iVar1 + 0x18;
    if (iVar3 == 0) {
      iVar3 = FUN_1006ba84(iVar4,param_3,1);
      if (-1 < iVar3) goto LAB_100ecab2;
      FUN_100a5b78(DAT_100ecbac | uVar13,DAT_100ecba4,DAT_100ecbb0,param_3);
      if (iVar2 == 0) goto LAB_100ec3de;
    }
    else {
      if (iVar2 != 0) {
        FUN_1012d1f4(iVar2);
      }
      iVar2 = FUN_1011ea10(param_3);
      iVar2 = thunk_FUN_1009f30c(iVar2 + 1,DAT_100ec648);
      iVar3 = FUN_1011ea10(param_3);
      FUN_1011ea48(iVar2,0,iVar3 + 1);
      FUN_1011e9f0(iVar2,param_3);
      iVar3 = FUN_1011ea08(iVar2,0x3a);
      if (iVar3 != -1) {
        *(undefined1 *)(iVar3 + 1) = 0x42;
        iVar6 = FUN_1006ba84(iVar4,iVar2,1);
        if (iVar6 < 0) {
          *(undefined1 *)(iVar3 + 1) = 0x41;
          iVar3 = FUN_1006ba84(iVar4,iVar2,1);
          if ((iVar3 < 0) && (iVar3 = FUN_1006ba84(iVar4,param_3,1), iVar3 < 0)) {
            uVar13 = uVar13 | 0x6d80031;
            uVar5 = DAT_100ec6a4;
            goto LAB_100ec4ba;
          }
        }
LAB_100ecab2:
        iVar3 = FUN_1011ea10(param_3);
        uVar5 = thunk_FUN_1009f30c(iVar3 + 1,DAT_100ecbb4);
        *(undefined4 *)(iVar1 + 0x38) = uVar5;
        iVar3 = FUN_1011ea10(param_3);
        FUN_1011ea48(uVar5,0,iVar3 + 1);
        FUN_1011e9f0(*(undefined4 *)(iVar1 + 0x38),param_3);
        goto LAB_100ecadc;
      }
    }
LAB_100ec4be:
    FUN_1012d1f4(iVar2);
LAB_100ec3de:
    FUN_1006bc30(iVar1);
    FUN_1006bc30(iVar1 + 0xc);
    FUN_1006bc30(iVar1 + 0x18);
    if (*(int *)(iVar1 + 0x34) != 0) {
      FUN_1012d1f4();
      *(undefined4 *)(iVar1 + 0x34) = 0;
    }
    if (*(int *)(iVar1 + 0x38) != 0) {
      FUN_1012d1f4();
      *(undefined4 *)(iVar1 + 0x38) = 0;
    }
    FUN_1012d1f4(iVar1);
    return 0;
  }
  FUN_100a5b78(DAT_100ecbc8 | uVar13,DAT_100ecba4,DAT_100ecbcc);
LAB_100ecadc:
  FUN_1006bd24(iVar1,0,2);
  uVar8 = FUN_1006bd74(iVar1);
  FUN_1006bd24(iVar1,0);
  iVar3 = FUN_10138fca(2,uVar8,DAT_100ecbb8);
  *(int *)(iVar1 + 0x30) = iVar3;
  if (iVar3 == 0) {
    FUN_100a5b78(DAT_100ecbbc | uVar13,DAT_100ecbc4,DAT_100ecbc0);
    FUN_100ebda8();
  }
  else {
    uVar9 = FUN_1006bc84(iVar1,iVar3,uVar8);
    if (uVar9 < uVar8) {
      FUN_100a5b78(DAT_100ecbd0 | uVar13,DAT_100ecbc4,DAT_100ecbd4,uVar9);
      FUN_10138fd0(2,*(undefined4 *)(iVar1 + 0x30));
    }
    else {
      piVar12 = *(int **)(iVar1 + 0x30);
      iVar3 = *piVar12;
      if (iVar3 != -1) {
        *(int **)(iVar1 + 0x28) = piVar12 + 2;
        *(int *)(iVar1 + 0x24) = iVar3;
        *(int **)(iVar1 + 0x2c) = piVar12 + iVar3 * 9 + 2;
        goto LAB_100ecb18;
      }
      FUN_100a5b78(DAT_100ecbd8 | uVar13,DAT_100ecbc4,DAT_100ecbdc);
      FUN_10117e54(*(undefined4 *)(iVar1 + 0x30));
    }
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
LAB_100ecb18:
  if (iVar2 == 0) {
    return iVar1;
  }
  FUN_1012d1f4(iVar2);
  return iVar1;
}


/* FUN_10124c94 @ 0x10124c94 */

void FUN_10124c94(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  
  uVar8 = *(ushort *)(param_1 + 0x28) | param_2;
  if ((param_2 & ~(uint)*(ushort *)(param_1 + 0x28)) == 0) {
    return;
  }
  uVar11 = (uint)*(ushort *)(param_1 + 0x28);
  if (uVar11 != uVar8) {
    *(short *)(param_1 + 0x28) = (short)uVar8;
    iVar1 = FUN_10126b46(param_1,uVar11,uVar8);
    if (iVar1 != 0) {
      iVar2 = FUN_100942d8(0x280);
      uVar16 = 0;
      FUN_10124976(iVar2,0x280);
      uVar15 = 0;
      while ((uVar16 < (*(ushort *)(param_1 + 0x2a) & 0x3ff) >> 4 && (uVar15 < 0x20))) {
        iVar17 = *(int *)(param_1 + 0xc);
        iVar18 = iVar17 + uVar16 * 8;
        uVar3 = FUN_10126d48(*(uint *)(iVar18 + 4) & 0xffffff);
        iVar14 = FUN_10126d4c(*(uint *)(*(int *)(param_1 + 0xc) + uVar16 * 8 + 4) & 0xffffff);
        if (((~uVar8 & uVar3) == 0) &&
           (uVar12 = *(byte *)(iVar18 + 7) & 2, (*(byte *)(iVar18 + 7) & 2) == 0)) {
          piVar9 = *(int **)(iVar17 + uVar16 * 8);
          uVar4 = (uint)*(ushort *)(piVar9 + 1);
          uVar6 = (uint)*(byte *)((int)piVar9 + 7);
          if (uVar4 == 0xffff) {
            for (; uVar12 < uVar6; uVar12 = uVar12 + 1) {
              uVar4 = (uint)*(ushort *)(*piVar9 + uVar12 * 8);
              if ((uVar4 & 0x3fff) == 0x67) {
                if (-1 < (int)(uVar4 << 0x10)) {
                  if ((int)(uVar4 << 0x11) < 0) goto LAB_10124ae4;
                  piVar9 = *(int **)(*piVar9 + uVar12 * 8 + 4);
                  goto LAB_10124aec;
                }
                break;
              }
            }
          }
          else if (uVar6 != 0) {
            if (uVar6 < 2) {
              if (((uVar4 & 0x3fff) == 0x67) && (-1 < (int)(uVar4 << 0x10))) {
                if ((int)(uVar4 << 0x11) < 0) {
LAB_10124ae4:
                  piVar9 = (int *)FUN_10094720(0x67);
                }
                else {
                  piVar9 = (int *)*piVar9;
                }
LAB_10124aec:
                iVar17 = 0;
                while ((*(short *)(*piVar9 + iVar17) != 0 && (uVar15 < 0x20))) {
                  iVar7 = iVar2;
                  for (uVar12 = 0; uVar15 != uVar12; uVar12 = uVar12 + 1) {
                    uVar5 = *(undefined4 *)(iVar7 + 4);
                    uVar4 = FUN_10126d48(uVar5);
                    iVar10 = FUN_10126d4c(uVar5);
                    if (((*(short *)(iVar7 + 8) == *(short *)(*piVar9 + iVar17)) &&
                        (iVar14 == iVar10)) && (uVar3 <= uVar4)) goto LAB_10124bbc;
                    iVar7 = iVar7 + 0x14;
                  }
                  iVar7 = *piVar9;
                  iVar10 = iVar2 + uVar15 * 0x14;
                  *(short *)(iVar2 + uVar15 * 0x14) = (short)piVar9[3];
                  uVar15 = uVar15 + 1;
                  *(short *)(iVar10 + 2) = (short)piVar9[4];
                  *(int *)(iVar10 + 0xc) = piVar9[2];
                  *(undefined2 *)(iVar10 + 8) = *(undefined2 *)(iVar7 + iVar17);
                  *(int *)(iVar10 + 0x10) = piVar9[1];
                  *(uint *)(iVar10 + 4) = *(uint *)(iVar18 + 4) & 0xffffff;
LAB_10124bbc:
                  iVar17 = iVar17 + 2;
                }
              }
            }
            else {
              puVar13 = (ushort *)(*piVar9 + uVar6 * 4);
              do {
                uVar4 = (uint)*puVar13;
                if ((uVar4 & 0x3fff) == 0x67) {
                  if (-1 < (int)(uVar4 << 0x10)) {
                    if ((int)(uVar4 << 0x11) < 0) goto LAB_10124ae4;
                    piVar9 = *(int **)(*piVar9 + uVar12 * 4);
                    goto LAB_10124aec;
                  }
                  break;
                }
                uVar12 = uVar12 + 1;
                puVar13 = puVar13 + 1;
              } while (uVar12 < uVar6);
            }
          }
        }
        uVar16 = uVar16 + 1;
      }
      for (iVar14 = iVar2; iVar14 != uVar15 * 0x14 + iVar2; iVar14 = iVar14 + 0x14) {
        uVar5 = FUN_10126d4c(*(undefined4 *)(iVar14 + 4));
        FUN_1008adac(param_1,uVar5,uVar11,uVar8,iVar14);
      }
      FUN_10094444(iVar2);
      if (iVar1 == 1) {
        FUN_10125af4(param_1);
        return;
      }
      if (iVar1 == 3) {
        FUN_1008a83c(param_1,0xf0000,0xffff);
        return;
      }
      if (iVar1 == 2) {
        FUN_10125af4(param_1);
        FUN_1012543e(param_1);
        return;
      }
    }
  }
  return;
}


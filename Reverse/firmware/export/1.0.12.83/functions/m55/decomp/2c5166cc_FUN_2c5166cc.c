/* FUN_2c5166cc @ 0x2c5166cc */

void FUN_2c5166cc(int *param_1)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  ushort *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  
  iVar4 = FUN_2c606bb4(*param_1,0x10);
  if (iVar4 != 0) {
    return;
  }
  iVar4 = *param_1;
  uVar16 = *(ushort *)(iVar4 + 0x20) | 0x10;
  if ((~(uint)*(ushort *)(iVar4 + 0x20) & 0x10) == 0) {
    return;
  }
  uVar2 = *(ushort *)(iVar4 + 0x20);
  if (uVar2 == uVar16) {
    return;
  }
  *(short *)(iVar4 + 0x20) = (short)uVar16;
  iVar5 = FUN_2c603eb8(iVar4,(uint)uVar2,uVar16);
  if (iVar5 != 0) {
    iVar6 = FUN_2c62bf1c(0x280);
    FUN_2c62c3b0(iVar6,0x280);
    if ((*(ushort *)(iVar4 + 0x22) & 0x1f8) != 0) {
      uVar22 = 0;
      uVar20 = 0;
      do {
        iVar21 = *(int *)(iVar4 + 0xc);
        iVar17 = iVar21 + uVar22 * 8;
        uVar7 = FUN_2c60413c(*(uint *)(iVar17 + 4) & 0xffffff);
        iVar8 = FUN_2c604140(*(uint *)(*(int *)(iVar4 + 0xc) + uVar22 * 8 + 4) & 0xffffff);
        if (((uVar7 & ~uVar16) == 0) &&
           (uVar18 = *(byte *)(iVar17 + 7) & 2, (*(byte *)(iVar17 + 7) & 2) == 0)) {
          piVar14 = *(int **)(iVar21 + uVar22 * 8);
          uVar9 = (uint)*(ushort *)(piVar14 + 1);
          if (uVar9 == 0xffff) {
            puVar15 = (ushort *)*piVar14;
            uVar3 = *puVar15;
            while (uVar18 = (uint)uVar3, uVar18 != 0) {
              if ((uVar18 & 0x3fff) == 0x66) {
                if (-1 < (int)(uVar18 << 0x10)) {
                  if ((int)(uVar18 << 0x11) < 0) goto LAB_2c60643a;
                  piVar14 = *(int **)(puVar15 + 2);
                  goto LAB_2c606366;
                }
                break;
              }
              puVar15 = puVar15 + 4;
              uVar3 = *puVar15;
            }
            goto LAB_2c6062c4;
          }
          uVar12 = (uint)*(byte *)((int)piVar14 + 7);
          if (uVar12 == 0) goto LAB_2c6062c4;
          if (uVar12 != 1) {
            puVar15 = (ushort *)((short)(ushort)*(byte *)((int)piVar14 + 7) * 4 + -2 + *piVar14);
            do {
              puVar15 = puVar15 + 1;
              uVar9 = (uint)*puVar15;
              if ((uVar9 & 0x3fff) == 0x66) {
                if (-1 < (int)(uVar9 << 0x10)) {
                  if ((int)(uVar9 << 0x11) < 0) goto LAB_2c60643a;
                  piVar14 = *(int **)(*piVar14 + uVar18 * 4);
                  goto LAB_2c606366;
                }
                break;
              }
              uVar18 = uVar18 + 1;
            } while (uVar12 != uVar18);
            goto LAB_2c6062c4;
          }
          if (((uVar9 & 0x3fff) != 0x66) || ((int)(uVar9 << 0x10) < 0)) goto LAB_2c6062c4;
          if ((int)(uVar9 << 0x11) < 0) {
LAB_2c60643a:
            piVar14 = (int *)FUN_2c62b068(0x66);
          }
          else {
            piVar14 = (int *)*piVar14;
          }
LAB_2c606366:
          bVar1 = uVar20 < 0x20;
          if ((*(short *)*piVar14 != 0) && (bVar1)) {
            iVar21 = 0;
            uVar18 = uVar20;
            do {
              if (uVar18 != 0) {
                uVar9 = 0;
                iVar19 = iVar6;
                do {
                  uVar10 = *(undefined4 *)(iVar19 + 4);
                  uVar20 = FUN_2c60413c(uVar10);
                  iVar11 = FUN_2c604140(uVar10);
                  iVar13 = *piVar14;
                  if (((*(short *)(iVar19 + 8) == *(short *)(iVar13 + iVar21)) && (iVar8 == iVar11))
                     && (uVar7 <= uVar20)) {
                    uVar20 = uVar18;
                    if (uVar18 != uVar9) goto LAB_2c6063c6;
                    break;
                  }
                  uVar9 = uVar9 + 1;
                  iVar19 = iVar19 + 0x14;
                } while (uVar9 != uVar18);
              }
              uVar20 = uVar18 + 1;
              *(short *)(iVar6 + uVar18 * 0x14) = (short)piVar14[3];
              iVar19 = iVar6 + uVar18 * 0x14;
              *(short *)(iVar19 + 2) = (short)piVar14[4];
              *(int *)(iVar19 + 0xc) = piVar14[2];
              *(undefined2 *)(iVar19 + 8) = *(undefined2 *)(*piVar14 + iVar21);
              *(int *)(iVar19 + 0x10) = piVar14[1];
              *(uint *)(iVar19 + 4) = *(uint *)(iVar17 + 4) & 0xffffff;
              iVar13 = *piVar14;
LAB_2c6063c6:
              iVar21 = iVar21 + 2;
              bVar1 = uVar20 < 0x20;
            } while ((*(short *)(iVar13 + iVar21) != 0) && (uVar18 = uVar20, bVar1));
          }
        }
        else {
LAB_2c6062c4:
          if (uVar20 < 0x20) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
        }
        uVar22 = uVar22 + 1;
      } while ((uVar22 < (*(ushort *)(iVar4 + 0x22) & 0x1ff) >> 3) && (bVar1));
      if (uVar20 != 0) {
        uVar22 = 0;
        iVar8 = iVar6;
        do {
          uVar22 = uVar22 + 1;
          uVar10 = FUN_2c604140(*(undefined4 *)(iVar8 + 4));
          FUN_2c603cfc(iVar4,uVar10,uVar2,uVar16,iVar8);
          iVar8 = iVar8 + 0x14;
        } while (uVar20 != uVar22);
      }
    }
    FUN_2c62c040(iVar6);
    if (iVar5 == 1) {
      FUN_2c607df0(iVar4);
      return;
    }
    if (iVar5 == 3) {
      FUN_2c6036cc(iVar4,0xf0000,0xffff);
      return;
    }
    if (iVar5 == 2) {
      FUN_2c607df0(iVar4);
      FUN_2c600bac(iVar4);
      return;
    }
  }
  return;
}


/* FUN_2c606b80 @ 0x2c606b80 */

void FUN_2c606b80(int param_1,uint param_2)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  ushort *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  
  uVar15 = (uint)*(ushort *)(param_1 + 0x20) & ~param_2;
  if ((param_2 & *(ushort *)(param_1 + 0x20)) == 0) {
    return;
  }
  uVar2 = *(ushort *)(param_1 + 0x20);
  if (uVar2 == uVar15) {
    return;
  }
  *(short *)(param_1 + 0x20) = (short)uVar15;
  iVar4 = FUN_2c603eb8(param_1,(uint)uVar2,uVar15);
  if (iVar4 != 0) {
    iVar5 = FUN_2c62bf1c(0x280);
    FUN_2c62c3b0(iVar5,0x280);
    if ((*(ushort *)(param_1 + 0x22) & 0x1f8) != 0) {
      uVar21 = 0;
      uVar19 = 0;
      do {
        iVar20 = *(int *)(param_1 + 0xc);
        iVar16 = iVar20 + uVar21 * 8;
        uVar6 = FUN_2c60413c(*(uint *)(iVar16 + 4) & 0xffffff);
        iVar7 = FUN_2c604140(*(uint *)(*(int *)(param_1 + 0xc) + uVar21 * 8 + 4) & 0xffffff);
        if (((uVar6 & ~uVar15) == 0) &&
           (uVar17 = *(byte *)(iVar16 + 7) & 2, (*(byte *)(iVar16 + 7) & 2) == 0)) {
          piVar13 = *(int **)(iVar20 + uVar21 * 8);
          uVar8 = (uint)*(ushort *)(piVar13 + 1);
          if (uVar8 == 0xffff) {
            puVar14 = (ushort *)*piVar13;
            uVar3 = *puVar14;
            while (uVar17 = (uint)uVar3, uVar17 != 0) {
              if ((uVar17 & 0x3fff) == 0x66) {
                if (-1 < (int)(uVar17 << 0x10)) {
                  if ((int)(uVar17 << 0x11) < 0) goto LAB_2c60643a;
                  piVar13 = *(int **)(puVar14 + 2);
                  goto LAB_2c606366;
                }
                break;
              }
              puVar14 = puVar14 + 4;
              uVar3 = *puVar14;
            }
            goto LAB_2c6062c4;
          }
          uVar11 = (uint)*(byte *)((int)piVar13 + 7);
          if (uVar11 == 0) goto LAB_2c6062c4;
          if (uVar11 != 1) {
            puVar14 = (ushort *)((short)(ushort)*(byte *)((int)piVar13 + 7) * 4 + -2 + *piVar13);
            do {
              puVar14 = puVar14 + 1;
              uVar8 = (uint)*puVar14;
              if ((uVar8 & 0x3fff) == 0x66) {
                if (-1 < (int)(uVar8 << 0x10)) {
                  if ((int)(uVar8 << 0x11) < 0) goto LAB_2c60643a;
                  piVar13 = *(int **)(*piVar13 + uVar17 * 4);
                  goto LAB_2c606366;
                }
                break;
              }
              uVar17 = uVar17 + 1;
            } while (uVar11 != uVar17);
            goto LAB_2c6062c4;
          }
          if (((uVar8 & 0x3fff) != 0x66) || ((int)(uVar8 << 0x10) < 0)) goto LAB_2c6062c4;
          if ((int)(uVar8 << 0x11) < 0) {
LAB_2c60643a:
            piVar13 = (int *)FUN_2c62b068(0x66);
          }
          else {
            piVar13 = (int *)*piVar13;
          }
LAB_2c606366:
          bVar1 = uVar19 < 0x20;
          if ((*(short *)*piVar13 != 0) && (bVar1)) {
            iVar20 = 0;
            uVar17 = uVar19;
            do {
              if (uVar17 != 0) {
                uVar8 = 0;
                iVar18 = iVar5;
                do {
                  uVar9 = *(undefined4 *)(iVar18 + 4);
                  uVar19 = FUN_2c60413c(uVar9);
                  iVar10 = FUN_2c604140(uVar9);
                  iVar12 = *piVar13;
                  if (((*(short *)(iVar18 + 8) == *(short *)(iVar12 + iVar20)) && (iVar7 == iVar10))
                     && (uVar6 <= uVar19)) {
                    uVar19 = uVar17;
                    if (uVar17 != uVar8) goto LAB_2c6063c6;
                    break;
                  }
                  uVar8 = uVar8 + 1;
                  iVar18 = iVar18 + 0x14;
                } while (uVar8 != uVar17);
              }
              uVar19 = uVar17 + 1;
              *(short *)(iVar5 + uVar17 * 0x14) = (short)piVar13[3];
              iVar18 = iVar5 + uVar17 * 0x14;
              *(short *)(iVar18 + 2) = (short)piVar13[4];
              *(int *)(iVar18 + 0xc) = piVar13[2];
              *(undefined2 *)(iVar18 + 8) = *(undefined2 *)(*piVar13 + iVar20);
              *(int *)(iVar18 + 0x10) = piVar13[1];
              *(uint *)(iVar18 + 4) = *(uint *)(iVar16 + 4) & 0xffffff;
              iVar12 = *piVar13;
LAB_2c6063c6:
              iVar20 = iVar20 + 2;
              bVar1 = uVar19 < 0x20;
            } while ((*(short *)(iVar12 + iVar20) != 0) && (uVar17 = uVar19, bVar1));
          }
        }
        else {
LAB_2c6062c4:
          if (uVar19 < 0x20) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
        }
        uVar21 = uVar21 + 1;
      } while ((uVar21 < (*(ushort *)(param_1 + 0x22) & 0x1ff) >> 3) && (bVar1));
      if (uVar19 != 0) {
        uVar21 = 0;
        iVar7 = iVar5;
        do {
          uVar21 = uVar21 + 1;
          uVar9 = FUN_2c604140(*(undefined4 *)(iVar7 + 4));
          FUN_2c603cfc(param_1,uVar9,uVar2,uVar15,iVar7);
          iVar7 = iVar7 + 0x14;
        } while (uVar19 != uVar21);
      }
    }
    FUN_2c62c040(iVar5);
    if (iVar4 == 1) {
      FUN_2c607df0(param_1);
      return;
    }
    if (iVar4 == 3) {
      FUN_2c6036cc(param_1,0xf0000,0xffff);
      return;
    }
    if (iVar4 == 2) {
      FUN_2c607df0(param_1);
      FUN_2c600bac(param_1);
      return;
    }
  }
  return;
}


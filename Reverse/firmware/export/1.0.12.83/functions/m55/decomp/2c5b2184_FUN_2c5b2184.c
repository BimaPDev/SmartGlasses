/* FUN_2c5b2184 @ 0x2c5b2184 */

void FUN_2c5b2184(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  ushort *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  
  uVar4 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x34),param_3,
                       param_4,param_4);
  FUN_2c606b80(uVar4,0x10);
  FUN_2c5b10b8(param_1,param_2);
  iVar19 = *(int *)(param_1 + 0x34);
  iVar5 = FUN_2c6041fc(*(undefined4 *)(param_1 + 0x20));
  if (iVar5 + -1 < iVar19) {
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x34);
  }
  iVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x20),uVar4);
  uVar15 = *(ushort *)(iVar5 + 0x20) | 0x10;
  if ((~(uint)*(ushort *)(iVar5 + 0x20) & 0x10) == 0) {
    return;
  }
  uVar2 = *(ushort *)(iVar5 + 0x20);
  if (uVar2 == uVar15) {
    return;
  }
  *(short *)(iVar5 + 0x20) = (short)uVar15;
  iVar19 = FUN_2c603eb8(iVar5,(uint)uVar2,uVar15);
  if (iVar19 != 0) {
    iVar6 = FUN_2c62bf1c(0x280);
    FUN_2c62c3b0(iVar6,0x280);
    if ((*(ushort *)(iVar5 + 0x22) & 0x1f8) != 0) {
      uVar22 = 0;
      uVar20 = 0;
      do {
        iVar21 = *(int *)(iVar5 + 0xc);
        iVar16 = iVar21 + uVar22 * 8;
        uVar7 = FUN_2c60413c(*(uint *)(iVar16 + 4) & 0xffffff);
        iVar8 = FUN_2c604140(*(uint *)(*(int *)(iVar5 + 0xc) + uVar22 * 8 + 4) & 0xffffff);
        if (((uVar7 & ~uVar15) == 0) &&
           (uVar17 = *(byte *)(iVar16 + 7) & 2, (*(byte *)(iVar16 + 7) & 2) == 0)) {
          piVar13 = *(int **)(iVar21 + uVar22 * 8);
          uVar9 = (uint)*(ushort *)(piVar13 + 1);
          if (uVar9 == 0xffff) {
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
              uVar9 = (uint)*puVar14;
              if ((uVar9 & 0x3fff) == 0x66) {
                if (-1 < (int)(uVar9 << 0x10)) {
                  if ((int)(uVar9 << 0x11) < 0) goto LAB_2c60643a;
                  piVar13 = *(int **)(*piVar13 + uVar17 * 4);
                  goto LAB_2c606366;
                }
                break;
              }
              uVar17 = uVar17 + 1;
            } while (uVar11 != uVar17);
            goto LAB_2c6062c4;
          }
          if (((uVar9 & 0x3fff) != 0x66) || ((int)(uVar9 << 0x10) < 0)) goto LAB_2c6062c4;
          if ((int)(uVar9 << 0x11) < 0) {
LAB_2c60643a:
            piVar13 = (int *)FUN_2c62b068(0x66);
          }
          else {
            piVar13 = (int *)*piVar13;
          }
LAB_2c606366:
          bVar1 = uVar20 < 0x20;
          if ((*(short *)*piVar13 != 0) && (bVar1)) {
            iVar21 = 0;
            uVar17 = uVar20;
            do {
              if (uVar17 != 0) {
                uVar9 = 0;
                iVar18 = iVar6;
                do {
                  uVar4 = *(undefined4 *)(iVar18 + 4);
                  uVar20 = FUN_2c60413c(uVar4);
                  iVar10 = FUN_2c604140(uVar4);
                  iVar12 = *piVar13;
                  if (((*(short *)(iVar18 + 8) == *(short *)(iVar12 + iVar21)) && (iVar8 == iVar10))
                     && (uVar7 <= uVar20)) {
                    uVar20 = uVar17;
                    if (uVar17 != uVar9) goto LAB_2c6063c6;
                    break;
                  }
                  uVar9 = uVar9 + 1;
                  iVar18 = iVar18 + 0x14;
                } while (uVar9 != uVar17);
              }
              uVar20 = uVar17 + 1;
              *(short *)(iVar6 + uVar17 * 0x14) = (short)piVar13[3];
              iVar18 = iVar6 + uVar17 * 0x14;
              *(short *)(iVar18 + 2) = (short)piVar13[4];
              *(int *)(iVar18 + 0xc) = piVar13[2];
              *(undefined2 *)(iVar18 + 8) = *(undefined2 *)(*piVar13 + iVar21);
              *(int *)(iVar18 + 0x10) = piVar13[1];
              *(uint *)(iVar18 + 4) = *(uint *)(iVar16 + 4) & 0xffffff;
              iVar12 = *piVar13;
LAB_2c6063c6:
              iVar21 = iVar21 + 2;
              bVar1 = uVar20 < 0x20;
            } while ((*(short *)(iVar12 + iVar21) != 0) && (uVar17 = uVar20, bVar1));
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
      } while ((uVar22 < (*(ushort *)(iVar5 + 0x22) & 0x1ff) >> 3) && (bVar1));
      if (uVar20 != 0) {
        uVar22 = 0;
        iVar8 = iVar6;
        do {
          uVar22 = uVar22 + 1;
          uVar4 = FUN_2c604140(*(undefined4 *)(iVar8 + 4));
          FUN_2c603cfc(iVar5,uVar4,uVar2,uVar15,iVar8);
          iVar8 = iVar8 + 0x14;
        } while (uVar20 != uVar22);
      }
    }
    FUN_2c62c040(iVar6);
    if (iVar19 == 1) {
      FUN_2c607df0(iVar5);
      return;
    }
    if (iVar19 == 3) {
      FUN_2c6036cc(iVar5,0xf0000,0xffff);
      return;
    }
    if (iVar19 == 2) {
      FUN_2c607df0(iVar5);
      FUN_2c600bac(iVar5);
      return;
    }
  }
  return;
}


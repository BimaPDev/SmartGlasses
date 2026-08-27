/* FUN_2c5afbe4 @ 0x2c5afbe4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5afbe4(int param_1)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  ushort *puVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  
  FUN_2c5abf68();
  iVar5 = FUN_2c5ac3d0();
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5afc7c,0x59,_LAB_2c5afc74,_LAB_2c5afc78,_LAB_2c5afc74);
  }
  if ((*(int *)(param_1 + 4) != 0) && (iVar5 = FUN_2c606b94(*(int *)(param_1 + 4),1), iVar5 != 0)) {
    FUN_2c606abc(*(undefined4 *)(param_1 + 4),1);
    func_0x2c63e16c(PTR_LAB_2c5c0000_1_2c5afc80);
    func_0x2c64025c(PTR_LAB_2c5bffbc_1_2c5afc84);
    func_0x2c5e8dd8(PTR_LAB_2c5c0044_1_2c5afc88,param_1);
    uVar6 = FUN_2c5ed958(param_1,0,PTR_LAB_2c5bfb38_1_2c5afc8c,0,0,0,0,0);
    uVar4 = _LAB_2c5afc90;
    uVar12 = _LAB_2c5afc74;
    *(undefined4 *)(param_1 + 0x44) = uVar6;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c5afc7c,0x68,uVar12,uVar4,uVar12);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar5 = FUN_2c6041dc(*(undefined4 *)(param_1 + 0x20));
  uVar18 = *(ushort *)(iVar5 + 0x20) | 0x10;
  if ((~(uint)*(ushort *)(iVar5 + 0x20) & 0x10) == 0) {
    return;
  }
  uVar2 = *(ushort *)(iVar5 + 0x20);
  if (uVar2 == uVar18) {
    return;
  }
  *(short *)(iVar5 + 0x20) = (short)uVar18;
  iVar7 = FUN_2c603eb8(iVar5,(uint)uVar2,uVar18);
  if (iVar7 != 0) {
    iVar8 = FUN_2c62bf1c(0x280);
    FUN_2c62c3b0(iVar8,0x280);
    if ((*(ushort *)(iVar5 + 0x22) & 0x1f8) != 0) {
      uVar24 = 0;
      uVar22 = 0;
      do {
        iVar23 = *(int *)(iVar5 + 0xc);
        iVar19 = iVar23 + uVar24 * 8;
        uVar9 = FUN_2c60413c(*(uint *)(iVar19 + 4) & 0xffffff);
        iVar10 = FUN_2c604140(*(uint *)(*(int *)(iVar5 + 0xc) + uVar24 * 8 + 4) & 0xffffff);
        if (((uVar9 & ~uVar18) == 0) &&
           (uVar20 = *(byte *)(iVar19 + 7) & 2, (*(byte *)(iVar19 + 7) & 2) == 0)) {
          piVar16 = *(int **)(iVar23 + uVar24 * 8);
          uVar11 = (uint)*(ushort *)(piVar16 + 1);
          if (uVar11 == 0xffff) {
            puVar17 = (ushort *)*piVar16;
            uVar3 = *puVar17;
            while (uVar20 = (uint)uVar3, uVar20 != 0) {
              if ((uVar20 & 0x3fff) == 0x66) {
                if (-1 < (int)(uVar20 << 0x10)) {
                  if ((int)(uVar20 << 0x11) < 0) goto LAB_2c60643a;
                  piVar16 = *(int **)(puVar17 + 2);
                  goto LAB_2c606366;
                }
                break;
              }
              puVar17 = puVar17 + 4;
              uVar3 = *puVar17;
            }
            goto LAB_2c6062c4;
          }
          uVar14 = (uint)*(byte *)((int)piVar16 + 7);
          if (uVar14 == 0) goto LAB_2c6062c4;
          if (uVar14 != 1) {
            puVar17 = (ushort *)((short)(ushort)*(byte *)((int)piVar16 + 7) * 4 + -2 + *piVar16);
            do {
              puVar17 = puVar17 + 1;
              uVar11 = (uint)*puVar17;
              if ((uVar11 & 0x3fff) == 0x66) {
                if (-1 < (int)(uVar11 << 0x10)) {
                  if ((int)(uVar11 << 0x11) < 0) goto LAB_2c60643a;
                  piVar16 = *(int **)(*piVar16 + uVar20 * 4);
                  goto LAB_2c606366;
                }
                break;
              }
              uVar20 = uVar20 + 1;
            } while (uVar14 != uVar20);
            goto LAB_2c6062c4;
          }
          if (((uVar11 & 0x3fff) != 0x66) || ((int)(uVar11 << 0x10) < 0)) goto LAB_2c6062c4;
          if ((int)(uVar11 << 0x11) < 0) {
LAB_2c60643a:
            piVar16 = (int *)FUN_2c62b068(0x66);
          }
          else {
            piVar16 = (int *)*piVar16;
          }
LAB_2c606366:
          bVar1 = uVar22 < 0x20;
          if ((*(short *)*piVar16 != 0) && (bVar1)) {
            iVar23 = 0;
            uVar20 = uVar22;
            do {
              if (uVar20 != 0) {
                uVar11 = 0;
                iVar21 = iVar8;
                do {
                  uVar12 = *(undefined4 *)(iVar21 + 4);
                  uVar22 = FUN_2c60413c(uVar12);
                  iVar13 = FUN_2c604140(uVar12);
                  iVar15 = *piVar16;
                  if (((*(short *)(iVar21 + 8) == *(short *)(iVar15 + iVar23)) && (iVar10 == iVar13)
                      ) && (uVar9 <= uVar22)) {
                    uVar22 = uVar20;
                    if (uVar20 != uVar11) goto LAB_2c6063c6;
                    break;
                  }
                  uVar11 = uVar11 + 1;
                  iVar21 = iVar21 + 0x14;
                } while (uVar11 != uVar20);
              }
              uVar22 = uVar20 + 1;
              *(short *)(iVar8 + uVar20 * 0x14) = (short)piVar16[3];
              iVar21 = iVar8 + uVar20 * 0x14;
              *(short *)(iVar21 + 2) = (short)piVar16[4];
              *(int *)(iVar21 + 0xc) = piVar16[2];
              *(undefined2 *)(iVar21 + 8) = *(undefined2 *)(*piVar16 + iVar23);
              *(int *)(iVar21 + 0x10) = piVar16[1];
              *(uint *)(iVar21 + 4) = *(uint *)(iVar19 + 4) & 0xffffff;
              iVar15 = *piVar16;
LAB_2c6063c6:
              iVar23 = iVar23 + 2;
              bVar1 = uVar22 < 0x20;
            } while ((*(short *)(iVar15 + iVar23) != 0) && (uVar20 = uVar22, bVar1));
          }
        }
        else {
LAB_2c6062c4:
          if (uVar22 < 0x20) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
        }
        uVar24 = uVar24 + 1;
      } while ((uVar24 < (*(ushort *)(iVar5 + 0x22) & 0x1ff) >> 3) && (bVar1));
      if (uVar22 != 0) {
        uVar24 = 0;
        iVar10 = iVar8;
        do {
          uVar24 = uVar24 + 1;
          uVar12 = FUN_2c604140(*(undefined4 *)(iVar10 + 4));
          FUN_2c603cfc(iVar5,uVar12,uVar2,uVar18,iVar10);
          iVar10 = iVar10 + 0x14;
        } while (uVar22 != uVar24);
      }
    }
    FUN_2c62c040(iVar8);
    if (iVar7 == 1) {
      FUN_2c607df0(iVar5);
      return;
    }
    if (iVar7 == 3) {
      FUN_2c6036cc(iVar5,0xf0000,0xffff);
      return;
    }
    if (iVar7 == 2) {
      FUN_2c607df0(iVar5);
      FUN_2c600bac(iVar5);
      return;
    }
  }
  return;
}


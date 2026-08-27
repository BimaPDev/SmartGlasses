/* FUN_2c6144a0 @ 0x2c6144a0 */

void FUN_2c6144a0(undefined4 *param_1,short *param_2,uint param_3,byte param_4)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  char cVar13;
  short sVar14;
  int iVar15;
  int iVar16;
  ushort uVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  ushort *puVar22;
  short *psVar23;
  uint uVar24;
  int iVar25;
  short sVar26;
  uint uVar27;
  int local_4c [4];
  uint local_3c [4];
  int local_2c;
  
  local_2c = *DAT_2c614778;
  iVar15 = (int)(short)((param_2[2] + 1) - *param_2);
  iVar8 = (int)(short)((param_2[3] + 1) - param_2[1]);
  if (iVar15 <= iVar8) {
    iVar8 = iVar15;
  }
  if (iVar8 >> 1 < (int)param_3) {
    param_3 = (uint)(short)(iVar8 >> 1);
  }
  *(short *)(param_1 + 2) = *param_2;
  uVar20 = param_3 & ~((int)param_3 >> 0x1f);
  *(short *)((int)param_1 + 10) = param_2[1];
  *(short *)(param_1 + 3) = param_2[2];
  uVar7 = DAT_2c61477c;
  *(short *)((int)param_1 + 0xe) = param_2[3];
  *(byte *)((int)param_1 + 0x12) = *(byte *)((int)param_1 + 0x12) & 0xfe | param_4 & 1;
  *param_1 = uVar7;
  *(undefined1 *)(param_1 + 1) = 2;
  sVar26 = (short)uVar20;
  *(short *)(param_1 + 4) = sVar26;
  piVar18 = DAT_2c614780;
  if ((int)param_3 < 1) {
    param_1[5] = 0;
  }
  else {
    iVar8 = 0;
    piVar11 = DAT_2c614780;
    do {
      if ((int)(short)piVar11[6] == uVar20) {
        if ((int)param_3 < 0x10) {
          iVar15 = 1;
        }
        else {
          iVar15 = (int)(uVar20 << 0xc) >> 0x10;
        }
        piVar11 = DAT_2c614780 + iVar8 * 7;
        DAT_2c614780[iVar8 * 7 + 5] = DAT_2c614780[iVar8 * 7 + 5] + 1;
        iVar15 = piVar18[iVar8 * 7 + 4] + iVar15;
        if (999 < iVar15) {
          iVar15 = 1000;
        }
        piVar11[4] = iVar15;
        param_1[5] = piVar11;
        goto LAB_2c61485e;
      }
      iVar8 = iVar8 + 1;
      piVar11 = piVar11 + 7;
    } while (iVar8 != 4);
    piVar11 = (int *)0x0;
    do {
      piVar10 = piVar11;
      if (((piVar18[5] == 0) && (piVar10 = piVar18, piVar11 != (int *)0x0)) &&
         (piVar10 = piVar11, piVar18[4] < piVar11[4])) {
        piVar10 = piVar18;
      }
      piVar18 = piVar18 + 7;
      piVar11 = piVar10;
    } while (DAT_2c614784 != piVar18);
    if (piVar10 == (int *)0x0) {
      piVar10 = (int *)lv_mem_alloc(0x1c);
      FUN_2c62c3b0(piVar10,0x1c);
      piVar10[4] = -1;
    }
    else {
      piVar10[5] = piVar10[5] + 1;
      if ((int)param_3 < 0x10) {
        iVar8 = 1;
      }
      else {
        iVar8 = (int)(uVar20 << 0xc) >> 0x10;
        if (999 < iVar8) {
          iVar8 = 1000;
        }
      }
      piVar10[4] = iVar8;
    }
    param_1[5] = piVar10;
    *(short *)(piVar10 + 6) = sVar26;
    if (*piVar10 != 0) {
      FUN_2c62bea8();
    }
    puVar9 = (undefined1 *)lv_mem_alloc((uVar20 + 1) * 6);
    iVar8 = uVar20 * 4 + 4;
    piVar10[3] = (int)(puVar9 + uVar20 * 2 + 2);
    *piVar10 = (int)puVar9;
    piVar10[1] = (int)puVar9;
    piVar10[2] = (int)(puVar9 + iVar8);
    if (param_3 != 1) {
      iVar15 = FUN_2c62bf1c((uVar20 + 1) * 8);
      iVar8 = iVar15 + iVar8;
      local_4c[0] = (int)(uVar20 << 0x12) >> 0x12;
      sVar14 = sVar26 * -4 + 1;
      uVar12 = (uint)(short)(sVar26 * 4);
      uVar19 = 0;
      local_3c[0] = 0;
      if (-1 < (int)uVar12) {
        sVar26 = 0;
        uVar27 = 0;
        do {
          uVar24 = uVar19 + 4;
          puVar21 = local_3c;
          piVar18 = local_4c;
          do {
            sVar2 = (short)uVar19;
            if (sVar14 < 1) {
              sVar14 = sVar14 + 3 + (short)((uVar19 & 0xffff) << 1);
              uVar19 = (uint)(short)(sVar2 + 1);
              if ((int)uVar12 < (int)uVar19) goto LAB_2c61469a;
            }
            else {
              sVar14 = sVar14 + 5 + (sVar2 - (short)uVar12) * 2;
              uVar12 = (uint)(short)((short)uVar12 + -1);
              uVar19 = (uint)(short)(sVar2 + 1);
              if ((int)uVar12 < (int)uVar19) {
LAB_2c61469a:
                iVar25 = (uVar27 + 0x7fffffff) * 2;
                uVar19 = uVar27;
                goto LAB_2c6146a8;
              }
            }
            *piVar18 = (int)uVar12 >> 2;
            *puVar21 = uVar12 & 3;
            puVar21 = puVar21 + 1;
            piVar18 = piVar18 + 1;
          } while ((uVar24 & 0xffff) != (uint)(ushort)(sVar2 + 1));
          sVar2 = (short)local_4c[0];
          sVar3 = (short)uVar27;
          cVar13 = (char)local_3c[0];
          cVar4 = (char)local_3c[3];
          cVar5 = (char)local_3c[1];
          cVar6 = (char)local_3c[2];
          if (local_4c[0] == local_4c[3]) {
            *(short *)(iVar15 + uVar27 * 2) = sVar2;
            *(short *)(iVar8 + uVar27 * 2) = sVar26;
            *(char *)(piVar10[1] + uVar27) = cVar4 + cVar13 + cVar5 + cVar6;
            *(char *)(piVar10[1] + uVar27) = *(char *)(piVar10[1] + uVar27) << 4;
            uVar27 = (uint)(short)(sVar3 + 1);
          }
          else if (local_4c[0] == local_4c[1]) {
            *(short *)(iVar15 + uVar27 * 2) = sVar2;
            if (local_4c[0] == local_4c[2]) {
              *(short *)(iVar8 + uVar27 * 2) = sVar26;
              *(char *)(piVar10[1] + uVar27) = cVar6 + cVar13 + cVar5;
              *(char *)(piVar10[1] + uVar27) = *(char *)(piVar10[1] + uVar27) << 4;
              iVar25 = (int)(short)(sVar3 + 1);
              uVar27 = (uint)(short)(sVar3 + 2);
              *(short *)(iVar15 + iVar25 * 2) = sVar2 + -1;
              *(short *)(iVar8 + iVar25 * 2) = sVar26;
              *(char *)(piVar10[1] + iVar25) = cVar4 + '\f';
              *(char *)(piVar10[1] + iVar25) = *(char *)(piVar10[1] + iVar25) << 4;
            }
            else {
              *(short *)(iVar8 + uVar27 * 2) = sVar26;
              *(char *)(piVar10[1] + uVar27) = cVar13 + cVar5;
              iVar25 = (int)(short)(sVar3 + 1);
              *(char *)(piVar10[1] + uVar27) = *(char *)(piVar10[1] + uVar27) << 4;
              uVar27 = (uint)(short)(sVar3 + 2);
              *(short *)(iVar15 + iVar25 * 2) = sVar2 + -1;
              *(short *)(iVar8 + iVar25 * 2) = sVar26;
              *(char *)(piVar10[1] + iVar25) = cVar4 + cVar6 + '\b';
              *(char *)(piVar10[1] + iVar25) = *(char *)(piVar10[1] + iVar25) << 4;
            }
          }
          else {
            *(short *)(iVar15 + uVar27 * 2) = sVar2;
            *(short *)(iVar8 + uVar27 * 2) = sVar26;
            *(char *)(piVar10[1] + uVar27) = cVar13;
            *(char *)(piVar10[1] + uVar27) = *(char *)(piVar10[1] + uVar27) << 4;
            iVar25 = (int)(short)(sVar3 + 1);
            uVar27 = (uint)(short)(sVar3 + 2);
            *(short *)(iVar15 + iVar25 * 2) = sVar2 + -1;
            *(short *)(iVar8 + iVar25 * 2) = sVar26;
            *(char *)(piVar10[1] + iVar25) = cVar4 + cVar5 + cVar6 + '\x04';
            *(char *)(piVar10[1] + iVar25) = *(char *)(piVar10[1] + iVar25) << 4;
          }
          sVar26 = sVar26 + 1;
        } while( true );
      }
      iVar25 = -2;
LAB_2c6146a8:
      iVar16 = (int)(uVar20 * 0x2d3) >> 10;
      if ((*(short *)(iVar15 + iVar25) != iVar16) || (iVar16 != *(short *)(iVar8 + iVar25))) {
        uVar20 = uVar20 * -0x4b400000 >> 0x16;
        if (uVar20 < 0x201) {
          cVar13 = (char)(uVar20 * uVar20 >> 0xf);
        }
        else {
          cVar13 = '\x0f' - (char)((int)((0x400 - uVar20) * (0x400 - uVar20)) >> 0xf);
        }
        *(short *)(iVar15 + uVar19 * 2) = (short)iVar16;
        *(short *)(iVar8 + uVar19 * 2) = (short)iVar16;
        *(char *)(piVar10[1] + uVar19) = cVar13;
        *(char *)(piVar10[1] + uVar19) = *(char *)(piVar10[1] + uVar19) << 4;
        uVar19 = (int)(short)((short)uVar19 + 1);
      }
      iVar25 = uVar19 - 2;
      if (-1 < iVar25) {
        sVar26 = (short)iVar25;
        do {
          iVar16 = (int)(short)(((short)uVar19 + sVar26) - (short)iVar25);
          *(undefined2 *)(iVar15 + iVar16 * 2) = *(undefined2 *)(iVar8 + iVar25 * 2);
          *(undefined2 *)(iVar8 + iVar16 * 2) = *(undefined2 *)(iVar15 + iVar25 * 2);
          puVar9 = (undefined1 *)(piVar10[1] + iVar25);
          iVar25 = iVar25 + -1;
          *(undefined1 *)(piVar10[1] + iVar16) = *puVar9;
        } while (iVar25 != -1);
        uVar19 = (uint)(short)((short)((uVar19 & 0xffff) << 1) + -1);
      }
      sVar26 = 0;
      *(undefined2 *)piVar10[3] = 0;
      if (0 < (int)uVar19) {
        iVar25 = 0;
        do {
          iVar16 = (int)sVar26;
          *(short *)(piVar10[3] + iVar16 * 2) = (short)iVar25;
          psVar23 = (short *)(iVar8 + iVar25 * 2);
          *(undefined2 *)(piVar10[2] + iVar16 * 2) = *(undefined2 *)(iVar15 + iVar25 * 2);
          if ((*(short *)(iVar8 + iVar25 * 2) == iVar16) && (iVar25 < (int)uVar19)) {
            puVar22 = (ushort *)(iVar25 * 2 + -2 + iVar15);
            do {
              iVar25 = iVar25 + 1;
              puVar22 = puVar22 + 1;
              uVar1 = *(ushort *)(piVar10[2] + iVar16 * 2);
              uVar17 = *puVar22;
              if ((int)(uint)uVar1 <= (int)(short)*puVar22) {
                uVar17 = uVar1;
              }
              *(ushort *)(piVar10[2] + iVar16 * 2) = uVar17;
              psVar23 = psVar23 + 1;
            } while ((*psVar23 == iVar16) && (iVar25 < (int)uVar19));
          }
          sVar26 = sVar26 + 1;
        } while (iVar25 < (int)uVar19);
      }
      if (*DAT_2c614958 == local_2c) {
        FUN_2c62c040();
        return;
      }
      goto LAB_2c614952;
    }
    *puVar9 = 0xb4;
    *(undefined2 *)piVar10[3] = 0;
    *(undefined2 *)(piVar10[3] + 2) = 1;
    *(undefined2 *)piVar10[2] = 0;
  }
LAB_2c61485e:
  if (*DAT_2c614958 == local_2c) {
    return;
  }
LAB_2c614952:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


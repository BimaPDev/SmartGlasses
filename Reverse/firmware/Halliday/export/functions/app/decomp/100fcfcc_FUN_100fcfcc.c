/* FUN_100fcfcc @ 0x100fcfcc */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_100fcfcc(uint *param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  uint uVar11;
  uint **ppuVar12;
  ushort uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  int *piVar22;
  uint *puVar23;
  byte *pbVar24;
  uint *puVar25;
  int *piVar26;
  int iVar27;
  int iVar28;
  int *piVar29;
  byte *pbVar30;
  uint uVar31;
  short sVar32;
  int iVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  uint local_4c;
  int local_48;
  short local_38;
  short local_36;
  uint *local_34;
  uint *local_30;
  uint *local_2c [2];
  
  uVar18 = param_1[0xfc];
joined_r0x100fcfda:
  do {
    while( true ) {
      if ((int)uVar18 < 0) {
        return 0;
      }
      uVar7 = param_1[7];
      param_1[0x12] = param_1[1] * (int)*(short *)((int)param_1 + uVar18 * 4 + 0x3b2);
      uVar19 = param_1[6];
      uVar8 = param_1[0x1e];
      param_1[0x11] = param_1[1] * (int)(short)param_1[uVar18 + 0xec];
      param_1[8] = uVar7 - 0x20;
      param_1[10] = 0;
      param_1[0x15] = 0;
      *(undefined2 *)((int)param_1 + 0x4e) = 0;
      param_1[0xb] = 0;
      param_1[9] = uVar19;
      param_1[0x14] = uVar19;
      *(uint *)(uVar19 + 8) = uVar19;
      *(undefined2 *)(param_1 + 0x13) = 0;
      if (0 < (short)uVar8) break;
      param_1[0x15] = 0;
      if (uVar19 < uVar7 - 0x20) {
        uVar18 = param_1[0xfc] - 1;
        param_1[0xfc] = uVar18;
      }
      else {
LAB_100fd142:
        if (param_1[10] != 0x62) {
          return 1;
        }
LAB_100fd14c:
        uVar8 = param_1[0xfc];
        param_1[10] = 0;
        sVar6 = *(short *)((int)param_1 + uVar8 * 4 + 0x3b2);
        iVar33 = (int)(short)param_1[uVar8 + 0xec] + (int)sVar6;
        iVar33 = (iVar33 - (iVar33 >> 0x1f)) * 0x8000;
        if ((6 < (int)uVar8) || (iVar33 >> 0x10 < (int)(short)param_1[uVar8 + 0xec])) {
          param_1[0xfc] = 0;
          param_1[10] = 0x14;
          return 0x14;
        }
        uVar18 = uVar8 + 1;
        sVar32 = (short)((uint)iVar33 >> 0x10);
        *(short *)(param_1 + uVar8 + 0xed) = sVar32;
        *(short *)((int)param_1 + uVar8 * 4 + 0x3b2) = sVar32 + -1;
        *(short *)((int)param_1 + uVar8 * 4 + 0x3b6) = sVar6;
        param_1[0xfc] = uVar18;
      }
    }
    iVar33 = 0;
    uVar10 = 0;
    uVar18 = param_1[0x21];
LAB_100fd040:
    do {
      *(undefined1 *)(param_1 + 0x17) = 0;
      uVar8 = param_1[0x1f];
      uVar34 = (uint)*(ushort *)(uVar18 + iVar33 * 2);
      uVar18 = param_1[3];
      piVar22 = (int *)(uVar8 + uVar34 * 8);
      iVar20 = piVar22[1];
      uVar11 = (uint)uVar10;
      piVar26 = (int *)(uVar8 + uVar11 * 8);
      iVar14 = *(int *)(uVar8 + uVar34 * 8);
      iVar28 = *(int *)(uVar8 + uVar11 * 8);
      iVar9 = piVar26[1];
      uVar19 = param_1[2];
      param_1[0x16] = 0;
      uVar31 = iVar28 * uVar18 - uVar19;
      uVar8 = iVar20 * uVar18 - uVar19;
      local_4c = iVar9 * uVar18 - uVar19;
      uVar19 = iVar14 * uVar18 - uVar19;
      uVar18 = uVar19;
      uVar7 = uVar31;
      if (param_2 != 0) {
        uVar18 = uVar8;
        uVar8 = uVar19;
        uVar7 = local_4c;
        local_4c = uVar31;
      }
      uVar19 = param_1[0x20];
      bVar1 = *(byte *)(uVar19 + uVar11);
      pbVar24 = (byte *)(uVar19 + uVar11);
      if ((bVar1 & 4) != 0) {
        *(byte *)(param_1 + 0x29) = bVar1 >> 5;
        bVar1 = *(byte *)(uVar19 + uVar11);
      }
      if ((bVar1 & 3) == 2) {
LAB_100fd4e4:
        param_1[10] = 0x14;
        return 1;
      }
      if ((bVar1 & 3) == 0) {
        if ((*(byte *)(uVar19 + uVar34) & 3) == 1) {
          piVar22 = piVar22 + -2;
          local_4c = uVar8;
        }
        else {
          uVar18 = (int)(uVar18 + uVar7) / 2;
          local_4c = (int)(uVar8 + local_4c) / 2;
        }
        piVar26 = piVar26 + -2;
        pbVar24 = pbVar24 + -1;
        uVar7 = uVar18;
      }
      param_1[0xf] = uVar7;
      param_1[0x10] = local_4c;
      while (piVar26 < piVar22) {
        piVar29 = piVar26 + 2;
        pbVar30 = pbVar24 + 1;
        if ((pbVar24[1] & 3) == 0) {
          iVar14 = piVar26[2] * param_1[3] - param_1[2];
          iVar9 = piVar26[3] * param_1[3] - param_1[2];
          iVar20 = iVar14;
          if (param_2 == 0) {
            while( true ) {
              iVar20 = iVar9;
              if (piVar22 <= piVar29) goto LAB_100fd2d0;
              piVar26 = piVar29 + 2;
              pbVar30 = pbVar30 + 1;
              iVar27 = piVar29[3] * param_1[3] - param_1[2];
              iVar28 = *piVar26 * param_1[3] - param_1[2];
              if ((*pbVar30 & 3) == 1) break;
              if ((*pbVar30 & 3) != 0) goto LAB_100fd4e4;
              iVar20 = FUN_100fc828(param_1,iVar14,iVar20,(iVar28 + iVar14) / 2,
                                    (iVar27 + iVar20) / 2);
              iVar14 = iVar28;
              iVar9 = iVar27;
              piVar29 = piVar26;
              if (iVar20 != 0) goto LAB_100fd142;
            }
          }
          else {
            while( true ) {
              iVar14 = iVar9;
              if (piVar22 <= piVar29) goto LAB_100fd2d0;
              piVar26 = piVar29 + 2;
              pbVar30 = pbVar30 + 1;
              iVar28 = piVar29[3] * param_1[3] - param_1[2];
              iVar27 = *piVar26 * param_1[3] - param_1[2];
              if ((*pbVar30 & 3) == 1) break;
              if ((*pbVar30 & 3) != 0) goto LAB_100fd4e4;
              iVar14 = FUN_100fc828(param_1,iVar9,iVar20,(iVar28 + iVar9) / 2,(iVar27 + iVar20) / 2)
              ;
              iVar9 = iVar28;
              iVar20 = iVar27;
              piVar29 = piVar26;
              if (iVar14 != 0) goto LAB_100fd142;
            }
          }
          iVar9 = FUN_100fc828(param_1,iVar14,iVar20,iVar28,iVar27);
          pbVar24 = pbVar30;
joined_r0x100fd1ac:
          if (iVar9 != 0) goto LAB_100fd142;
        }
        else {
          if ((pbVar24[1] & 3) == 1) {
            iVar20 = piVar26[2] * param_1[3] - param_1[2];
            iVar14 = piVar26[3] * param_1[3] - param_1[2];
            iVar9 = iVar20;
            if (param_2 != 0) {
              iVar9 = iVar14;
              iVar14 = iVar20;
            }
            iVar9 = FUN_100fcd00(param_1,iVar9,iVar14);
            piVar26 = piVar29;
            pbVar24 = pbVar30;
            goto joined_r0x100fd1ac;
          }
          if ((piVar22 < piVar26 + 4) || ((pbVar24[2] & 3) != 2)) goto LAB_100fd4e4;
          uVar8 = param_1[3];
          piVar29 = piVar26 + 6;
          uVar18 = param_1[2];
          iVar20 = piVar26[5] * uVar8 - uVar18;
          iVar14 = piVar26[2] * uVar8 - uVar18;
          iVar9 = piVar26[3] * uVar8 - uVar18;
          local_48 = piVar26[4] * uVar8 - uVar18;
          if (param_2 == 0) {
            iVar28 = iVar14;
            iVar27 = iVar9;
            iVar35 = local_48;
            iVar36 = iVar20;
            if (piVar22 < piVar29) goto LAB_100fd872;
            iVar27 = piVar26[6] * uVar8 - uVar18;
            iVar35 = piVar26[7] * uVar8 - uVar18;
            iVar14 = iVar20;
          }
          else {
            iVar28 = iVar9;
            iVar27 = iVar14;
            iVar35 = iVar20;
            iVar36 = local_48;
            if (piVar22 < piVar29) {
LAB_100fd872:
              iVar9 = FUN_100fc37c(param_1,iVar28,iVar27,iVar35,iVar36,uVar7,local_4c);
              goto joined_r0x100fd2e0;
            }
            iVar27 = piVar26[7] * uVar8 - uVar18;
            iVar35 = piVar26[6] * uVar8 - uVar18;
            iVar9 = iVar14;
            iVar14 = local_48;
            local_48 = iVar20;
          }
          iVar9 = FUN_100fc37c(param_1,iVar28,iVar9,local_48,iVar14,iVar27,iVar35);
          if (iVar9 != 0) goto LAB_100fd142;
          pbVar24 = pbVar24 + 3;
          piVar26 = piVar29;
        }
      }
      iVar9 = FUN_100fcd00(param_1,uVar7,local_4c);
joined_r0x100fd2e0:
      if (iVar9 != 0) goto LAB_100fd142;
      uVar18 = param_1[0x21];
      uVar11 = param_1[1];
      uVar19 = param_1[0x10];
      uVar8 = uVar11 - 1 & uVar19;
      uVar10 = *(short *)(uVar18 + iVar33 * 2) + 1;
      if ((((uVar8 == 0) && ((int)param_1[0x11] <= (int)uVar19)) &&
          ((int)uVar19 <= (int)param_1[0x12])) && (param_1[0x16] != 0)) {
        uVar31 = param_1[0x14];
        if ((int)((uint)(*(ushort *)(param_1[0x16] + 0xc) ^ *(ushort *)(uVar31 + 0xc)) << 0x1c) < 0)
        {
          uVar34 = param_1[9];
        }
        else {
          uVar34 = param_1[9] - 4;
          param_1[9] = uVar34;
        }
      }
      else {
        uVar31 = param_1[0x14];
        uVar34 = param_1[9];
      }
      uVar15 = *(uint *)(uVar31 + 8);
      uVar16 = uVar34;
      if (uVar15 != uVar34) {
        if ((*(ushort *)(uVar31 + 0xc) & 8) == 0) {
          if ((int)(uVar34 - uVar15) < 0) goto LAB_100fd44a;
          uVar8 = param_1[2];
          *(int *)(uVar31 + 0x10) = (int)(uVar34 - uVar15) >> 2;
          if ((int)uVar8 <= (int)(((uVar19 + uVar11) - 1 & -uVar11) - uVar19)) {
            uVar13 = *(ushort *)(uVar31 + 0xc);
            if ((int)((uint)uVar13 << 0x1c) < 0) goto LAB_100fd522;
            *(ushort *)(uVar31 + 0xc) = uVar13 | 0x20;
          }
        }
        else {
          uVar19 = param_1[2];
          if ((int)(uVar34 - uVar15) < 0) {
LAB_100fd44a:
            param_1[10] = 99;
            return 1;
          }
          *(int *)(uVar31 + 0x10) = (int)(uVar34 - uVar15) >> 2;
          if ((int)uVar19 <= (int)uVar8) {
            uVar13 = *(ushort *)(uVar31 + 0xc);
LAB_100fd522:
            *(ushort *)(uVar31 + 0xc) = uVar13 | 0x10;
          }
        }
        uVar16 = uVar34 + 0x20;
        param_1[0x14] = uVar34;
        param_1[9] = uVar16;
        *(uint *)(uVar34 + 8) = uVar16;
        *(undefined4 *)(uVar34 + 0x10) = 0;
        *(uint *)(uVar31 + 0x1c) = uVar34;
        *(short *)(param_1 + 0x13) = (short)param_1[0x13] + 1;
      }
      if (param_1[8] <= uVar16) goto LAB_100fd14c;
      *(undefined1 *)((int)param_1 + 0x4f) = 0;
      if (param_1[0x16] != 0) {
        uVar8 = param_1[0x1e];
        iVar33 = iVar33 + 1;
        *(uint *)(uVar31 + 0x1c) = param_1[0x16];
        if ((short)uVar8 <= iVar33) {
          uVar10 = (ushort)param_1[0x13];
          goto joined_r0x100fd428;
        }
        goto LAB_100fd040;
      }
      iVar33 = iVar33 + 1;
    } while (iVar33 < (short)param_1[0x1e]);
    uVar10 = (ushort)param_1[0x13];
joined_r0x100fd428:
    if ((uVar10 < 2) || (uVar18 = param_1[0x15], uVar18 == 0)) {
      param_1[0x15] = 0;
      goto LAB_100fd430;
    }
    do {
      if (uVar10 == 1) {
        iVar33 = 0;
      }
      else {
        iVar33 = *(int *)(uVar18 + 8);
      }
      iVar9 = *(int *)(uVar18 + 0x10);
      if (uVar10 != 1) {
        iVar33 = iVar33 + iVar9 * 4;
      }
      *(int *)(uVar18 + 4) = iVar33;
      if ((int)((uint)*(ushort *)(uVar18 + 0xc) << 0x1c) < 0) {
        iVar33 = *(int *)(uVar18 + 0x14);
        iVar14 = iVar33 + iVar9;
      }
      else {
        iVar14 = *(int *)(uVar18 + 0x14) + 1;
        iVar33 = iVar14 - iVar9;
        *(int *)(uVar18 + 0x14) = iVar33;
        *(int *)(uVar18 + 8) = *(int *)(uVar18 + 8) + (iVar9 + 0x3fffffff) * 4;
      }
      iVar33 = FUN_100fbad0(param_1,iVar33);
      if (iVar33 != 0) goto LAB_100fd142;
      iVar33 = FUN_100fbad0(param_1,iVar14);
      uVar10 = uVar10 - 1;
      if (iVar33 != 0) goto LAB_100fd142;
      uVar18 = *(uint *)(uVar18 + 4);
    } while (uVar10 != 0);
    if (param_1[8] <= param_1[9]) goto LAB_100fd142;
    if ((uint *)param_1[0x15] == (uint *)0x0) {
LAB_100fd430:
      uVar18 = param_1[0xfc] - 1;
      param_1[0xfc] = uVar18;
      goto joined_r0x100fcfda;
    }
    local_36 = (short)((int)param_1[0x11] >> (*param_1 & 0xff));
    local_38 = (short)((int)param_1[0x12] >> (*param_1 & 0xff));
    bVar4 = false;
    bVar5 = false;
    local_34 = (uint *)0x0;
    local_30 = (uint *)0x0;
    local_2c[0] = (uint *)0x0;
    puVar21 = (uint *)param_1[0x15];
    sVar32 = local_36;
    sVar6 = local_38;
    do {
      sVar2 = (short)puVar21[5];
      sVar3 = (short)puVar21[4] + sVar2 + -1;
      if (sVar2 < sVar6) {
        bVar5 = true;
        sVar6 = sVar2;
      }
      if (sVar32 < sVar3) {
        bVar4 = true;
        sVar32 = sVar3;
      }
      puVar23 = (uint *)puVar21[1];
      *puVar21 = 0;
      ppuVar12 = &local_34;
      for (puVar25 = local_34; (puVar25 != (uint *)0x0 && ((int)*puVar25 < 1));
          puVar25 = (uint *)puVar25[1]) {
        ppuVar12 = (uint **)(puVar25 + 1);
      }
      puVar21[1] = (uint)puVar25;
      *ppuVar12 = puVar21;
      puVar21 = puVar23;
    } while (puVar23 != (uint *)0x0);
    if (bVar4) {
      local_36 = sVar32;
    }
    if (bVar5) {
      local_38 = sVar6;
    }
    if (param_1[0xb] == 0) {
      param_1[10] = 0x14;
      return 0x14;
    }
    (*(code *)param_1[0x25])(param_1,&local_38,&local_36);
    if (local_34 != (uint *)0x0) {
      puVar21 = local_34;
      do {
        puVar21[6] = puVar21[5] - (int)local_38;
        puVar21 = (uint *)puVar21[1];
      } while (puVar21 != (uint *)0x0);
    }
    uVar8 = (uint)local_38;
    uVar18 = param_1[0xb];
    if ((0 < (int)uVar18) &&
       ((*(uint *)(param_1[7] + uVar18 * -4) != uVar8 ||
        (param_1[0xb] = uVar18 - 1, uVar18 - 1 != 0)))) {
      local_4c = 0;
      puVar21 = local_34;
joined_r0x100fd60c:
      do {
        puVar25 = puVar21;
        if (puVar25 == (uint *)0x0) {
          FUN_100fbb98(&local_30);
          FUN_100fbb98(local_2c);
          uVar18 = param_1[0xb] - 1;
          sVar6 = (short)*(undefined4 *)(param_1[7] + param_1[0xb] * -4);
          uVar19 = (uint)sVar6;
          local_4c = (uint)(short)(sVar6 - (short)uVar8);
          if ((int)uVar8 < (int)uVar19) {
            uVar7 = uVar8;
          }
          param_1[0xb] = uVar18;
          puVar21 = local_30;
          if ((int)uVar8 < (int)uVar19) {
            do {
              if ((local_30 != (uint *)0x0) && (local_2c[0] != (uint *)0x0)) {
                sVar32 = 0;
                puVar21 = local_30;
                puVar25 = local_2c[0];
                do {
                  uVar11 = *puVar21;
                  uVar8 = *puVar25;
                  uVar18 = uVar11;
                  if ((int)uVar8 < (int)uVar11) {
                    uVar18 = uVar8;
                    uVar8 = uVar11;
                  }
                  uVar11 = param_1[1];
                  if ((int)uVar11 < (int)(uVar8 - uVar18)) {
LAB_100fd6aa:
                    (*(code *)param_1[0x26])(param_1,uVar7,uVar18,uVar8,puVar21,puVar25);
LAB_100fd6b8:
                    puVar21 = (uint *)puVar21[1];
                    puVar25 = (uint *)puVar25[1];
                  }
                  else {
                    uVar31 = -uVar11;
                    if ((((uVar18 & ~uVar31) == 0) ||
                        (uVar34 = (uVar11 - 1) + uVar8 & uVar31, uVar8 == uVar34)) ||
                       (((int)(uVar31 & uVar18) <= (int)uVar34 &&
                        (uVar34 != uVar11 + (uVar31 & uVar18))))) goto LAB_100fd6aa;
                    if ((puVar21[3] & 7) == 2) goto LAB_100fd6b8;
                    *puVar21 = uVar18;
                    *puVar25 = uVar8;
                    puVar21[6] = 1;
                    puVar21 = (uint *)puVar21[1];
                    sVar32 = sVar32 + 1;
                    puVar25 = (uint *)puVar25[1];
                  }
                } while ((puVar21 != (uint *)0x0) && (puVar25 != (uint *)0x0));
                puVar21 = local_30;
                puVar25 = local_2c[0];
                if (0 < sVar32) {
                  for (; (puVar21 != (uint *)0x0 && (puVar25 != (uint *)0x0));
                      puVar25 = (uint *)puVar25[1]) {
                    if (puVar21[6] != 0) {
                      uVar18 = *puVar25;
                      puVar21[6] = 0;
                      (*(code *)param_1[0x27])(param_1,uVar7,*puVar21,uVar18,puVar21,puVar25);
                    }
                    puVar21 = (uint *)puVar21[1];
                  }
                }
              }
              uVar7 = (uint)(short)((short)uVar7 + 1);
              (*(code *)param_1[0x28])(param_1);
              if (uVar19 == uVar7) goto code_r0x100fd732;
              FUN_100fbb98(&local_30);
              FUN_100fbb98(local_2c);
            } while( true );
          }
          goto LAB_100fd73c;
        }
        uVar18 = puVar25[6];
        puVar21 = (uint *)puVar25[1];
        puVar25[6] = uVar18 - local_4c;
        if (uVar18 - local_4c == 0) {
          if (local_34 != (uint *)0x0) {
            puVar23 = local_34;
            if (local_34 == puVar25) {
              ppuVar12 = &local_34;
            }
            else {
              do {
                puVar17 = puVar23;
                puVar23 = (uint *)puVar17[1];
                if (puVar23 == (uint *)0x0) goto LAB_100fd636;
              } while (puVar23 != puVar25);
              ppuVar12 = (uint **)(puVar17 + 1);
            }
            *ppuVar12 = puVar21;
          }
LAB_100fd636:
          if ((int)((uint)(ushort)puVar25[3] << 0x1c) < 0) {
            ppuVar12 = &local_30;
            for (puVar17 = local_30; (puVar17 != (uint *)0x0 && ((int)*puVar17 <= (int)*puVar25));
                puVar17 = (uint *)puVar17[1]) {
              ppuVar12 = (uint **)(puVar17 + 1);
            }
          }
          else {
            ppuVar12 = local_2c;
            puVar23 = local_2c[0];
            if (local_2c[0] == (uint *)0x0) {
              puVar17 = (uint *)0x0;
            }
            else {
              do {
                if ((int)*puVar25 < (int)*puVar23) {
                  puVar25[1] = (uint)puVar23;
                  *ppuVar12 = puVar25;
                  goto joined_r0x100fd60c;
                }
                ppuVar12 = (uint **)(puVar23 + 1);
                puVar23 = (uint *)puVar23[1];
                puVar17 = (uint *)0x0;
              } while (puVar23 != (uint *)0x0);
            }
          }
          puVar25[1] = (uint)puVar17;
          *ppuVar12 = puVar25;
        }
      } while( true );
    }
LAB_100fd814:
    if ((int)local_36 < (int)uVar8) goto LAB_100fd430;
    do {
      (*(code *)param_1[0x28])(param_1);
      uVar8 = (uint)(short)((short)uVar8 + 1);
    } while ((int)uVar8 <= (int)local_36);
    uVar18 = param_1[0xfc] - 1;
    param_1[0xfc] = uVar18;
  } while( true );
LAB_100fd2d0:
  iVar9 = FUN_100fc828(param_1,iVar14,iVar20,uVar7,local_4c);
  goto joined_r0x100fd2e0;
code_r0x100fd732:
  uVar18 = param_1[0xb];
  uVar8 = (uint)sVar6;
  puVar21 = local_30;
LAB_100fd73c:
  puVar25 = puVar21;
  puVar21 = local_2c[0];
  if (puVar25 != (uint *)0x0) {
    puVar21 = (uint *)puVar25[1];
    if ((puVar25[4] == 0) && (local_30 != (uint *)0x0)) {
      puVar23 = local_30;
      if (local_30 == puVar25) {
        ppuVar12 = &local_30;
      }
      else {
        do {
          puVar17 = puVar23;
          puVar23 = (uint *)puVar17[1];
          if (puVar23 == (uint *)0x0) goto LAB_100fd73c;
        } while (puVar23 != puVar25);
        ppuVar12 = (uint **)(puVar17 + 1);
      }
      *ppuVar12 = puVar21;
    }
    goto LAB_100fd73c;
  }
joined_r0x100fd784:
  puVar25 = puVar21;
  if (puVar21 != (uint *)0x0) {
    while ((puVar21 = (uint *)puVar25[1], puVar25[4] == 0 && (local_2c[0] != (uint *)0x0))) {
      puVar23 = local_2c[0];
      if (local_2c[0] == puVar25) {
        ppuVar12 = local_2c;
      }
      else {
        do {
          puVar17 = puVar23;
          puVar23 = (uint *)puVar17[1];
          if (puVar23 == (uint *)0x0) goto joined_r0x100fd784;
        } while (puVar23 != puVar25);
        ppuVar12 = (uint **)(puVar17 + 1);
      }
      *ppuVar12 = puVar21;
      puVar25 = puVar21;
      if (puVar21 == (uint *)0x0) goto LAB_100fd792;
    }
    goto joined_r0x100fd784;
  }
LAB_100fd792:
  puVar21 = local_34;
  if ((int)uVar18 < 1) goto LAB_100fd814;
  goto joined_r0x100fd60c;
}


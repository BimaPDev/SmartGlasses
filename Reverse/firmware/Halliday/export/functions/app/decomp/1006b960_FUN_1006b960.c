/* FUN_1006b960 @ 0x1006b960 */

int FUN_1006b960(int param_1,char *param_2,int param_3,char *param_4)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  char *pcVar12;
  char cVar13;
  char *pcVar14;
  char cVar15;
  uint uVar16;
  ushort *puVar17;
  char *pcVar18;
  undefined4 *puVar19;
  char *pcVar20;
  char *pcVar21;
  short sVar22;
  ushort *puVar23;
  ushort *puVar24;
  char local_44;
  ushort *local_3c;
  undefined4 *puVar8;
  
  if (param_1 != 1) {
    if (param_1 != 2) {
      return 0;
    }
    iVar3 = FUN_1006b0e4(param_2,param_3,param_4);
    return iVar3;
  }
  puVar6 = (ushort *)(param_2 + param_3 + -2);
  if (param_3 < 4) {
    if (param_3 != 0) {
      pcVar21 = (char *)((int)puVar6 + 1);
      pcVar12 = param_4 + 1;
      *param_4 = (char)param_3 + -1;
      if (param_2 <= pcVar21) {
        if ((pcVar12 < param_2 + 4 && param_2 < param_4 + 5) ||
           ((char *)((1 - (int)param_2) + (int)puVar6) < &NMI)) {
          pcVar12 = param_2;
          do {
            pcVar21 = pcVar12 + 1;
            param_4 = param_4 + 1;
            *param_4 = *pcVar12;
            pcVar12 = pcVar21;
          } while (param_2 + param_3 != pcVar21);
        }
        else {
          uVar16 = 0;
          pcVar14 = (char *)((2 - (int)param_2) + (int)puVar6);
          uVar4 = ((uint)(pcVar14 + -4) >> 2) + 1;
          pcVar18 = pcVar12;
          pcVar20 = param_2;
          do {
            uVar16 = uVar16 + 1;
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar20;
            pcVar18 = pcVar18 + 4;
            pcVar20 = pcVar20 + 4;
          } while (uVar16 < uVar4);
          if (((pcVar14 != (char *)(uVar4 * 4)) &&
              (pcVar12[uVar4 * 4] = param_2[uVar4 * 4], param_2 + uVar4 * 4 + 1 <= pcVar21)) &&
             (pcVar12[uVar4 * 4 + 1] = param_2[uVar4 * 4 + 1], param_2 + uVar4 * 4 + 2 <= pcVar21))
          {
            pcVar12[uVar4 * 4 + 2] = param_2[uVar4 * 4 + 2];
          }
        }
      }
      return param_3 + 1;
    }
    return 0;
  }
  puVar19 = (undefined4 *)*DAT_1006afd0;
  if (puVar19 == (undefined4 *)0x0) {
    return 0;
  }
  puVar7 = puVar19;
  do {
    puVar8 = puVar7 + 1;
    *puVar7 = 0;
    puVar7 = puVar8;
  } while (puVar8 != puVar19 + 0x400);
  *param_4 = '\x1f';
  puVar9 = (ushort *)(param_2 + 2);
  param_4[1] = *param_2;
  param_4[2] = param_2[1];
  pcVar12 = param_4 + 3;
  if (puVar9 < param_2 + param_3 + -0xd) {
    uVar4 = 2;
    puVar10 = puVar9;
    pcVar21 = pcVar12;
LAB_1006ad3a:
    sVar2 = (short)param_2;
    sVar22 = (short)puVar10;
    sVar5 = sVar22 - sVar2;
    uVar16 = (ushort)(*(ushort *)((int)puVar10 + 1) ^ *puVar10 ^ *puVar10 >> 5) & 0x7ff;
    uVar1 = *(ushort *)((int)puVar19 + uVar16 * 2);
    pcVar18 = param_2 + uVar1;
    pcVar12 = (char *)((int)puVar10 + (-1 - (int)pcVar18));
    *(short *)((int)puVar19 + uVar16 * 2) = sVar5;
    if (pcVar12 < (char *)0x1fff) {
      cVar15 = (char)*puVar10;
      if (((param_2[uVar1] != cVar15) || (pcVar18[1] != *(char *)((int)puVar10 + 1))) ||
         (pcVar18[2] != (char)puVar10[1])) goto LAB_1006ad24;
      if (pcVar12 == (char *)0x0) {
        local_3c = (ushort *)((int)puVar10 + 3);
        if (local_3c < puVar6) {
          pcVar18 = pcVar18 + 3;
          do {
            puVar11 = local_3c;
            local_3c = puVar11;
            if (*pcVar18 != (char)puVar10[1]) goto LAB_1006af50;
            local_3c = (ushort *)((int)puVar11 + 1);
            pcVar18 = pcVar18 + 1;
          } while (puVar6 != (ushort *)((int)puVar11 + 1));
          sVar5 = (short)(puVar11 + -1) - sVar2;
          uVar16 = (int)(puVar11 + -1) - (int)puVar10;
          puVar24 = (ushort *)((int)puVar11 + -1);
          local_3c = puVar6;
        }
        else {
          puVar24 = (ushort *)((int)puVar10 + 1);
          puVar11 = puVar10 + 1;
          uVar16 = 0;
        }
        goto LAB_1006adda;
      }
      puVar9 = puVar10 + 2;
      if (pcVar18[3] != *(char *)((int)puVar10 + 3)) {
        uVar16 = 1;
        sVar5 = (sVar22 + 1) - sVar2;
        puVar11 = (ushort *)((int)puVar10 + 3);
        puVar24 = puVar10 + 1;
        local_3c = puVar9;
        goto LAB_1006adda;
      }
      local_3c = (ushort *)((int)puVar10 + 5);
      if (pcVar18[4] == (char)puVar10[2]) {
        puVar23 = puVar10 + 3;
        if (pcVar18[5] == *(char *)((int)puVar10 + 5)) {
          puVar17 = (ushort *)((int)puVar10 + 7);
          if (pcVar18[6] == (char)puVar10[3]) {
            puVar9 = puVar10 + 4;
            if (pcVar18[7] == *(char *)((int)puVar10 + 7)) {
              local_3c = (ushort *)((int)puVar10 + 9);
              if (pcVar18[8] == (char)puVar10[4]) {
                if (pcVar18[9] == *(char *)((int)puVar10 + 9)) {
                  if (pcVar18[10] == (char)puVar10[5]) {
                    puVar9 = (ushort *)((int)puVar10 + 0xb);
                    pcVar18 = pcVar18 + 0xb;
                    do {
                      puVar11 = puVar9;
                      local_3c = puVar11;
                      if (puVar6 <= puVar11) goto LAB_1006af50;
                      cVar15 = *pcVar18;
                      puVar9 = (ushort *)((int)puVar11 + 1);
                      pcVar18 = pcVar18 + 1;
                    } while (cVar15 == (char)*puVar11);
                    sVar5 = (short)(puVar11 + -1) - sVar2;
                    uVar16 = (int)(puVar11 + -1) - (int)puVar10;
                    puVar24 = (ushort *)((int)puVar11 + -1);
                    local_3c = (ushort *)((int)puVar11 + 1);
                  }
                  else {
                    sVar5 = (short)puVar9 - sVar2;
                    uVar16 = 8;
                    puVar11 = puVar10 + 5;
                    puVar24 = local_3c;
                    local_3c = (ushort *)((int)puVar10 + 0xb);
                  }
                }
                else {
                  uVar16 = 7;
                  sVar5 = (short)puVar17 - sVar2;
                  puVar11 = local_3c;
                  puVar24 = puVar9;
                  local_3c = puVar10 + 5;
                }
              }
              else {
                sVar5 = (short)puVar23 - sVar2;
                uVar16 = 6;
                puVar11 = puVar9;
                puVar24 = puVar17;
              }
            }
            else {
              uVar16 = 5;
              sVar5 = (short)local_3c - sVar2;
              puVar11 = puVar17;
              puVar24 = puVar23;
              local_3c = puVar9;
            }
          }
          else {
            sVar5 = (short)puVar9 - sVar2;
            uVar16 = 4;
            puVar11 = puVar23;
            puVar24 = local_3c;
            local_3c = puVar17;
          }
        }
        else {
          sVar5 = (sVar22 + 3) - sVar2;
          uVar16 = 3;
          puVar11 = local_3c;
          puVar24 = puVar9;
          local_3c = puVar23;
        }
        goto LAB_1006adda;
      }
      sVar5 = (sVar22 + 2) - sVar2;
      sVar22 = sVar22 + 3;
      uVar16 = 2;
      if (uVar4 == 0) goto LAB_1006ae88;
      goto LAB_1006adde;
    }
    cVar15 = (char)*puVar10;
LAB_1006ad24:
    uVar4 = uVar4 + 1;
    puVar9 = (ushort *)((int)puVar10 + 1);
    pcVar12 = pcVar21 + 1;
    *pcVar21 = cVar15;
    if (uVar4 == 0x20) {
      uVar4 = 0;
      pcVar21[1] = '\x1f';
      pcVar12 = pcVar21 + 2;
    }
    goto LAB_1006ad36;
  }
  if (puVar9 <= (ushort *)((int)puVar6 + 1)) {
    uVar4 = 2;
    goto LAB_1006ad70;
  }
  cVar15 = '\x01';
  uVar4 = 2;
LAB_1006ad8e:
  pcVar12[~uVar4] = cVar15;
LAB_1006ad90:
  return (int)pcVar12 - (int)param_4;
LAB_1006af50:
  sVar5 = (short)(char *)((int)local_3c + -3) - sVar2;
  uVar16 = ((int)local_3c + -3) - (int)puVar10;
  puVar24 = local_3c + -1;
  puVar11 = (ushort *)((int)local_3c + -1);
LAB_1006adda:
  sVar22 = (short)puVar24;
  puVar9 = puVar11;
  if (uVar4 == 0) {
LAB_1006ae88:
    pcVar21 = pcVar21 + -1;
  }
  else {
LAB_1006adde:
    pcVar21[~uVar4] = (char)uVar4 + -1;
  }
  cVar15 = (char)((uint)pcVar12 >> 8);
  local_44 = (char)pcVar12;
  if (0x106 < uVar16) {
    pcVar12 = pcVar21;
    do {
      pcVar21 = pcVar12 + 3;
      uVar16 = uVar16 - 0x106;
      *pcVar12 = cVar15 + -0x20;
      pcVar12[1] = -3;
      pcVar12[2] = local_44;
      pcVar12 = pcVar21;
    } while (0x106 < uVar16);
  }
  if (uVar16 < 7) {
    cVar15 = cVar15 + (char)uVar16 * ' ';
    pcVar18 = pcVar21 + 2;
    cVar13 = local_44;
  }
  else {
    cVar15 = cVar15 + -0x20;
    cVar13 = (char)uVar16 + -7;
    pcVar21[2] = local_44;
    pcVar18 = pcVar21 + 3;
  }
  *pcVar21 = cVar15;
  pcVar21[1] = cVar13;
  *(short *)((int)puVar19 +
            ((ushort)(local_3c[-1] ^ *(ushort *)((int)local_3c + -3) ^
                     *(ushort *)((int)local_3c + -3) >> 5) & 0x7ff) * 2) = sVar5;
  *(short *)((int)puVar19 +
            ((ushort)(CONCAT11((char)*local_3c,*(char *)((int)local_3c + -1)) ^ local_3c[-1] ^
                     local_3c[-1] >> 5) & 0x7ff) * 2) = sVar22 - sVar2;
  uVar4 = 0;
  pcVar12 = pcVar18 + 1;
  *pcVar18 = '\x1f';
LAB_1006ad36:
  puVar10 = puVar9;
  pcVar21 = pcVar12;
  if (param_2 + param_3 + -0xd <= puVar9) goto LAB_1006ad68;
  goto LAB_1006ad3a;
LAB_1006ad68:
  if (puVar9 <= (ushort *)((int)puVar6 + 1)) {
LAB_1006ad70:
    do {
      while( true ) {
        puVar10 = (ushort *)((int)puVar9 + 1);
        uVar4 = uVar4 + 1;
        *pcVar12 = (char)*puVar9;
        puVar9 = puVar10;
        if (uVar4 != 0x20) break;
        pcVar12[1] = '\x1f';
        pcVar12 = pcVar12 + 2;
        if ((ushort *)((int)puVar6 + 1) < puVar10) goto LAB_1006adb2;
        uVar4 = 0;
      }
      pcVar12 = pcVar12 + 1;
    } while (puVar10 <= (ushort *)((int)puVar6 + 1));
  }
  if (uVar4 == 0) {
LAB_1006adb2:
    pcVar12 = pcVar12 + -1;
    goto LAB_1006ad90;
  }
  cVar15 = (char)uVar4 + -1;
  goto LAB_1006ad8e;
}


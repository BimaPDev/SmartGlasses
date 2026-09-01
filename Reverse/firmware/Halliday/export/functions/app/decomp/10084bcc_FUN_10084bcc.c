/* FUN_10084bcc @ 0x10084bcc */

undefined4 FUN_10084bcc(uint param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  ushort uVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 *puVar10;
  short sVar11;
  char *pcVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  char cVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  longlong lVar22;
  undefined8 uVar23;
  uint local_30;
  undefined4 *local_2c;
  uint uStack_28;
  undefined4 uStack_24;
  
  *param_2 = 0;
  local_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  iVar4 = FUN_10084444();
  if (iVar4 < 0) {
    return 0xb;
  }
  pcVar14 = *(char **)(DAT_10084da8 + iVar4 * 4);
  if (pcVar14 == (char *)0x0) {
    return 0xc;
  }
  iVar5 = FUN_101242c2(*(undefined4 *)(pcVar14 + 0x14));
  if (iVar5 == 0) {
    return 0xf;
  }
  *param_2 = pcVar14;
  if ((*pcVar14 == '\0') || (uVar6 = FUN_10086280(pcVar14[1]), (int)(uVar6 << 0x1f) < 0)) {
    *pcVar14 = '\0';
    pcVar14[1] = (char)iVar4;
    iVar4 = FUN_100862ac();
    if (iVar4 << 0x1f < 0) {
      return 3;
    }
    if (((param_3 & 0xfe) == 0) || (-1 < iVar4 << 0x1d)) {
      uVar6 = FUN_10084b28(pcVar14,0);
      if (uVar6 < 3) {
        pcVar8 = pcVar14 + 0x216;
        puVar16 = &local_30;
        do {
          if ((pcVar8[-8] & 0x7fU) == 0) {
            lVar22 = ZEXT48(pcVar8) << 0x20;
            if (pcVar8[-4] != '\0') {
              lVar22 = FUN_1012227a(pcVar8);
            }
            pcVar8 = (char *)((ulonglong)lVar22 >> 0x20);
            *puVar16 = (uint)lVar22;
          }
          else {
            *puVar16 = 0;
          }
          pcVar8 = pcVar8 + 0x10;
          puVar16 = puVar16 + 1;
        } while (pcVar14 + 0x256 != pcVar8);
        iVar4 = 0;
        puVar16 = &local_30;
        do {
          uVar17 = *puVar16;
          if ((uVar17 != 0) && (uVar19 = FUN_10084b28(pcVar14,uVar17), uVar19 < 2))
          goto LAB_10084ca8;
          iVar4 = iVar4 + 1;
          puVar16 = puVar16 + 1;
        } while (iVar4 != 4);
        uVar19 = uVar6;
        if (uVar6 != 2) {
LAB_10084ca8:
          if (uVar19 == 1) {
            pcVar8 = pcVar14 + 0x5b;
            do {
              pcVar12 = pcVar8 + 1;
              if (*pcVar8 != '\0') {
                return 0xd;
              }
              pcVar8 = pcVar12;
            } while (pcVar12 != pcVar14 + 0x90);
            if ((*(short *)(pcVar14 + 0xb8) == 0x100) && (pcVar14[0xbc] == '\t')) {
              lVar22 = FUN_1012228a(pcVar14 + 0x98);
              if ((int)(lVar22 + (ulonglong)uVar17 >> 0x20) == 0) {
                uVar7 = FUN_1012227a(pcVar14 + 0xa4);
                *(undefined4 *)(pcVar14 + 0x38) = uVar7;
                pcVar14[2] = pcVar14[0xbe];
                if (pcVar14[0xbe] == '\x01') {
                  uVar2 = 1 << pcVar14[0xbd];
                  *(ushort *)(pcVar14 + 10) = uVar2;
                  if ((uVar2 != 0) && (uVar6 = FUN_1012227a(pcVar14 + 0xac), uVar6 <= DAT_10084dac))
                  {
                    *(uint *)(pcVar14 + 0x34) = uVar6 + 2;
                    *(uint *)(pcVar14 + 0x3c) = uVar17;
                    iVar4 = FUN_1012227a(pcVar14 + 0xa8);
                    *(uint *)(pcVar14 + 0x48) = iVar4 + uVar17;
                    uVar23 = FUN_1012227a(pcVar14 + 0xa0);
                    uVar19 = (uint)((ulonglong)uVar23 >> 0x20);
                    uVar6 = uVar6 * uVar2;
                    bVar21 = !CARRY4(uVar19,uVar6);
                    if (!CARRY4(uVar19,uVar6)) {
                      bVar21 = uVar19 + uVar6 <= (uint)(lVar22 + (ulonglong)uVar17);
                    }
                    *(uint *)(pcVar14 + 0x40) = uVar17 + (int)uVar23;
                    if (bVar21) {
                      uVar7 = FUN_1012227a(pcVar14 + 0xb0);
                      *(undefined4 *)(pcVar14 + 0x44) = uVar7;
                      uVar7 = FUN_101222f0(pcVar14,uVar7);
                      iVar4 = FUN_10122662(pcVar14,uVar7);
                      if (iVar4 != 0) {
                        return 1;
                      }
                      pcVar8 = pcVar14 + 100;
                      do {
                        if (pcVar8[-0x14] == -0x7f) {
                          uVar23 = FUN_1012227a(pcVar8);
                          pcVar8 = (char *)((ulonglong)uVar23 >> 0x20);
                          if ((int)uVar23 == 2) {
                            cVar18 = '\x04';
                            pcVar14[0x18] = -1;
                            pcVar14[0x19] = -1;
                            pcVar14[0x1a] = -1;
                            pcVar14[0x1b] = -1;
                            pcVar14[0x1c] = -1;
                            pcVar14[0x1d] = -1;
                            pcVar14[0x1e] = -1;
                            pcVar14[0x1f] = -1;
                            goto LAB_10084f34;
                          }
                        }
                        pcVar8 = pcVar8 + 0x20;
                      } while (pcVar14 + 0x264 != pcVar8);
                    }
                  }
                }
              }
            }
          }
          else if (*(short *)(pcVar14 + 0x5b) == 0x200) {
            uVar6 = (uint)*(ushort *)(pcVar14 + 0x66);
            if (uVar6 == 0) {
              uVar6 = FUN_1012227a(pcVar14 + 0x74);
            }
            bVar1 = pcVar14[0x60];
            *(uint *)(pcVar14 + 0x38) = uVar6;
            pcVar14[2] = bVar1;
            if (bVar1 - 1 < 2) {
              uVar19 = (uint)(byte)pcVar14[0x5d];
              *(ushort *)(pcVar14 + 10) = (ushort)(byte)pcVar14[0x5d];
              if ((uVar19 != 0) && ((uVar19 - 1 & uVar19) == 0)) {
                uVar2 = *(ushort *)(pcVar14 + 0x61);
                *(ushort *)(pcVar14 + 8) = uVar2;
                if ((uVar2 & 0xf) == 0) {
                  uVar23 = CONCAT44(uVar6,(uint)*(ushort *)(pcVar14 + 99));
                  if (*(ushort *)(pcVar14 + 99) == 0) {
                    uVar23 = FUN_1012227a(pcVar14 + 0x70);
                  }
                  uVar6 = (uint)((ulonglong)uVar23 >> 0x20);
                  uVar9 = (uint)*(ushort *)(pcVar14 + 0x5e);
                  if (uVar9 != 0) {
                    iVar4 = uVar6 * bVar1;
                    uVar20 = uVar9 + (uVar2 >> 4) + iVar4;
                    if ((uVar20 <= (uint)uVar23) &&
                       (uVar13 = (uint)uVar23 - uVar20, uVar15 = uVar13 / uVar19, uVar19 <= uVar13))
                    {
                      if (uVar15 < 0xfff6) {
                        if (uVar15 < 0xff6) {
                          cVar18 = '\x01';
                        }
                        else {
                          cVar18 = '\x02';
                        }
                      }
                      else {
                        cVar18 = '\x03';
                      }
                      uVar15 = uVar15 + 2;
                      *(uint *)(pcVar14 + 0x34) = uVar15;
                      *(uint *)(pcVar14 + 0x3c) = uVar17;
                      *(uint *)(pcVar14 + 0x40) = uVar9 + uVar17;
                      *(uint *)(pcVar14 + 0x48) = uVar17 + uVar20;
                      if (cVar18 == '\x03') {
                        if (uVar2 != 0 || *(short *)(pcVar14 + 0x7a) != 0) {
                          return 0xd;
                        }
                        uVar23 = FUN_1012227a(pcVar14 + 0x7c);
                        uVar6 = (uint)((ulonglong)uVar23 >> 0x20);
                        iVar4 = uVar15 * 4;
                        *(int *)(pcVar14 + 0x44) = (int)uVar23;
                      }
                      else {
                        if (uVar2 == 0) {
                          return 0xd;
                        }
                        *(uint *)(pcVar14 + 0x44) = uVar9 + uVar17 + iVar4;
                        iVar4 = uVar15 * 2;
                        if (cVar18 != '\x02') {
                          iVar4 = (uVar15 & 1) + (uVar15 * 3 >> 1);
                        }
                      }
                      if (iVar4 + 0x1ffU >> 9 <= uVar6) {
                        pcVar14[0x18] = -1;
                        pcVar14[0x19] = -1;
                        pcVar14[0x1a] = -1;
                        pcVar14[0x1b] = -1;
                        pcVar14[0x1c] = -1;
                        pcVar14[0x1d] = -1;
                        pcVar14[0x1e] = -1;
                        pcVar14[0x1f] = -1;
                        pcVar14[4] = -0x80;
                        if (((((cVar18 == '\x03') && (*(short *)(pcVar14 + 0x80) == 1)) &&
                             (iVar4 = FUN_10122662(pcVar14,uVar17 + 1), iVar4 == 0)) &&
                            ((pcVar14[4] = '\0', *(short *)(pcVar14 + 0x24e) == -0x55ab &&
                             (iVar4 = FUN_1012227a(pcVar14 + 0x50), iVar4 == DAT_10084fbc)))) &&
                           (iVar4 = FUN_1012227a(pcVar14 + 0x234), iVar4 == DAT_10084fc0)) {
                          uVar7 = FUN_1012227a(pcVar14 + 0x238);
                          *(undefined4 *)(pcVar14 + 0x1c) = uVar7;
                          uVar7 = FUN_1012227a(pcVar14 + 0x23c);
                          *(undefined4 *)(pcVar14 + 0x18) = uVar7;
                        }
LAB_10084f34:
                        psVar3 = DAT_10084fc4;
                        *pcVar14 = cVar18;
                        sVar11 = *psVar3 + 1;
                        *psVar3 = sVar11;
                        *(short *)(pcVar14 + 6) = sVar11;
                        puVar10 = DAT_10084fc8;
                        iVar4 = 0;
                        pcVar14[0x24] = '\0';
                        pcVar14[0x25] = '\0';
                        pcVar14[0x26] = '\0';
                        pcVar14[0x27] = '\0';
                        do {
                          iVar4 = iVar4 + 1;
                          if (pcVar14 == (char *)*puVar10) {
                            *puVar10 = 0;
                          }
                          puVar10 = puVar10 + 4;
                        } while (iVar4 != 0x10);
                        return 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (uVar6 == 4) {
        return 1;
      }
      return 0xd;
    }
  }
  else {
    if ((param_3 & 0xfe) == 0) {
      return 0;
    }
    if ((uVar6 & 4) == 0) {
      return 0;
    }
  }
  return 10;
}


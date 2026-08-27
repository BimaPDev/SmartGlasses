/* FUN_140113e0 @ 0x140113e0 */

void FUN_140113e0(int param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  byte bVar2;
  sbyte *psVar3;
  int iVar4;
  uint uVar5;
  sbyte *psVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint unaff_r10;
  sbyte *psVar12;
  sbyte *psVar13;
  int iVar14;
  short *psVar15;
  short *psVar16;
  
  bVar2 = *(byte *)(param_1 + 6);
  if ((bVar2 != 0) && (*(byte *)(param_1 + 5) != 0)) {
    uVar10 = 0;
    psVar12 = (sbyte *)(param_1 + 0x94);
    psVar6 = psVar12 + *(byte *)(param_1 + 5);
    psVar15 = (short *)(param_1 + 100);
    psVar16 = psVar15;
    psVar13 = psVar12;
    do {
      do {
        psVar3 = psVar12 + 1;
        *psVar15 = (short)(1 << *psVar12) + -1;
        psVar12 = psVar3;
        psVar15 = psVar15 + 1;
      } while (psVar6 != psVar3);
      uVar10 = uVar10 + 1;
      psVar12 = psVar13 + 8;
      psVar15 = psVar16 + 8;
      psVar6 = psVar6 + 8;
      psVar16 = psVar15;
      psVar13 = psVar12;
    } while (uVar10 != bVar2);
  }
  uVar1 = *(ushort *)(param_1 + 8);
  uVar10 = (uint)uVar1;
  if ((uVar1 & 7) == 0) {
    *(byte *)(param_2 + (uint)*param_3) = (byte)uVar1 & 7;
    uVar10 = (uint)*(ushort *)(param_1 + 8);
    if (*(char *)(param_1 + 4) != '\0') goto LAB_1401144c;
    uVar10 = uVar10 & 7;
  }
  else {
    if (*(char *)(param_1 + 4) == '\0') goto LAB_140121cc;
LAB_1401144c:
    uVar10 = uVar10 & 7;
    uVar5 = 0;
    iVar4 = param_1;
    do {
      uVar8 = (uint)*(ushort *)(param_1 + 100);
      if (uVar8 != 0) {
        uVar7 = ((*(int *)(iVar4 + 0xa4) >> 1) << (0xf - *(byte *)(param_1 + 0x14) & 0xff)) +
                0x40000000;
        uVar8 = ((int)(uVar8 * (uVar7 & 0xffff)) >> 0xf) + uVar8 * ((int)uVar7 >> 0x10) * 2;
        iVar14 = (int)uVar8 >> 1;
        if (iVar14 < 0) {
          uVar8 = uVar8 >> 0x10;
        }
        else {
          if (DAT_1401171c <= iVar14) {
            iVar14 = DAT_1401171c;
          }
          uVar8 = iVar14 >> 0xf;
        }
        uVar7 = (uint)*(byte *)(param_1 + 0x94);
        do {
          bVar2 = 8 - (char)uVar10;
          uVar9 = (uint)bVar2;
          if (uVar9 == 8) {
            unaff_r10 = 0;
          }
          uVar11 = (uint)*param_3;
          if (uVar9 != 8) {
            unaff_r10 = (uint)*(char *)(param_2 + uVar11);
          }
          if (uVar7 <= uVar9) {
            unaff_r10 = unaff_r10 |
                        (int)(uVar8 << (8 - uVar7 & 0xff) & 0xffff) >> (8 - uVar9 & 0xff);
            *(char *)(param_2 + uVar11) = (char)unaff_r10;
            uVar8 = *(ushort *)(param_1 + 8) + uVar7;
            uVar10 = uVar8 & 0xffff;
            *(short *)(param_1 + 8) = (short)uVar8;
            if (uVar9 == uVar7) {
              *param_3 = *param_3 + 1;
              uVar10 = (uint)*(ushort *)(param_1 + 8);
            }
            uVar10 = uVar10 & 7;
            break;
          }
          *(byte *)(param_2 + uVar11) =
               (byte)unaff_r10 | (byte)((int)uVar8 >> (uVar7 - uVar9 & 0xff));
          *(ushort *)(param_1 + 8) = (ushort)bVar2 + *(short *)(param_1 + 8);
          uVar1 = *param_3;
          *param_3 = uVar1 + 1;
          *(undefined1 *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0;
          uVar7 = (uVar10 - 8) + uVar7 & 0xff;
          uVar10 = *(ushort *)(param_1 + 8) & 7;
        } while (uVar7 != 0);
      }
      uVar8 = (uint)*(ushort *)(param_1 + 0x66);
      if (uVar8 != 0) {
        uVar7 = ((*(int *)(iVar4 + 0xa8) >> 1) << (0xf - *(byte *)(param_1 + 0x15) & 0xff)) +
                0x40000000;
        uVar8 = ((int)(uVar8 * (uVar7 & 0xffff)) >> 0xf) + uVar8 * ((int)uVar7 >> 0x10) * 2;
        iVar14 = (int)uVar8 >> 1;
        if (iVar14 < 0) {
          uVar8 = uVar8 >> 0x10;
        }
        else {
          if (DAT_1401171c <= iVar14) {
            iVar14 = DAT_1401171c;
          }
          uVar8 = iVar14 >> 0xf;
        }
        uVar7 = (uint)*(byte *)(param_1 + 0x95);
        do {
          bVar2 = 8 - (char)uVar10;
          uVar9 = (uint)bVar2;
          if (uVar9 == 8) {
            unaff_r10 = 0;
          }
          uVar11 = (uint)*param_3;
          if (uVar9 != 8) {
            unaff_r10 = (uint)*(char *)(param_2 + uVar11);
          }
          if (uVar7 <= uVar9) {
            unaff_r10 = unaff_r10 |
                        (int)(uVar8 << (8 - uVar7 & 0xff) & 0xffff) >> (8 - uVar9 & 0xff);
            *(char *)(param_2 + uVar11) = (char)unaff_r10;
            uVar8 = *(ushort *)(param_1 + 8) + uVar7;
            uVar10 = uVar8 & 0xffff;
            *(short *)(param_1 + 8) = (short)uVar8;
            if (uVar9 == uVar7) {
              *param_3 = *param_3 + 1;
              uVar10 = (uint)*(ushort *)(param_1 + 8);
            }
            uVar10 = uVar10 & 7;
            break;
          }
          *(byte *)(param_2 + uVar11) =
               (byte)unaff_r10 | (byte)((int)uVar8 >> (uVar7 - uVar9 & 0xff));
          *(ushort *)(param_1 + 8) = (ushort)bVar2 + *(short *)(param_1 + 8);
          uVar1 = *param_3;
          *param_3 = uVar1 + 1;
          *(undefined1 *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0;
          uVar7 = (uVar10 - 8) + uVar7 & 0xff;
          uVar10 = *(ushort *)(param_1 + 8) & 7;
        } while (uVar7 != 0);
      }
      uVar8 = (uint)*(ushort *)(param_1 + 0x68);
      if (uVar8 != 0) {
        uVar7 = ((*(int *)(iVar4 + 0xac) >> 1) << (0xf - *(byte *)(param_1 + 0x16) & 0xff)) +
                0x40000000;
        uVar8 = ((int)(uVar8 * (uVar7 & 0xffff)) >> 0xf) + uVar8 * ((int)uVar7 >> 0x10) * 2;
        iVar14 = (int)uVar8 >> 1;
        if (iVar14 < 0) {
          uVar8 = uVar8 >> 0x10;
        }
        else {
          if (DAT_1401171c <= iVar14) {
            iVar14 = DAT_1401171c;
          }
          uVar8 = iVar14 >> 0xf;
        }
        uVar7 = (uint)*(byte *)(param_1 + 0x96);
        do {
          bVar2 = 8 - (char)uVar10;
          uVar9 = (uint)bVar2;
          if (uVar9 == 8) {
            unaff_r10 = 0;
          }
          uVar11 = (uint)*param_3;
          if (uVar9 != 8) {
            unaff_r10 = (uint)*(char *)(param_2 + uVar11);
          }
          if (uVar7 <= uVar9) {
            unaff_r10 = unaff_r10 |
                        (int)(uVar8 << (8 - uVar7 & 0xff) & 0xffff) >> (8 - uVar9 & 0xff);
            *(char *)(param_2 + uVar11) = (char)unaff_r10;
            uVar8 = *(ushort *)(param_1 + 8) + uVar7;
            uVar10 = uVar8 & 0xffff;
            *(short *)(param_1 + 8) = (short)uVar8;
            if (uVar9 == uVar7) {
              *param_3 = *param_3 + 1;
              uVar10 = (uint)*(ushort *)(param_1 + 8);
            }
            uVar10 = uVar10 & 7;
            break;
          }
          *(byte *)(param_2 + uVar11) =
               (byte)unaff_r10 | (byte)((int)uVar8 >> (uVar7 - uVar9 & 0xff));
          *(ushort *)(param_1 + 8) = (ushort)bVar2 + *(short *)(param_1 + 8);
          uVar1 = *param_3;
          *param_3 = uVar1 + 1;
          *(undefined1 *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0;
          uVar7 = (uVar10 - 8) + uVar7 & 0xff;
          uVar10 = *(ushort *)(param_1 + 8) & 7;
        } while (uVar7 != 0);
      }
      uVar8 = (uint)*(ushort *)(param_1 + 0x6a);
      if (uVar8 != 0) {
        uVar7 = ((*(int *)(iVar4 + 0xb0) >> 1) << (0xf - *(byte *)(param_1 + 0x17) & 0xff)) +
                0x40000000;
        uVar8 = ((int)(uVar8 * (uVar7 & 0xffff)) >> 0xf) + uVar8 * ((int)uVar7 >> 0x10) * 2;
        iVar14 = (int)uVar8 >> 1;
        if (iVar14 < 0) {
          uVar8 = uVar8 >> 0x10;
        }
        else {
          if (DAT_1401171c <= iVar14) {
            iVar14 = DAT_1401171c;
          }
          uVar8 = iVar14 >> 0xf;
        }
        uVar7 = (uint)*(byte *)(param_1 + 0x97);
        do {
          bVar2 = 8 - (char)uVar10;
          uVar9 = (uint)bVar2;
          if (uVar9 == 8) {
            unaff_r10 = 0;
          }
          uVar11 = (uint)*param_3;
          if (uVar9 != 8) {
            unaff_r10 = (uint)*(char *)(param_2 + uVar11);
          }
          if (uVar7 <= uVar9) {
            unaff_r10 = unaff_r10 |
                        (int)(uVar8 << (8 - uVar7 & 0xff) & 0xffff) >> (8 - uVar9 & 0xff);
            *(char *)(param_2 + uVar11) = (char)unaff_r10;
            uVar8 = *(ushort *)(param_1 + 8) + uVar7;
            uVar10 = uVar8 & 0xffff;
            *(short *)(param_1 + 8) = (short)uVar8;
            if (uVar9 == uVar7) {
              *param_3 = *param_3 + 1;
              uVar10 = (uint)*(ushort *)(param_1 + 8);
            }
            uVar10 = uVar10 & 7;
            break;
          }
          *(byte *)(param_2 + uVar11) =
               (byte)unaff_r10 | (byte)((int)uVar8 >> (uVar7 - uVar9 & 0xff));
          *(ushort *)(param_1 + 8) = (ushort)bVar2 + *(short *)(param_1 + 8);
          uVar1 = *param_3;
          *param_3 = uVar1 + 1;
          *(undefined1 *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0;
          uVar7 = (uVar10 - 8) + uVar7 & 0xff;
          uVar10 = *(ushort *)(param_1 + 8) & 7;
        } while (uVar7 != 0);
      }
      if (4 < *(byte *)(param_1 + 5)) {
        uVar8 = (uint)*(ushort *)(param_1 + 0x6c);
        if (uVar8 != 0) {
          uVar7 = ((*(int *)(iVar4 + 0xb4) >> 1) << (0xf - *(byte *)(param_1 + 0x18) & 0xff)) +
                  0x40000000;
          uVar8 = ((int)(uVar8 * (uVar7 & 0xffff)) >> 0xf) + uVar8 * ((int)uVar7 >> 0x10) * 2;
          iVar14 = (int)uVar8 >> 1;
          if (iVar14 < 0) {
            uVar8 = uVar8 >> 0x10;
          }
          else {
            if (DAT_14011a74 <= iVar14) {
              iVar14 = DAT_14011a74;
            }
            uVar8 = iVar14 >> 0xf;
          }
          uVar7 = (uint)*(byte *)(param_1 + 0x98);
          do {
            bVar2 = 8 - (char)uVar10;
            uVar9 = (uint)bVar2;
            if (uVar9 == 8) {
              unaff_r10 = 0;
            }
            uVar11 = (uint)*param_3;
            if (uVar9 != 8) {
              unaff_r10 = (uint)*(char *)(param_2 + uVar11);
            }
            if (uVar7 <= uVar9) {
              unaff_r10 = unaff_r10 |
                          (int)(uVar8 << (8 - uVar7 & 0xff) & 0xffff) >> (8 - uVar9 & 0xff);
              *(char *)(param_2 + uVar11) = (char)unaff_r10;
              uVar8 = *(ushort *)(param_1 + 8) + uVar7;
              uVar10 = uVar8 & 0xffff;
              *(short *)(param_1 + 8) = (short)uVar8;
              if (uVar9 == uVar7) {
                *param_3 = *param_3 + 1;
                uVar10 = (uint)*(ushort *)(param_1 + 8);
              }
              uVar10 = uVar10 & 7;
              break;
            }
            *(byte *)(param_2 + uVar11) =
                 (byte)unaff_r10 | (byte)((int)uVar8 >> (uVar7 - uVar9 & 0xff));
            *(ushort *)(param_1 + 8) = (ushort)bVar2 + *(short *)(param_1 + 8);
            uVar1 = *param_3;
            *param_3 = uVar1 + 1;
            *(undefined1 *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0;
            uVar7 = (uVar10 - 8) + uVar7 & 0xff;
            uVar10 = *(ushort *)(param_1 + 8) & 7;
          } while (uVar7 != 0);
        }
        uVar8 = (uint)*(ushort *)(param_1 + 0x6e);
        if (uVar8 != 0) {
          uVar7 = ((*(int *)(iVar4 + 0xb8) >> 1) << (0xf - *(byte *)(param_1 + 0x19) & 0xff)) +
                  0x40000000;
          uVar8 = ((int)(uVar8 * (uVar7 & 0xffff)) >> 0xf) + uVar8 * ((int)uVar7 >> 0x10) * 2;
          iVar14 = (int)uVar8 >> 1;
          if (iVar14 < 0) {
            uVar8 = uVar8 >> 0x10;
          }
          else {
            if (DAT_14011a74 <= iVar14) {
              iVar14 = DAT_14011a74;
            }
            uVar8 = iVar14 >> 0xf;
          }
          uVar7 = (uint)*(byte *)(param_1 + 0x99);
          do {
            bVar2 = 8 - (char)uVar10;
            uVar9 = (uint)bVar2;
            if (uVar9 == 8) {
              unaff_r10 = 0;
            }
            uVar11 = (uint)*param_3;
            if (uVar9 != 8) {
              unaff_r10 = (uint)*(char *)(param_2 + uVar11);
            }
            if (uVar7 <= uVar9) {
              unaff_r10 = unaff_r10 |
                          (int)(uVar8 << (8 - uVar7 & 0xff) & 0xffff) >> (8 - uVar9 & 0xff);
              *(char *)(param_2 + uVar11) = (char)unaff_r10;
              uVar8 = *(ushort *)(param_1 + 8) + uVar7;
              uVar10 = uVar8 & 0xffff;
              *(short *)(param_1 + 8) = (short)uVar8;
              if (uVar9 == uVar7) {
                *param_3 = *param_3 + 1;
                uVar10 = (uint)*(ushort *)(param_1 + 8);
              }
              uVar10 = uVar10 & 7;
              break;
            }
            *(byte *)(param_2 + uVar11) =
                 (byte)unaff_r10 | (byte)((int)uVar8 >> (uVar7 - uVar9 & 0xff));
            *(ushort *)(param_1 + 8) = (ushort)bVar2 + *(short *)(param_1 + 8);
            uVar1 = *param_3;
            *param_3 = uVar1 + 1;
            *(undefined1 *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0;
            uVar7 = (uVar10 - 8) + uVar7 & 0xff;
            uVar10 = *(ushort *)(param_1 + 8) & 7;
          } while (uVar7 != 0);
        }
        uVar8 = (uint)*(ushort *)(param_1 + 0x70);
        if (uVar8 != 0) {
          uVar7 = ((*(int *)(iVar4 + 0xbc) >> 1) << (0xf - *(byte *)(param_1 + 0x1a) & 0xff)) +
                  0x40000000;
          uVar8 = ((int)(uVar8 * (uVar7 & 0xffff)) >> 0xf) + uVar8 * ((int)uVar7 >> 0x10) * 2;
          iVar14 = (int)uVar8 >> 1;
          if (iVar14 < 0) {
            uVar8 = uVar8 >> 0x10;
          }
          else {
            if (DAT_14011a74 <= iVar14) {
              iVar14 = DAT_14011a74;
            }
            uVar8 = iVar14 >> 0xf;
          }
          uVar7 = (uint)*(byte *)(param_1 + 0x9a);
          do {
            bVar2 = 8 - (char)uVar10;
            uVar9 = (uint)bVar2;
            if (uVar9 == 8) {
              unaff_r10 = 0;
            }
            uVar11 = (uint)*param_3;
            if (uVar9 != 8) {
              unaff_r10 = (uint)*(char *)(param_2 + uVar11);
            }
            if (uVar7 <= uVar9) {
              unaff_r10 = unaff_r10 |
                          (int)(uVar8 << (8 - uVar7 & 0xff) & 0xffff) >> (8 - uVar9 & 0xff);
              *(char *)(param_2 + uVar11) = (char)unaff_r10;
              uVar8 = *(ushort *)(param_1 + 8) + uVar7;
              uVar10 = uVar8 & 0xffff;
              *(short *)(param_1 + 8) = (short)uVar8;
              if (uVar9 == uVar7) {
                *param_3 = *param_3 + 1;
                uVar10 = (uint)*(ushort *)(param_1 + 8);
              }
              uVar10 = uVar10 & 7;
              break;
            }
            *(byte *)(param_2 + uVar11) =
                 (byte)unaff_r10 | (byte)((int)uVar8 >> (uVar7 - uVar9 & 0xff));
            *(ushort *)(param_1 + 8) = (ushort)bVar2 + *(short *)(param_1 + 8);
            uVar1 = *param_3;
            *param_3 = uVar1 + 1;
            *(undefined1 *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0;
            uVar7 = (uVar10 - 8) + uVar7 & 0xff;
            uVar10 = *(ushort *)(param_1 + 8) & 7;
          } while (uVar7 != 0);
        }
        uVar8 = (uint)*(ushort *)(param_1 + 0x72);
        if (uVar8 != 0) {
          uVar7 = ((*(int *)(iVar4 + 0xc0) >> 1) << (0xf - *(byte *)(param_1 + 0x1b) & 0xff)) +
                  0x40000000;
          uVar8 = ((int)(uVar8 * (uVar7 & 0xffff)) >> 0xf) + uVar8 * ((int)uVar7 >> 0x10) * 2;
          iVar14 = (int)uVar8 >> 1;
          if (iVar14 < 0) {
            uVar8 = uVar8 >> 0x10;
          }
          else {
            if (DAT_14011a74 <= iVar14) {
              iVar14 = DAT_14011a74;
            }
            uVar8 = iVar14 >> 0xf;
          }
          uVar7 = (uint)*(byte *)(param_1 + 0x9b);
          do {
            bVar2 = 8 - (char)uVar10;
            uVar9 = (uint)bVar2;
            if (uVar9 == 8) {
              unaff_r10 = 0;
            }
            uVar11 = (uint)*param_3;
            if (uVar9 != 8) {
              unaff_r10 = (uint)*(char *)(param_2 + uVar11);
            }
            if (uVar7 <= uVar9) {
              unaff_r10 = unaff_r10 |
                          (int)(uVar8 << (8 - uVar7 & 0xff) & 0xffff) >> (8 - uVar9 & 0xff);
              *(char *)(param_2 + uVar11) = (char)unaff_r10;
              uVar8 = *(ushort *)(param_1 + 8) + uVar7;
              uVar10 = uVar8 & 0xffff;
              *(short *)(param_1 + 8) = (short)uVar8;
              if (uVar9 == uVar7) {
                *param_3 = *param_3 + 1;
                uVar10 = (uint)*(ushort *)(param_1 + 8);
              }
              uVar10 = uVar10 & 7;
              break;
            }
            *(byte *)(param_2 + uVar11) =
                 (byte)unaff_r10 | (byte)((int)uVar8 >> (uVar7 - uVar9 & 0xff));
            *(ushort *)(param_1 + 8) = (ushort)bVar2 + *(short *)(param_1 + 8);
            uVar1 = *param_3;
            *param_3 = uVar1 + 1;
            *(undefined1 *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0;
            uVar7 = (uVar10 - 8) + uVar7 & 0xff;
            uVar10 = *(ushort *)(param_1 + 8) & 7;
          } while (uVar7 != 0);
        }
      }
      if (1 < *(byte *)(param_1 + 6)) {
        uVar8 = (uint)*(ushort *)(param_1 + 0x74);
        if (uVar8 != 0) {
          uVar7 = ((*(int *)(iVar4 + 0xc4) >> 1) << (0xf - *(byte *)(param_1 + 0x1c) & 0xff)) +
                  0x40000000;
          uVar8 = ((int)(uVar8 * (uVar7 & 0xffff)) >> 0xf) + uVar8 * ((int)uVar7 >> 0x10) * 2;
          iVar14 = (int)uVar8 >> 1;
          if (iVar14 < 0) {
            uVar8 = uVar8 >> 0x10;
          }
          else {
            if (DAT_14011dd0 <= iVar14) {
              iVar14 = DAT_14011dd0;
            }
            uVar8 = iVar14 >> 0xf;
          }
          uVar7 = (uint)*(byte *)(param_1 + 0x9c);
          do {
            bVar2 = 8 - (char)uVar10;
            uVar9 = (uint)bVar2;
            if (uVar9 == 8) {
              unaff_r10 = 0;
            }
            uVar11 = (uint)*param_3;
            if (uVar9 != 8) {
              unaff_r10 = (uint)*(char *)(param_2 + uVar11);
            }
            if (uVar7 <= uVar9) {
              unaff_r10 = unaff_r10 |
                          (int)(uVar8 << (8 - uVar7 & 0xff) & 0xffff) >> (8 - uVar9 & 0xff);
              *(char *)(param_2 + uVar11) = (char)unaff_r10;
              uVar8 = *(ushort *)(param_1 + 8) + uVar7;
              uVar10 = uVar8 & 0xffff;
              *(short *)(param_1 + 8) = (short)uVar8;
              if (uVar9 == uVar7) {
                *param_3 = *param_3 + 1;
                uVar10 = (uint)*(ushort *)(param_1 + 8);
              }
              uVar10 = uVar10 & 7;
              break;
            }
            *(byte *)(param_2 + uVar11) =
                 (byte)unaff_r10 | (byte)((int)uVar8 >> (uVar7 - uVar9 & 0xff));
            *(ushort *)(param_1 + 8) = (ushort)bVar2 + *(short *)(param_1 + 8);
            uVar1 = *param_3;
            *param_3 = uVar1 + 1;
            *(undefined1 *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0;
            uVar7 = (uVar10 - 8) + uVar7 & 0xff;
            uVar10 = *(ushort *)(param_1 + 8) & 7;
          } while (uVar7 != 0);
        }
        uVar8 = (uint)*(ushort *)(param_1 + 0x76);
        if (uVar8 != 0) {
          uVar7 = ((*(int *)(iVar4 + 200) >> 1) << (0xf - *(byte *)(param_1 + 0x1d) & 0xff)) +
                  0x40000000;
          uVar8 = ((int)(uVar8 * (uVar7 & 0xffff)) >> 0xf) + uVar8 * ((int)uVar7 >> 0x10) * 2;
          iVar14 = (int)uVar8 >> 1;
          if (iVar14 < 0) {
            uVar8 = uVar8 >> 0x10;
          }
          else {
            if (DAT_14011dd0 <= iVar14) {
              iVar14 = DAT_14011dd0;
            }
            uVar8 = iVar14 >> 0xf;
          }
          uVar7 = (uint)*(byte *)(param_1 + 0x9d);
          do {
            bVar2 = 8 - (char)uVar10;
            uVar9 = (uint)bVar2;
            if (uVar9 == 8) {
              unaff_r10 = 0;
            }
            uVar11 = (uint)*param_3;
            if (uVar9 != 8) {
              unaff_r10 = (uint)*(char *)(param_2 + uVar11);
            }
            if (uVar7 <= uVar9) {
              unaff_r10 = unaff_r10 |
                          (int)(uVar8 << (8 - uVar7 & 0xff) & 0xffff) >> (8 - uVar9 & 0xff);
              *(char *)(param_2 + uVar11) = (char)unaff_r10;
              uVar8 = *(ushort *)(param_1 + 8) + uVar7;
              uVar10 = uVar8 & 0xffff;
              *(short *)(param_1 + 8) = (short)uVar8;
              if (uVar9 == uVar7) {
                *param_3 = *param_3 + 1;
                uVar10 = (uint)*(ushort *)(param_1 + 8);
              }
              uVar10 = uVar10 & 7;
              break;
            }
            *(byte *)(param_2 + uVar11) =
                 (byte)unaff_r10 | (byte)((int)uVar8 >> (uVar7 - uVar9 & 0xff));
            *(ushort *)(param_1 + 8) = (ushort)bVar2 + *(short *)(param_1 + 8);
            uVar1 = *param_3;
            *param_3 = uVar1 + 1;
            *(undefined1 *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0;
            uVar7 = (uVar10 - 8) + uVar7 & 0xff;
            uVar10 = *(ushort *)(param_1 + 8) & 7;
          } while (uVar7 != 0);
        }
        uVar8 = (uint)*(ushort *)(param_1 + 0x78);
        if (uVar8 != 0) {
          uVar7 = ((*(int *)(iVar4 + 0xcc) >> 1) << (0xf - *(byte *)(param_1 + 0x1e) & 0xff)) +
                  0x40000000;
          uVar8 = ((int)(uVar8 * (uVar7 & 0xffff)) >> 0xf) + uVar8 * ((int)uVar7 >> 0x10) * 2;
          iVar14 = (int)uVar8 >> 1;
          if (iVar14 < 0) {
            uVar8 = uVar8 >> 0x10;
          }
          else {
            if (DAT_14011dd0 <= iVar14) {
              iVar14 = DAT_14011dd0;
            }
            uVar8 = iVar14 >> 0xf;
          }
          uVar7 = (uint)*(byte *)(param_1 + 0x9e);
          do {
            bVar2 = 8 - (char)uVar10;
            uVar9 = (uint)bVar2;
            if (uVar9 == 8) {
              unaff_r10 = 0;
            }
            uVar11 = (uint)*param_3;
            if (uVar9 != 8) {
              unaff_r10 = (uint)*(char *)(param_2 + uVar11);
            }
            if (uVar7 <= uVar9) {
              unaff_r10 = unaff_r10 |
                          (int)(uVar8 << (8 - uVar7 & 0xff) & 0xffff) >> (8 - uVar9 & 0xff);
              *(char *)(param_2 + uVar11) = (char)unaff_r10;
              uVar8 = *(ushort *)(param_1 + 8) + uVar7;
              uVar10 = uVar8 & 0xffff;
              *(short *)(param_1 + 8) = (short)uVar8;
              if (uVar9 == uVar7) {
                *param_3 = *param_3 + 1;
                uVar10 = (uint)*(ushort *)(param_1 + 8);
              }
              uVar10 = uVar10 & 7;
              break;
            }
            *(byte *)(param_2 + uVar11) =
                 (byte)unaff_r10 | (byte)((int)uVar8 >> (uVar7 - uVar9 & 0xff));
            *(ushort *)(param_1 + 8) = (ushort)bVar2 + *(short *)(param_1 + 8);
            uVar1 = *param_3;
            *param_3 = uVar1 + 1;
            *(undefined1 *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0;
            uVar7 = (uVar10 - 8) + uVar7 & 0xff;
            uVar10 = *(ushort *)(param_1 + 8) & 7;
          } while (uVar7 != 0);
        }
        uVar8 = (uint)*(ushort *)(param_1 + 0x7a);
        if (uVar8 != 0) {
          uVar7 = ((*(int *)(iVar4 + 0xd0) >> 1) << (0xf - *(byte *)(param_1 + 0x1f) & 0xff)) +
                  0x40000000;
          uVar8 = ((int)(uVar8 * (uVar7 & 0xffff)) >> 0xf) + uVar8 * ((int)uVar7 >> 0x10) * 2;
          iVar14 = (int)uVar8 >> 1;
          if (iVar14 < 0) {
            uVar8 = uVar8 >> 0x10;
          }
          else {
            if (DAT_14011dd0 <= iVar14) {
              iVar14 = DAT_14011dd0;
            }
            uVar8 = iVar14 >> 0xf;
          }
          uVar7 = (uint)*(byte *)(param_1 + 0x9f);
          do {
            bVar2 = 8 - (char)uVar10;
            uVar9 = (uint)bVar2;
            if (uVar9 == 8) {
              unaff_r10 = 0;
            }
            uVar11 = (uint)*param_3;
            if (uVar9 != 8) {
              unaff_r10 = (uint)*(char *)(param_2 + uVar11);
            }
            if (uVar7 <= uVar9) {
              unaff_r10 = unaff_r10 |
                          (int)(uVar8 << (8 - uVar7 & 0xff) & 0xffff) >> (8 - uVar9 & 0xff);
              *(char *)(param_2 + uVar11) = (char)unaff_r10;
              uVar8 = *(ushort *)(param_1 + 8) + uVar7;
              uVar10 = uVar8 & 0xffff;
              *(short *)(param_1 + 8) = (short)uVar8;
              if (uVar9 == uVar7) {
                *param_3 = *param_3 + 1;
                uVar10 = (uint)*(ushort *)(param_1 + 8);
              }
              uVar10 = uVar10 & 7;
              break;
            }
            *(byte *)(param_2 + uVar11) =
                 (byte)unaff_r10 | (byte)((int)uVar8 >> (uVar7 - uVar9 & 0xff));
            *(ushort *)(param_1 + 8) = (ushort)bVar2 + *(short *)(param_1 + 8);
            uVar1 = *param_3;
            *param_3 = uVar1 + 1;
            *(undefined1 *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0;
            uVar7 = (uVar10 - 8) + uVar7 & 0xff;
            uVar10 = *(ushort *)(param_1 + 8) & 7;
          } while (uVar7 != 0);
        }
        if (4 < *(byte *)(param_1 + 5)) {
          uVar8 = (uint)*(ushort *)(param_1 + 0x7c);
          if (uVar8 != 0) {
            uVar7 = ((*(int *)(iVar4 + 0xd4) >> 1) << (0xf - *(byte *)(param_1 + 0x20) & 0xff)) +
                    0x40000000;
            uVar8 = ((int)(uVar8 * (uVar7 & 0xffff)) >> 0xf) + uVar8 * ((int)uVar7 >> 0x10) * 2;
            iVar14 = (int)uVar8 >> 1;
            if (iVar14 < 0) {
              uVar8 = uVar8 >> 0x10;
            }
            else {
              if (DAT_14012128 <= iVar14) {
                iVar14 = DAT_14012128;
              }
              uVar8 = iVar14 >> 0xf;
            }
            uVar7 = (uint)*(byte *)(param_1 + 0xa0);
            do {
              bVar2 = 8 - (char)uVar10;
              uVar9 = (uint)bVar2;
              if (uVar9 == 8) {
                unaff_r10 = 0;
              }
              uVar11 = (uint)*param_3;
              if (uVar9 != 8) {
                unaff_r10 = (uint)*(char *)(param_2 + uVar11);
              }
              if (uVar7 <= uVar9) {
                unaff_r10 = unaff_r10 |
                            (int)(uVar8 << (8 - uVar7 & 0xff) & 0xffff) >> (8 - uVar9 & 0xff);
                *(char *)(param_2 + uVar11) = (char)unaff_r10;
                uVar8 = *(ushort *)(param_1 + 8) + uVar7;
                uVar10 = uVar8 & 0xffff;
                *(short *)(param_1 + 8) = (short)uVar8;
                if (uVar9 == uVar7) {
                  *param_3 = *param_3 + 1;
                  uVar10 = (uint)*(ushort *)(param_1 + 8);
                }
                uVar10 = uVar10 & 7;
                break;
              }
              *(byte *)(param_2 + uVar11) =
                   (byte)unaff_r10 | (byte)((int)uVar8 >> (uVar7 - uVar9 & 0xff));
              *(ushort *)(param_1 + 8) = (ushort)bVar2 + *(short *)(param_1 + 8);
              uVar1 = *param_3;
              *param_3 = uVar1 + 1;
              *(undefined1 *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0;
              uVar7 = (uVar10 - 8) + uVar7 & 0xff;
              uVar10 = *(ushort *)(param_1 + 8) & 7;
            } while (uVar7 != 0);
          }
          uVar8 = (uint)*(ushort *)(param_1 + 0x7e);
          if (uVar8 != 0) {
            uVar7 = ((*(int *)(iVar4 + 0xd8) >> 1) << (0xf - *(byte *)(param_1 + 0x21) & 0xff)) +
                    0x40000000;
            uVar8 = ((int)(uVar8 * (uVar7 & 0xffff)) >> 0xf) + uVar8 * ((int)uVar7 >> 0x10) * 2;
            iVar14 = (int)uVar8 >> 1;
            if (iVar14 < 0) {
              uVar8 = uVar8 >> 0x10;
            }
            else {
              if (DAT_14012128 <= iVar14) {
                iVar14 = DAT_14012128;
              }
              uVar8 = iVar14 >> 0xf;
            }
            uVar7 = (uint)*(byte *)(param_1 + 0xa1);
            do {
              bVar2 = 8 - (char)uVar10;
              uVar9 = (uint)bVar2;
              if (uVar9 == 8) {
                unaff_r10 = 0;
              }
              uVar11 = (uint)*param_3;
              if (uVar9 != 8) {
                unaff_r10 = (uint)*(char *)(param_2 + uVar11);
              }
              if (uVar7 <= uVar9) {
                unaff_r10 = unaff_r10 |
                            (int)(uVar8 << (8 - uVar7 & 0xff) & 0xffff) >> (8 - uVar9 & 0xff);
                *(char *)(param_2 + uVar11) = (char)unaff_r10;
                uVar8 = *(ushort *)(param_1 + 8) + uVar7;
                uVar10 = uVar8 & 0xffff;
                *(short *)(param_1 + 8) = (short)uVar8;
                if (uVar9 == uVar7) {
                  *param_3 = *param_3 + 1;
                  uVar10 = (uint)*(ushort *)(param_1 + 8);
                }
                uVar10 = uVar10 & 7;
                break;
              }
              *(byte *)(param_2 + uVar11) =
                   (byte)unaff_r10 | (byte)((int)uVar8 >> (uVar7 - uVar9 & 0xff));
              *(ushort *)(param_1 + 8) = (ushort)bVar2 + *(short *)(param_1 + 8);
              uVar1 = *param_3;
              *param_3 = uVar1 + 1;
              *(undefined1 *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0;
              uVar7 = (uVar10 - 8) + uVar7 & 0xff;
              uVar10 = *(ushort *)(param_1 + 8) & 7;
            } while (uVar7 != 0);
          }
          uVar8 = (uint)*(ushort *)(param_1 + 0x80);
          if (uVar8 != 0) {
            uVar7 = ((*(int *)(iVar4 + 0xdc) >> 1) << (0xf - *(byte *)(param_1 + 0x22) & 0xff)) +
                    0x40000000;
            uVar8 = ((int)(uVar8 * (uVar7 & 0xffff)) >> 0xf) + uVar8 * ((int)uVar7 >> 0x10) * 2;
            iVar14 = (int)uVar8 >> 1;
            if (iVar14 < 0) {
              uVar8 = uVar8 >> 0x10;
            }
            else {
              if (DAT_14012128 <= iVar14) {
                iVar14 = DAT_14012128;
              }
              uVar8 = iVar14 >> 0xf;
            }
            uVar7 = (uint)*(byte *)(param_1 + 0xa2);
            do {
              bVar2 = 8 - (char)uVar10;
              uVar9 = (uint)bVar2;
              if (uVar9 == 8) {
                unaff_r10 = 0;
              }
              uVar11 = (uint)*param_3;
              if (uVar9 != 8) {
                unaff_r10 = (uint)*(char *)(param_2 + uVar11);
              }
              if (uVar7 <= uVar9) {
                unaff_r10 = unaff_r10 |
                            (int)(uVar8 << (8 - uVar7 & 0xff) & 0xffff) >> (8 - uVar9 & 0xff);
                *(char *)(param_2 + uVar11) = (char)unaff_r10;
                uVar8 = *(ushort *)(param_1 + 8) + uVar7;
                uVar10 = uVar8 & 0xffff;
                *(short *)(param_1 + 8) = (short)uVar8;
                if (uVar9 == uVar7) {
                  *param_3 = *param_3 + 1;
                  uVar10 = (uint)*(ushort *)(param_1 + 8);
                }
                uVar10 = uVar10 & 7;
                break;
              }
              *(byte *)(param_2 + uVar11) =
                   (byte)unaff_r10 | (byte)((int)uVar8 >> (uVar7 - uVar9 & 0xff));
              *(ushort *)(param_1 + 8) = (ushort)bVar2 + *(short *)(param_1 + 8);
              uVar1 = *param_3;
              *param_3 = uVar1 + 1;
              *(undefined1 *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0;
              uVar7 = (uVar10 - 8) + uVar7 & 0xff;
              uVar10 = *(ushort *)(param_1 + 8) & 7;
            } while (uVar7 != 0);
          }
          uVar8 = (uint)*(ushort *)(param_1 + 0x82);
          if (uVar8 != 0) {
            uVar7 = ((*(int *)(iVar4 + 0xe0) >> 1) << (0xf - *(byte *)(param_1 + 0x23) & 0xff)) +
                    0x40000000;
            uVar8 = ((int)(uVar8 * (uVar7 & 0xffff)) >> 0xf) + uVar8 * ((int)uVar7 >> 0x10) * 2;
            iVar14 = (int)uVar8 >> 1;
            if (iVar14 < 0) {
              uVar8 = uVar8 >> 0x10;
            }
            else {
              if (DAT_14012128 <= iVar14) {
                iVar14 = DAT_14012128;
              }
              uVar8 = iVar14 >> 0xf;
            }
            uVar7 = (uint)*(byte *)(param_1 + 0xa3);
            do {
              bVar2 = 8 - (char)uVar10;
              uVar9 = (uint)bVar2;
              if (uVar9 == 8) {
                unaff_r10 = 0;
              }
              uVar11 = (uint)*param_3;
              if (uVar9 != 8) {
                unaff_r10 = (uint)*(char *)(param_2 + uVar11);
              }
              if (uVar7 <= uVar9) {
                unaff_r10 = unaff_r10 |
                            (int)(uVar8 << (8 - uVar7 & 0xff) & 0xffff) >> (8 - uVar9 & 0xff);
                *(char *)(param_2 + uVar11) = (char)unaff_r10;
                uVar8 = *(ushort *)(param_1 + 8) + uVar7;
                uVar10 = uVar8 & 0xffff;
                *(short *)(param_1 + 8) = (short)uVar8;
                if (uVar9 == uVar7) {
                  *param_3 = *param_3 + 1;
                  uVar10 = (uint)*(ushort *)(param_1 + 8);
                }
                uVar10 = uVar10 & 7;
                break;
              }
              *(byte *)(param_2 + uVar11) =
                   (byte)unaff_r10 | (byte)((int)uVar8 >> (uVar7 - uVar9 & 0xff));
              *(ushort *)(param_1 + 8) = (ushort)bVar2 + *(short *)(param_1 + 8);
              uVar1 = *param_3;
              *param_3 = uVar1 + 1;
              *(undefined1 *)(param_2 + (uint)(ushort)(uVar1 + 1)) = 0;
              uVar7 = (uVar10 - 8) + uVar7 & 0xff;
              uVar10 = *(ushort *)(param_1 + 8) & 7;
            } while (uVar7 != 0);
          }
        }
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x40;
    } while (uVar5 < *(byte *)(param_1 + 4));
  }
  if (uVar10 == 0) {
    return;
  }
LAB_140121cc:
  *param_3 = *param_3 + 1;
  return;
}


/* FUN_2c4bc31c @ 0x2c4bc31c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4bc31c(void)

{
  byte *pbVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  char *pcVar17;
  char *pcVar18;
  ushort uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  
  iVar4 = _LAB_2c4bc614;
  uVar10 = 8;
  iVar13 = 0;
  uVar3 = 0;
  pcVar18 = _LAB_2c4bc618;
  iVar21 = _LAB_2c4bc614;
LAB_2c4bc33a:
  pcVar17 = pcVar18;
  if (-1 < (int)((*(uint *)(_LAB_2c4bc604 + ((uVar10 >> 5) + 0x80) * 4) >> (uVar10 & 0x1f)) << 0x1f)
     ) goto LAB_2c4bc350;
  puVar14 = *(uint **)(pcVar18 + -0x16);
  cVar2 = *(char *)(iVar21 + 0xc);
  uVar11 = puVar14[0xb];
  uVar8 = (uint)*(byte *)(iVar21 + 0xe);
  uVar20 = puVar14[0x20];
  uVar10 = 0;
  if ((uVar11 & 0x40) != 0) {
    uVar15 = puVar14[1];
    if ((uVar20 & 0x200) == 0) {
      uVar10 = 4;
    }
    else {
      *puVar14 = *puVar14 | 0x20;
      puVar14[1] = puVar14[1] & 0xfffff7ff;
      puVar14[1] = puVar14[1] & 0xfffffbff;
      uVar10 = 4;
      puVar14[1] = uVar15;
    }
  }
  if ((int)(uVar11 << 0x1c) < 0) {
    uVar10 = uVar10 | 0x10;
  }
  if ((int)(uVar11 << 0x1e) < 0) {
    uVar10 = uVar10 | 0x10;
  }
  if ((int)(uVar11 << 0x1f) < 0) {
    uVar10 = uVar10 | 0x10;
  }
  if (cVar2 != '\x02') {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x483,_LAB_2c4bc608,_LAB_2c4bc610,_LAB_2c4bc60c,iVar13,uVar11,uVar20);
  }
  iVar16 = iVar13 * 0x70 + uVar8 * 0x30 + iVar4;
  uVar15 = *(uint *)(iVar16 + 0x28);
  uVar7 = uVar15 | uVar10;
  iVar5 = *(int *)(iVar16 + 0x2c);
  *(uint *)(iVar16 + 0x28) = uVar7;
  if ((uVar15 & 0x14) != 0 || uVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x495,_LAB_2c4bc878,_LAB_2c4bc880,_LAB_2c4bc87c,_LAB_2c4bc874,iVar13,uVar7,uVar11,uVar20
         );
  }
  if ((uVar11 & 0x200) != 0) {
    *(uint *)(iVar16 + 0x28) = uVar7 | 2;
  }
  if ((int)(uVar11 << 0x15) < 0) {
    iVar16 = iVar13 * 0x70 + uVar8 * 0x30 + iVar4;
    *(uint *)(iVar16 + 0x28) = *(uint *)(iVar16 + 0x28) | 1;
  }
  if ((int)(uVar11 << 0x17) < 0) {
    iVar16 = iVar13 * 0x70 + uVar8 * 0x30 + iVar4;
    *(uint *)(iVar16 + 0x28) = *(uint *)(iVar16 + 0x28) | 8;
  }
  if (iVar5 == 1) {
    uVar20 = (uint)*(byte *)(iVar4 + iVar13 * 0x70 + 1);
    uVar10 = (uVar20 & 3) >> 1;
    if ((-1 < (int)(uVar20 << 0x1e)) && ((int)(uVar11 << 0x1b) < 0)) {
      iVar5 = iVar13 * 0x70 + uVar8 * 0x30 + iVar4;
      uVar11 = (uint)*(ushort *)(iVar5 + 0x1c) * (uint)*(ushort *)(iVar5 + 0x18);
      if ((puVar14[0x1d] & 0xff) < 8) {
        uVar20 = (uint)*(ushort *)(iVar5 + 0x1e);
        if (uVar20 <= uVar11 && uVar11 - uVar20 != 0) {
          do {
            if (uVar20 == uVar11 - 1) {
              if (*(char *)(iVar5 + 0x24) == '\0') {
                uVar15 = 0;
              }
              else {
                uVar15 = 0x200;
              }
            }
            else {
              uVar15 = 0;
            }
            if ((((*(short *)(iVar5 + 0x1c) == 1) || (uVar20 == 0)) ||
                (uVar20 != (uint)*(ushort *)(iVar5 + 0x18) * (uVar20 / *(ushort *)(iVar5 + 0x18))))
               || (*(char *)(iVar5 + 0x25) == '\0')) {
              uVar7 = 0;
            }
            else {
              uVar7 = 0x400;
            }
            pbVar1 = (byte *)(*(int *)(iVar5 + 0x10) + uVar20);
            uVar20 = uVar20 + 1;
            uVar10 = uVar10 + 1 & 0xff;
            puVar14[4] = *pbVar1 | uVar15 | uVar7;
          } while ((uVar20 <= uVar11 && uVar11 - uVar20 != 0) &&
                  (uVar10 < (8 - (puVar14[0x1d] & 0xff) & 0xff)));
          uVar20 = uVar20 & 0xffff;
        }
      }
      else {
        uVar20 = (uint)*(ushort *)(iVar5 + 0x1e);
      }
      *(short *)(iVar13 * 0x70 + uVar8 * 0x30 + iVar4 + 0x1e) = (short)uVar20;
      if (uVar11 - uVar20 == 0) {
        puVar14[0xc] = puVar14[0xc] & 0xffffffef;
      }
    }
    if (-1 < *(int *)(iVar13 * 0x70 + uVar8 * 0x30 + iVar4 + 0x28) << 0x1e) goto LAB_2c4bc350;
    goto LAB_2c4bc694;
  }
  if (iVar5 == 2) {
    uVar10 = (uint)*(byte *)(iVar4 + iVar13 * 0x70 + 1);
    uVar20 = (uVar10 & 3) >> 1;
    if ((int)(uVar10 << 0x1e) < 0) {
      if (*(int *)(iVar13 * 0x70 + uVar8 * 0x30 + iVar4 + 0x28) << 0x1e < 0) goto LAB_2c4bc694;
      goto LAB_2c4bc350;
    }
    if ((int)(uVar11 << 0x1d) < 0) {
      uVar7 = puVar14[0x1e];
      iVar5 = iVar4 + iVar13 * 0x70 + uVar8 * 0x30;
      uVar10 = (uint)*(ushort *)(iVar5 + 0x1c) * (uint)*(ushort *)(iVar5 + 0x1a);
      uVar19 = *(ushort *)(iVar5 + 0x20);
      uVar15 = (uint)uVar19;
      if (((uVar7 & 0xff) != 0) && (uVar15 < uVar10)) {
        do {
          uVar20 = uVar20 + 1 & 0xff;
          *(char *)(*(int *)(iVar5 + 0x14) + uVar15) = (char)puVar14[4];
          uVar15 = uVar15 + 1;
          if (uVar10 <= uVar15) break;
        } while (uVar20 < (uVar7 & 0xff));
        uVar19 = (ushort)uVar15;
      }
      *(ushort *)(iVar13 * 0x70 + uVar8 * 0x30 + iVar4 + 0x20) = uVar19;
    }
    if ((int)(uVar11 << 0x1b) < 0) {
      iVar5 = iVar13 * 0x70 + uVar8 * 0x30 + iVar4;
      uVar20 = (uint)*(ushort *)(iVar5 + 0x18);
      uVar11 = (uint)*(ushort *)(iVar5 + 0x1c);
      uVar10 = uVar11 * (*(ushort *)(iVar5 + 0x1a) + uVar20);
      if ((puVar14[0x1d] & 0xff) < 8) {
        cVar2 = (char)*(undefined2 *)(iVar5 + 0x22) + '\x01';
        uVar7 = 8 - (puVar14[0x1d] & 0xff) & 0xff;
        if ((byte)(cVar2 - *(char *)(iVar5 + 0x20)) < 8) {
          uVar15 = (uint)*(ushort *)(iVar5 + 0x1e);
          uVar12 = (uint)(byte)((*(char *)(iVar5 + 0x20) + '\b') - cVar2);
          if (uVar7 <= uVar12) {
            uVar12 = uVar7;
          }
          if (uVar15 < uVar10) {
            uVar7 = 0;
            do {
              if (uVar15 == uVar10 - 1) {
                if (*(char *)(iVar5 + 0x24) == '\0') {
                  uVar6 = 0;
                }
                else {
                  uVar6 = 0x200;
                }
              }
              else {
                uVar6 = 0;
              }
              if (uVar11 == 1) {
                uVar22 = 0;
                uVar9 = uVar15;
              }
              else {
                uVar9 = *(ushort *)(iVar5 + 0x1a) + uVar20;
                uVar22 = uVar15 / uVar9;
                uVar9 = uVar15 - uVar9 * uVar22;
              }
              if ((uVar15 == 0) || (*(char *)(iVar5 + 0x25) == '\0')) {
LAB_2c4bc598:
                if (uVar20 <= uVar9) goto LAB_2c4bc6f6;
                iVar16 = *(int *)(iVar5 + 0x10);
                if (uVar11 != 1) {
                  iVar16 = uVar22 * uVar20 + iVar16;
                }
                uVar11 = (uint)*(byte *)(iVar16 + uVar9);
              }
              else {
                if (uVar9 == 0) {
                  uVar6 = uVar6 | 0x400;
                  goto LAB_2c4bc598;
                }
                if (uVar9 != uVar20) goto LAB_2c4bc598;
                uVar6 = uVar6 | 0x400;
LAB_2c4bc6f6:
                *(short *)(iVar5 + 0x22) = *(short *)(iVar5 + 0x22) + 1;
                uVar11 = 0x100;
              }
              uVar15 = uVar15 + 1;
              puVar14[4] = uVar11 | uVar6;
              uVar7 = uVar7 + 1 & 0xff;
              if ((uVar10 <= uVar15) || (uVar12 <= uVar7)) goto LAB_2c4bc71a;
              uVar11 = (uint)*(ushort *)(iVar5 + 0x1c);
              uVar20 = (uint)*(ushort *)(iVar5 + 0x18);
            } while( true );
          }
        }
        else {
LAB_2c4bc846:
          uVar15 = (uint)*(ushort *)(iVar13 * 0x70 + uVar8 * 0x30 + iVar4 + 0x1e);
        }
      }
      else {
        if (7 < ((*(short *)(iVar5 + 0x22) + 1) - *(short *)(iVar5 + 0x20) & 0xffU))
        goto LAB_2c4bc846;
        uVar15 = (uint)*(ushort *)(uVar8 * 0x30 + iVar13 * 0x70 + iVar4 + 0x1e);
      }
      goto LAB_2c4bc72c;
    }
    goto LAB_2c4bc74c;
  }
  goto LAB_2c4bc350;
LAB_2c4bc71a:
  uVar15 = uVar15 & 0xffff;
LAB_2c4bc72c:
  *(short *)(iVar13 * 0x70 + uVar8 * 0x30 + iVar4 + 0x1e) = (short)uVar15;
  if (uVar10 == uVar15) {
    puVar14[0xc] = puVar14[0xc] & 0xffffffef;
  }
LAB_2c4bc74c:
  iVar5 = iVar13 * 0x70 + uVar8 * 0x30 + iVar4;
  if (*(int *)(iVar5 + 0x28) << 0x1e < 0) {
    if (-1 < (int)((uint)*(byte *)(iVar13 * 0x70 + iVar4 + 1) << 0x1e)) {
      uVar11 = puVar14[0x1e];
      uVar10 = (uint)*(ushort *)(iVar5 + 0x20);
      if ((uVar11 & 0xff) != 0) {
        iVar16 = uVar10 + 1;
        do {
          if (*(ushort *)(iVar5 + 0x1a) <= uVar10) break;
          *(char *)(*(int *)(iVar5 + 0x14) + uVar10) = (char)puVar14[4];
          uVar10 = uVar10 + 1;
        } while (uVar10 != iVar16 + ((uVar11 & 0xff) - 1 & 0xff));
      }
      *(short *)(iVar13 * 0x70 + uVar8 * 0x30 + iVar4 + 0x20) = (short)uVar10;
    }
LAB_2c4bc694:
    FUN_2c4bbb80(uVar3);
    FUN_2c4bc22c(uVar3);
  }
LAB_2c4bc350:
  do {
    iVar21 = iVar21 + 0x70;
    pcVar18 = pcVar17 + 0xc;
    if (iVar13 != 0) {
      return;
    }
    uVar10 = (uint)*pcVar17;
    iVar13 = 1;
    uVar3 = 1;
    pcVar17 = pcVar18;
  } while ((int)uVar10 < 0);
  goto LAB_2c4bc33a;
}


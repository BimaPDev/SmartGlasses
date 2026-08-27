/* FUN_2c4b1338 @ 0x2c4b1338 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x2c4b1ab6 */
/* WARNING: Removing unreachable block (ram,0x2c4b1ec2) */
/* WARNING: Removing unreachable block (ram,0x2c4b29f2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

int FUN_2c4b1338(int param_1)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  bool bVar7;
  float *pfVar8;
  int *piVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  char cVar21;
  uint uVar22;
  undefined4 *puVar23;
  code *pcVar24;
  int iVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  int iVar28;
  uint uVar29;
  char cVar30;
  undefined1 *puVar31;
  short *psVar32;
  uint in_fpscr;
  uint uVar33;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr10;
  double in_d0;
  double dVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar46;
  longlong lVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  int iStack_88;
  float *pfStack_84;
  float *pfStack_80;
  float fStack_7c;
  undefined4 *puStack_70;
  int iStack_6c;
  longlong lVar45;
  
  iStack_6c = *_LAB_2c4b1618;
  if (param_1 == 0) {
LAB_2c4b153c:
    iVar15 = 1;
LAB_2c4b1520:
    if (*_LAB_2c4b1618 != iStack_6c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return iVar15;
  }
  iVar15 = 0;
  if (*(int *)(param_1 + 0x28) == 0) goto LAB_2c4b1520;
  if ((*(int *)(param_1 + 0x2c) == 0) ||
     (psVar32 = *(short **)(param_1 + 0x34), psVar32 == (short *)0x0)) goto LAB_2c4b153c;
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_2c4b4990();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  fVar35 = *(float *)(psVar32 + 2);
  uVar17 = in_fpscr & 0xfffffff | (uint)(fVar35 < 2.5) << 0x1f;
  uVar33 = uVar17 | (uint)NAN(fVar35) << 0x1c;
  if (((byte)(uVar17 >> 0x1f) == ((byte)(uVar33 >> 0x1c) & 1)) &&
     (uVar17 = in_fpscr & 0xfffffff | (uint)(fVar35 < 1.0) << 0x1f,
     uVar33 = uVar17 | (uint)NAN(fVar35) << 0x1c,
     (byte)(uVar17 >> 0x1f) == ((byte)(uVar33 >> 0x1c) & 1))) {
    *(undefined1 *)(psVar32 + 0x46) = 1;
  }
  uVar17 = *(uint *)(psVar32 + 8);
  if ((uVar17 != 0) && (*(int *)(psVar32 + 6) != 0)) {
    fVar35 = *(float *)(psVar32 + 10);
    if ((int)(uVar17 << 0x1f) < 0) {
      uVar17 = uVar17 - 1;
      pfVar8 = (float *)FUN_2c4b4980(uVar17 * 4);
      if (pfVar8 != (float *)0x0) {
        psVar32[0x12] = 0;
        psVar32[0x13] = 0;
        if (uVar17 != 0) {
          pfVar10 = *(float **)(psVar32 + 6);
          goto LAB_2c4b13e0;
        }
LAB_2c4b1daa:
        psVar32[8] = 0;
        psVar32[9] = 0;
        FUN_2c4b4990();
        goto LAB_2c4b1486;
      }
    }
    else {
      pfVar8 = (float *)FUN_2c4b4980(uVar17 << 2);
      if (pfVar8 != (float *)0x0) {
        pfVar10 = *(float **)(psVar32 + 6);
        psVar32[0x12] = 0;
        psVar32[0x13] = 0;
LAB_2c4b13e0:
        fVar38 = fRam2c4b1628;
        uVar14 = 0;
        do {
          fVar36 = *pfVar10;
          pfVar10 = pfVar10 + 1;
          uVar14 = uVar14 + 1;
          uVar22 = uVar33 & 0xfffffff;
          uVar33 = uVar22 | (uint)(fVar36 < 0.0) << 0x1f | (uint)(fVar36 == 0.0) << 0x1e |
                   (uint)(0.0 <= fVar36) << 0x1d;
          if ((int)uVar33 < 0) {
            fVar36 = fVar38;
          }
          *pfVar8 = fVar36;
          pfVar8 = pfVar8 + 1;
          fVar36 = fVar36 + *(float *)(psVar32 + 0x12);
          *(float *)(psVar32 + 0x12) = fVar36;
        } while (uVar14 < uVar17);
        uVar33 = uVar22 | (uint)(fVar36 < fRam2c4b161c) << 0x1f |
                 (uint)(fVar36 == fRam2c4b161c) << 0x1e | (uint)(fRam2c4b161c <= fVar36) << 0x1d;
        if ((int)uVar33 < 0) goto LAB_2c4b1daa;
        while( true ) {
          uVar17 = uVar33 & 0xfffffff;
          uVar33 = uVar17 | (uint)(fVar35 < 0.0) << 0x1f | (uint)(fVar35 == 0.0) << 0x1e |
                   (uint)(0.0 <= fVar35) << 0x1d;
          if (-1 < (int)uVar33) break;
          fVar35 = fVar35 + fVar36;
        }
        uVar33 = uVar17 | (uint)(fVar36 == fVar35) << 0x1e | (uint)(fVar35 <= fVar36) << 0x1d;
        bVar13 = (byte)(uVar33 >> 0x18);
        if (!(bool)(bVar13 >> 5 & 1) || (bool)(bVar13 >> 6)) {
          do {
            fVar35 = fVar35 - fVar36;
            uVar33 = uVar33 & 0xfffffff | (uint)(fVar36 == fVar35) << 0x1e |
                     (uint)(fVar35 <= fVar36) << 0x1d;
            bVar13 = (byte)(uVar33 >> 0x18);
          } while (!(bool)(bVar13 >> 5 & 1) || (bool)(bVar13 >> 6));
        }
        iVar25 = *(int *)(psVar32 + 8);
        pfVar8 = *(float **)(psVar32 + 6);
        iVar15 = iVar25;
        if (iVar25 != 0) {
          iVar11 = 0;
          do {
            fVar38 = *pfVar8;
            pfVar10 = pfVar8 + 1;
            uVar17 = uVar33 & 0xfffffff | (uint)(fVar38 < fVar35) << 0x1f;
            uVar33 = uVar17 | (uint)(NAN(fVar38) || NAN(fVar35)) << 0x1c;
            iVar15 = iVar11;
            if ((byte)(uVar17 >> 0x1f) == ((byte)(uVar33 >> 0x1c) & 1)) break;
            iVar11 = iVar11 + 1;
            fVar35 = fVar35 - fVar38;
            pfVar8 = pfVar10;
            iVar15 = iVar25;
          } while (iVar11 != iVar25);
        }
        *(int *)(psVar32 + 0xe) = iVar15;
        *(float *)(psVar32 + 0xc) = *pfVar8 - fVar35;
        FUN_2c4b4990();
        goto LAB_2c4b1486;
      }
    }
LAB_2c4b1556:
    iVar15 = 5;
    goto LAB_2c4b1520;
  }
LAB_2c4b1486:
  uVar17 = (uint)*(byte *)(param_1 + 0x11);
  if (3 < uVar17) goto LAB_2c4b153c;
  uVar22 = (uint)*(byte *)(_DAT_2c4b1620 + uVar17);
  pcVar24 = *(code **)(_DAT_2c4b1624 + uVar17 * 4);
  uVar14 = *(uint *)(param_1 + 0x28);
  iVar25 = (int)(short)(ushort)*(byte *)(_DAT_2c4b1620 + uVar17);
  if (uVar14 == uVar22 * 3 * (uVar14 / (uVar22 * 3))) {
    *(uint *)(param_1 + 0x28) = uVar14 + uVar22;
    pbVar18 = (byte *)FUN_2c4b4980();
    if (pbVar18 == (byte *)0x0) goto LAB_2c4b1556;
    FUN_2c674268(pbVar18,0,*(undefined4 *)(param_1 + 0x28));
    FUN_2c674668(pbVar18,*(undefined4 *)(param_1 + 0x2c),*(int *)(param_1 + 0x28) - uVar22);
    uVar14 = *(uint *)(param_1 + 0x28);
    *(byte **)(param_1 + 0x2c) = pbVar18;
  }
  else {
    pbVar18 = *(byte **)(param_1 + 0x2c);
  }
  if (*pbVar18 != 2) {
    iVar15 = func_0x2c4b0a4c(fRam2c4b1628,psVar32,0);
    if (iVar15 != 0) goto LAB_2c4b1520;
    if (uVar14 != 0) {
      bVar13 = *pbVar18;
      goto LAB_2c4b14c8;
    }
LAB_2c4b29c8:
    *(undefined4 *)(*(int *)(*(int *)(psVar32 + 0x28) + 4) + 0x18) = 0;
    *(undefined4 *)(*(int *)(psVar32 + 0x18) + 0x18) = 0;
    if (*(int *)(psVar32 + 0x1a) == 1) {
      iVar15 = *(int *)(psVar32 + 0x16);
      *(undefined4 *)(iVar15 + 0xc) = 0;
      *(undefined4 *)(iVar15 + 0x10) = 0;
      *(undefined4 *)(iVar15 + 0x14) = 0;
    }
LAB_2c4b1ed8:
    fVar35 = fRam2c4b1dc8;
    uVar16 = (undefined4)((ulonglong)in_d0 >> 0x20);
    puVar26 = *(undefined4 **)(psVar32 + 0x26);
    if (puVar26 != (undefined4 *)0x0) {
      lVar45 = (ulonglong)(uint)fRam2c4b1dcc << 0x20;
      do {
        *(undefined4 *)(psVar32 + 0x18) = puVar26[1];
        pfVar8 = (float *)*puVar26;
        *(float **)(psVar32 + 0x16) = pfVar8;
        *(undefined4 *)(psVar32 + 0x1a) = puVar26[2];
        fVar36 = fRam2c4b251c;
        puStack_70 = (undefined4 *)0x0;
        uVar14 = *(uint *)(psVar32 + 8);
        fVar50 = (float)((ulonglong)lVar45 >> 0x20);
        fVar44 = *(float *)(psVar32 + 0x10);
        lVar45 = CONCAT44(fVar50,fVar44);
        fVar38 = *(float *)(psVar32 + 0xc);
        uVar17 = *(uint *)(psVar32 + 0xe);
        uVar16 = (undefined4)((ulonglong)in_d0 >> 0x20);
        fVar51 = fRam2c4b1dcc;
        if ((*psVar32 == 0x1700) || (*(char *)((int)psVar32 + 0x8d) != '\0')) {
          if (pfVar8 == (float *)0x0) {
            *(float *)(psVar32 + 0x42) = fVar50;
            fVar51 = fVar36;
            goto LAB_2c4b1f3a;
          }
          cVar21 = '\0';
          pfVar10 = pfVar8;
          do {
            pfVar3 = pfVar10 + 2;
            pfVar2 = pfVar10 + 5;
            pfVar10 = (float *)pfVar10[6];
            fVar51 = fVar51 + *pfVar2;
            if (*(char *)pfVar3 != '\0') {
              cVar21 = '\x01';
            }
          } while (pfVar10 != (float *)0x0);
          *(float *)(psVar32 + 0x42) = fVar51;
          if (cVar21 == '\0') goto LAB_2c4b1f3a;
          *(char *)(psVar32 + 0x2e) = cVar21;
          pfVar10 = (float *)pfVar8[6];
          cVar30 = '\x01';
          if (pfVar10 == (float *)0x0) goto LAB_2c4b2076;
LAB_2c4b1f46:
          fStack_7c = fVar50;
          if (uVar14 == 0) {
            fVar52 = fVar44 * pfVar8[4];
            fVar42 = pfVar8[5];
            fVar36 = -(pfVar8[3] * fVar44);
            if (cVar21 != '\0') {
              *(float *)(psVar32 + 0x3c) = fVar42;
            }
            in_d0 = (double)CONCAT44(uVar16,(int)*(undefined8 *)pfVar8);
            iVar15 = func_0x2c4b0240((int)*(undefined8 *)pfVar8,uVar16,fVar52,fVar36,psVar32,
                                     *(char *)((int)psVar32 + 0x8d) == '\0',&puStack_70);
            if (iVar15 != 0) goto LAB_2c4b1520;
            lVar47 = (ulonglong)(uint)fVar50 << 0x20;
            bVar7 = true;
            pfStack_84 = (float *)0x0;
            pfStack_80 = (float *)0x0;
          }
          else {
            if ((*(char *)((int)psVar32 + 0x8d) != '\0') && ((uVar17 & 1) != 0)) {
              *(undefined1 *)((int)psVar32 + 0x8d) = 0;
            }
            fVar49 = pfVar8[3];
            fVar36 = -(fVar49 * fVar44);
            fVar42 = pfVar8[5];
            fVar52 = pfVar8[4] * fVar44;
            if (cVar21 != '\0') {
              *(float *)(psVar32 + 0x3c) = fVar42;
            }
            fVar41 = *pfVar8;
            lVar47 = (ulonglong)(uint)fVar50 << 0x20;
            iVar25 = 0;
            pfStack_84 = (float *)0x0;
            pfStack_80 = (float *)0x0;
            uVar22 = uVar14;
            if ((uVar17 & 1) == 0) goto LAB_2c4b1fc4;
LAB_2c4b1f8e:
            fVar39 = fVar42 - fVar38;
            uVar12 = uVar33 & 0xfffffff;
            uVar29 = uVar12 | (uint)(fVar39 < fVar35) << 0x1f;
            uVar33 = uVar29 | (uint)(NAN(fVar39) || NAN(fVar35)) << 0x1c;
            if ((byte)(uVar29 >> 0x1f) == ((byte)(uVar33 >> 0x1c) & 1)) {
              uVar17 = uVar17 + 1;
              fVar41 = fVar41 + fVar49 * fVar38;
              fVar42 = fVar39;
              if (uVar17 == uVar22) goto LAB_2c4b2032;
              do {
                uVar12 = uVar17 << 2;
                while( true ) {
                  fVar38 = *(float *)(*(int *)(psVar32 + 6) + uVar12);
                  if ((uVar17 & 1) != 0) goto LAB_2c4b1f8e;
LAB_2c4b1fc4:
                  iVar15 = func_0x2c4b0240(fVar41,uVar16,fVar52,fVar36,psVar32,1,&puStack_70);
                  if (iVar15 != 0) goto LAB_2c4b1520;
                  if ((*(char *)((int)psVar32 + 0x8d) != '\0') && (iVar25 == 0)) {
                    pfStack_84 = *(float **)(psVar32 + 0x1e);
                    lVar47 = (ulonglong)(uint)fVar36 << 0x20;
                    iVar25 = *(int *)(psVar32 + 0x2c);
                    pfStack_80 = *(float **)(psVar32 + 0x1c);
                    fStack_7c = fVar52;
                  }
                  fVar39 = fVar42 - fVar38;
                  uVar22 = uVar33 & 0xfffffff;
                  uVar12 = uVar22 | (uint)(fVar39 < fVar35) << 0x1f;
                  uVar33 = uVar12 | (uint)(NAN(fVar39) || NAN(fVar35)) << 0x1c;
                  if ((byte)(uVar12 >> 0x1f) != ((byte)(uVar33 >> 0x1c) & 1)) {
                    uVar33 = uVar22 | (uint)(fVar39 == fRam2c4b2c0c) << 0x1e |
                             (uint)(fRam2c4b2c0c <= fVar39) << 0x1d;
                    bVar13 = (byte)(uVar33 >> 0x18);
                    if (!(bool)(bVar13 >> 5 & 1) || (bool)(bVar13 >> 6)) {
                      bVar7 = true;
                      goto LAB_2c4b2696;
                    }
                    in_d0 = (double)CONCAT44(uVar16,(int)*(undefined8 *)pfVar10);
                    iVar15 = func_0x2c4b018c((int)*(undefined8 *)pfVar10,uVar16,fVar52,fVar36,
                                             psVar32);
                    if (iVar15 != 0) goto LAB_2c4b1520;
                    uVar22 = *(uint *)(psVar32 + 8);
                    goto LAB_2c4b27a4;
                  }
                  fVar41 = fVar41 + fVar49 * fVar38;
                  iVar15 = func_0x2c4b018c(fVar41,uVar16,fVar52,fVar36,psVar32);
                  if (iVar15 != 0) goto LAB_2c4b1520;
                  uVar22 = *(uint *)(psVar32 + 8);
                  uVar17 = uVar17 + 1;
                  fVar42 = fVar39;
                  if (uVar17 != uVar22) break;
LAB_2c4b2032:
                  uVar12 = 0;
                  uVar17 = uVar12;
                }
              } while( true );
            }
            uVar33 = uVar12 | (uint)(fVar39 == fRam2c4b2520) << 0x1e |
                     (uint)(fRam2c4b2520 <= fVar39) << 0x1d;
            bVar13 = (byte)(uVar33 >> 0x18);
            if ((bool)(bVar13 >> 5 & 1) && !(bool)(bVar13 >> 6)) {
LAB_2c4b27a4:
              uVar17 = uVar17 + 1;
              if (uVar17 == uVar22) {
                uVar22 = 0;
                uVar17 = uVar22;
              }
              else {
                uVar22 = uVar17 * 4;
              }
              bVar7 = false;
              fVar38 = *(float *)(*(int *)(psVar32 + 6) + uVar22);
              fVar42 = fVar50;
            }
            else {
              bVar7 = false;
LAB_2c4b2696:
              fVar38 = -fVar39;
            }
          }
          fVar41 = (float)((ulonglong)lVar47 >> 0x20);
          pfVar8 = (float *)pfVar10[6];
          fVar50 = fRam2c4b251c;
          fVar49 = fRam2c4b2c08;
          while (pfVar2 = pfVar8, uVar16 = (undefined4)((ulonglong)in_d0 >> 0x20),
                pfVar2 != (float *)0x0) {
            uVar40 = (undefined4)((ulonglong)lVar47 >> 0x20);
            if ((uVar14 == 0) || (((uVar17 & 1) == 0 && ((int)((uint)bVar7 << 0x1f) < 0)))) {
              iVar15 = FUN_2c4aff78(fVar52 + (float)*(undefined8 *)pfVar10,psVar32);
              if (iVar15 != 0) goto LAB_2c4b1520;
              in_d0 = (double)CONCAT44(uVar16,(float)*(undefined8 *)pfVar10);
              iVar15 = FUN_2c4affd0((float)*(undefined8 *)pfVar10 - fVar52,psVar32);
              if (iVar15 != 0) goto LAB_2c4b1520;
              fVar49 = pfVar10[3];
              fVar36 = -(fVar49 * fVar44);
              lVar47 = CONCAT44(uVar40,pfVar10[5]);
              fVar52 = fVar44 * pfVar10[4];
              if (cVar21 != '\0') goto LAB_2c4b23e6;
              if (uVar14 != 0) goto LAB_2c4b2422;
LAB_2c4b25f8:
              iVar15 = func_0x2c4b0bb4((int)lVar47,(int)((ulonglong)in_d0 >> 0x20),*pfVar10 + fVar52
                                       ,pfVar10[1] + fVar36,*pfVar10 - fVar52,pfVar10[1] - fVar36,
                                       psVar32,pfVar10,cVar30);
              if (iVar15 != 0) goto LAB_2c4b1520;
            }
            else {
              fVar49 = pfVar10[3];
              fVar36 = -(fVar49 * fVar44);
              lVar47 = CONCAT44(uVar40,pfVar10[5]);
              fVar52 = pfVar10[4] * fVar44;
              if (cVar21 != '\0') {
LAB_2c4b23e6:
                fVar50 = fVar50 + *(float *)((int)pfVar10[7] + 0x14);
                uVar22 = uVar33 & 0xfffffff;
                uVar12 = uVar22 | (uint)(fVar44 < fVar50) << 0x1f | (uint)(fVar44 == fVar50) << 0x1e
                ;
                uVar33 = uVar12 | (uint)(NAN(fVar44) || NAN(fVar50)) << 0x1c;
                *(float *)(psVar32 + 0x3c) = fVar50;
                bVar13 = (byte)(uVar12 >> 0x18);
                if ((bool)(bVar13 >> 6 & 1) || bVar13 >> 7 != ((byte)(uVar33 >> 0x1c) & 1)) {
                  fVar41 = fVar51 - fVar50;
                  uVar22 = uVar22 | (uint)(fVar44 < fVar41) << 0x1f |
                           (uint)(fVar44 == fVar41) << 0x1e;
                  uVar33 = uVar22 | (uint)(NAN(fVar44) || NAN(fVar41)) << 0x1c;
                  bVar13 = (byte)(uVar22 >> 0x18);
                  if ((bool)(bVar13 >> 6 & 1) || bVar13 >> 7 != ((byte)(uVar33 >> 0x1c) & 1)) {
                    cVar30 = '\0';
                  }
                  else {
                    cVar30 = '\x02';
                  }
                }
                else {
                  cVar30 = '\x01';
                }
                if (uVar14 == 0) goto LAB_2c4b25f8;
              }
LAB_2c4b2422:
              uVar22 = uVar17 & 1;
              fVar41 = *pfVar10;
              uVar16 = (undefined4)((ulonglong)in_d0 >> 0x20);
              if (uVar22 == 0) {
                if (bVar7) {
                  iVar15 = func_0x2c4b0bb4(fVar38,uVar16,fVar41 + fVar52,pfVar10[1] + fVar36,
                                           fVar41 - fVar52,pfVar10[1] - fVar36,psVar32,pfVar10,
                                           cVar30);
                  if (iVar15 != 0) goto LAB_2c4b1520;
                }
                else {
                  iVar15 = func_0x2c4b0240(fVar41,uVar16,fVar52,fVar36,psVar32,1,&puStack_70);
                  if (iVar15 != 0) goto LAB_2c4b1520;
                  bVar7 = true;
                }
              }
              fVar39 = (float)lVar47 - fVar38;
              uVar33 = uVar33 & 0xfffffff | (uint)(fVar39 < fVar35) << 0x1f;
              uVar12 = uVar33 | (uint)(NAN(fVar39) || NAN(fVar35)) << 0x1c;
              if ((byte)(uVar33 >> 0x1f) == ((byte)(uVar12 >> 0x1c) & 1)) {
                do {
                  fVar41 = fVar41 + fVar49 * fVar38;
                  if (uVar22 == 0) {
                    iVar15 = func_0x2c4b018c(fVar41,uVar16,fVar52,fVar36,psVar32);
                    bVar7 = false;
                    if (iVar15 != 0) goto LAB_2c4b1520;
                  }
                  uVar17 = uVar17 + 1;
                  if (uVar17 == *(uint *)(psVar32 + 8)) {
                    fVar38 = **(float **)(psVar32 + 6);
                    uVar17 = 0;
LAB_2c4b24ce:
                    iVar15 = func_0x2c4b0240(fVar41,uVar16,fVar52,fVar36,psVar32,1,&puStack_70);
                    if (iVar15 != 0) goto LAB_2c4b1520;
                    fVar39 = fVar39 - fVar38;
                    bVar7 = true;
                    uVar33 = uVar12 & 0xfffffff | (uint)(fVar39 < fVar35) << 0x1f;
                    uVar12 = uVar33 | (uint)(NAN(fVar39) || NAN(fVar35)) << 0x1c;
                    if ((byte)(uVar33 >> 0x1f) != ((byte)(uVar12 >> 0x1c) & 1)) break;
                  }
                  else {
                    fVar38 = (*(float **)(psVar32 + 6))[uVar17];
                    if (-1 < (int)(uVar17 * -0x80000000)) goto LAB_2c4b24ce;
                    fVar39 = fVar39 - fVar38;
                    uVar33 = uVar12 & 0xfffffff | (uint)(fVar39 < fVar35) << 0x1f;
                    uVar12 = uVar33 | (uint)(NAN(fVar39) || NAN(fVar35)) << 0x1c;
                    if ((byte)(uVar33 >> 0x1f) != ((byte)(uVar12 >> 0x1c) & 1)) break;
                  }
                  uVar22 = uVar17 & 1;
                } while( true );
              }
              uVar33 = uVar12 & 0xfffffff | (uint)(fVar39 == fRam2c4b2520) << 0x1e |
                       (uint)(fRam2c4b2520 <= fVar39) << 0x1d;
              bVar13 = (byte)(uVar33 >> 0x18);
              if ((bool)(bVar13 >> 5 & 1) && !(bool)(bVar13 >> 6)) {
                if (-1 < (int)(uVar17 << 0x1f)) {
                  in_d0 = (double)CONCAT44(uVar16,(int)*(undefined8 *)pfVar2);
                  iVar15 = func_0x2c4b018c((int)*(undefined8 *)pfVar2,uVar16,fVar52,fVar36,psVar32);
                  bVar7 = false;
                  if (iVar15 != 0) goto LAB_2c4b1520;
                }
                uVar17 = uVar17 + 1;
                if (uVar17 == *(uint *)(psVar32 + 8)) {
                  uVar22 = 0;
                  uVar17 = uVar22;
                }
                else {
                  uVar22 = uVar17 * 4;
                }
                fVar38 = *(float *)(*(int *)(psVar32 + 6) + uVar22);
              }
              else {
                fVar38 = -fVar39;
              }
            }
            fVar41 = (float)((ulonglong)lVar47 >> 0x20);
            pfVar10 = pfVar2;
            fVar49 = fVar50;
            pfVar8 = (float *)pfVar2[6];
          }
          if (cVar21 != '\0') {
            fVar49 = fVar49 + *(float *)((int)pfVar10[7] + 0x14);
            uVar22 = uVar33 & 0xfffffff;
            uVar12 = uVar22 | (uint)(fVar44 < fVar49) << 0x1f | (uint)(fVar44 == fVar49) << 0x1e;
            uVar33 = uVar12 | (uint)(NAN(fVar44) || NAN(fVar49)) << 0x1c;
            *(float *)(psVar32 + 0x3c) = fVar49;
            bVar13 = (byte)(uVar12 >> 0x18);
            if ((bool)(bVar13 >> 6 & 1) || bVar13 >> 7 != ((byte)(uVar33 >> 0x1c) & 1)) {
              fVar51 = fVar51 - fVar49;
              uVar22 = uVar22 | (uint)(fVar44 < fVar51) << 0x1f | (uint)(fVar44 == fVar51) << 0x1e;
              uVar33 = uVar22 | (uint)(NAN(fVar44) || NAN(fVar51)) << 0x1c;
              bVar13 = (byte)(uVar22 >> 0x18);
              if ((bool)(bVar13 >> 6 & 1) || bVar13 >> 7 != ((byte)(uVar33 >> 0x1c) & 1)) {
                cVar30 = '\0';
              }
              else {
                cVar30 = '\x02';
              }
            }
            else {
              cVar30 = '\x01';
            }
          }
          if ((*(int *)(psVar32 + 0x30) != 0) &&
             (iVar15 = func_0x2c4b0028(psVar32,*(undefined4 *)(psVar32 + 0x18),0), iVar15 != 0))
          goto LAB_2c4b1520;
          if (*(char *)((int)psVar32 + 0x8d) == '\0') {
            if (uVar14 == 0) {
LAB_2c4b26c0:
              in_d0 = (double)CONCAT44(uVar16,(int)*(undefined8 *)pfVar10);
              iVar15 = func_0x2c4b018c((int)*(undefined8 *)pfVar10,uVar16,fVar52,fVar36,psVar32);
              if (iVar15 != 0) goto LAB_2c4b1520;
            }
            else if (-1 < (int)(uVar17 << 0x1f)) {
              fVar50 = *(float *)(*(int *)(psVar32 + 6) + uVar17 * 4);
              uVar17 = uVar33 & 0xfffffff | (uint)(fVar50 < fVar38) << 0x1f |
                       (uint)(fVar50 == fVar38) << 0x1e;
              uVar33 = uVar17 | (uint)(NAN(fVar50) || NAN(fVar38)) << 0x1c;
              bVar13 = (byte)(uVar17 >> 0x18);
              if (!(bool)(bVar13 >> 6 & 1) && bVar13 >> 7 == ((byte)(uVar33 >> 0x1c) & 1))
              goto LAB_2c4b26c0;
            }
          }
          else if ((uVar14 == 0) || (bVar7)) {
            iVar15 = FUN_2c4aff78(fVar52 + (float)*(undefined8 *)pfVar10,psVar32);
            if (iVar15 != 0) goto LAB_2c4b1520;
            in_d0 = (double)CONCAT44(uVar16,(float)*(undefined8 *)pfVar10);
            iVar15 = FUN_2c4affd0((float)*(undefined8 *)pfVar10 - fVar52,psVar32);
            if (iVar15 != 0) goto LAB_2c4b1520;
            if (uVar14 == 0) {
              puVar27 = (undefined4 *)puStack_70[2];
              puVar23 = (undefined4 *)puStack_70[3];
              iVar15 = func_0x2c4b0bb4(fVar42,uVar16,*puVar27,puVar27[1],*puVar23,puVar23[1],psVar32
                                       ,pfVar10,cVar30);
              if (iVar15 != 0) goto LAB_2c4b1520;
              *puVar27 = **(undefined4 **)(psVar32 + 0x1e);
              puVar27[1] = *(undefined4 *)(*(int *)(psVar32 + 0x1e) + 4);
              *puVar23 = **(undefined4 **)(psVar32 + 0x1c);
              puVar23[1] = *(undefined4 *)(*(int *)(psVar32 + 0x1c) + 4);
            }
            else {
              if ((pfStack_84 == (float *)0x0) || (pfStack_80 == (float *)0x0)) goto LAB_2c4b153c;
              iVar15 = func_0x2c4b0bb4(fVar42,uVar16,*pfStack_84,pfStack_84[1],*pfStack_80,
                                       pfStack_80[1],psVar32,pfVar10,cVar30);
              if (iVar15 != 0) goto LAB_2c4b1520;
              *pfStack_84 = **(float **)(psVar32 + 0x1e);
              pfStack_84[1] = *(float *)(*(int *)(psVar32 + 0x1e) + 4);
              *pfStack_80 = **(float **)(psVar32 + 0x1c);
              pfStack_80[1] = *(float *)(*(int *)(psVar32 + 0x1c) + 4);
            }
            iVar15 = *(int *)(psVar32 + 0x1c);
            *(int *)(*(int *)(psVar32 + 0x1e) + 0x18) = iVar15;
            *(undefined4 *)(iVar15 + 0x1c) = *(undefined4 *)(psVar32 + 0x1e);
          }
          else if (*psVar32 != 0x1700) {
            if (*psVar32 == 0x1702) {
              if ((pfStack_84 == (float *)0x0) || (pfStack_80 == (float *)0x0)) goto LAB_2c4b153c;
              uVar5 = *(undefined8 *)pfStack_84;
              *pfStack_84 = (float)uVar5 + fVar41;
              pfStack_84[1] = (float)((ulonglong)uVar5 >> 0x20) - fStack_7c;
              uVar5 = *(undefined8 *)pfStack_80;
              *pfStack_80 = (float)uVar5 + fVar41;
              pfStack_80[1] = (float)((ulonglong)uVar5 >> 0x20) - fStack_7c;
            }
            else {
              iVar25 = *(int *)(psVar32 + 0x2c);
              iVar15 = *(int *)(iVar25 + 8);
              puVar23 = (undefined4 *)FUN_2c4b4980(0x20);
              if (puVar23 == (undefined4 *)0x0) goto LAB_2c4b153c;
              FUN_2c674268(puVar23,0,0x20);
              *puVar23 = **(undefined4 **)(iVar25 + 0xc);
              uVar16 = *(undefined4 *)(*(int *)(iVar25 + 0xc) + 4);
              puVar23[6] = iVar15;
              puVar23[1] = uVar16;
              *(undefined4 **)(iVar15 + 0x1c) = puVar23;
              *(undefined1 *)(iVar15 + 9) = 3;
              *(undefined4 *)(iVar15 + 0xc) = **(undefined4 **)(psVar32 + 0x16);
              *(undefined4 *)(iVar15 + 0x10) = *(undefined4 *)(*(int *)(psVar32 + 0x16) + 4);
              *(undefined4 **)(iVar25 + 8) = puVar23;
            }
          }
        }
        else {
LAB_2c4b1f3a:
          cVar21 = '\0';
          *(undefined1 *)(psVar32 + 0x2e) = 0;
          pfVar10 = (float *)pfVar8[6];
          cVar30 = cVar21;
          if (pfVar10 != (float *)0x0) goto LAB_2c4b1f46;
LAB_2c4b2076:
          if (((uVar14 == 0) || (-1 < (int)(uVar17 << 0x1f))) && (*psVar32 != 0x1700)) {
            puVar23 = (undefined4 *)FUN_2c4b4980(0x18);
            if (puVar23 == (undefined4 *)0x0) goto LAB_2c4b1556;
            *puVar23 = 0;
            puVar23[1] = 0;
            puVar23[2] = 0;
            puVar23[3] = 0;
            puVar23[4] = 0;
            puVar23[5] = 0;
            if (*(undefined4 **)(psVar32 + 0x2c) == (undefined4 *)0x0) {
              *(undefined4 **)(psVar32 + 0x2a) = puVar23;
              *(undefined4 **)(psVar32 + 0x2c) = puVar23;
            }
            else {
              **(undefined4 **)(psVar32 + 0x2c) = puVar23;
              *(undefined4 **)(psVar32 + 0x2c) = puVar23;
            }
            if (*psVar32 == 0x1702) {
              uVar17 = uVar33 & 0xfffffff;
              uVar33 = uVar17 | (uint)(pfVar8[3] == 0.0) << 0x1e;
              if ((byte)(uVar33 >> 0x1e) == 0) {
                uVar33 = uVar17 | (uint)(pfVar8[4] == 0.0) << 0x1e;
                if ((byte)(uVar33 >> 0x1e) == 0) {
                  lVar45 = CONCAT44(fVar50,fVar44 * pfVar8[4]);
                  fVar50 = -(pfVar8[3] * fVar44);
                }
              }
              pfVar10 = (float *)FUN_2c4b4980(0x20);
              if (pfVar10 == (float *)0x0) goto LAB_2c4b1556;
              FUN_2c674268(pfVar10,0,0x20);
              fVar38 = (float)lVar45;
              *pfVar10 = fVar38 + *pfVar8 + fVar50;
              pfVar10[1] = (pfVar8[1] - fVar38) + fVar50;
              *(float **)(psVar32 + 0x1e) = pfVar10;
              puVar23[2] = pfVar10;
              puVar23[1] = 1;
              iVar15 = FUN_2c4aff78((fVar38 + (float)*(undefined8 *)pfVar8) - fVar50,psVar32);
              if ((iVar15 != 0) ||
                 (iVar15 = FUN_2c4aff78(((float)*(undefined8 *)pfVar8 - fVar38) - fVar50,psVar32),
                 iVar15 != 0)) goto LAB_2c4b1520;
              in_d0 = (double)CONCAT44(uVar16,(float)*(undefined8 *)pfVar8);
              iVar15 = FUN_2c4aff78(((float)*(undefined8 *)pfVar8 - fVar38) + fVar50,psVar32);
              if (iVar15 != 0) goto LAB_2c4b1520;
              iVar15 = *(int *)(psVar32 + 0x1e);
              puVar23[3] = iVar15;
              *(undefined4 *)(iVar15 + 0x18) = 0;
            }
            else {
              pfVar10 = (float *)FUN_2c4b4980(0x20);
              if (pfVar10 == (float *)0x0) goto LAB_2c4b1556;
              FUN_2c674268(pfVar10,0,0x20);
              *pfVar10 = *pfVar8 + fVar44;
              pfVar10[1] = pfVar8[1];
              *(float **)(psVar32 + 0x1e) = pfVar10;
              puVar23[1] = 1;
              puVar23[2] = pfVar10;
              iVar15 = FUN_2c4aff78((float)*(undefined8 *)pfVar8 - fVar44,psVar32);
              if (iVar15 != 0) goto LAB_2c4b1520;
              *(undefined1 *)(*(int *)(psVar32 + 0x1e) + 9) = 4;
              *(float *)(*(int *)(psVar32 + 0x1e) + 0xc) = *pfVar8;
              *(float *)(*(int *)(psVar32 + 0x1e) + 0x10) = pfVar8[1];
              iVar15 = FUN_2c4aff78(fVar44 + *pfVar8,psVar32);
              if (iVar15 != 0) goto LAB_2c4b1520;
              *(undefined1 *)(*(int *)(psVar32 + 0x1e) + 9) = 4;
              *(float *)(*(int *)(psVar32 + 0x1e) + 0xc) = *pfVar8;
              *(float *)(*(int *)(psVar32 + 0x1e) + 0x10) = pfVar8[1];
              iVar15 = *(int *)(psVar32 + 0x1e);
              puVar23[3] = iVar15;
              *(undefined4 *)(iVar15 + 0x18) = 0;
            }
          }
        }
        uVar16 = (undefined4)((ulonglong)in_d0 >> 0x20);
        puVar26 = (undefined4 *)puVar26[3];
      } while (puVar26 != (undefined4 *)0x0);
      puVar26 = *(undefined4 **)(psVar32 + 0x26);
      if (puVar26 != (undefined4 *)0x0) {
        *(undefined4 *)(psVar32 + 0x18) = puVar26[1];
        *(undefined4 *)(psVar32 + 0x16) = *puVar26;
        *(undefined4 *)(psVar32 + 0x1a) = puVar26[2];
      }
    }
    fVar38 = fRam2c4b251c;
    fVar35 = fRam2c4b2518;
    pfStack_84 = *(float **)(psVar32 + 0x2a);
    if (pfStack_84 != (float *)0x0) {
      iStack_88 = *(int *)(param_1 + 0x3c);
      uVar40 = *(undefined4 *)(psVar32 + 0x10);
      do {
        pfVar10 = (float *)pfStack_84[2];
        fVar36 = (float)VectorUnsignedToFloat
                                  ((int)pfStack_84[1] * 0xc + 4,(byte)(uVar33 >> 0x16) & 3);
        fVar36 = fVar36 + fVar38;
        pfVar8 = pfVar10;
        while (pfVar8 != (float *)0x0) {
          pbVar18 = (byte *)((int)pfVar8 + 9);
          pfVar8 = (float *)pfVar8[6];
          if (*pbVar18 - 3 < 2) {
            fVar36 = fVar36 + fVar35;
          }
        }
        iVar25 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x3c) = (int)fVar36 + iStack_88;
        iVar15 = FUN_2c4b4980();
        *(int *)(param_1 + 0x38) = iVar15;
        if (iVar15 == 0) {
          if (iVar25 == 0) goto LAB_2c4b153c;
          iVar15 = 1;
          FUN_2c4b4990(iVar25);
          goto LAB_2c4b1520;
        }
        FUN_2c674268(iVar15,0,*(undefined4 *)(param_1 + 0x3c));
        if (iVar25 != 0) {
          FUN_2c674668(*(undefined4 *)(param_1 + 0x38),iVar25,iStack_88);
          FUN_2c4b4990(iVar25);
        }
        iVar15 = *(int *)(param_1 + 0x38);
        *(undefined1 *)(iVar15 + iStack_88) = 2;
        iVar15 = iVar15 + iStack_88;
        puVar31 = (undefined1 *)(iVar15 + 0xc);
        *(float *)(iVar15 + 4) = *pfVar10;
        *(float *)(iVar15 + 8) = pfVar10[1];
        if ((float *)pfVar10[6] == (float *)0x0) {
          iVar15 = 0x10;
        }
        else {
          fVar36 = 12.0;
          pfVar8 = (float *)pfVar10[6];
          do {
            cVar21 = *(char *)((int)pfVar8 + 9);
            if (cVar21 == '\0') {
              uVar17 = uVar33 & 0xfffffff;
              uVar33 = uVar17 | (uint)(*pfVar8 == *pfVar10) << 0x1e;
              if (((byte)(uVar33 >> 0x1e) == 0) ||
                 (uVar33 = uVar17 | (uint)(pfVar8[1] == pfVar10[1]) << 0x1e,
                 (byte)(uVar33 >> 0x1e) == 0)) {
                *puVar31 = 4;
                *(float *)(puVar31 + 4) = *pfVar8;
                fVar36 = fVar36 + 12.0;
                *(float *)(puVar31 + 8) = pfVar8[1];
                puVar31 = puVar31 + 0xc;
              }
              else {
                *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -0xc;
              }
            }
            else if (cVar21 == '\x01') {
              *puVar31 = 6;
              fVar36 = fVar36 + 20.0;
              pfVar10 = (float *)pfVar8[6];
              *(float *)(puVar31 + 4) = *pfVar8;
              *(float *)(puVar31 + 8) = pfVar8[1];
              *(float *)(puVar31 + 0xc) = *pfVar10;
              *(float *)(puVar31 + 0x10) = pfVar10[1];
              pfVar8 = pfVar10;
              puVar31 = puVar31 + 0x14;
            }
            else {
              if (cVar21 == '\x03') {
                iVar15 = FUN_2c4b04c8(uVar40,uVar16,pfVar8[4],*pfVar10,pfVar10[1],*pfVar8,pfVar8[1],
                                      0,&puStack_70);
                puVar26 = puStack_70;
              }
              else {
                iVar15 = FUN_2c4b04c8(uVar40,uVar16,pfVar8[4],*pfVar10,pfVar10[1],*pfVar8,pfVar8[1],
                                      1,&puStack_70);
                puVar26 = puStack_70;
              }
              puStack_70 = puVar26;
              if (iVar15 != 0) goto LAB_2c4b1520;
              puVar6 = puVar31;
              if (puVar26 == (undefined4 *)0x0) {
                *puVar31 = 4;
                *(float *)(puVar31 + 4) = *pfVar8;
                fVar36 = fVar36 + 12.0;
                *(float *)(puVar31 + 8) = pfVar8[1];
                puVar31 = puVar31 + 0xc;
              }
              else {
                do {
                  puVar31 = puVar6 + 0x14;
                  *puVar6 = 6;
                  puVar23 = (undefined4 *)puVar26[6];
                  puVar27 = (undefined4 *)puVar23[6];
                  fVar36 = fVar36 + 20.0;
                  *(undefined4 *)(puVar6 + 4) = *puVar26;
                  *(undefined4 *)(puVar6 + 8) = puVar26[1];
                  *(undefined4 *)(puVar6 + 0xc) = *puVar23;
                  *(undefined4 *)(puVar6 + 0x10) = puVar23[1];
                  FUN_2c4b4990();
                  FUN_2c4b4990(puVar23);
                  puVar26 = puVar27;
                  puVar6 = puVar31;
                } while (puVar27 != (undefined4 *)0x0);
              }
            }
            pfVar2 = pfVar8 + 6;
            pfVar10 = pfVar8;
            pfVar8 = (float *)*pfVar2;
          } while ((float *)*pfVar2 != (float *)0x0);
          iVar15 = (int)(fVar36 + 4.0);
        }
        iStack_88 = iStack_88 + iVar15;
        *puVar31 = *pfStack_84 != 0.0;
        *(int *)(param_1 + 0x3c) = iStack_88;
        pfStack_84 = (float *)*pfStack_84;
      } while (pfStack_84 != (float *)0x0);
      iVar15 = 0;
      goto LAB_2c4b1520;
    }
    goto LAB_2c4b153c;
  }
  bVar13 = 2;
  if (uVar14 == 0) goto LAB_2c4b29c8;
LAB_2c4b14c8:
  fVar35 = fRam2c4b1628;
  uVar17 = uVar22 - 1;
  fVar38 = fRam2c4b1628;
  fVar36 = fRam2c4b1628;
LAB_2c4b14f0:
  bVar13 = bVar13 & 0x1f;
  fVar51 = SUB84(in_d0,0);
  fVar50 = fVar51;
  switch(bVar13) {
  case 0:
    uVar14 = uVar14 - 1;
    bVar13 = 0;
    fVar50 = fVar38;
    fVar51 = fVar36;
    goto LAB_2c4b160a;
  default:
    goto LAB_2c4b153c;
  case 2:
    pbVar19 = pbVar18 + (uVar22 - ((uint)pbVar18 & uVar17)) + uVar22;
    (*pcVar24)(pbVar18 + (uVar22 - ((uint)pbVar18 & uVar17)));
    (*pcVar24)(pbVar19);
    uVar14 = uVar14 + iVar25 * -3 + ((uint)pbVar18 & uVar17);
    fVar36 = fVar51;
    break;
  case 3:
    pbVar19 = pbVar18 + (uVar22 - ((uint)pbVar18 & uVar17)) + uVar22;
    (*pcVar24)(pbVar18 + (uVar22 - ((uint)pbVar18 & uVar17)));
    (*pcVar24)(pbVar19);
    fVar36 = fVar36 + fVar51;
    uVar14 = uVar14 + iVar25 * -3 + ((uint)pbVar18 & uVar17);
    fVar51 = fVar38 + fVar51;
    break;
  case 4:
    pbVar19 = pbVar18 + (uVar22 - ((uint)pbVar18 & uVar17)) + uVar22;
    (*pcVar24)(pbVar18 + (uVar22 - ((uint)pbVar18 & uVar17)));
    (*pcVar24)(pbVar19);
    uVar14 = uVar14 + iVar25 * -3 + ((uint)pbVar18 & uVar17);
    fVar36 = fVar51;
    goto LAB_2c4b172e;
  case 5:
    pbVar19 = pbVar18 + (uVar22 - ((uint)pbVar18 & uVar17)) + uVar22;
    (*pcVar24)(pbVar18 + (uVar22 - ((uint)pbVar18 & uVar17)));
    (*pcVar24)(pbVar19);
    fVar36 = fVar36 + fVar51;
    uVar14 = uVar14 + iVar25 * -3 + ((uint)pbVar18 & uVar17);
    fVar51 = fVar38 + fVar51;
LAB_2c4b172e:
    pbVar18 = pbVar19 + uVar22;
    iVar15 = func_0x2c4b0a4c(fVar36,psVar32,0);
    fVar50 = fVar51;
    fVar51 = fVar36;
    if (iVar15 == 0) goto LAB_2c4b160a;
    goto LAB_2c4b1520;
  case 6:
    pbVar19 = pbVar18 + (uVar22 - ((uint)pbVar18 & uVar17));
    pbVar20 = pbVar19 + uVar22;
    (*pcVar24)(pbVar19);
    (*pcVar24)(pbVar20);
    pbVar19 = pbVar20 + uVar22 + uVar22;
    (*pcVar24)(pbVar20 + uVar22);
    (*pcVar24)(pbVar19);
    uVar14 = uVar14 + iVar25 * -5 + ((uint)pbVar18 & uVar17);
    goto LAB_2c4b16c6;
  case 7:
    pbVar19 = pbVar18 + (uVar22 - ((uint)pbVar18 & uVar17));
    pbVar20 = pbVar19 + uVar22;
    (*pcVar24)(pbVar19);
    (*pcVar24)(pbVar20);
    pbVar19 = pbVar20 + uVar22 + uVar22;
    (*pcVar24)(pbVar20 + uVar22);
    (*pcVar24)(pbVar19);
    fVar50 = fVar38 + fVar51;
    fVar51 = fVar36 + fVar51;
    uVar14 = uVar14 + iVar25 * -5 + ((uint)pbVar18 & uVar17);
LAB_2c4b16c6:
    pbVar18 = pbVar19 + uVar22;
    uVar12 = uVar33 & 0xfffffff;
    if ((fVar36 == fVar51) && (fVar38 == fVar50)) {
      uVar33 = uVar12 | (uint)(fVar51 == fVar36) << 0x1e;
      if (((byte)(uVar33 >> 0x1e) == 0) ||
         (uVar33 = uVar12 | (uint)(fVar50 == fVar38) << 0x1e, (byte)(uVar33 >> 0x1e) == 0))
      goto LAB_2c4b1b5a;
      goto LAB_2c4b160a;
    }
    uVar33 = uVar12 | 0x40000000;
    if ((byte)(uVar33 >> 0x1e) == 0) {
      fVar42 = fVar50 - fVar38;
      fVar52 = fVar51 - fVar36;
      fVar44 = ((fVar36 - fVar51) - fVar51) + fVar51;
      fVar41 = ((fVar38 - fVar50) - fVar50) + fVar50;
      fVar49 = -(fVar44 * (fVar42 + fVar42)) + (fVar52 + fVar52) * fVar41;
      uVar33 = uVar12 | (uint)(fVar49 == 0.0) << 0x1e;
      if ((byte)(uVar33 >> 0x1e) == 0) {
        if ((int)(uVar12 | (uint)(fVar49 < 0.0) << 0x1f | (uint)(fVar49 == 0.0) << 0x1e |
                 (uint)(0.0 <= fVar49) << 0x1d) < 0) {
          fVar49 = -fVar49;
        }
        fVar39 = -(fVar42 * fVar41 + fVar52 * fVar44) / (fVar41 * fVar41 + fVar44 * fVar44);
        uVar29 = uVar12 | (uint)(fVar39 < 0.0) << 0x1f;
        uVar33 = uVar29 | (uint)NAN(fVar39) << 0x1c;
        if (((byte)(uVar29 >> 0x1f) != ((byte)(uVar33 >> 0x1c) & 1)) ||
           (uVar33 = uVar12 | (uint)(fVar39 == 1.0) << 0x1e | (uint)(1.0 <= fVar39) << 0x1d,
           bVar4 = (byte)(uVar33 >> 0x18), (bool)(bVar4 >> 5 & 1) && !(bool)(bVar4 >> 6))) {
          fVar39 = fVar42 * fVar42 + fVar52 * fVar52;
          uVar33 = uVar33 & 0xfffffff;
          coprocessor_function2(10,3,0,in_cr0,in_cr0,in_cr7);
        }
        else {
          fVar37 = fVar42 + fVar41 * fVar39;
          fVar39 = fVar52 + fVar44 * fVar39;
          fVar39 = fVar37 * fVar37 + fVar39 * fVar39;
        }
        uVar33 = uVar33 & 0xfffffff | (uint)(fVar39 < 0.0) << 0x1f | (uint)(fVar39 == 0.0) << 0x1e |
                 (uint)(0.0 <= fVar39) << 0x1d;
        if ((int)uVar33 < 0) {
          FUN_2c667350();
        }
        else {
          fVar39 = SQRT(fVar39);
        }
        in_d0 = (double)(fVar49 / fVar39);
        uVar33 = uVar33 & 0xfffffff | (uint)(in_d0 < 0.0) << 0x1f | (uint)(in_d0 == 0.0) << 0x1e |
                 (uint)(0.0 <= in_d0) << 0x1d;
        if ((int)uVar33 < 0) {
          FUN_2c667350();
          dVar34 = in_d0;
        }
        else {
          dVar34 = SQRT(in_d0);
        }
        fVar49 = (float)dVar34;
        if ((char)psVar32[0x46] != '\0') {
          fVar49 = fVar49 * *(float *)(psVar32 + 2);
        }
        coprocessor_function2(0xb,0xb,2,in_cr7,in_cr10,in_cr7);
        uVar12 = VectorFloatToUnsigned((double)fVar49,3);
        if (0xff < uVar12 - 1) goto LAB_2c4b1c94;
        iVar11 = *(int *)(psVar32 + 0x18);
        iVar15 = func_0x2c4b0a4c(fVar51,psVar32,1);
        if (iVar15 != 0) goto LAB_2c4b1520;
        pfVar8 = *(float **)(psVar32 + 0x18);
        *pfVar8 = fVar36;
        pfVar8[1] = fVar38;
        *(float *)(iVar11 + 0x14) = fVar35;
        if (uVar12 != 1) {
          fVar37 = (float)VectorSignedToFloat(uVar12,(byte)(uVar33 >> 0x16) & 3);
          fVar39 = 1.0 / fVar37;
          fVar49 = fVar39 * fVar39;
          goto LAB_2c4b1cc2;
        }
      }
      else {
LAB_2c4b1c94:
        iVar11 = *(int *)(psVar32 + 0x18);
        iVar15 = func_0x2c4b0a4c(fVar51,psVar32,1);
        fVar49 = fRam2c4b1dbc;
        if (iVar15 != 0) goto LAB_2c4b1520;
        pfVar8 = *(float **)(psVar32 + 0x18);
        *pfVar8 = fVar36;
        pfVar8[1] = fVar38;
        fVar39 = fRam2c4b1dc0;
        *(float *)(iVar11 + 0x14) = fVar35;
        uVar12 = 0x100;
        fVar37 = fRam2c4b1dc4;
LAB_2c4b1cc2:
        fVar44 = fVar49 * fVar44;
        fVar49 = fVar49 * fVar41;
        fVar52 = fVar44 + fVar39 * (fVar52 + fVar52);
        fVar41 = fVar49 + fVar39 * (fVar42 + fVar42);
        fVar42 = fVar52 / fVar36;
        fVar38 = fVar41 / fVar38;
        uVar29 = uVar33 & 0xfffffff;
        if ((int)(uVar29 | (uint)(fVar42 < 0.0) << 0x1f | (uint)(fVar42 == 0.0) << 0x1e |
                 (uint)(0.0 <= fVar42) << 0x1d) < 0) {
          fVar42 = -fVar42;
        }
        uVar1 = uVar29 | (uint)(fVar42 < fRam2c4b1db8) << 0x1f |
                (uint)(fVar42 == fRam2c4b1db8) << 0x1e;
        uVar33 = uVar1 | (uint)(NAN(fVar42) || NAN(fRam2c4b1db8)) << 0x1c;
        if ((int)(uVar29 | (uint)(fVar38 < 0.0) << 0x1f | (uint)(fVar38 == 0.0) << 0x1e |
                 (uint)(0.0 <= fVar38) << 0x1d) < 0) {
          fVar38 = -fVar38;
        }
        bVar4 = (byte)(uVar1 >> 0x18);
        if (((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar33 >> 0x1c) & 1)) ||
           (uVar29 = uVar29 | (uint)(fVar38 < fRam2c4b1db8) << 0x1f |
                     (uint)(fVar38 == fRam2c4b1db8) << 0x1e,
           uVar33 = uVar29 | (uint)(NAN(fVar38) || NAN(fRam2c4b1db8)) << 0x1c,
           bVar4 = (byte)(uVar29 >> 0x18),
           (bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar33 >> 0x1c) & 1))) {
          uVar29 = 1;
          do {
            fVar44 = (float)VectorSignedToFloat(uVar29,(byte)(uVar33 >> 0x16) & 3);
            fVar44 = fVar44 / fVar37;
            fVar38 = 1.0 - fVar44;
            iVar15 = func_0x2c4b0a4c((fVar44 + fVar44) * fVar38 * fVar51 + fVar38 * fVar38 * fVar36
                                     + fVar51 * fVar44 * fVar44,psVar32,2);
            if (iVar15 != 0) goto LAB_2c4b1520;
            uVar29 = uVar29 + 1;
          } while (uVar29 < uVar12);
        }
        else {
          uVar29 = 1;
          do {
            fVar36 = fVar36 + fVar52;
            iVar15 = FUN_2c4b07f0(fVar36,(int)((ulonglong)in_d0 >> 0x20),fVar52,fVar41,psVar32,2);
            if (iVar15 != 0) goto LAB_2c4b1520;
            uVar29 = uVar29 + 1;
            fVar52 = fVar52 + fVar44 + fVar44;
            fVar41 = fVar41 + fVar49 + fVar49;
          } while (uVar29 < uVar12);
        }
      }
      iVar15 = func_0x2c4b0a4c(fVar51,psVar32,3);
      if (iVar15 != 0) goto LAB_2c4b1520;
      pfVar8 = *(float **)(psVar32 + 0x18);
      *pfVar8 = fVar51;
      pfVar8[1] = fVar50;
      iVar15 = func_0x2c4b0a4c(fVar51,psVar32,0);
      if (iVar15 != 0) goto LAB_2c4b1520;
      *pfVar8 = fVar51;
      pfVar8[1] = fVar50;
      pfVar8[5] = fVar35;
    }
    else {
LAB_2c4b1b5a:
      iVar15 = func_0x2c4b0a4c(fVar51,psVar32,0);
      if (iVar15 != 0) goto LAB_2c4b1520;
    }
    goto LAB_2c4b160a;
  case 8:
    pbVar19 = pbVar18 + (uVar22 - ((uint)pbVar18 & uVar17));
    pbVar20 = pbVar19 + uVar22;
    (*pcVar24)(pbVar19);
    pbVar19 = pbVar20 + uVar22;
    (*pcVar24)(pbVar20);
    pbVar20 = pbVar19 + uVar22;
    (*pcVar24)(pbVar19);
    (*pcVar24)(pbVar20);
    pbVar19 = pbVar20 + uVar22 + uVar22;
    (*pcVar24)(pbVar20 + uVar22);
    (*pcVar24)(pbVar19);
    uVar14 = uVar14 + iVar25 * -7 + ((uint)pbVar18 & uVar17);
    goto LAB_2c4b15ba;
  case 9:
    pbVar19 = pbVar18 + (uVar22 - ((uint)pbVar18 & uVar17));
    pbVar20 = pbVar19 + uVar22;
    (*pcVar24)(pbVar19);
    pbVar19 = pbVar20 + uVar22;
    (*pcVar24)(pbVar20);
    pbVar20 = pbVar19 + uVar22;
    (*pcVar24)(pbVar19);
    (*pcVar24)(pbVar20);
    pbVar19 = pbVar20 + uVar22 + uVar22;
    (*pcVar24)(pbVar20 + uVar22);
    (*pcVar24)(pbVar19);
    fVar50 = fVar38 + fVar51;
    fVar51 = fVar36 + fVar51;
    uVar14 = uVar14 + iVar25 * -7 + ((uint)pbVar18 & uVar17);
LAB_2c4b15ba:
    pbVar18 = pbVar19 + uVar22;
    uVar12 = uVar33 & 0xfffffff;
    uVar33 = uVar12 | (uint)(fVar36 == fVar51) << 0x1e;
    if ((((((byte)(uVar33 >> 0x1e) != 0) &&
          (uVar33 = uVar12 | (uint)(fVar38 == fVar50) << 0x1e, (byte)(uVar33 >> 0x1e) != 0)) &&
         (uVar33 = uVar12 | (uint)(fVar36 == fVar51) << 0x1e, (byte)(uVar33 >> 0x1e) != 0)) &&
        ((uVar33 = uVar12 | (uint)(fVar38 == fVar50) << 0x1e, (byte)(uVar33 >> 0x1e) != 0 &&
         (uVar33 = uVar12 | (uint)(fVar51 == fVar36) << 0x1e, (byte)(uVar33 >> 0x1e) != 0)))) &&
       (uVar33 = uVar12 | (uint)(fVar50 == fVar38) << 0x1e, (byte)(uVar33 >> 0x1e) != 0))
    goto LAB_2c4b160a;
    fVar52 = ((fVar38 - fVar50) - fVar50) + fVar50;
    fVar42 = ((fVar36 - fVar51) - fVar51) + fVar51;
    fVar52 = fVar52 + fVar52 * 2.0;
    fVar42 = fVar42 + fVar42 * 2.0;
    fVar44 = fVar52 * fVar52 + fVar42 * fVar42;
    coprocessor_function2(10,3,1,in_cr0,in_cr0,in_cr6);
    uVar33 = uVar33 & 0xfffffff | (uint)(fVar44 < 0.0) << 0x1f | (uint)(fVar44 == 0.0) << 0x1e |
             (uint)(0.0 <= fVar44) << 0x1d;
    if ((int)uVar33 < 0) {
      FUN_2c667350();
    }
    else {
      fVar44 = SQRT(fVar44);
    }
    in_d0 = (double)(fVar44 + fVar44);
    uVar12 = uVar33 & 0xfffffff | (uint)(in_d0 < 0.0) << 0x1f | (uint)(in_d0 == 0.0) << 0x1e |
             (uint)(0.0 <= in_d0) << 0x1d;
    if ((int)uVar12 < 0) {
      FUN_2c667350();
      dVar34 = in_d0;
    }
    else {
      dVar34 = SQRT(in_d0);
    }
    fVar44 = (float)dVar34;
    if ((char)psVar32[0x46] != '\0') {
      fVar44 = fVar44 * *(float *)(psVar32 + 2);
    }
    iVar28 = *(int *)(psVar32 + 0x18);
    uVar12 = uVar12 & 0xfffffff;
    uVar33 = uVar12 | (uint)(fVar36 == fVar51) << 0x1e;
    coprocessor_function2(0xb,0xb,2,in_cr6,in_cr10,in_cr6);
    iVar11 = VectorFloatToUnsigned((double)fVar44,3);
    if (0xff < iVar11 - 1U) {
      iVar11 = 0x100;
    }
    if (((byte)(uVar33 >> 0x1e) == 0) ||
       (uVar33 = uVar12 | (uint)(fVar38 == fVar50) << 0x1e, (byte)(uVar33 >> 0x1e) == 0)) {
      iVar15 = func_0x2c4b0a4c(fVar51,psVar32,1);
    }
    else {
      uVar33 = uVar12 | (uint)(fVar36 == fVar51) << 0x1e;
      if (((byte)(uVar33 >> 0x1e) == 0) ||
         (uVar33 = uVar12 | (uint)(fVar38 == fVar50) << 0x1e, (byte)(uVar33 >> 0x1e) == 0)) {
        iVar15 = func_0x2c4b0a4c(fVar51,psVar32,1);
      }
      else {
        iVar15 = func_0x2c4b0a4c(fVar51,psVar32,1);
      }
    }
    if (iVar15 != 0) goto LAB_2c4b1520;
    pfVar8 = *(float **)(psVar32 + 0x18);
    *pfVar8 = fVar36;
    pfVar8[1] = fVar38;
    *(float *)(iVar28 + 0x14) = fVar35;
    if (iVar11 != 1) {
      fVar43 = (float)VectorSignedToFloat(iVar11,(byte)(uVar33 >> 0x16) & 3);
      fVar44 = 1.0 / fVar43;
      fVar49 = fVar44 * fVar44;
      fVar39 = ((fVar51 + (fVar51 - fVar51) + (fVar51 - fVar51) * 2.0) - fVar36) * fVar44 * fVar49;
      fVar37 = ((fVar50 + (fVar50 - fVar50) + (fVar50 - fVar50) * 2.0) - fVar38) * fVar44 * fVar49;
      fVar46 = fVar39 + fVar42 * fVar49 + ((fVar51 - fVar36) + (fVar51 - fVar36) * 2.0) * fVar44;
      fVar48 = fVar37 + fVar52 * fVar49 + ((fVar50 - fVar38) + (fVar50 - fVar38) * 2.0) * fVar44;
      fVar41 = fVar46 / fVar36;
      fVar44 = fVar48 / fVar38;
      uVar12 = uVar33 & 0xfffffff;
      if ((int)(uVar12 | (uint)(fVar41 < 0.0) << 0x1f | (uint)(fVar41 == 0.0) << 0x1e |
               (uint)(0.0 <= fVar41) << 0x1d) < 0) {
        fVar41 = -fVar41;
      }
      uVar29 = uVar12 | (uint)(fVar41 < fRam2c4b1db8) << 0x1f |
               (uint)(fVar41 == fRam2c4b1db8) << 0x1e;
      uVar33 = uVar29 | (uint)(NAN(fVar41) || NAN(fRam2c4b1db8)) << 0x1c;
      if ((int)(uVar12 | (uint)(fVar44 < 0.0) << 0x1f | (uint)(fVar44 == 0.0) << 0x1e |
               (uint)(0.0 <= fVar44) << 0x1d) < 0) {
        fVar44 = -fVar44;
      }
      bVar4 = (byte)(uVar29 >> 0x18);
      if (((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar33 >> 0x1c) & 1)) ||
         (uVar12 = uVar12 | (uint)(fVar44 < fRam2c4b1db8) << 0x1f |
                   (uint)(fVar44 == fRam2c4b1db8) << 0x1e,
         uVar33 = uVar12 | (uint)(NAN(fVar44) || NAN(fRam2c4b1db8)) << 0x1c,
         bVar4 = (byte)(uVar12 >> 0x18),
         (bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar33 >> 0x1c) & 1))) {
        iVar28 = 1;
        do {
          fVar52 = (float)VectorSignedToFloat(iVar28,(byte)(uVar33 >> 0x16) & 3);
          fVar52 = fVar52 / fVar43;
          fVar44 = fVar52 * fVar52;
          fVar42 = fVar52 * fVar44;
          iVar15 = func_0x2c4b0a4c((-(fVar44 * 6.0) + fVar52 * 3.0 + fVar42 * 3.0) * fVar51 +
                                   ((-fVar52 * 3.0 + 1.0 + fVar44 * 3.0) - fVar42) * fVar36 +
                                   (-(fVar42 * 3.0) + fVar44 * 3.0) * fVar51 + fVar51 * fVar42,
                                   psVar32,2);
          if (iVar15 != 0) goto LAB_2c4b1520;
          iVar28 = iVar28 + 1;
        } while (iVar11 != iVar28);
      }
      else {
        iVar28 = 1;
        fVar44 = fVar42 * fVar49 * 2.0;
        fVar52 = fVar52 * fVar49 * 2.0;
        fVar42 = fVar36;
        do {
          fVar44 = fVar39 * 6.0 + fVar44;
          fVar52 = fVar37 * 6.0 + fVar52;
          fVar42 = fVar42 + fVar46;
          iVar15 = FUN_2c4b07f0(fVar42,(int)((ulonglong)in_d0 >> 0x20),fVar46,fVar48,psVar32,2);
          if (iVar15 != 0) goto LAB_2c4b1520;
          iVar28 = iVar28 + 1;
          fVar46 = fVar46 + fVar44;
          fVar48 = fVar48 + fVar52;
        } while (iVar11 != iVar28);
      }
    }
    iVar15 = func_0x2c4b0a4c(fVar51,psVar32,3);
    if (iVar15 != 0) goto LAB_2c4b1520;
    uVar33 = uVar33 & 0xfffffff;
    pfVar8 = *(float **)(psVar32 + 0x18);
    *pfVar8 = fVar36;
    pfVar8[1] = fVar38;
    iVar15 = func_0x2c4b0a4c(fVar51,psVar32,0);
    if (iVar15 != 0) goto LAB_2c4b1520;
    *pfVar8 = fVar51;
    pfVar8[1] = fVar50;
    pfVar8[5] = fVar35;
    goto LAB_2c4b160a;
  }
  pbVar18 = pbVar19 + uVar22;
  pfVar8 = (float *)FUN_2c4b4980(0x20);
  if (pfVar8 == (float *)0x0) goto LAB_2c4b1556;
  *pfVar8 = fVar36;
  pfVar8[1] = fVar51;
  pfVar8[2] = 0.0;
  pfVar8[3] = 0.0;
  pfVar8[4] = 0.0;
  pfVar8[5] = 0.0;
  pfVar8[6] = 0.0;
  pfVar8[7] = 0.0;
  psVar32[0x1a] = 1;
  psVar32[0x1b] = 0;
  *(float **)(psVar32 + 0x16) = pfVar8;
  *(float **)(psVar32 + 0x18) = pfVar8;
  piVar9 = (int *)FUN_2c4b4980(0x10);
  if (piVar9 == (int *)0x0) goto LAB_2c4b1556;
  piVar9[2] = 1;
  piVar9[3] = 0;
  *piVar9 = (int)pfVar8;
  piVar9[1] = (int)pfVar8;
  fVar50 = fVar51;
  fVar51 = fVar36;
  if (*(int *)(psVar32 + 0x28) == 0) {
    *(int **)(psVar32 + 0x26) = piVar9;
    *(int **)(psVar32 + 0x28) = piVar9;
  }
  else {
    *(int **)(*(int *)(psVar32 + 0x28) + 0xc) = piVar9;
    *(undefined4 *)(psVar32 + 0x28) = *(undefined4 *)(*(int *)(psVar32 + 0x28) + 0xc);
  }
LAB_2c4b160a:
  fVar36 = fVar51;
  fVar38 = fVar50;
  if (uVar14 == 0) {
    if (bVar13 != 0) goto LAB_2c4b29c8;
    goto LAB_2c4b1ed8;
  }
  bVar13 = *pbVar18;
  goto LAB_2c4b14f0;
}


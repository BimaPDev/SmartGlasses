/* FUN_2c619c5c @ 0x2c619c5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c619c5c(undefined4 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  byte bVar6;
  byte bVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  byte *pbVar15;
  undefined4 uVar16;
  short *psVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  byte bVar23;
  byte bVar24;
  uint uVar25;
  byte bVar26;
  int iVar27;
  uint uStack_218;
  uint uStack_208;
  uint uStack_204;
  uint uStack_200;
  uint uStack_1fc;
  undefined4 *puStack_1f8;
  uint uStack_1f4;
  short *psStack_1e8;
  short sStack_1dc;
  short sStack_1da;
  short sStack_1d8;
  short sStack_1d6;
  short sStack_1d4;
  short sStack_1d2;
  short sStack_1d0;
  short sStack_1ce;
  short sStack_1cc;
  short sStack_1ca;
  short sStack_1c8;
  short sStack_1c6;
  short sStack_1c4;
  short sStack_1c2;
  short sStack_1c0;
  short sStack_1be;
  short sStack_1bc;
  short sStack_1ba;
  short sStack_1b8;
  short sStack_1b6;
  short sStack_1b4;
  short sStack_1b2;
  short sStack_1b0;
  short sStack_1ae;
  short sStack_1ac;
  short sStack_1aa;
  short sStack_1a8;
  short sStack_1a6;
  byte bStack_1a4;
  byte bStack_1a3;
  byte bStack_1a2;
  byte bStack_1a1;
  short sStack_1a0;
  byte bStack_199;
  short sStack_198;
  short sStack_196;
  undefined4 uStack_180;
  short sStack_168;
  short sStack_166;
  short sStack_164;
  short sStack_162;
  undefined4 uStack_150;
  undefined2 uStack_14c;
  byte bStack_146;
  short sStack_138;
  short sStack_136;
  undefined4 uStack_128;
  undefined4 uStack_124;
  byte bStack_118;
  byte bStack_117;
  byte bStack_f7;
  short sStack_ec;
  short sStack_ea;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 *puStack_d8;
  byte *pbStack_d4;
  undefined4 *puStack_d0;
  undefined4 *puStack_cc;
  short *psStack_c8;
  short *psStack_c4;
  undefined4 *puStack_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  short sStack_b0;
  int iStack_ac;
  byte *pbStack_a8;
  undefined1 auStack_a4 [88];
  undefined4 auStack_4c [4];
  int iStack_3c;
  
  iStack_3c = *DAT_2c619df0;
  iVar12 = FUN_2c602408();
  iVar13 = FUN_2c602400(param_1);
  if (iVar12 == 0x15) {
    uVar14 = FUN_2c602608(param_1);
    FUN_2c60747c(iVar13,&sStack_1cc);
    iVar27 = iVar13 + 0x30;
    func_0x2c614f78(&uStack_128);
    iVar12 = FUN_2c6033b4(iVar13,0x50000,0x51);
    bStack_117 = bStack_117 & 0xfb | (iVar12 != 0) << 2;
    uVar25 = (uint)(short)((sStack_1c8 + 1) - sStack_1cc);
    if ((int)uVar25 < 0) {
      uVar25 = uVar25 + 1;
    }
    sVar5 = (short)((uVar25 & 0x1ffff) >> 1);
    uStack_150 = CONCAT22(sStack_1ca + (short)((uVar25 << 0xf) >> 0x10),sStack_1cc + sVar5);
    bVar6 = FUN_2c6033b4(iVar13,0,0x60);
    FUN_2c600b9c(&sStack_ec,uVar14);
    puStack_cc = &uStack_128;
    uStack_b8 = 0x20000;
    uStack_e8 = _LAB_2c619df4;
    uStack_e4 = 0;
    for (pbVar15 = (byte *)FUN_2c62ca18(iVar27); pbVar15 != (byte *)0x0;
        pbVar15 = (byte *)FUN_2c62ca28(iVar27,pbVar15)) {
      if (pbVar15[4] == 3) {
        uStack_128 = *(undefined4 *)(pbVar15 + 0x18);
        uVar25 = (uint)uStack_124 >> 0x10;
        uStack_124 = CONCAT22((short)uVar25,*(undefined2 *)(pbVar15 + 0x10));
        bStack_118 = bVar6;
        if (pbVar15[5] < 0xfe) {
          bStack_118 = (byte)((uint)pbVar15[5] * (uint)bVar6 >> 8);
        }
        iVar12 = *(int *)pbVar15;
        uVar8 = FUN_2c62e4a8(*(undefined4 *)(pbVar15 + 8),*(undefined4 *)(iVar12 + 0x1c),
                             *(undefined4 *)(iVar12 + 0x20),(int)*(short *)(iVar12 + 0x28),
                             (uint)*(ushort *)(iVar12 + 0x26) + (int)*(short *)(iVar12 + 0x28));
        uVar9 = FUN_2c62e4a8(*(undefined4 *)(pbVar15 + 0xc),*(undefined4 *)(iVar12 + 0x1c),
                             *(undefined4 *)(iVar12 + 0x20),(int)*(short *)(iVar12 + 0x28),
                             (uint)*(ushort *)(iVar12 + 0x26) + (int)*(short *)(iVar12 + 0x28));
        psStack_c8 = (short *)&uStack_150;
        sStack_b0 = *(short *)(pbVar15 + 0x1c) + sVar5;
        pbStack_a8 = pbVar15;
        FUN_2c602340(iVar13,0x1a,&sStack_ec);
        FUN_2c614f94(uVar14,&uStack_128,&uStack_150,sStack_b0,uVar8,uVar9);
        FUN_2c602340(iVar13,0x1b,&sStack_ec);
      }
    }
    iVar20 = (int)(short)((sStack_1c8 + 1) - sStack_1cc);
    iVar12 = (int)(short)((sStack_1c6 + 1) - sStack_1ca);
    if (iVar20 < 0) {
      iVar20 = iVar20 + 1;
    }
    if (iVar12 < 0) {
      iVar12 = iVar12 + 1;
    }
    iVar21 = (int)(short)(iVar20 >> 1);
    iVar20 = iVar12 >> 1;
    if (iVar21 <= iVar12 >> 1) {
      iVar20 = iVar21;
    }
    sVar5 = (short)iVar20;
    sStack_1dc = sStack_1cc + sVar5;
    sStack_1da = sStack_1ca + sVar5;
    FUN_2c6120a0(&bStack_1a4);
    FUN_2c600968(iVar13,0x60000,&bStack_1a4);
    bStack_199 = bStack_199 | 0x10;
    FUN_2c6129e4(&uStack_150);
    FUN_2c6007ec(iVar13,0x60000,&uStack_150);
    FUN_2c600b9c(&sStack_ec,uVar14);
    uStack_e8 = DAT_2c61a1b0;
    uStack_b8 = 0x60000;
    uStack_e4 = 3;
    pbStack_d4 = &bStack_1a4;
    pbVar15 = (byte *)FUN_2c62ca18(iVar13 + 0x24);
    if (pbVar15 != (byte *)0x0) {
      if (iVar20 < 0x82) {
        iVar20 = 0x82;
      }
      do {
        sVar4 = *(short *)(pbVar15 + 0x12);
        sStack_1be = sVar5 - *(short *)(pbVar15 + 6);
        sStack_1c2 = *(short *)(pbVar15 + 6) - sVar5;
        sVar11 = sVar5 - sVar4;
        sStack_1c4 = sStack_1dc + sStack_1c2;
        sStack_1c2 = sStack_1c2 + sStack_1da;
        sStack_1c0 = sStack_1dc + sStack_1be;
        sStack_1be = sStack_1be + sStack_1da;
        pbStack_a8 = pbVar15;
        FUN_2c6144a0(&sStack_198,&sStack_1c4,0x7fff,1);
        sVar4 = sVar4 - sVar5;
        sStack_1bc = sStack_1dc + sVar4;
        sStack_1ba = sVar4 + sStack_1da;
        sStack_1b8 = sStack_1dc + -1 + sVar11;
        sStack_1b6 = sVar11 + sStack_1da + -1;
        FUN_2c6144a0(&uStack_180,&sStack_1bc,0x7fff,1);
        sStack_1b4 = sStack_1dc - sVar5;
        sStack_1b0 = sVar5 + sStack_1dc + -1;
        sStack_1b2 = sStack_1da - sVar5;
        sStack_1ae = sVar5 + sStack_1da + -1;
        FUN_2c6144a0(&sStack_168,&sStack_1b4,0x7fff,0);
        uVar16 = FUN_2c613e5c(&sStack_168,0);
        uVar25 = (uint)*(ushort *)(pbVar15 + 0x10);
        if (uVar25 == 0) {
          uStack_1fc = 0xffff;
        }
        else {
          uStack_1fc = uVar25 - 1;
        }
        uVar19 = (uint)*(ushort *)(pbVar15 + 4);
        if (uVar19 != 0) {
          uStack_218 = 0;
          uStack_1fc = uStack_1fc + 1;
          if (uStack_1fc == uVar25) goto LAB_2c61a258;
          do {
            uStack_1f4 = uStack_218 & 0xffff;
            puStack_1f8 = (undefined4 *)0x0;
            iVar12 = FUN_2c62e4a8(uStack_1f4,0,uVar19 - 1,*(undefined4 *)(pbVar15 + 0x1c),
                                  *(undefined4 *)(pbVar15 + 0x20));
            bVar6 = *pbVar15;
            bVar1 = pbVar15[1];
            bVar2 = pbVar15[2];
            bVar3 = pbVar15[3];
            sVar4 = *(short *)(pbVar15 + 8);
            while( true ) {
              uStack_200 = (uint)bVar2;
              uStack_204 = (uint)bVar1;
              uStack_208 = (uint)bVar6;
              iStack_ac = iVar12;
              iVar21 = FUN_2c62ca18(iVar27);
              bVar26 = bVar6;
              bVar24 = bVar1;
              bVar23 = bVar2;
              bVar7 = bVar3;
              sVar10 = sVar4;
              for (; iVar21 != 0; iVar21 = FUN_2c62ca28(iVar27,iVar21)) {
                if (((*(char *)(iVar21 + 4) == '\x02') && (*(int *)(iVar21 + 8) <= iVar12)) &&
                   (iVar12 <= *(int *)(iVar21 + 0xc))) {
                  sVar10 = sVar10 + *(short *)(iVar21 + 0x10);
                  if (*(int *)(iVar21 + 0x14) == *(int *)(iVar21 + 0x18)) {
                    bVar7 = *(byte *)(iVar21 + 0x17);
                    uStack_208 = (uint)*(byte *)(iVar21 + 0x14);
                    uStack_204 = (uint)*(byte *)(iVar21 + 0x15);
                    uStack_200 = (uint)*(byte *)(iVar21 + 0x16);
                  }
                  else {
                    if ((*(byte *)(iVar21 + 0x1c) & 1) == 0) {
                      bVar7 = FUN_2c62e4a8(iVar12,*(undefined4 *)(pbVar15 + 0x1c),
                                           *(undefined4 *)(pbVar15 + 0x20),
                                           *(byte *)(iVar21 + 0x1c) & 1,0xff);
                    }
                    else {
                      bVar7 = FUN_2c62e4a8(iVar12,*(int *)(iVar21 + 8),*(int *)(iVar21 + 0xc),0,0xff
                                          );
                    }
                    uVar25 = (uint)bVar7;
                    iVar22 = 0xff - uVar25;
                    uStack_200 = ((*(byte *)(iVar21 + 0x1a) * uVar25 +
                                  iVar22 * (uint)*(byte *)(iVar21 + 0x16)) * 0x8081 & 0x7fffffff) >>
                                 0x17;
                    uStack_204 = ((*(byte *)(iVar21 + 0x19) * uVar25 +
                                  iVar22 * (uint)*(byte *)(iVar21 + 0x15)) * 0x8081 & 0x7fffffff) >>
                                 0x17;
                    uStack_208 = ((*(byte *)(iVar21 + 0x18) * uVar25 +
                                  iVar22 * (uint)*(byte *)(iVar21 + 0x14)) * 0x8081 & 0x7fffffff) >>
                                 0x17;
                    bVar7 = 0xff;
                  }
                }
                bVar23 = (byte)uStack_200;
                bVar24 = (byte)uStack_204;
                bVar26 = (byte)uStack_208;
              }
              sStack_1d8 = sStack_1dc + sVar5 + (short)iVar20;
              iVar21 = *(short *)(pbVar15 + 0x28) * 10 +
                       (int)(uStack_1f4 * *(ushort *)(pbVar15 + 0x26) * 10) /
                       (int)(*(ushort *)(pbVar15 + 4) - 1);
              sStack_1d6 = sStack_1da;
              bStack_1a4 = bVar26;
              bStack_1a3 = bVar24;
              bStack_1a2 = bVar23;
              bStack_1a1 = bVar7;
              sStack_1a0 = sVar10;
              FUN_2c62ab04(&sStack_1d8,iVar21,0x100,&sStack_1dc);
              psStack_c8 = &sStack_1dc;
              uStack_b4 = uStack_1f4;
              psStack_c4 = &sStack_1d8;
              puStack_d8 = &uStack_150;
              if (puStack_1f8 == (undefined4 *)0x0) {
                puStack_d8 = puStack_1f8;
                puStack_c0 = puStack_1f8;
                FUN_2c602340(iVar13,0x1a,&sStack_ec);
                psVar17 = &sStack_198;
              }
              else {
                FUN_2c613ee4(uVar16);
                sStack_1d4 = (sVar11 - *(short *)(pbVar15 + 0x16)) + sStack_1dc;
                sStack_1d2 = sStack_1da;
                FUN_2c62ab04(&sStack_1d4,iVar21,0x100,&sStack_1dc);
                FUN_2c62c0d8(&uStack_128,&uStack_150,0x28);
                puStack_d8 = &uStack_128;
                FUN_2c62dbd4(auStack_4c,0x10,DAT_2c61a1b4,iVar12);
                puStack_c0 = auStack_4c;
                FUN_2c602340(iVar13,0x1a,&sStack_ec);
                FUN_2c62b954(&sStack_1d0,puStack_c0,uStack_150,(int)sStack_136,(int)sStack_138,
                             0x1fff,0);
                iVar12 = (int)sStack_1d0;
                iVar21 = (int)sStack_1ce;
                if (iVar12 < 0) {
                  iVar12 = iVar12 + 1;
                }
                sStack_1ac = sStack_1d4 - (short)(iVar12 >> 1);
                if (iVar21 < 0) {
                  iVar21 = iVar21 + 1;
                }
                sStack_1a8 = sStack_1ac + sStack_1d0;
                sStack_1aa = sStack_1d2 - (short)(iVar21 >> 1);
                sStack_1a6 = sStack_1ce + sStack_1aa;
                FUN_2c612a20(uVar14,puStack_d8,&sStack_1ac,puStack_c0,0);
                uVar16 = FUN_2c613e5c(&sStack_168,0);
                psVar17 = (short *)&uStack_180;
              }
              uStack_218 = uStack_218 + 1;
              uVar18 = FUN_2c613e5c(psVar17,0);
              FUN_2c6120f4(uVar14,&bStack_1a4,&sStack_1d8,&sStack_1dc);
              FUN_2c613ee4(uVar18);
              FUN_2c602340(iVar13,0x16,&sStack_ec);
              uVar19 = (uint)*(ushort *)(pbVar15 + 4);
              bStack_1a4 = bVar6;
              bStack_1a3 = bVar1;
              bStack_1a2 = bVar2;
              bStack_1a1 = bVar3;
              sStack_1a0 = sVar4;
              if (uVar19 <= (uStack_218 & 0xffff)) goto LAB_2c61a2cc;
              uStack_1fc = uStack_1fc + 1;
              if (uStack_1fc != *(ushort *)(pbVar15 + 0x10)) break;
LAB_2c61a258:
              uStack_1f4 = uStack_218 & 0xffff;
              uStack_1fc = 0;
              iVar12 = FUN_2c62e4a8(uStack_1f4,0,uVar19 - 1,*(undefined4 *)(pbVar15 + 0x1c),
                                    *(undefined4 *)(pbVar15 + 0x20));
              puStack_1f8 = (undefined4 *)0x1;
              bVar6 = pbVar15[0xc];
              bVar1 = pbVar15[0xd];
              bVar2 = pbVar15[0xe];
              bVar3 = pbVar15[0xf];
              sVar4 = *(short *)(pbVar15 + 0x14);
            }
          } while( true );
        }
LAB_2c61a2cc:
        FUN_2c613f44(&sStack_198);
        FUN_2c613f44(&uStack_180);
        FUN_2c613f44(&sStack_168);
        FUN_2c613ee4(uVar16);
        pbVar15 = (byte *)FUN_2c62ca28(iVar13 + 0x24,pbVar15);
      } while (pbVar15 != (byte *)0x0);
    }
    psStack_1e8 = &sStack_198;
    uVar25 = (uint)(short)((sStack_1c8 + 1) - sStack_1cc);
    if ((int)uVar25 < 0) {
      uVar25 = uVar25 + 1;
    }
    sStack_198 = sStack_1cc + (short)((uVar25 << 0xf) >> 0x10);
    sVar5 = (short)((uVar25 & 0x1ffff) >> 1);
    sStack_196 = sVar5 + sStack_1ca;
    FUN_2c6120a0(&uStack_150);
    FUN_2c600968(iVar13,0x50000,&uStack_150);
    FUN_2c614a0c(&uStack_128);
    FUN_2c6008ac(iVar13,0x50000,&uStack_128);
    bVar6 = FUN_2c6033b4(iVar13,0,0x60);
    FUN_2c600b9c(&sStack_ec,uVar14);
    psStack_c8 = psStack_1e8;
    uStack_e8 = DAT_2c61a5c8;
    pbVar15 = (byte *)FUN_2c62ca18(iVar27);
    iVar12 = DAT_2c61a5cc;
    for (; pbVar15 != (byte *)0x0; pbVar15 = (byte *)FUN_2c62ca28(iVar27,pbVar15)) {
      while( true ) {
        iVar20 = *(int *)pbVar15;
        pbStack_a8 = pbVar15;
        if (pbVar15[4] != 1) break;
        sVar10 = FUN_2c62e4a8(*(undefined4 *)(pbVar15 + 0xc),*(undefined4 *)(iVar20 + 0x1c),
                              *(undefined4 *)(iVar20 + 0x20),(int)*(short *)(iVar20 + 0x28),
                              (uint)*(ushort *)(iVar20 + 0x26) + (int)*(short *)(iVar20 + 0x28));
        sVar4 = *(short *)(iVar20 + 0x24);
        sVar11 = *(short *)(pbVar15 + 0x12);
        iVar20 = FUN_2c62e208((int)sVar10);
        iVar21 = (int)(short)(sVar11 + sVar5 + sVar4);
        iVar20 = iVar20 * iVar21;
        sStack_166 = ((short)((int)((ulonglong)((longlong)iVar12 * (longlong)iVar20) >> 0x20) +
                              iVar20 >> 0xe) - (short)(iVar20 >> 0x1f)) + sStack_196;
        iVar20 = FUN_2c62e208((int)(short)(sVar10 + 0x5a));
        iVar21 = iVar21 * iVar20;
        sStack_168 = ((short)((int)((ulonglong)((longlong)iVar12 * (longlong)iVar21) >> 0x20) +
                              iVar21 >> 0xe) - (short)(iVar21 >> 0x1f)) + sStack_198;
        uStack_150 = *(undefined4 *)(pbVar15 + 0x14);
        uStack_14c = *(undefined2 *)(pbVar15 + 0x10);
        bStack_146 = bVar6;
        if (pbVar15[5] < 0xfe) {
          bStack_146 = (byte)((uint)bVar6 * (uint)pbVar15[5] >> 8);
        }
        pbStack_d4 = (byte *)&uStack_150;
        psStack_c4 = &sStack_168;
        uStack_b4 = 1;
        FUN_2c602340(iVar13,0x1a,&sStack_ec);
        FUN_2c6120f4(uVar14,&uStack_150,psStack_1e8,&sStack_168);
        FUN_2c602340(iVar13,0x1b,&sStack_ec);
        pbVar15 = (byte *)FUN_2c62ca28(iVar27,pbVar15);
        if (pbVar15 == (byte *)0x0) goto LAB_2c61a518;
      }
      if ((pbVar15[4] == 0) && (*(int *)(pbVar15 + 0x10) != 0)) {
        iVar20 = FUN_2c62e4a8(*(undefined4 *)(pbVar15 + 0xc),*(undefined4 *)(iVar20 + 0x1c),
                              *(undefined4 *)(iVar20 + 0x20),(int)*(short *)(iVar20 + 0x28),
                              (uint)*(ushort *)(iVar20 + 0x26) + (int)*(short *)(iVar20 + 0x28));
        FUN_2c612838(*(undefined4 *)(pbVar15 + 0x10),&uStack_180);
        sStack_168 = sStack_198 - *(short *)(pbVar15 + 0x14);
        sStack_166 = sStack_196 - *(short *)(pbVar15 + 0x16);
        sStack_164 = sStack_168 + ((ushort)((uint)(uStack_180 << 0xb) >> 0x15) - 1);
        sStack_162 = sStack_166 + ((uStack_180._2_2_ >> 5) - 1);
        bStack_f7 = bVar6;
        if (pbVar15[5] < 0xfe) {
          bStack_f7 = (byte)((uint)bVar6 * (uint)pbVar15[5] >> 8);
        }
        uStack_124 = *(undefined4 *)(pbVar15 + 0x14);
        iVar20 = iVar20 * 10;
        if (0xe10 < iVar20) {
          iVar20 = iVar20 + -0xe10;
        }
        uStack_128 = CONCAT22(uStack_128._2_2_,(short)iVar20);
        puStack_d0 = &uStack_128;
        FUN_2c602340(iVar13,0x1a,&sStack_ec);
        FUN_2c614a3c(uVar14,&uStack_128,&sStack_168,*(undefined4 *)(pbVar15 + 0x10));
        FUN_2c602340(iVar13,0x1b,&sStack_ec);
      }
    }
LAB_2c61a518:
    uVar25 = (uint)(short)((sStack_1c8 + 1) - sStack_1cc);
    if ((int)uVar25 < 0) {
      uVar25 = uVar25 + 1;
    }
    sVar4 = (short)((uVar25 & 0x1ffff) >> 1);
    sVar5 = sStack_1cc + sVar4;
    sVar4 = sVar4 + sStack_1ca;
    FUN_2c61314c(auStack_a4);
    FUN_2c6004cc(iVar13,0x20000,auStack_a4);
    sVar11 = FUN_2c6033b4(iVar13,0x20000,1);
    iVar12 = (int)sVar11;
    sVar11 = FUN_2c6033b4(iVar13,0x20000,4);
    uVar25 = (uint)sVar11;
    if (iVar12 < 0) {
      iVar12 = iVar12 + 1;
    }
    if ((int)uVar25 < 0) {
      uVar25 = uVar25 + 1;
    }
    sVar11 = (short)((uint)(iVar12 << 0xf) >> 0x10);
    sStack_ec = sVar5 - sVar11;
    sStack_ea = sVar4 - (short)((uVar25 << 0xf) >> 0x10);
    uStack_e8 = CONCAT22((short)((uVar25 & 0x1ffff) >> 1) + sVar4,sVar11 + sVar5);
    FUN_2c61319c(uVar14,auStack_a4,&sStack_ec);
  }
  if (*DAT_2c619df0 == iStack_3c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


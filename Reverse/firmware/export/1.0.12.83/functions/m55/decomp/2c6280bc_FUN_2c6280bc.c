/* FUN_2c6280bc @ 0x2c6280bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c6280bc(int param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4)

{
  bool bVar1;
  undefined2 *puVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  char cVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  ushort uVar13;
  ushort uVar14;
  int iVar15;
  int iVar16;
  short *psVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  short *psVar22;
  undefined4 uVar23;
  uint uVar24;
  int *piVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  short *psVar29;
  uint uStack_74;
  int iStack_70;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined1 auStack_54 [8];
  short sStack_4c;
  short sStack_4a;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  int iStack_2c;
  
  puVar2 = _LAB_2c628398;
  iStack_2c = *_LAB_2c628394;
  iVar15 = FUN_2c6033b4(param_1,param_2,*param_4,0);
  iVar16 = FUN_2c6033b4(param_1,0,*puVar2);
  uStack_74 = (uint)(iVar16 == 0 || iVar15 == 0);
  if (iVar16 == 0 || iVar15 == 0) goto LAB_2c6280f2;
  iVar15 = FUN_2c6041dc(param_1,uStack_74);
  if (iVar15 == 0) {
    FUN_2c62c3b0(&iStack_48,0x1c);
  }
  else {
    psVar17 = (short *)FUN_2c6033b4(param_1,uStack_74,*puVar2);
    sVar8 = *psVar17;
    psVar22 = psVar17;
    uStack_34 = uStack_74;
    uVar18 = uStack_74;
    while (sVar8 != 0x1fff) {
      psVar22 = psVar22 + 1;
      uStack_34 = uStack_34 + 1;
      uVar18 = uStack_34 * 2;
      sVar8 = *psVar22;
    }
    iStack_44 = FUN_2c62bf1c(uVar18);
    iStack_3c = FUN_2c62bf1c(uStack_34 << 1);
    uVar23 = _LAB_2c6283b0;
    if (uStack_34 == 0) {
LAB_2c628a2e:
      uVar19 = 0;
      uVar27 = uVar19;
    }
    else {
      uVar27 = 0;
      psVar29 = psVar17 + -1;
      uVar18 = uStack_34;
      psVar22 = psVar29;
      do {
        while( true ) {
          psVar22 = psVar22 + 1;
          iVar15 = uVar27 * 2;
          if (*psVar22 != 0x1f9a) break;
          iStack_70 = _LAB_2c62839c;
          for (uVar18 = 0; uVar19 = FUN_2c6041fc(param_1), uVar18 < uVar19; uVar18 = uVar18 + 1) {
            uVar20 = FUN_2c6041dc(param_1,uVar18);
            iVar16 = FUN_2c606ba4(uVar20,uVar23);
            if ((((iVar16 == 0) && (cVar3 = FUN_2c6033b4(uVar20,0,*_LAB_2c6283a0), cVar3 == '\x01'))
                && (bVar4 = FUN_2c6033b4(uVar20,0,*_LAB_2c6283a4), bVar4 == uVar27)) &&
               (iVar16 = FUN_2c6073f8(uVar20), iStack_70 <= iVar16)) {
              iStack_70 = FUN_2c6073f8(uVar20);
            }
          }
          uVar27 = uVar27 + 1;
          if (iStack_70 < 0) {
            iStack_70 = 0;
          }
          *(short *)(iStack_3c + iVar15) = (short)iStack_70;
          uVar18 = uStack_34;
          if (uStack_34 <= uVar27) goto LAB_2c6281fa;
        }
        uVar27 = uVar27 + 1;
      } while (uVar27 < uVar18);
LAB_2c6281fa:
      iVar15 = _LAB_2c6283b4;
      if (uVar18 == 0) goto LAB_2c628a2e;
      uVar21 = 0;
      uVar19 = 0;
      uVar24 = 0;
      do {
        while( true ) {
          psVar29 = psVar29 + 1;
          sVar8 = *psVar29;
          iVar16 = (int)sVar8;
          iVar26 = uVar24 * 2;
          if (iVar16 < 0x1f9b) break;
          uVar27 = uVar21 & 0xffff;
          uVar19 = uVar19 + iVar16 + iVar15;
LAB_2c628218:
          uVar24 = uVar24 + 1;
          if (uVar18 <= uVar24) goto LAB_2c62823e;
        }
        if (iVar16 == 0x1f9a) {
          uVar14 = (short)uVar21 + *(short *)(iStack_3c + iVar26);
          uVar27 = (uint)uVar14;
          uVar21 = (uint)(short)uVar14;
          goto LAB_2c628218;
        }
        uVar24 = uVar24 + 1;
        uVar14 = (short)uVar21 + sVar8;
        *(short *)(iStack_3c + iVar26) = sVar8;
        uVar21 = (uint)(short)uVar14;
        uVar18 = uStack_34;
        uVar27 = (uint)uVar14;
      } while (uVar24 < uStack_34);
    }
LAB_2c62823e:
    sVar8 = FUN_2c6033b4(param_1,0,0x14);
    sVar9 = FUN_2c607440(param_1);
    iVar15 = _LAB_2c6283b4;
    uVar18 = (uint)(short)((sVar9 - (short)uVar27) - ((short)uStack_34 + -1) * sVar8);
    uVar18 = uVar18 & ~((int)uVar18 >> 0x1f);
    if (uStack_34 != 0) {
      uVar21 = 0;
      uVar27 = 0xffffffff;
      psVar17 = psVar17 + -1;
      uVar24 = 0;
      do {
        psVar17 = psVar17 + 1;
        if (0x1f9a < *psVar17) {
          uVar21 = *psVar17 + iVar15 & 0xffff;
          *(short *)(iStack_3c + uVar24 * 2) = (short)((uVar21 * uVar18) / uVar19);
          uVar27 = uVar24;
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < uStack_34);
      if (-1 < (int)uVar27) {
        *(short *)(iStack_3c + uVar27 * 2) =
             (short)uVar18 - (short)((uVar18 * (uVar19 - uVar21)) / uVar19);
      }
    }
    psVar22 = (short *)FUN_2c6033b4(param_1,0,*_LAB_2c628390);
    sVar8 = FUN_2c607404(param_1);
    if (*psVar22 == 0x1fff) {
      uVar18 = 0;
      uStack_38 = uVar18;
    }
    else {
      uStack_38 = 0;
      psVar17 = psVar22;
      do {
        psVar17 = psVar17 + 1;
        uStack_38 = uStack_38 + 1;
        uVar18 = uStack_38 * 2;
      } while (*psVar17 != 0x1fff);
    }
    iStack_48 = FUN_2c62bf1c(uVar18);
    iStack_40 = FUN_2c62bf1c(uStack_38 << 1);
    uVar23 = _LAB_2c6283b0;
    if (uStack_38 == 0) {
LAB_2c628a3a:
      uVar19 = 0;
      uVar27 = uVar19;
    }
    else {
      uVar27 = 0;
      psVar29 = psVar22 + -1;
      uVar18 = uStack_38;
      psVar17 = psVar29;
      do {
        while( true ) {
          psVar17 = psVar17 + 1;
          iVar15 = uVar27 * 2;
          if (*psVar17 != 0x1f9a) break;
          iStack_70 = _LAB_2c62839c;
          for (uVar18 = 0; uVar19 = FUN_2c6041fc(param_1), uVar18 < uVar19; uVar18 = uVar18 + 1) {
            uVar20 = FUN_2c6041dc(param_1,uVar18);
            iVar16 = FUN_2c606ba4(uVar20,uVar23);
            if (((iVar16 == 0) && (cVar3 = FUN_2c6033b4(uVar20,0,*_LAB_2c6283a8), cVar3 == '\x01'))
               && ((bVar4 = FUN_2c6033b4(uVar20,0,*_LAB_2c6283ac), bVar4 == uVar27 &&
                   (iVar16 = FUN_2c6073ec(uVar20), iStack_70 <= iVar16)))) {
              iStack_70 = FUN_2c6073ec(uVar20);
            }
          }
          uVar27 = uVar27 + 1;
          if (iStack_70 < 0) {
            iStack_70 = 0;
          }
          *(short *)(iStack_40 + iVar15) = (short)iStack_70;
          uVar18 = uStack_38;
          if (uStack_38 <= uVar27) goto LAB_2c6283d8;
        }
        uVar27 = uVar27 + 1;
      } while (uVar27 < uVar18);
LAB_2c6283d8:
      iVar15 = _LAB_2c6283f0;
      if (uVar18 == 0) goto LAB_2c628a3a;
      uVar21 = 0;
      uVar19 = 0;
      uVar24 = 0;
      do {
        while( true ) {
          psVar29 = psVar29 + 1;
          sVar9 = *psVar29;
          iVar16 = (int)sVar9;
          iVar26 = uVar24 * 2;
          if (iVar16 < 0x1f9b) break;
          uVar27 = uVar21 & 0xffff;
          uVar19 = uVar19 + iVar16 + iVar15;
LAB_2c6283fa:
          uVar24 = uVar24 + 1;
          if (uVar18 <= uVar24) goto LAB_2c628420;
        }
        if (iVar16 == 0x1f9a) {
          uVar14 = (short)uVar21 + *(short *)(iStack_40 + iVar26);
          uVar27 = (uint)uVar14;
          uVar21 = (uint)(short)uVar14;
          goto LAB_2c6283fa;
        }
        uVar24 = uVar24 + 1;
        uVar14 = (short)uVar21 + sVar9;
        *(short *)(iStack_40 + iVar26) = sVar9;
        uVar21 = (uint)(short)uVar14;
        uVar18 = uStack_38;
        uVar27 = (uint)uVar14;
      } while (uVar24 < uStack_38);
    }
LAB_2c628420:
    sVar9 = FUN_2c6033b4(param_1,0,0x15);
    iVar15 = _LAB_2c62881c;
    uVar18 = (uint)(short)((sVar8 - ((short)uStack_38 + -1) * sVar9) - (short)uVar27);
    uVar18 = uVar18 & ~((int)uVar18 >> 0x1f);
    if (uStack_38 != 0) {
      uVar24 = 0;
      uVar27 = 0xffffffff;
      psVar22 = psVar22 + -1;
      uVar21 = 0;
      do {
        psVar22 = psVar22 + 1;
        if (0x1f9a < *psVar22) {
          uVar24 = *psVar22 + iVar15 & 0xffff;
          *(short *)(iStack_40 + uVar21 * 2) = (short)((uVar24 * uVar18) / uVar19);
          uVar27 = uVar21;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < uStack_38);
      if (-1 < (int)uVar27) {
        *(short *)(iStack_40 + uVar27 * 2) =
             (short)uVar18 - (short)((uVar18 * (uVar19 - uVar24)) / uVar19);
      }
    }
    sVar8 = FUN_2c6033b4(param_1,0,0x15);
    sVar9 = FUN_2c6033b4(param_1,0,0x14);
    cVar3 = FUN_2c6033b4(param_1,0,0x16);
    sVar10 = FUN_2c6033b4(param_1,0,1);
    sVar11 = FUN_2c6033b4(param_1,0,4);
    if (sVar10 == 0x27d1) {
      uVar18 = ((*(byte *)(param_1 + 0x23) ^ 4) & 7) >> 2;
    }
    else {
      uVar18 = 0;
    }
    uVar23 = FUN_2c607404(param_1);
    uVar5 = FUN_2c6033b4(param_1,0,*_LAB_2c6287f8);
    uStack_30 = FUN_2c627edc(uVar23,uVar18,uVar5,(int)sVar8,uStack_38,iStack_40,iStack_48,
                             cVar3 == '\x01');
    if (sVar11 == 0x27d1) {
      uStack_74 = ((*(byte *)(param_1 + 0x23) ^ 2) & 3) >> 1;
    }
    uVar23 = FUN_2c607440(param_1);
    uVar5 = FUN_2c6033b4(param_1,0,*_LAB_2c6287fc);
    uStack_2e = FUN_2c627edc(uVar23,uStack_74,uVar5,(int)sVar9,uStack_34,iStack_3c,iStack_44,0);
  }
  FUN_2c62c3b0(auStack_54,0xc);
  sVar10 = FUN_2c6033b4(param_1,0,0x32);
  sVar11 = FUN_2c6033b4(param_1,0,0x12);
  sVar12 = FUN_2c6033b4(param_1,0,0x10);
  sVar8 = *(short *)(param_1 + 0x14);
  sStack_4c = FUN_2c604a2c(param_1);
  sVar9 = *(short *)(param_1 + 0x16);
  sStack_4c = (sVar11 + sVar10 + sVar8) - sStack_4c;
  sStack_4a = FUN_2c604a38(param_1);
  piVar25 = *(int **)(param_1 + 8);
  sStack_4a = (sVar10 + sVar12 + sVar9) - sStack_4a;
  if (piVar25[1] != 0) {
    uVar18 = 0;
    do {
      iVar16 = *(int *)(*piVar25 + uVar18 * 4);
      iVar15 = FUN_2c606ba4(iVar16,_LAB_2c628800);
      if (iVar15 == 0) {
        bVar4 = FUN_2c6033b4(iVar16,0,*_LAB_2c628804);
        uVar19 = (uint)bVar4;
        uVar27 = FUN_2c6033b4(iVar16,0,*_LAB_2c628808);
        if (((uVar27 & 0xff) != 0) && (bVar1 = uVar19 == 0, uVar19 != 0)) {
          bVar4 = FUN_2c6033b4(iVar16,bVar1,*_LAB_2c62880c);
          uVar21 = (uint)bVar4;
          bVar4 = FUN_2c6033b4(iVar16,bVar1,*_LAB_2c628810);
          uVar24 = (uint)bVar4;
          cVar3 = FUN_2c6033b4(iVar16,bVar1,*_LAB_2c628814);
          cVar6 = FUN_2c6033b4(iVar16,bVar1,*_LAB_2c628818);
          iVar15 = uVar19 + uVar21 + 0x7fffffff;
          iVar26 = (uVar27 & 0xff) + uVar24 + 0x7fffffff;
          sVar8 = (*(short *)(iStack_48 + iVar15 * 2) + *(short *)(iStack_40 + iVar15 * 2)) -
                  *(short *)(iStack_48 + uVar21 * 2);
          iVar15 = (int)sVar8;
          sVar9 = (*(short *)(iStack_44 + iVar26 * 2) + *(short *)(iStack_3c + iVar26 * 2)) -
                  *(short *)(iStack_44 + uVar24 * 2);
          cVar7 = FUN_2c6033b4(iVar16,bVar1,0x16);
          if (cVar7 == '\x01') {
            if (cVar3 == '\0') {
              iVar28 = (int)(short)((*(short *)(iVar16 + 0x1a) + 1) - *(short *)(iVar16 + 0x16));
              iVar26 = (int)(short)((*(short *)(iVar16 + 0x18) + 1) - *(short *)(iVar16 + 0x14));
              goto LAB_2c6289a8;
            }
            if (cVar3 != '\x02') goto LAB_2c6286a8;
            iVar26 = (int)(short)((*(short *)(iVar16 + 0x18) + 1) - *(short *)(iVar16 + 0x14));
            iVar28 = (int)(short)((*(short *)(iVar16 + 0x1a) + 1) - *(short *)(iVar16 + 0x16));
LAB_2c6286d6:
            sVar11 = *(short *)(iStack_48 + uVar21 * 2);
            *(byte *)(iVar16 + 0x23) = *(byte *)(iVar16 + 0x23) & 0xfb;
            iVar15 = iVar26;
          }
          else {
LAB_2c6286a8:
            iVar26 = (int)(short)((*(short *)(iVar16 + 0x18) + 1) - *(short *)(iVar16 + 0x14));
            iVar28 = (int)(short)((*(short *)(iVar16 + 0x1a) + 1) - *(short *)(iVar16 + 0x16));
            if (cVar3 == '\x02') {
LAB_2c6289a8:
              iVar15 = iVar26;
              sVar10 = *(short *)(iStack_48 + uVar21 * 2);
              sVar11 = FUN_2c6073ec(iVar16);
              sVar11 = (sVar8 + sVar10) - sVar11;
              *(byte *)(iVar16 + 0x23) = *(byte *)(iVar16 + 0x23) & 0xfb;
            }
            else if (cVar3 == '\x03') {
              sVar11 = *(short *)(iStack_48 + uVar21 * 2);
              *(byte *)(iVar16 + 0x23) = *(byte *)(iVar16 + 0x23) | 4;
            }
            else {
              if (cVar3 != '\x01') goto LAB_2c6286d6;
              iVar15 = iVar15 - iVar26;
              if (iVar15 < 0) {
                iVar15 = iVar15 + 1;
              }
              sVar11 = *(short *)(iStack_48 + uVar21 * 2) + (short)(iVar15 >> 1);
              *(byte *)(iVar16 + 0x23) = *(byte *)(iVar16 + 0x23) & 0xfb;
              iVar15 = iVar26;
            }
          }
          if (cVar6 == '\x02') {
            sVar8 = *(short *)(iStack_44 + uVar24 * 2);
            sVar10 = FUN_2c6073f8(iVar16);
            sVar10 = (sVar9 + sVar8) - sVar10;
            *(byte *)(iVar16 + 0x23) = *(byte *)(iVar16 + 0x23) & 0xfd;
          }
          else if (cVar6 == '\x03') {
            sVar10 = *(short *)(iStack_44 + uVar24 * 2);
            *(byte *)(iVar16 + 0x23) = *(byte *)(iVar16 + 0x23) | 2;
            iVar28 = (int)sVar9;
          }
          else if (cVar6 == '\x01') {
            iVar26 = sVar9 - iVar28;
            if (iVar26 < 0) {
              iVar26 = iVar26 + 1;
            }
            sVar10 = *(short *)(iStack_44 + uVar24 * 2) + (short)(iVar26 >> 1);
            *(byte *)(iVar16 + 0x23) = *(byte *)(iVar16 + 0x23) & 0xfd;
          }
          else {
            sVar10 = *(short *)(iStack_44 + uVar24 * 2);
            *(byte *)(iVar16 + 0x23) = *(byte *)(iVar16 + 0x23) & 0xfd;
          }
          iVar26 = FUN_2c6073ec(iVar16);
          if ((iVar26 != iVar15) || (iVar26 = FUN_2c6073f8(iVar16), iVar26 != iVar28)) {
            uStack_5c = *(undefined2 *)(iVar16 + 0x14);
            uStack_5a = *(undefined2 *)(iVar16 + 0x16);
            uStack_58 = *(undefined2 *)(iVar16 + 0x18);
            uStack_56 = *(undefined2 *)(iVar16 + 0x1a);
            FUN_2c607df0(iVar16);
            func_0x2c62a634(iVar16 + 0x14,iVar15);
            FUN_2c62a640(iVar16 + 0x14,iVar28);
            FUN_2c607df0(iVar16);
            FUN_2c602340(iVar16,0x29,&uStack_5c);
            uVar23 = FUN_2c6041d4(iVar16);
            FUN_2c602340(uVar23,0x22,iVar16);
          }
          uVar13 = FUN_2c6033b4(iVar16,0,0x6a);
          uVar14 = FUN_2c6033b4(iVar16,0,0x6b);
          iVar15 = FUN_2c6073ec(iVar16);
          iVar26 = FUN_2c6073f8(iVar16);
          if (((uVar13 & 0x6000) == 0x2000) &&
             (uVar27 = (int)(short)uVar13 & 0xffff9fff, (int)uVar27 < 0x7d1)) {
            if (1000 < (int)uVar27) {
              uVar27 = 1000 - uVar27;
            }
            uVar13 = (short)(int)((longlong)_LAB_2c628a44 * (longlong)(int)(uVar27 * iVar15) >> 0x25
                                 ) - (short)((int)(uVar27 * iVar15) >> 0x1f);
          }
          if (((uVar14 & 0x6000) == 0x2000) &&
             (uVar27 = (int)(short)uVar14 & 0xffff9fff, (int)uVar27 < 0x7d1)) {
            if (1000 < (int)uVar27) {
              uVar27 = 1000 - uVar27;
            }
            uVar14 = (short)(int)((longlong)_LAB_2c628a44 * (longlong)(int)(uVar27 * iVar26) >> 0x25
                                 ) - (short)((int)(uVar27 * iVar26) >> 0x1f);
          }
          sVar8 = sVar11 + (sStack_4c - *(short *)(iVar16 + 0x14)) + uVar13;
          sVar9 = sVar10 + (sStack_4a - *(short *)(iVar16 + 0x16)) + uVar14;
          if (sVar8 != 0 || sVar9 != 0) {
            FUN_2c607df0(iVar16);
            *(short *)(iVar16 + 0x14) = *(short *)(iVar16 + 0x14) + sVar8;
            *(short *)(iVar16 + 0x18) = sVar8 + *(short *)(iVar16 + 0x18);
            *(short *)(iVar16 + 0x16) = *(short *)(iVar16 + 0x16) + sVar9;
            *(short *)(iVar16 + 0x1a) = sVar9 + *(short *)(iVar16 + 0x1a);
            FUN_2c607df0(iVar16);
            FUN_2c6075e8(iVar16,(int)sVar8,(int)sVar9,0);
          }
        }
      }
      piVar25 = *(int **)(param_1 + 8);
      uVar18 = uVar18 + 1;
    } while (uVar18 < (uint)piVar25[1]);
  }
  FUN_2c62c040(iStack_48);
  FUN_2c62c040(iStack_44);
  FUN_2c62c040(iStack_40);
  FUN_2c62c040(iStack_3c);
  sVar8 = FUN_2c6033b4(param_1,0,1);
  sVar9 = FUN_2c6033b4(param_1,0,4);
  if ((sVar8 == 0x27d1) || (sVar9 == 0x27d1)) {
    FUN_2c608730(param_1);
  }
  FUN_2c602340(param_1,0x2b,0);
LAB_2c6280f2:
  if (*_LAB_2c628394 == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


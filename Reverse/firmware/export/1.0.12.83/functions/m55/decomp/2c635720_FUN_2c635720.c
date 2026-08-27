/* FUN_2c635720 @ 0x2c635720 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c635720(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined4 *puVar4;
  byte bVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  ushort *puVar18;
  uint uVar19;
  ushort uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ushort uVar25;
  ushort uVar26;
  int iVar27;
  short sStack_190;
  short sStack_18e;
  short sStack_18c;
  short sStack_18a;
  short sStack_188;
  short sStack_184;
  short sStack_182;
  short sStack_180;
  short sStack_17e;
  undefined4 auStack_17c [6];
  short sStack_164;
  short sStack_162;
  byte bStack_159;
  undefined1 auStack_154 [40];
  undefined1 auStack_12c [4];
  undefined4 uStack_128;
  undefined4 uStack_124;
  short *psStack_120;
  undefined1 *puStack_11c;
  undefined4 *puStack_118;
  undefined4 uStack_f8;
  uint uStack_f4;
  undefined1 auStack_e4 [59];
  byte bStack_a9;
  undefined1 auStack_8c [12];
  int iStack_80;
  int iStack_74;
  uint uStack_70;
  int iStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  int iStack_54;
  uint uStack_50;
  int iStack_4c;
  uint uStack_48;
  int iStack_44;
  uint uStack_40;
  undefined4 *puStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  int aiStack_24 [2];
  
  aiStack_24[0] = *_LAB_2c6359d4;
  iVar11 = FUN_2c602110(_LAB_2c6359d8,param_2,param_3,0);
  if (iVar11 == 1) {
    iVar11 = FUN_2c602408(param_2);
    iVar12 = FUN_2c602400(param_2);
    if (iVar11 == 0x13) {
      if (*(short *)(iVar12 + 0x32) != 0) {
        pcVar14 = (char *)**(undefined4 **)(iVar12 + 0x24);
        if (pcVar14 != (char *)0x0) {
          uVar19 = 0;
          do {
            if (((*pcVar14 == '\n') && (pcVar14[1] == '\0')) || (*pcVar14 == '\0')) break;
            if ((int)((uint)*(ushort *)(*(int *)(iVar12 + 0x2c) + uVar19 * 2) << 0x16) < 0) {
              iVar11 = FUN_2c607440(iVar12);
              if (*_LAB_2c6359d4 == aiStack_24[0]) {
                sVar9 = (short)(iVar11 / (int)(uint)*(ushort *)(iVar12 + 0x32));
                if (*(char *)(param_2 + 8) == '\x13') {
                  sVar6 = **(short **)(param_2 + 0x10);
                  if (sVar9 < sVar6) {
                    sVar9 = sVar6;
                  }
                  **(short **)(param_2 + 0x10) = sVar9;
                }
                return;
              }
              goto LAB_2c635c18;
            }
            uVar19 = uVar19 + 1 & 0xffff;
            pcVar14 = (char *)(*(undefined4 **)(iVar12 + 0x24))[uVar19];
          } while (pcVar14 != (char *)0x0);
        }
      }
    }
    else if ((iVar11 == 0x2a) || (iVar11 == 0x29)) {
      puVar17 = *(undefined4 **)(iVar12 + 0x24);
      if (puVar17 != (undefined4 *)0x0) {
        if (*_LAB_2c6359d4 == aiStack_24[0]) {
          *(undefined2 *)(iVar12 + 0x32) = 1;
          pcVar14 = (char *)*puVar17;
          if (pcVar14 == (char *)0x0) {
            uVar19 = 0;
          }
          else {
            uVar15 = 0;
            uVar19 = 0;
            do {
              while( true ) {
                if (*pcVar14 == '\0') goto LAB_2c63541c;
                if ((*pcVar14 == '\n') && (pcVar14[1] == '\0')) break;
                uVar19 = uVar19 + 1 & 0xffff;
                uVar15 = uVar15 + 1 & 0xffff;
                pcVar14 = (char *)puVar17[uVar15];
                if (pcVar14 == (char *)0x0) goto LAB_2c63541c;
              }
              uVar15 = uVar15 + 1 & 0xffff;
              *(short *)(iVar12 + 0x32) = *(short *)(iVar12 + 0x32) + 1;
              pcVar14 = (char *)puVar17[uVar15];
            } while (pcVar14 != (char *)0x0);
          }
LAB_2c63541c:
          if (*(ushort *)(iVar12 + 0x30) != uVar19) {
            if (*(int *)(iVar12 + 0x28) != 0) {
              FUN_2c62bea8();
              *(undefined4 *)(iVar12 + 0x28) = 0;
            }
            if (*(int *)(iVar12 + 0x2c) != 0) {
              FUN_2c62bea8();
              *(undefined4 *)(iVar12 + 0x2c) = 0;
            }
            uVar10 = lv_mem_alloc(uVar19 << 3);
            *(undefined4 *)(iVar12 + 0x28) = uVar10;
            iVar11 = lv_mem_alloc(uVar19 << 1);
            *(int *)(iVar12 + 0x2c) = iVar11;
            if ((*(int *)(iVar12 + 0x28) == 0) || (uVar15 = uVar19 << 1, iVar11 == 0)) {
              uVar19 = 0;
              uVar15 = uVar19;
            }
            FUN_2c62c3b0(iVar11,uVar15);
            *(short *)(iVar12 + 0x30) = (short)uVar19;
          }
          *(undefined4 **)(iVar12 + 0x24) = puVar17;
          bVar5 = FUN_2c6033b4(iVar12,0,0x16);
          uStack_64 = (uint)bVar5;
          uStack_30 = FUN_2c6033b4(iVar12,0,0x12);
          uVar15 = FUN_2c6033b4(iVar12,0,0x10);
          uVar20 = FUN_2c6033b4(iVar12,0,0x14);
          uVar23 = FUN_2c6033b4(iVar12,0,0x15);
          uStack_38 = uVar23;
          uStack_34 = FUN_2c607404(iVar12);
          sVar9 = FUN_2c607440(iVar12);
          uVar19 = (uint)*(ushort *)(iVar12 + 0x32);
          iStack_4c = (int)(short)(sVar9 - (*(ushort *)(iVar12 + 0x32) - 1) * uVar20);
          if (uVar19 != 0) {
            uStack_48 = (uint)uVar20;
            pcVar14 = (char *)*puVar17;
            uStack_60 = uVar15 & 0xffff;
            iStack_54 = 0;
            uStack_5c = 1;
            uVar15 = 0;
            uVar22 = uStack_40;
            puVar4 = puStack_3c;
            do {
              puStack_3c = puVar17;
              if (pcVar14 == (char *)0x0) {
LAB_2c635548:
                puVar17 = puStack_3c + 1;
                uStack_58 = iStack_4c + uVar15;
                uStack_40 = uVar22;
                puStack_3c = puVar4;
              }
              else {
                uVar24 = 0;
                uStack_40 = 0;
                do {
                  iVar11 = uStack_40 + iStack_54;
                  if (((*pcVar14 == '\n') && (pcVar14[1] == '\0')) || (*pcVar14 == '\0')) break;
                  uStack_40 = uStack_40 + 1 & 0xffff;
                  uVar20 = *(ushort *)(*(int *)(iVar12 + 0x2c) + iVar11 * 2);
                  pcVar14 = (char *)puStack_3c[uStack_40];
                  if ((uVar20 & 7) == 0) {
                    uVar20 = (short)uVar24 + 1;
                  }
                  else {
                    uVar20 = (short)uVar24 + (uVar20 & 7);
                  }
                  uVar24 = (uint)uVar20;
                } while (pcVar14 != (char *)0x0);
                if (uStack_40 == 0) goto LAB_2c635548;
                uStack_58 = iStack_4c + uVar15;
                iVar11 = (int)(short)((short)(uVar15 / uVar19) + (short)uStack_60);
                uStack_50 = uStack_34 & 0xffff;
                uStack_70 = (uint)(short)((short)uStack_34 -
                                         ((short)uStack_40 + -1) * (short)uStack_38);
                uStack_70 = uStack_70 & ~((int)uStack_70 >> 0x1f);
                iStack_74 = (int)(short)((short)uStack_60 + -1 + (short)(uStack_58 / uVar19));
                uVar15 = uStack_40;
                puVar17 = puStack_3c;
                iStack_44 = iVar11;
                if (uStack_40 != 0) {
                  uVar15 = 0;
                  uStack_68 = uVar23 & 0xffff;
                  iVar13 = iStack_54 << 1;
                  iStack_54 = iStack_54 + uStack_40;
                  iVar27 = 0;
                  sVar9 = (short)uStack_30;
                  uVar19 = 0;
                  iStack_6c = iStack_54 * 2;
                  do {
                    uVar20 = *(ushort *)(*(int *)(iVar12 + 0x2c) + iVar13);
                    if ((uVar20 & 7) == 0) {
                      iVar27 = iVar27 + 1;
                    }
                    else {
                      iVar27 = iVar27 + (uVar20 & 7);
                    }
                    uVar22 = uVar19 / uVar24;
                    uVar19 = uStack_70 * iVar27;
                    sVar7 = (short)uVar22 + (short)uVar15;
                    sVar6 = (short)uVar15 + -1 + (short)(uVar19 / uVar24);
                    sVar8 = sVar7;
                    if (uStack_64 == 1) {
                      sVar8 = (short)uStack_50 - sVar6;
                      sVar6 = (short)uStack_50 - sVar7;
                    }
                    iStack_80 = iStack_74;
                    iVar21 = iVar13 * 4;
                    iVar13 = iVar13 + 2;
                    FUN_2c62a624(*(int *)(iVar12 + 0x28) + iVar21,(int)(short)(sVar8 + sVar9),iVar11
                                 ,(int)(short)(sVar6 + sVar9));
                    uVar15 = uVar15 + uStack_68 & 0xffff;
                  } while (iVar13 != iStack_6c);
                  uVar19 = (uint)*(ushort *)(iVar12 + 0x32);
                  uVar15 = uStack_40;
                  puVar17 = puStack_3c;
                  uVar22 = uStack_40;
                  puVar4 = puStack_3c;
                }
                puStack_3c = puVar4;
                uStack_40 = uVar22;
                puVar17 = puVar17 + uVar15 + 1;
              }
              uStack_60 = uStack_60 + uStack_48 & 0xffff;
              if (uVar19 <= uStack_5c) break;
              pcVar14 = (char *)*puVar17;
              uVar15 = uStack_58;
              uStack_5c = uStack_5c + 1;
              uVar22 = uStack_40;
              puVar4 = puStack_3c;
            } while( true );
          }
          FUN_2c600bac(iVar12);
          FUN_2c607df0(iVar12);
          return;
        }
        goto LAB_2c635c18;
      }
    }
    else {
      if (iVar11 == 1) {
        uVar10 = FUN_2c602410(param_2);
        if ((*(ushort *)(iVar12 + 0x34) != 0xffff) &&
           (*(ushort *)(iVar12 + 0x34) < *(ushort *)(iVar12 + 0x30))) {
          FUN_2c6352cc(iVar12);
        }
        FUN_2c5ff4d8();
        uVar19 = FUN_2c5ff4e4();
        if ((uVar19 & 0xfd) == 1) {
          FUN_2c5ff5cc(uVar10,&stack0xffffffd4);
          uVar19 = FUN_2c634ccc(iVar12,&stack0xffffffd4);
          if (uVar19 == 0xffff) goto LAB_2c63590e;
          iVar11 = *(int *)(iVar12 + 0x2c);
          uVar15 = (uint)*(ushort *)(iVar11 + uVar19 * 2);
          if (((int)(uVar15 << 0x1a) < 0) || ((int)(uVar15 << 0x1c) < 0)) goto LAB_2c63590e;
          *(short *)(iVar12 + 0x34) = (short)uVar19;
          if (uVar19 < *(ushort *)(iVar12 + 0x30)) {
            FUN_2c6352cc(iVar12,uVar19);
            goto LAB_2c63590e;
          }
        }
        else {
LAB_2c63590e:
          uVar19 = (uint)*(ushort *)(iVar12 + 0x34);
          if (uVar19 == 0xffff) goto LAB_2c63573c;
          iVar11 = *(int *)(iVar12 + 0x2c);
        }
        uVar19 = (uint)*(ushort *)(iVar11 + uVar19 * 2);
        if ((int)(uVar19 << 0x17) < 0) goto LAB_2c63573c;
        iVar11 = uVar19 << 0x16;
      }
      else {
        if (iVar11 == 2) {
          uVar10 = FUN_2c602410(param_2);
          uVar16 = FUN_2c5ff4d8();
          iVar11 = FUN_2c5ff4e4();
          if ((iVar11 != 4) && (iVar11 != 2)) {
            FUN_2c5ff5cc(uVar16,&stack0xffffffd4);
            uVar19 = FUN_2c634ccc(iVar12,&stack0xffffffd4);
            uVar15 = (uint)*(ushort *)(iVar12 + 0x34);
            if (uVar15 != uVar19) {
              if ((uVar15 != 0xffff) && (uVar15 < *(ushort *)(iVar12 + 0x30))) {
                FUN_2c6352cc(iVar12);
              }
              *(short *)(iVar12 + 0x34) = (short)uVar19;
              FUN_2c5ff59c(uVar10);
              if (uVar19 != 0xffff) {
                iVar11 = *(int *)(iVar12 + 0x2c);
                uVar15 = (uint)*(ushort *)(iVar11 + uVar19 * 2);
                if ((-1 < (int)(uVar15 << 0x1a)) && (-1 < (int)(uVar15 << 0x1c))) {
                  if (uVar19 < *(ushort *)(iVar12 + 0x30)) {
                    FUN_2c6352cc(iVar12,uVar19);
                    iVar11 = *(int *)(iVar12 + 0x2c);
                  }
                  if ((-1 < (int)((uint)*(ushort *)(iVar11 + uVar19 * 2) << 0x17)) &&
                     (-1 < (int)((uint)*(ushort *)(iVar11 + (uint)*(ushort *)(iVar12 + 0x34) * 2) <<
                                0x16))) {
                    FUN_2c602340(iVar12,0x1c,&stack0xffffffd8);
                  }
                }
              }
            }
          }
          goto LAB_2c63573c;
        }
        if (iVar11 == 8) {
          uVar19 = (uint)*(ushort *)(iVar12 + 0x34);
          if (uVar19 == 0xffff) goto LAB_2c63573c;
          uVar20 = *(ushort *)(*(int *)(iVar12 + 0x2c) + uVar19 * 2);
          uVar15 = (uint)uVar20;
          if ((int)(uVar15 << 0x19) < 0) {
            uVar23 = (uVar15 & 0x3f) >> 5;
            if (-1 < (int)(uVar15 << 0x1a)) {
              if (((int)(uVar15 << 0x18) < 0) &&
                 (-1 < (int)((uint)*(byte *)(iVar12 + 0x36) << 0x1f))) {
                uVar20 = uVar20 & 0xff7f;
              }
              else {
                uVar20 = uVar20 | 0x80;
              }
              *(ushort *)(*(int *)(iVar12 + 0x2c) + uVar19 * 2) = uVar20;
              uVar19 = (uint)*(ushort *)(iVar12 + 0x34);
              if ((int)((uint)*(byte *)(iVar12 + 0x36) << 0x1f) < 0) {
                iVar11 = *(int *)(iVar12 + 0x2c);
                if (uVar19 < *(ushort *)(iVar12 + 0x30)) {
                  uVar23 = (*(ushort *)(iVar11 + uVar19 * 2) & 0xff) >> 7;
                }
                if (*(ushort *)(iVar12 + 0x30) == 0) {
                  uVar15 = (uint)*(ushort *)(iVar11 + uVar19 * 2);
                  goto LAB_2c63588a;
                }
                uVar22 = 0;
                uVar15 = 0;
                while( true ) {
                  *(ushort *)(iVar11 + (uVar22 & 0xffff) * 2) =
                       *(ushort *)(iVar11 + (uVar22 & 0xffff) * 2) & 0xff7f;
                  uVar24 = (uint)*(ushort *)(iVar12 + 0x30);
                  if ((uVar15 != 0xffff) && (uVar15 < uVar24)) {
                    FUN_2c6352cc(iVar12);
                    uVar24 = (uint)*(ushort *)(iVar12 + 0x30);
                  }
                  uVar22 = uVar22 + 1;
                  uVar15 = uVar22 & 0xffff;
                  if (uVar24 <= uVar15) break;
                  iVar11 = *(int *)(iVar12 + 0x2c);
                }
                if ((uVar23 != 0) && (uVar19 < uVar24)) {
                  func_0x2c635698(iVar12,uVar19,0x80);
                }
                uVar19 = (uint)*(ushort *)(iVar12 + 0x34);
              }
              uVar15 = (uint)*(ushort *)(*(int *)(iVar12 + 0x2c) + uVar19 * 2);
              goto LAB_2c63588a;
            }
            if (-1 < (int)(uVar15 << 0x17)) goto LAB_2c63589c;
          }
          else {
LAB_2c63588a:
            if (((((int)(uVar15 << 0x17) < 0) || ((int)(uVar15 << 0x16) < 0)) &&
                (-1 < (int)(uVar15 << 0x1a))) && (-1 < (int)(uVar15 << 0x1c))) {
              iVar11 = FUN_2c602340(iVar12,0x1c,&stack0xffffffd8);
              if (iVar11 != 1) goto LAB_2c63573c;
              uVar19 = (uint)*(ushort *)(iVar12 + 0x34);
            }
LAB_2c63589c:
            if (uVar19 == 0xffff) goto LAB_2c63573c;
          }
          if (uVar19 < *(ushort *)(iVar12 + 0x30)) {
LAB_2c6358ae:
            if (*_LAB_2c6359d4 == aiStack_24[0]) {
              iVar11 = *DAT_2c6353c4;
              FUN_2c607338(iVar12,aiStack_24);
              FUN_2c6033b4(iVar12,0,0x14);
              FUN_2c6033b4(iVar12,0,0x15);
              FUN_2c604188(iVar12);
              FUN_2c62a4c4();
              FUN_2c6078f0(iVar12,&stack0xffffffd4);
              if (*DAT_2c6353c4 == iVar11) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              stack_chk_fail();
            }
            goto LAB_2c635c18;
          }
          goto LAB_2c63573c;
        }
        if (iVar11 != 6) {
          if (iVar11 == 3) {
LAB_2c6359e0:
            if ((*(ushort *)(iVar12 + 0x34) != 0xffff) &&
               (*(ushort *)(iVar12 + 0x34) < *(ushort *)(iVar12 + 0x30))) {
              FUN_2c6352cc(iVar12);
            }
            uVar20 = 0xffff;
          }
          else {
            if (iVar11 != 0xe) {
              if ((iVar11 - 0xfU & 0xff) < 2) goto LAB_2c6359e0;
              if (iVar11 != 0xd) {
                if (iVar11 == 0x15) {
                  if (*_LAB_2c635d8c == aiStack_24[0]) {
                    uStack_34 = *_LAB_2c635188;
                    iVar11 = FUN_2c602400();
                    if (*(short *)(iVar11 + 0x30) != 0) {
                      uVar10 = FUN_2c602608(param_2);
                      *(byte *)(iVar11 + 0x22) = *(byte *)(iVar11 + 0x22) | 4;
                      FUN_2c607338(iVar11,&sStack_18c);
                      uVar20 = *(ushort *)(iVar11 + 0x20);
                      uVar19 = (uint)uVar20;
                      *(uint *)(iVar11 + 0x20) = _LAB_2c63518c & *(uint *)(iVar11 + 0x20) | 0x40000;
                      FUN_2c61314c(auStack_8c);
                      FUN_2c6129e4(auStack_154);
                      FUN_2c6004cc(iVar11,0x50000,auStack_8c);
                      FUN_2c6007ec(iVar11,0x50000,auStack_154);
                      *(ushort *)(iVar11 + 0x20) = uVar20;
                      *(byte *)(iVar11 + 0x22) = *(byte *)(iVar11 + 0x22) & 0xfb;
                      sVar9 = FUN_2c6033b4(iVar11,0,0x10);
                      sVar6 = FUN_2c6033b4(iVar11,0,0x11);
                      sVar7 = FUN_2c6033b4(iVar11,0,0x12);
                      sVar8 = FUN_2c6033b4(iVar11,0,0x13);
                      FUN_2c600b9c(auStack_12c,uVar10);
                      puStack_11c = auStack_e4;
                      uStack_f8 = 0x50000;
                      uVar26 = *(ushort *)(iVar11 + 0x30);
                      uStack_128 = _LAB_2c635190;
                      uStack_124 = 0;
                      puStack_118 = auStack_17c;
                      if (uVar26 != 0) {
                        uVar25 = 0;
                        uVar15 = 0;
                        do {
                          while( true ) {
                            pcVar14 = *(char **)(*(int *)(iVar11 + 0x24) + uVar15 * 4);
                            if ((*pcVar14 != '\n') || (pcVar14[1] != '\0')) break;
                            uVar15 = uVar15 + 1 & 0xffff;
                          }
                          uVar22 = (uint)uVar25;
                          uVar23 = (uint)*(ushort *)(*(int *)(iVar11 + 0x2c) + uVar22 * 2);
                          if (-1 < (int)(uVar23 << 0x1c)) {
                            uVar24 = (uVar23 & 0xff) >> 7;
                            if ((int)(uVar23 << 0x1a) < 0) {
                              uVar24 = uVar24 | 0x80;
                            }
                            else if (*(ushort *)(iVar11 + 0x34) == uVar25) {
                              if ((uVar20 & 0x20) != 0) {
                                uVar24 = uVar24 | 0x20;
                              }
                              if ((int)(uVar19 << 0x1e) < 0) {
                                uVar24 = uVar24 | 2;
                              }
                              if ((int)(uVar19 << 0x1d) < 0) {
                                uVar24 = uVar24 | 4;
                              }
                              if ((int)(uVar19 << 0x1c) < 0) {
                                uVar24 = uVar24 | 8;
                              }
                            }
                            iVar12 = *(int *)(iVar11 + 0x28) + uVar22 * 8;
                            sStack_184 = *(short *)(*(int *)(iVar11 + 0x28) + uVar22 * 8) +
                                         sStack_18c;
                            sStack_182 = *(short *)(iVar12 + 2) + sStack_18a;
                            sStack_180 = sStack_18c + *(short *)(iVar12 + 4);
                            sStack_17e = sStack_18a + *(short *)(iVar12 + 6);
                            if (uVar24 == 0) {
                              FUN_2c62c0d8(auStack_e4,auStack_8c,0x58);
                              FUN_2c62c0d8(auStack_17c,auStack_154,0x28);
                            }
                            else {
                              *(short *)(iVar11 + 0x20) = (short)uVar24;
                              *(byte *)(iVar11 + 0x22) = *(byte *)(iVar11 + 0x22) | 4;
                              FUN_2c61314c(auStack_e4);
                              FUN_2c6129e4(auStack_17c);
                              FUN_2c6004cc(iVar11,0x50000,auStack_e4);
                              FUN_2c6007ec(iVar11,0x50000,auStack_17c);
                              *(ushort *)(iVar11 + 0x20) = uVar20;
                              *(byte *)(iVar11 + 0x22) = *(byte *)(iVar11 + 0x22) & 0xfb;
                            }
                            psStack_120 = &sStack_184;
                            if ((*(ushort *)(*(int *)(iVar11 + 0x2c) + uVar22 * 2) & 0x1000) == 0) {
                              bStack_159 = bStack_159 & 0xfe;
                            }
                            else {
                              bStack_159 = bStack_159 | 1;
                            }
                            uStack_f4 = uVar22;
                            FUN_2c602340(iVar11,0x1a,auStack_12c);
                            sVar3 = sStack_182;
                            if ((int)((uint)bStack_a9 << 0x1a) < 0) {
                              bVar5 = bStack_a9 & 0xc1;
                              bStack_a9 = bVar5 | 0x1e;
                              if ((int)sStack_184 == (int)*(short *)(iVar11 + 0x14) + (int)sVar7) {
                                bStack_a9 = bVar5 | 0x16;
                              }
                              if ((int)sStack_180 == (int)*(short *)(iVar11 + 0x18) - (int)sVar8) {
                                bStack_a9 = bStack_a9 & 0xc1 |
                                            (byte)(((bStack_a9 & 0x3f) >> 1 & 0x17) << 1);
                              }
                              if ((int)sStack_182 == (int)*(short *)(iVar11 + 0x16) + (int)sVar9) {
                                bStack_a9 = bStack_a9 & 0xc1 |
                                            (byte)(((bStack_a9 & 0x3f) >> 1 & 0x1d) << 1);
                              }
                              if ((int)sStack_17e == (int)*(short *)(iVar11 + 0x1a) - (int)sVar6) {
                                bStack_a9 = bStack_a9 & 0xc1 |
                                            (byte)(((bStack_a9 & 0x3f) >> 1 & 0x1e) << 1);
                              }
                            }
                            sVar2 = sStack_17e + 1;
                            if (((uVar24 & 0x20) != 0) &&
                               ((int)((uint)*(ushort *)(*(int *)(iVar11 + 0x2c) + uVar22 * 2) <<
                                     0x16) < 0)) {
                              sStack_182 = sStack_182 * 2 - sVar2;
                            }
                            FUN_2c61319c(uVar10,auStack_e4,&sStack_184);
                            uVar16 = *(undefined4 *)(*(int *)(iVar11 + 0x24) + uVar15 * 4);
                            FUN_2c62b954(&sStack_190,uVar16,auStack_17c[0],(int)sStack_162,
                                         (int)sStack_164,(int)(short)((sStack_188 + 1) - sStack_18c)
                                         ,bStack_159);
                            iVar12 = (int)(short)((sStack_180 + 1) - sStack_184) - (int)sStack_190;
                            if (iVar12 < 0) {
                              iVar12 = iVar12 + 1;
                            }
                            sStack_184 = sStack_184 + (short)(iVar12 >> 1);
                            sStack_180 = sStack_184 + sStack_190;
                            iVar12 = (int)(short)((sStack_17e + 1) - sStack_182) - (int)sStack_18e;
                            if (iVar12 < 0) {
                              iVar12 = iVar12 + 1;
                            }
                            sStack_182 = sStack_182 + (short)(iVar12 >> 1);
                            sStack_17e = sStack_18e + sStack_182;
                            if (((uVar24 & 0x20) != 0) &&
                               ((int)((uint)*(ushort *)(*(int *)(iVar11 + 0x2c) + uVar22 * 2) <<
                                     0x16) < 0)) {
                              iVar12 = (int)(short)(sVar2 - sVar3);
                              if (iVar12 < 0) {
                                iVar12 = iVar12 + 1;
                              }
                              sVar3 = (short)((uint)(iVar12 << 0xf) >> 0x10);
                              sStack_182 = sStack_182 - sVar3;
                              sStack_17e = sStack_17e - sVar3;
                            }
                            FUN_2c612a20(uVar10,auStack_17c,&sStack_184,uVar16,0);
                            FUN_2c602340(iVar11,0x1b,auStack_12c);
                            uVar26 = *(ushort *)(iVar11 + 0x30);
                          }
                          uVar25 = uVar25 + 1;
                          uVar15 = uVar15 + 1 & 0xffff;
                        } while (uVar25 < uVar26);
                      }
                      *(byte *)(iVar11 + 0x22) = *(byte *)(iVar11 + 0x22) & 0xfb;
                    }
                    if (*_LAB_2c635188 == uStack_34) {
                      return;
                    }
                    /* WARNING: Subroutine does not return */
                    stack_chk_fail();
                  }
                  goto LAB_2c635c18;
                }
                goto LAB_2c63573c;
              }
              if ((*(ushort *)(iVar12 + 0x34) != 0xffff) &&
                 (*(ushort *)(iVar12 + 0x34) < *(ushort *)(iVar12 + 0x30))) {
                FUN_2c6352cc(iVar12);
              }
              pcVar14 = (char *)FUN_2c602410(param_2);
              cVar1 = *pcVar14;
              if (cVar1 == '\x13') {
                if (*(ushort *)(iVar12 + 0x34) == 0xffff) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = *(ushort *)(iVar12 + 0x34) + 1 & 0xffff;
                }
                *(short *)(iVar12 + 0x34) = (short)uVar19;
                if (*(ushort *)(iVar12 + 0x30) <= uVar19) {
                  *(undefined2 *)(iVar12 + 0x34) = 0;
                }
                uVar19 = (uint)*(ushort *)(iVar12 + 0x34);
                while ((uVar15 = (uint)*(ushort *)(*(int *)(iVar12 + 0x2c) + uVar19 * 2),
                       (int)(uVar15 << 0x1c) < 0 || ((int)(uVar15 << 0x1a) < 0))) {
                  uVar15 = uVar19 + 1;
                  uVar19 = uVar15 & 0xffff;
                  *(short *)(iVar12 + 0x34) = (short)uVar15;
                  if (*(ushort *)(iVar12 + 0x30) <= uVar19) {
                    uVar19 = 0;
                    *(undefined2 *)(iVar12 + 0x34) = 0;
                  }
                }
LAB_2c635ae6:
                if (uVar19 == 0xffff) goto LAB_2c63573c;
                uVar23 = (uint)*(ushort *)(iVar12 + 0x30);
                uVar15 = uVar19;
              }
              else {
                if (cVar1 == '\x14') {
                  uVar19 = (uint)*(ushort *)(iVar12 + 0x34);
                  if ((uVar19 == 0xffff) || (uVar19 == 0)) {
                    uVar19 = (uint)*(ushort *)(iVar12 + 0x30);
                  }
                  uVar19 = uVar19 - 1;
                  *(short *)(iVar12 + 0x34) = (short)uVar19;
                  while( true ) {
                    uVar19 = uVar19 & 0xffff;
                    uVar15 = (uint)*(ushort *)(*(int *)(iVar12 + 0x2c) + uVar19 * 2);
                    if ((-1 < (int)(uVar15 << 0x1c)) && (-1 < (int)(uVar15 << 0x1a))) break;
                    if (uVar19 == 0) {
                      uVar19 = (uint)*(ushort *)(iVar12 + 0x30);
                    }
                    uVar19 = uVar19 - 1;
                    *(short *)(iVar12 + 0x34) = (short)uVar19;
                  }
                  goto LAB_2c635ae6;
                }
                if (cVar1 == '\x12') {
                  sVar9 = FUN_2c6033b4(iVar12,0,0x15);
                  uVar15 = (uint)*(ushort *)(iVar12 + 0x34);
                  if (uVar15 == 0xffff) {
                    *(undefined2 *)(iVar12 + 0x34) = 0;
                    do {
                      uVar19 = 0;
                      do {
                        uVar15 = (uint)*(ushort *)(*(int *)(iVar12 + 0x2c) + uVar19 * 2);
                        if ((-1 < (int)(uVar15 << 0x1c)) && (-1 < (int)(uVar15 << 0x1a)))
                        goto LAB_2c635ae6;
                        uVar15 = uVar19 + 1;
                        uVar19 = uVar15 & 0xffff;
                        *(short *)(iVar12 + 0x34) = (short)uVar15;
                      } while (uVar19 < *(ushort *)(iVar12 + 0x30));
                      *(undefined2 *)(iVar12 + 0x34) = 0;
                    } while( true );
                  }
                  iVar13 = *(int *)(iVar12 + 0x28);
                  uVar23 = (uint)*(ushort *)(iVar12 + 0x30);
                  iVar27 = iVar13 + uVar15 * 8;
                  sVar6 = *(short *)(iVar13 + uVar15 * 8);
                  iVar11 = (int)(short)(sVar6 + ((short)((*(short *)(iVar27 + 4) + 1) - sVar6) >> 1)
                                       );
                  if (uVar15 < uVar23) {
                    iVar21 = uVar15 << 1;
                    uVar19 = uVar15;
                    do {
                      if ((((*(short *)(iVar27 + 2) < *(short *)(iVar13 + 2 + iVar21 * 4)) &&
                           (*(short *)(iVar13 + iVar21 * 4) <= iVar11)) &&
                          (iVar11 <= (int)*(short *)(iVar13 + 4 + iVar21 * 4) + (int)sVar9)) &&
                         ((uVar20 = *(ushort *)(*(int *)(iVar12 + 0x2c) + iVar21),
                          (uVar20 & 0x20) == 0 && (-1 < (int)((uint)uVar20 << 0x1c))))) {
                        *(short *)(iVar12 + 0x34) = (short)uVar19;
                        goto LAB_2c635ae6;
                      }
                      iVar21 = iVar21 + 2;
                      uVar19 = uVar19 + 1 & 0xffff;
                    } while (uVar19 < uVar23);
                  }
                }
                else {
                  if (cVar1 != '\x11') {
                    uVar19 = (uint)*(ushort *)(iVar12 + 0x34);
                    goto LAB_2c635ae6;
                  }
                  sVar9 = FUN_2c6033b4(iVar12,0,0x15);
                  uVar19 = (uint)*(ushort *)(iVar12 + 0x34);
                  if (uVar19 == 0xffff) {
                    *(undefined2 *)(iVar12 + 0x34) = 0;
                    do {
                      uVar19 = 0;
                      do {
                        uVar15 = (uint)*(ushort *)(*(int *)(iVar12 + 0x2c) + uVar19 * 2);
                        if ((-1 < (int)(uVar15 << 0x1c)) && (-1 < (int)(uVar15 << 0x1a)))
                        goto LAB_2c635ae6;
                        uVar15 = uVar19 + 1;
                        uVar19 = uVar15 & 0xffff;
                        *(short *)(iVar12 + 0x34) = (short)uVar15;
                      } while (uVar19 < *(ushort *)(iVar12 + 0x30));
                      *(undefined2 *)(iVar12 + 0x34) = 0;
                    } while( true );
                  }
                  iVar13 = *(int *)(iVar12 + 0x28);
                  uVar22 = (uint)(short)*(ushort *)(iVar12 + 0x34);
                  iVar27 = iVar13 + uVar19 * 8;
                  sVar6 = *(short *)(iVar13 + uVar19 * 8);
                  iVar11 = (int)(short)(((short)((*(short *)(iVar27 + 4) + 1) - sVar6) >> 1) + sVar6
                                       );
                  if (-1 < (int)uVar22) {
                    do {
                      uVar15 = uVar22 & 0xffff;
                      if ((((*(short *)(iVar13 + 2 + uVar22 * 8) < *(short *)(iVar27 + 2)) &&
                           ((int)*(short *)(iVar13 + uVar22 * 8) - (int)sVar9 <= iVar11)) &&
                          (iVar11 <= *(short *)(iVar13 + 4 + uVar22 * 8))) &&
                         ((uVar20 = *(ushort *)(*(int *)(iVar12 + 0x2c) + uVar22 * 2),
                          (uVar20 & 0x20) == 0 && (-1 < (int)((uint)uVar20 << 0x1c))))) {
                        uVar23 = (uint)*(ushort *)(iVar12 + 0x30);
                        *(short *)(iVar12 + 0x34) = (short)uVar22;
                        goto LAB_2c635af2;
                      }
                      uVar22 = uVar22 - 1;
                    } while (-1 < (int)(uVar22 * 0x10000));
                  }
                  uVar23 = (uint)*(ushort *)(iVar12 + 0x30);
                  uVar15 = uVar19;
                }
              }
LAB_2c635af2:
              if (uVar23 <= uVar15) goto LAB_2c63573c;
              goto LAB_2c6358ae;
            }
            iVar11 = FUN_2c602410(param_2);
            iVar13 = FUN_2c5ff4e4();
            if (iVar11 == 0) {
              FUN_2c62a5c0(0);
              iVar13 = FUN_2c5ff4e4();
            }
            FUN_2c606bc0(iVar12);
            iVar11 = func_0x2c603124();
            if ((*(short *)(iVar12 + 0x34) != -1) ||
               ((iVar13 != 2 && ((iVar13 != 4 || (iVar11 == 0)))))) goto LAB_2c63573c;
            uVar20 = *(byte *)(iVar12 + 0x36) & 1;
            if ((*(byte *)(iVar12 + 0x36) & 1) == 0) {
              puVar18 = (ushort *)(*(int *)(iVar12 + 0x2c) + -2);
              while( true ) {
                puVar18 = puVar18 + 1;
                if ((-1 < (int)((uint)*puVar18 << 0x1c)) && (-1 < (int)((uint)*puVar18 << 0x1a)))
                break;
                uVar20 = uVar20 + 1;
              }
            }
            else {
              uVar20 = 0;
              puVar18 = (ushort *)(*(int *)(iVar12 + 0x2c) + -2);
              while( true ) {
                puVar18 = puVar18 + 1;
                uVar19 = (uint)*puVar18;
                if (((-1 < (int)(uVar19 << 0x1c)) && (-1 < (int)(uVar19 << 0x1a))) &&
                   ((int)(uVar19 << 0x18) < 0)) break;
                uVar20 = uVar20 + 1;
              }
            }
          }
          *(ushort *)(iVar12 + 0x34) = uVar20;
          goto LAB_2c63573c;
        }
        if (*(ushort *)(iVar12 + 0x34) == 0xffff) goto LAB_2c63573c;
        uVar19 = (uint)*(ushort *)(*(int *)(iVar12 + 0x2c) + (uint)*(ushort *)(iVar12 + 0x34) * 2);
        iVar11 = uVar19 << 0x1b;
      }
      if (((-1 < iVar11) && (-1 < (int)(uVar19 << 0x1a))) && (-1 < (int)(uVar19 << 0x1c))) {
        FUN_2c602340(iVar12,0x1c,&stack0xffffffd8);
      }
    }
  }
LAB_2c63573c:
  if (*_LAB_2c6359d4 == aiStack_24[0]) {
    return;
  }
LAB_2c635c18:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


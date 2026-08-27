/* FUN_2c61acb0 @ 0x2c61acb0 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c61acb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short *psVar1;
  short sVar2;
  ushort uVar3;
  int *piVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  undefined2 uVar11;
  int *piVar12;
  int iVar13;
  short *psVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  int *piVar22;
  undefined4 uVar23;
  int iVar24;
  short sVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  char *pcVar30;
  undefined4 *puVar31;
  int *piVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  short sVar37;
  int iStack_f8;
  int iStack_f4;
  int *piStack_f0;
  uint uStack_ec;
  int iStack_e4;
  int iStack_cc;
  int iStack_b4;
  uint uStack_ac;
  short sStack_a4;
  short sStack_a2;
  uint uStack_a0;
  short sStack_9c;
  short sStack_9a;
  short sStack_98;
  short sStack_96;
  short sStack_94;
  short sStack_92;
  short sStack_90;
  short sStack_8e;
  short sStack_8c;
  short sStack_8a;
  short sStack_88;
  short sStack_86;
  int *piStack_84;
  undefined2 uStack_80;
  byte bStack_7a;
  byte bStack_79;
  int *piStack_78;
  char *pcStack_74;
  int *piStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int *apiStack_64 [3];
  int *piStack_58;
  byte bStack_44;
  byte bStack_40;
  int iStack_3c;
  
  iStack_3c = *_LAB_2c61afb0;
  piVar12 = (int *)FUN_2c602110(_LAB_2c61afb4,param_2,param_3,0);
  if (piVar12 == (int *)0x1) {
    iVar13 = FUN_2c602408(param_2);
    piVar12 = (int *)FUN_2c602400(param_2);
    if (iVar13 == 0x15) {
      iVar13 = FUN_2c602400(param_2);
      iVar16 = FUN_2c602608(param_2);
      iVar29 = iVar13 + 0x30;
      FUN_2c60747c(iVar13,&sStack_94);
      iVar17 = FUN_2c62ca10(iVar29);
      piVar12 = (int *)0x0;
      if (iVar17 != 0) {
        iVar17 = FUN_2c62a6b4(&sStack_8c,&sStack_94,*(undefined4 *)(iVar16 + 8));
        piVar12 = (int *)0x0;
        if (iVar17 != 0) {
          uVar23 = *(undefined4 *)(iVar16 + 8);
          *(short **)(iVar16 + 8) = &sStack_8c;
          sVar9 = FUN_2c6033b4(iVar13,0,0x59);
          sVar7 = *(short *)(iVar13 + 0x28);
          uStack_ac = (uint)sVar7;
          sVar8 = (sStack_90 + 1) - sStack_94;
          iVar18 = (int)sVar9;
          iVar26 = (int)sVar8;
          if ((uStack_ac & 0x6000) == 0x2000) {
            uVar33 = uStack_ac & 0xffff9fff;
            if ((int)uVar33 < 0x7d1) {
              if ((*(byte *)(iVar13 + 0x3c) & 3) == 1) {
                sVar7 = 0;
                uStack_ac = 0;
                iVar35 = iVar26;
                goto LAB_2c61ae08;
              }
              if (1000 < (int)uVar33) {
                uVar33 = 1000 - uVar33;
              }
              sVar7 = (short)(int)((longlong)_LAB_2c61b6d4 * (longlong)(int)(iVar26 * uVar33) >>
                                  0x25) - (short)((int)(iVar26 * uVar33) >> 0x1f);
              uStack_ac = (uint)sVar7;
            }
            iVar35 = (int)(short)(sVar8 - sVar7);
          }
          else {
            iVar35 = (int)(short)(sVar8 - sVar7);
          }
LAB_2c61ae08:
          bVar5 = FUN_2c6033b4(iVar13,0,0x60);
          sVar7 = sVar7 + sStack_94;
          iStack_f8 = (int)sStack_92;
          piStack_f0 = (int *)FUN_2c62ca10(iVar29);
          iStack_f4 = *piStack_f0;
          if (iStack_f4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_2c62c82c(3,_LAB_2c61b6c0,0x2da,_LAB_2c61b6c8,_LAB_2c61b6bc);
          }
          iStack_cc = 0;
          FUN_2c62c3b0(&piStack_78,0x14);
          FUN_2c6129e4(apiStack_64);
          iStack_e4 = iVar17;
LAB_2c61ae52:
          iVar36 = 0;
          sVar37 = 0;
          *(undefined2 *)(_LAB_2c61afb8 + 0x500) = 0;
          do {
            while (pcVar30 = (char *)(iStack_cc + iStack_f4),
                  *(char *)(iStack_cc + iStack_f4) != '\0') {
              if (iStack_cc == 0) {
                piStack_78 = piStack_f0;
                iVar27 = FUN_2c62b108(piStack_f0 + 2,0x57,&piStack_84);
                piVar12 = piStack_84;
                if (iVar27 != 1) {
                  piVar12 = (int *)FUN_2c6033b4(iVar13,0,0x57);
                }
                piStack_70 = piVar12;
                iVar27 = FUN_2c62b108(piStack_f0 + 2,0x58,&piStack_84);
                if (iVar27 == 1) {
                  sVar10 = (short)piStack_84;
                }
                else {
                  sVar10 = FUN_2c6033b4(iVar13,0,0x58);
                }
                uStack_68 = CONCAT22(sVar10,(short)piStack_70[2] + sVar9);
              }
              else {
                sVar10 = uStack_68._2_2_;
              }
              sStack_98 = 0;
              if (*pcVar30 == '\0') {
                uVar33 = (uint)*(ushort *)(_LAB_2c61afb8 + 0x500);
                uVar11 = 0;
                iVar27 = 0;
LAB_2c61ae9c:
                iVar24 = (int)(short)uStack_68;
                uStack_6c = CONCAT22(sStack_98,uVar11);
                if (iVar36 < iVar24) {
LAB_2c61aeae:
                  sVar37 = *(short *)((int)piStack_70 + 10);
                  iVar36 = iVar24;
                }
                if (0x3f < uVar33) {
                  pcStack_74 = pcVar30;
                    /* WARNING: Subroutine does not return */
                  FUN_2c62c82c(3,_LAB_2c61afc0,0x273,_LAB_2c61afc4,_LAB_2c61afbc);
                }
              }
              else {
                piVar12 = (int *)FUN_2c62b834(pcVar30,piStack_70,(int)sVar10,iVar35,&sStack_98,0);
                uVar11 = SUB42(piVar12,0);
                if ((pcVar30[(int)piVar12] == '\0') && (sStack_98 < iVar35)) {
                  iStack_cc = iStack_cc + (int)piVar12;
                  uVar33 = (uint)*(ushort *)(_LAB_2c61b2d0 + 0x140);
                  iVar27 = 0;
                  goto LAB_2c61ae9c;
                }
                iVar27 = iVar17;
                if (piVar12 == (int *)0x0) {
                  uVar33 = (uint)*(ushort *)(_LAB_2c61b6b8 + 0x500);
                  uVar11 = 0;
                  goto LAB_2c61ae9c;
                }
                uVar33 = (uint)*(ushort *)(_LAB_2c61afb8 + 0x500);
                if (uVar33 != 0) {
                  if (sStack_98 <= iVar35) {
                    piStack_84 = piVar12;
                    piVar15 = (int *)(*(code *)*_LAB_2c61b2d4)(pcVar30,&piStack_84);
                    if (piVar15 < (int *)0xe) {
                      if (-1 < (int)((0x2401U >> ((uint)piVar15 & 0xff)) << 0x1f))
                      goto LAB_2c61b09c;
                    }
                    else if ((int *)0x51a5 < piVar15 + -0x1380) {
LAB_2c61b09c:
                      uVar33 = 0;
                      piVar22 = (int *)&Reserved2;
                      do {
                        if (piVar15 == piVar22) goto LAB_2c61b0b6;
                        uVar33 = uVar33 + 1 & 0xff;
                        piVar22 = (int *)(int)*(char *)(_LAB_2c61b2d8 + uVar33);
                      } while (piVar22 != (int *)0x0);
                      piStack_84 = piVar22;
                      piVar15 = (int *)(*(code *)*_LAB_2c61b6cc)
                                                 ((undefined1 *)
                                                  ((int)piVar12 + iStack_cc + iStack_f4),&piStack_84
                                                 );
                      if (piVar15 < (int *)0xe) {
                        if (-1 < (int)((0x2401U >> ((uint)piVar15 & 0xff)) << 0x1f))
                        goto LAB_2c61b582;
                      }
                      else if ((int *)0x51a5 < piVar15 + -0x1380) {
LAB_2c61b582:
                        piVar22 = (int *)&Reserved2;
                        uVar33 = 0;
                        while (piVar15 != piVar22) {
                          uVar33 = uVar33 + 1 & 0xff;
                          piVar22 = (int *)(int)*(char *)(_LAB_2c61b6d0 + uVar33);
                          if (piVar22 == (int *)0x0) goto LAB_2c61aee4;
                        }
                      }
                    }
LAB_2c61b0b6:
                    iStack_cc = iStack_cc + (int)piVar12;
                    uVar33 = (uint)*(ushort *)(_LAB_2c61b2d0 + 0x140);
                    goto LAB_2c61ae9c;
                  }
                  goto LAB_2c61aeee;
                }
                iVar24 = (int)(short)uStack_68;
                iStack_cc = iStack_cc + (int)piVar12;
                uStack_6c = CONCAT22(sStack_98,uVar11);
                uVar33 = 0;
                if (iVar36 < iVar24) goto LAB_2c61aeae;
              }
              puVar31 = (undefined4 *)(_LAB_2c61afb8 + uVar33 * 0x14);
              *puVar31 = piStack_78;
              puVar31[1] = pcVar30;
              puVar31[2] = piStack_70;
              puVar31[3] = uStack_6c;
              iVar24 = _LAB_2c61afb8;
              puVar31[4] = uStack_68;
              *(short *)(iVar24 + 0x500) = *(short *)(iVar24 + 0x500) + 1;
              iVar35 = (int)(short)(((short)iVar35 - uStack_68._2_2_) - sStack_98);
              piVar15 = piStack_78;
              pcStack_74 = pcVar30;
              if ((iVar35 < 1) || (iVar27 != 0)) goto LAB_2c61aee4;
            }
            piVar15 = (int *)FUN_2c62ca20(iVar29,piStack_f0);
            piStack_f0 = piVar15;
            if (piVar15 == (int *)0x0) goto LAB_2c61aee4;
            iStack_f4 = *piVar15;
            if (iStack_f4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_2c62c82c(3,_LAB_2c61b6c0,0x2da,_LAB_2c61b6c8,_LAB_2c61b6bc);
            }
            iStack_cc = 0;
          } while( true );
        }
      }
    }
    else {
      if ((iVar13 == 0x2a) || (iVar13 == 0x29)) {
        *(byte *)(piVar12 + 0xf) = *(byte *)(piVar12 + 0xf) | 8;
        FUN_2c607df0();
        if (*_LAB_2c61afb0 == iStack_3c) {
          sVar7 = FUN_2c6033b4(piVar12,0,1);
          sVar8 = FUN_2c6033b4(piVar12,0,4);
          if ((sVar7 != 0x27d1) && (sVar8 != 0x27d1)) {
            return (int *)0x0;
          }
          *(byte *)((int)piVar12 + 0x22) = *(byte *)((int)piVar12 + 0x22) | 1;
          iVar13 = FUN_2c604178(piVar12);
          *(byte *)(iVar13 + 0x22) = *(byte *)(iVar13 + 0x22) | 2;
          iVar13 = FUN_2c604188();
          if (*(int *)(iVar13 + 4) != 0) {
            FUN_2c62be4c();
            return (int *)0x1;
          }
          return (int *)0x1;
        }
        goto LAB_2c61b6b2;
      }
      if (iVar13 == 0x2c) {
        psVar14 = (short *)FUN_2c602410(param_2);
        bVar5 = *(byte *)(piVar12 + 0xf);
        uVar33 = bVar5 & 3;
        if (uVar33 == 1) {
          if ((int)((uint)bVar5 << 0x1c) < 0) {
            uVar11 = FUN_2c61a7c0(piVar12,0);
            *(undefined2 *)((int)piVar12 + 0x2a) = uVar11;
            piVar15 = (int *)FUN_2c61a74c(piVar12);
            *(short *)(piVar12 + 0xb) = (short)piVar15;
            *(byte *)(piVar12 + 0xf) = *(byte *)(piVar12 + 0xf) & 0xf7;
          }
          else {
            piVar15 = (int *)(int)(short)piVar12[0xb];
          }
          uVar33 = (uint)*(short *)((int)piVar12 + 0x2a);
          piVar22 = (int *)(int)psVar14[1];
        }
        else if (uVar33 == 2) {
          uVar33 = FUN_2c607404(piVar12);
          piVar22 = (int *)(int)psVar14[1];
          if ((int)piVar22 < 0) {
LAB_2c61b5b4:
            piVar15 = (int *)0x0;
          }
          else if (((int)*(short *)((int)piVar12 + 0x2a) == uVar33) &&
                  (-1 < (int)((uint)*(byte *)(piVar12 + 0xf) << 0x1c))) {
            piVar15 = (int *)(int)(short)piVar12[0xb];
          }
          else {
            piVar15 = (int *)FUN_2c61a930(piVar12,uVar33);
            *(short *)((int)piVar12 + 0x2a) = (short)uVar33;
            *(short *)(piVar12 + 0xb) = (short)piVar15;
            *(byte *)(piVar12 + 0xf) = *(byte *)(piVar12 + 0xf) & 0xf7;
            piVar22 = (int *)(int)psVar14[1];
          }
        }
        else if ((bVar5 & 3) == 0) {
          if (-1 < *psVar14) {
            uVar33 = FUN_2c607404(piVar12);
          }
          piVar22 = (int *)(int)psVar14[1];
          if ((int)piVar22 < 0) goto LAB_2c61b5b4;
          piVar15 = (int *)FUN_2c607440(piVar12);
          piVar22 = (int *)(int)psVar14[1];
        }
        else {
          piVar15 = (int *)0x0;
          piVar22 = (int *)(int)psVar14[1];
          uVar33 = 0;
        }
        piVar12 = piVar15;
        if ((int)piVar15 < (int)piVar22) {
          piVar12 = piVar22;
        }
        uVar34 = (int)*psVar14;
        if ((int)*psVar14 < (int)uVar33) {
          uVar34 = uVar33;
        }
        psVar14[1] = (short)piVar12;
        *psVar14 = (short)uVar34;
      }
    }
  }
  goto LAB_2c61acd0;
LAB_2c61aee4:
  uVar33 = (uint)*(ushort *)(_LAB_2c61afb8 + 0x500);
  piVar12 = piVar15;
LAB_2c61aeee:
  if (uVar33 == 0) goto LAB_2c61b114;
  uVar34 = uVar33 - 1 & 0xffff;
  iVar27 = _LAB_2c61afb8 + uVar34 * 0x14;
  iVar35 = *(int *)(iVar27 + 4);
  piVar12 = (int *)(uint)*(ushort *)(iVar27 + 0xc);
  if (*(char *)(iVar35 + (int)piVar12) == '\0') {
    iVar35 = FUN_2c62ca20(iVar29,_LAB_2c61b2d0[uVar34 * 5]);
    piVar12 = (int *)0x0;
    if (iVar35 != 0) {
      iVar35 = FUN_2c62b108(iVar35 + 8,0x57,&piStack_84);
      piVar12 = piStack_84;
      if (iVar35 != 1) {
        piVar12 = (int *)FUN_2c6033b4(iVar13,0,0x57);
      }
      piVar12 = (int *)(int)(short)((short)piVar12[2] + sVar9);
    }
    if (sStack_8e + 1 < (int)((int)piVar12 + ((iStack_f8 + iVar36) - iVar18))) {
      iVar35 = _LAB_2c61b2d0[uVar34 * 5 + 1];
      if (*(char *)(iVar35 + (uint)*(ushort *)(_LAB_2c61b2d0 + uVar34 * 5 + 3)) != '\0')
      goto LAB_2c61b4be;
      goto LAB_2c61b17c;
    }
LAB_2c61af2a:
    if (iStack_f8 + iVar36 < (int)sStack_8a) {
      sVar10 = (short)(iStack_f8 + iVar36);
      goto LAB_2c61af40;
    }
    iStack_b4 = 0;
    uStack_ec = 0;
  }
  else {
    if (((int)*(short *)(iVar27 + 0x10) + iVar36 + iStack_f8) - iVar18 <= sStack_8e + 1)
    goto LAB_2c61af2a;
LAB_2c61b4be:
    uVar11 = FUN_2c66c4ec(iVar35);
    iVar27 = _LAB_2c61b6b8 + uVar34 * 0x14;
    *(undefined2 *)(iVar27 + 0xc) = uVar11;
    piVar12 = (int *)FUN_2c62b85c(iVar35,uVar11,*(undefined4 *)(iVar27 + 8),
                                  (int)*(short *)(iVar27 + 0x12),0);
    *(short *)(iVar27 + 0xe) = (short)piVar12;
LAB_2c61b17c:
    if (iStack_f8 + iVar36 < (int)sStack_8a) goto LAB_2c61b114;
    uStack_ec = (*(byte *)(iVar13 + 0x3c) & 7) >> 2;
    iStack_b4 = iVar17;
  }
  sVar10 = (short)iStack_f8 + (short)iVar36;
  bVar6 = FUN_2c6033b4(iVar13,0,0x5b);
  puVar31 = _LAB_2c61b2dc;
  if (bVar6 - 2 < 2) {
    uVar21 = 0;
    iVar35 = _LAB_2c61b6b8;
    uVar28 = uStack_ac;
    if (iStack_e4 == 0) {
      uVar28 = 0;
    }
    do {
      psVar1 = (short *)(iVar35 + 0xe);
      uVar21 = uVar21 + 1;
      psVar14 = (short *)(iVar35 + 0x12);
      iVar35 = iVar35 + 0x14;
      sVar25 = (short)uVar28 + *psVar1 + *psVar14;
      uVar28 = (uint)sVar25;
    } while (uVar33 != uVar21);
    sVar2 = *(short *)(_LAB_2c61b6b8 + uVar34 * 0x14 + 0x12);
    if ((short)(sVar25 - sVar2) < iVar26) {
      sVar25 = (sVar2 + sVar8) - sVar25;
    }
    else {
      sVar25 = 0;
    }
    if (bVar6 == 2) {
      sVar25 = sVar25 >> 1;
    }
    sVar7 = sVar7 + sVar25;
    uVar33 = uVar21;
  }
  piVar22 = _LAB_2c61b2d0 + uVar33 * 5;
  piVar15 = _LAB_2c61b2d0;
  do {
    iVar36 = piVar15[1];
    sStack_a2 = (*(short *)(piVar15[2] + 10) - (short)piVar15[4]) + (sVar10 - sVar37);
    sStack_a4 = sVar7;
    iVar35 = FUN_2c62b108(*piVar15 + 8,0x55,&piStack_84);
    if (iVar35 != 1) {
      piStack_84 = (int *)FUN_2c6033b4(iVar13,0,0x55);
    }
    piStack_58 = piStack_84;
    iVar35 = FUN_2c62b108(*piVar15 + 8,0x56,&piStack_84);
    if (iVar35 == 1) {
      bStack_44 = (byte)piStack_84;
    }
    else {
      bStack_44 = FUN_2c6033b4(iVar13,0,0x56);
    }
    iVar35 = FUN_2c62b108(*piVar15 + 8,0x57,&piStack_84);
    piVar12 = piStack_84;
    if (iVar35 != 1) {
      piVar12 = (int *)FUN_2c6033b4(iVar13,0,0x57);
    }
    apiStack_64[0] = piVar12;
    iVar35 = FUN_2c62b108(*piVar15 + 8,0x67,&piStack_84);
    if (iVar35 == 1) {
      bVar6 = (byte)piStack_84;
    }
    else {
      bVar6 = FUN_2c6033b4(iVar13,0,0x67);
    }
    bStack_40 = bStack_40 & 199 | (bVar6 & 7) << 3;
    if (bVar5 < 0xfd) {
      bStack_44 = (byte)((uint)bVar5 * (uint)bStack_44 >> 8);
    }
    uVar3 = *(ushort *)(piVar15 + 3);
    if (uStack_ec == 0) {
      iStack_e4._0_2_ = 0;
      sVar25 = 0;
    }
    else {
      iStack_e4._0_2_ = FUN_2c6298c0(piVar15[2],0x2e);
      sVar25 = (short)iStack_e4 * 3;
    }
    uStack_a0 = 0;
    sVar25 = (sStack_94 + sVar8) - sVar25;
    if (uVar3 != 0) {
      do {
        if (sStack_88 < sStack_a4) break;
        uVar19 = (*(code *)*puVar31)(iVar36,&uStack_a0);
        uVar20 = (*(code *)*puVar31)(uStack_a0 + iVar36,0);
        iVar35 = FUN_2c6298c0(piVar15[2],uVar19,uVar20);
        iVar27 = sStack_a4 + iVar35 + (int)*(short *)((int)piVar15 + 0x12);
        if (sStack_8c <= iVar27) {
          if ((uStack_ec == 0) || (iVar27 <= sVar25)) {
            func_0x2c613140(iVar16,apiStack_64,&sStack_a4,uVar19);
            if (iVar35 != 0) {
              sStack_a4 = (short)iVar35 + sStack_a4 + *(short *)((int)piVar15 + 0x12);
            }
            goto LAB_2c61b30a;
          }
          iVar35 = 3;
          do {
            func_0x2c613140(iVar16,apiStack_64,&sStack_a4,0x2e);
            iVar35 = iVar35 + -1;
            sStack_a4 = sStack_a4 + *(short *)((int)piVar15 + 0x12) + (short)iStack_e4;
          } while (iVar35 != 0);
          if ((int)sStack_a4 <= (int)sVar25) {
            sStack_a4 = sVar25 + 1;
          }
          break;
        }
        if (iVar35 != 0) {
          sStack_a4 = (short)iVar35 + sStack_a4 + *(short *)((int)piVar15 + 0x12);
        }
LAB_2c61b30a:
      } while (uStack_a0 < uVar3);
    }
    iVar35 = FUN_2c62b108(*piVar15 + 8,0x5a,&piStack_84);
    if (iVar35 == 1) {
      piVar12 = (int *)0x1;
      piVar32 = piStack_84;
      piVar4 = piStack_84;
    }
    else {
      piVar12 = (int *)FUN_2c6033b4(iVar13,0,0x5a);
      piVar32 = (int *)((uint)piVar12 & 0xff);
      piVar4 = piVar12;
    }
    if (((uint)piVar4 & 0xff) != 0) {
      piVar12 = (int *)FUN_2c6120a0(&piStack_84);
      piStack_84 = piStack_58;
      if (*(char *)((int)apiStack_64[0] + 0xe) == '\0') {
        iVar35 = 1;
      }
      else {
        iVar35 = (int)*(char *)(piVar15[2] + 0xe);
      }
      uStack_80 = (undefined2)iVar35;
      bStack_79 = bStack_79 & 0xfc | (byte)(((uint)bStack_40 << 0x1a) >> 0x1d) & 3;
      bStack_7a = bStack_44;
      if ((int)piVar32 << 0x1e < 0) {
        sStack_9a = sStack_a2 + (short)((short)piVar15[4] - iVar18 >> 1) + (short)(iVar35 >> 1);
        sStack_98 = sStack_a4;
        sStack_9c = sVar7;
        sStack_96 = sStack_9a;
        piVar12 = (int *)FUN_2c6120f4(iVar16,&piStack_84,&sStack_9c,&sStack_98);
      }
      if ((int)piVar32 << 0x1f < 0) {
        sStack_9a = (((sStack_a2 - sVar9) + (short)piVar15[4]) - *(short *)(piVar15[2] + 10)) -
                    (short)*(char *)(piVar15[2] + 0xd);
        sStack_98 = sStack_a4;
        sStack_9c = sVar7;
        sStack_96 = sStack_9a;
        piVar12 = (int *)FUN_2c6120f4(iVar16,&piStack_84,&sStack_9c,&sStack_98);
      }
    }
    piVar15 = piVar15 + 5;
    sVar7 = sStack_a4;
  } while (piVar22 != piVar15);
  if (iStack_b4 != 0) goto LAB_2c61b114;
LAB_2c61af40:
  iStack_f8 = (int)sVar10;
  if ((sStack_86 + 1 < iStack_f8) ||
     (iStack_e4 = 0, iVar35 = iVar26, sVar7 = sStack_94, piStack_f0 == (int *)0x0))
  goto LAB_2c61b114;
  goto LAB_2c61ae52;
LAB_2c61b114:
  *(undefined4 *)(iVar16 + 8) = uVar23;
LAB_2c61acd0:
  if (*_LAB_2c61afb0 == iStack_3c) {
    return piVar12;
  }
LAB_2c61b6b2:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


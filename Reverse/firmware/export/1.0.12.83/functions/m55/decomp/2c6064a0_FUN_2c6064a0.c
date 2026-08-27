/* FUN_2c6064a0 @ 0x2c6064a0 */

/* WARNING: Possible PIC construction at 0x2c606784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c60670e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c606896: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c6065f2: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x2c606712) */
/* WARNING: Removing unreachable block (ram,0x2c60689a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c6064a0(undefined4 param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  ushort uVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined2 uVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  char *pcVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  undefined4 extraout_r1;
  int *piVar24;
  ushort *puVar25;
  uint uVar26;
  uint unaff_r4;
  char *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  undefined8 unaff_d8;
  ulonglong uVar27;
  undefined8 uVar28;
  ulonglong uVar29;
  short asStack_dc [4];
  short sStack_d4;
  short sStack_d2;
  short sStack_d0;
  short sStack_ce;
  short sStack_cc;
  short sStack_ca;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  short *psStack_c0;
  short *psStack_bc;
  undefined4 uStack_98;
  short sStack_84;
  byte bStack_81;
  undefined4 uStack_80;
  int iStack_60;
  undefined1 uStack_54;
  undefined4 uStack_50;
  short sStack_4c;
  byte bStack_4a;
  byte bStack_49;
  undefined1 uStack_40;
  undefined4 uStack_3c;
  short sStack_38;
  undefined4 uStack_34;
  char *pcStack_30;
  int aiStack_2c [4];
  uint uStack_1c;
  uint uStack_18;
  
  uStack_1c = *_LAB_2c606774;
  uVar19 = FUN_2c602408(param_2,param_2,param_3,0);
  uVar27 = func_0x2c602404(param_2);
  pcVar12 = (char *)uVar27;
  if (uVar19 == 1) {
    uVar9 = *(ushort *)(pcVar12 + 0x20);
    uVar26 = uVar9 | 0x20;
    uVar27 = (ulonglong)CONCAT24(uVar9,pcVar12) | 0x2000000000;
    if (uVar9 != uVar26) {
LAB_2c606576:
      uVar27 = CONCAT44(uVar26,pcVar12);
      uVar19 = *_LAB_2c606774 ^ uStack_1c;
joined_r0x2c606582:
      uVar21 = 0;
      if (uVar19 == 0) {
SUB_2c6061ec:
        uVar9 = *(ushort *)(pcVar12 + 0x20);
        if (uVar9 == uVar26) {
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
        *(undefined4 *)((int)register0x00000054 + -8) = unaff_r11;
        *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r10;
        *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r9;
        *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r8;
        *(int *)((int)register0x00000054 + -0x18) = unaff_r7;
        *(int *)((int)register0x00000054 + -0x1c) = unaff_r6;
        *(char **)((int)register0x00000054 + -0x20) = unaff_r5;
        *(uint *)((int)register0x00000054 + -0x24) = unaff_r4;
        *(undefined8 *)((int)register0x00000054 + -0x2c) = unaff_d8;
        *(short *)(pcVar12 + 0x20) = (short)uVar26;
        iVar10 = FUN_2c603eb8(pcVar12,(uint)uVar9,uVar26);
        *(int *)((int)register0x00000054 + -0x38) = iVar10;
        if (iVar10 != 0) {
          uVar15 = FUN_2c62bf1c(0x280);
          *(undefined4 *)((int)register0x00000054 + -0x40) = uVar15;
          FUN_2c62c3b0(uVar15,0x280);
          if ((*(ushort *)(pcVar12 + 0x22) & 0x1f8) != 0) {
            uVar21 = 0;
            *(char **)((int)register0x00000054 + -0x48) = pcVar12;
            uVar19 = 0;
            *(uint *)((int)register0x00000054 + -0x3c) = ~uVar26;
            do {
              iVar13 = *(int *)((int)register0x00000054 + -0x48);
              iVar11 = *(int *)(iVar13 + 0xc);
              iVar10 = iVar11 + uVar21 * 8;
              uVar16 = *(uint *)(iVar10 + 4);
              *(int *)((int)register0x00000054 + -0x44) = iVar10;
              uVar16 = FUN_2c60413c(uVar16 & 0xffffff);
              iVar10 = *(int *)(iVar13 + 0xc);
              *(uint *)((int)register0x00000054 + -0x4c) = uVar16;
              iVar10 = FUN_2c604140(*(uint *)(iVar10 + uVar21 * 8 + 4) & 0xffffff);
              if (((uVar16 & *(uint *)((int)register0x00000054 + -0x3c)) == 0) &&
                 (uVar16 = *(byte *)(*(int *)((int)register0x00000054 + -0x44) + 7) & 2,
                 (*(byte *)(*(int *)((int)register0x00000054 + -0x44) + 7) & 2) == 0)) {
                piVar24 = *(int **)(iVar11 + uVar21 * 8);
                uVar17 = (uint)*(ushort *)(piVar24 + 1);
                if (uVar17 == 0xffff) {
                  puVar25 = (ushort *)*piVar24;
                  uVar2 = *puVar25;
                  while (uVar16 = (uint)uVar2, uVar16 != 0) {
                    if ((uVar16 & 0x3fff) == 0x66) {
                      if (-1 < (int)(uVar16 << 0x10)) {
                        if ((int)(uVar16 << 0x11) < 0) goto LAB_2c60643a;
                        piVar24 = *(int **)(puVar25 + 2);
                        goto LAB_2c606366;
                      }
                      break;
                    }
                    puVar25 = puVar25 + 4;
                    uVar2 = *puVar25;
                  }
                  goto LAB_2c6062c4;
                }
                uVar22 = (uint)*(byte *)((int)piVar24 + 7);
                if (uVar22 == 0) goto LAB_2c6062c4;
                if (uVar22 != 1) {
                  puVar25 = (ushort *)
                            ((short)(ushort)*(byte *)((int)piVar24 + 7) * 4 + -2 + *piVar24);
                  do {
                    puVar25 = puVar25 + 1;
                    uVar17 = (uint)*puVar25;
                    if ((uVar17 & 0x3fff) == 0x66) {
                      if (-1 < (int)(uVar17 << 0x10)) {
                        if ((int)(uVar17 << 0x11) < 0) goto LAB_2c60643a;
                        piVar24 = *(int **)(*piVar24 + uVar16 * 4);
                        goto LAB_2c606366;
                      }
                      break;
                    }
                    uVar16 = uVar16 + 1;
                  } while (uVar22 != uVar16);
                  goto LAB_2c6062c4;
                }
                if (((uVar17 & 0x3fff) != 0x66) || ((int)(uVar17 << 0x10) < 0)) goto LAB_2c6062c4;
                if ((int)(uVar17 << 0x11) < 0) {
LAB_2c60643a:
                  piVar24 = (int *)FUN_2c62b068(0x66);
                }
                else {
                  piVar24 = (int *)*piVar24;
                }
LAB_2c606366:
                bVar1 = uVar19 < 0x20;
                if ((*(short *)*piVar24 != 0) && (bVar1)) {
                  iVar11 = 0;
                  *(uint *)((int)register0x00000054 + -0x34) = uVar21;
                  uVar21 = uVar19;
                  do {
                    if (uVar21 != 0) {
                      uVar16 = 0;
                      iVar13 = *(int *)((int)register0x00000054 + -0x40);
                      do {
                        uVar15 = *(undefined4 *)(iVar13 + 4);
                        uVar19 = FUN_2c60413c(uVar15);
                        iVar18 = FUN_2c604140(uVar15);
                        iVar23 = *piVar24;
                        if (((*(short *)(iVar13 + 8) == *(short *)(iVar23 + iVar11)) &&
                            (iVar10 == iVar18)) &&
                           (*(uint *)((int)register0x00000054 + -0x4c) <= uVar19)) {
                          uVar19 = uVar21;
                          if (uVar21 != uVar16) goto LAB_2c6063c6;
                          break;
                        }
                        uVar16 = uVar16 + 1;
                        iVar13 = iVar13 + 0x14;
                      } while (uVar16 != uVar21);
                    }
                    iVar13 = *(int *)((int)register0x00000054 + -0x40);
                    uVar19 = uVar21 + 1;
                    *(short *)(iVar13 + uVar21 * 0x14) = (short)piVar24[3];
                    iVar13 = iVar13 + uVar21 * 0x14;
                    *(short *)(iVar13 + 2) = (short)piVar24[4];
                    *(int *)(iVar13 + 0xc) = piVar24[2];
                    *(undefined2 *)(iVar13 + 8) = *(undefined2 *)(*piVar24 + iVar11);
                    *(int *)(iVar13 + 0x10) = piVar24[1];
                    *(uint *)(iVar13 + 4) =
                         *(uint *)(*(int *)((int)register0x00000054 + -0x44) + 4) & 0xffffff;
                    iVar23 = *piVar24;
LAB_2c6063c6:
                    iVar11 = iVar11 + 2;
                    bVar1 = uVar19 < 0x20;
                  } while ((*(short *)(iVar23 + iVar11) != 0) && (uVar21 = uVar19, bVar1));
                  uVar21 = *(uint *)((int)register0x00000054 + -0x34);
                }
              }
              else {
LAB_2c6062c4:
                if (uVar19 < 0x20) {
                  bVar1 = true;
                }
                else {
                  bVar1 = false;
                }
              }
              uVar21 = uVar21 + 1;
            } while ((uVar21 < (*(ushort *)(*(int *)((int)register0x00000054 + -0x48) + 0x22) &
                               0x1ff) >> 3) && (bVar1));
            pcVar12 = *(char **)((int)register0x00000054 + -0x48);
            if (uVar19 != 0) {
              iVar10 = *(int *)((int)register0x00000054 + -0x40);
              uVar21 = 0;
              do {
                uVar21 = uVar21 + 1;
                uVar15 = FUN_2c604140(*(undefined4 *)(iVar10 + 4));
                *(int *)((int)register0x00000054 + -0x58) = iVar10;
                FUN_2c603cfc(pcVar12,uVar15,uVar9,uVar26);
                iVar10 = iVar10 + 0x14;
              } while (uVar19 != uVar21);
            }
          }
          FUN_2c62c040(*(undefined4 *)((int)register0x00000054 + -0x40));
          if (*(int *)((int)register0x00000054 + -0x38) == 1) {
            FUN_2c607df0(pcVar12);
            return;
          }
          if (*(int *)((int)register0x00000054 + -0x38) == 3) {
            FUN_2c6036cc(pcVar12,0xf0000,0xffff);
            return;
          }
          if (*(int *)((int)register0x00000054 + -0x38) == 2) {
            FUN_2c607df0(pcVar12);
            FUN_2c600bac(pcVar12);
            return;
          }
        }
        return;
      }
      goto LAB_2c606918;
    }
  }
  else if (uVar19 == 8) {
    uVar26 = *(ushort *)(pcVar12 + 0x20) & 0xffffffdf;
    if (*(ushort *)(pcVar12 + 0x20) != uVar26) {
      unaff_lr = 0x2c6065f7;
      unaff_r4 = uVar19;
      unaff_r5 = pcVar12;
      unaff_r6 = param_2;
      register0x00000054 = (BADSPACEBASE *)&pcStack_30;
      goto SUB_2c6061ec;
    }
    FUN_2c602410(param_2);
    uVar27 = FUN_2c5ff624();
    if (((int)uVar27 == 0) && (*(int *)(pcVar12 + 0x1c) << 0x1c < 0)) {
      uVar9 = *(ushort *)(pcVar12 + 0x20);
      uVar19 = (uint)uVar9;
      if ((uVar9 & 1) == 0) {
        uVar26 = uVar19 | 1;
      }
      else {
        uVar26 = uVar19 & 0xfffffffe;
        uVar29 = ((ulonglong)uVar9 & 0xfffffffe) << 0x20;
        if (uVar19 == uVar26) goto LAB_2c606620;
      }
LAB_2c60661a:
      uVar29 = func_0x2c6061ec(pcVar12,uVar26);
      goto LAB_2c606620;
    }
  }
  else if (uVar19 == 3) {
    uVar9 = *(ushort *)(pcVar12 + 0x20);
    uVar26 = uVar9 & 0xffffffdf;
    uVar27 = (ulonglong)CONCAT24(uVar9,pcVar12) & 0xffffffdfffffffff;
    if (uVar9 != uVar26) goto LAB_2c606576;
  }
  else if (uVar19 == 0x2a) {
    uVar29 = FUN_2c6041fc();
    uVar27 = uVar29 & 0xffffffff00000000;
    if ((int)uVar29 != 0) {
      iVar10 = 0;
      do {
        iVar11 = iVar10 * 4;
        iVar10 = iVar10 + 1;
        uVar27 = FUN_2c607248(*(undefined4 *)(**(int **)(pcVar12 + 8) + iVar11));
      } while ((int)uVar29 != iVar10);
    }
  }
  else if (uVar19 == 0xd) {
    unaff_r7 = *(uint *)(pcVar12 + 0x1c) << 0x1c;
    if (unaff_r7 < 0) {
      uVar28 = FUN_2c602410(param_2);
      uVar26 = (uint)((ulonglong)uVar28 >> 0x20);
      pcVar20 = (char *)uVar28;
      unaff_r4 = (uint)*pcVar20;
      if ((unaff_r4 & 0xfffffffd) == 0x11) {
        uVar9 = *(ushort *)(pcVar12 + 0x20);
        uVar26 = uVar9 | 1;
        uVar29 = (ulonglong)CONCAT24(uVar9,pcVar20) | 0x100000000;
        if (-1 < (int)((uint)uVar9 << 0x1f)) goto LAB_2c60661a;
      }
      else {
        if (((unaff_r4 == 0x14) || (unaff_r4 == 0x12)) &&
           (uVar26 = *(ushort *)(pcVar12 + 0x20) & 0xfffffffe, *(ushort *)(pcVar12 + 0x20) != uVar26
           )) {
          unaff_lr = 0x2c60689b;
          unaff_r5 = pcVar12;
          unaff_r6 = param_2;
          register0x00000054 = (BADSPACEBASE *)&pcStack_30;
          goto SUB_2c6061ec;
        }
        uVar27 = CONCAT44(uVar26,pcVar20);
        uVar29 = CONCAT44(uVar26,pcVar20);
        if (unaff_r4 == 10) goto LAB_2c606536;
      }
LAB_2c606620:
      uVar27 = uVar29;
      piVar24 = DAT_2c60239c;
      uVar19 = *_LAB_2c606774 ^ uStack_1c;
      uVar21 = 0;
      if (uVar19 == 0) {
        uVar19 = *DAT_2c602398;
        if (pcVar12 == (char *)0x0) {
          uVar28 = 0x1c00000001;
        }
        else {
          aiStack_2c[2] = 0;
          aiStack_2c[3] = *DAT_2c60239c;
          uStack_18 = uStack_18 & 0xfffffff0;
          aiStack_2c[0] = CONCAT31(aiStack_2c[0]._1_3_,0x1c);
          aiStack_2c[1] = 0;
          uStack_1c = 0;
          *DAT_2c60239c = (int)&uStack_34;
          uStack_34 = pcVar12;
          pcStack_30 = pcVar12;
          uVar28 = FUN_2c602140();
          *piVar24 = aiStack_2c[3];
        }
        if ((*DAT_2c602398 ^ uVar19) != 0) {
                    /* WARNING: Subroutine does not return */
          stack_chk_fail((int)uVar28,(int)((ulonglong)uVar28 >> 0x20),*DAT_2c602398 ^ uVar19,0);
        }
        return;
      }
      goto LAB_2c606918;
    }
    if (((*(uint *)(pcVar12 + 0x1c) & 0x810) == 0x810) &&
       (uVar27 = func_0x2c5ff1a8(), (int)uVar27 == 0)) {
      iVar10 = FUN_2c605068(pcVar12);
      iVar11 = FUN_2c605090(pcVar12);
      uVar27 = FUN_2c602410(param_2);
      cVar4 = *(char *)uVar27;
      if (cVar4 == '\x12') {
LAB_2c6068a4:
        sVar5 = FUN_2c604a38(pcVar12);
        uVar21 = FUN_2c6073f8(pcVar12);
        uVar27 = CONCAT44(*_LAB_2c606948 ^ uStack_1c,uVar21);
        uVar19 = 0;
        if ((*_LAB_2c606948 ^ uStack_1c) == 0) {
          if ((int)uVar21 < 0) {
            uVar21 = uVar21 + 3;
          }
          sVar5 = sVar5 + (short)((int)uVar21 >> 2);
          goto LAB_2c6066cc;
        }
      }
      else {
        if (cVar4 != '\x11') {
          if (cVar4 == '\x13') {
            uVar19 = FUN_2c604a04(pcVar12);
            if (((uVar19 & 3) != 0) && ((0 < iVar10 || (0 < iVar11)))) {
              sVar5 = FUN_2c604a2c(pcVar12);
              uVar21 = FUN_2c6073ec(pcVar12);
              uVar27 = CONCAT44(*_LAB_2c606948 ^ uStack_1c,uVar21);
              uVar19 = 0;
              if ((*_LAB_2c606948 ^ uStack_1c) == 0) {
                if ((int)uVar21 < 0) {
                  uVar21 = uVar21 + 3;
                }
                sVar5 = sVar5 + (short)((int)uVar21 >> 2);
LAB_2c606908:
                FUN_2c62e838(pcVar12,DAT_2c6051c0);
                sVar6 = 0;
                if (*(int *)(pcVar12 + 8) != 0) {
                  sVar6 = -*(short *)(*(int *)(pcVar12 + 8) + 0x10);
                }
                if ((short)(sVar6 - sVar5) != 0) {
                  FUN_2c604b28(pcVar12,(int)(short)(sVar6 - sVar5),0,0);
                  return;
                }
                return;
              }
              goto LAB_2c606918;
            }
            goto LAB_2c6068a4;
          }
          if (cVar4 != '\x14') goto LAB_2c606536;
          uVar19 = FUN_2c604a04(pcVar12);
          if (((uVar19 & 3) != 0) && ((0 < iVar10 || (0 < iVar11)))) {
            sVar5 = FUN_2c604a2c(pcVar12);
            uVar21 = FUN_2c6073ec(pcVar12);
            uVar27 = CONCAT44(*_LAB_2c606948 ^ uStack_1c,uVar21);
            uVar19 = 0;
            if ((*_LAB_2c606948 ^ uStack_1c) == 0) {
              if ((int)uVar21 < 0) {
                uVar21 = uVar21 + 3;
              }
              sVar5 = sVar5 - (short)((int)uVar21 >> 2);
              goto LAB_2c606908;
            }
            goto LAB_2c606918;
          }
        }
        sVar5 = FUN_2c604a38(pcVar12);
        uVar21 = FUN_2c6073f8(pcVar12);
        uVar27 = CONCAT44(*_LAB_2c606774 ^ uStack_1c,uVar21);
        uVar19 = 0;
        if ((*_LAB_2c606774 ^ uStack_1c) == 0) {
          if ((int)uVar21 < 0) {
            uVar21 = uVar21 + 3;
          }
          sVar5 = sVar5 - (short)((int)uVar21 >> 2);
LAB_2c6066cc:
          FUN_2c62e838(pcVar12,DAT_2c605204);
          if (*(int *)(pcVar12 + 8) == 0) {
            sVar6 = 0;
          }
          else {
            sVar6 = -*(short *)(*(int *)(pcVar12 + 8) + 0x12);
          }
          if ((short)(sVar6 - sVar5) != 0) {
            FUN_2c604b28(pcVar12,0,(int)(short)(sVar6 - sVar5),0);
            return;
          }
          return;
        }
      }
      goto LAB_2c606918;
    }
  }
  else if (uVar19 == 0xe) {
    if (*(int *)(pcVar12 + 0x1c) << 0x15 < 0) {
      FUN_2c605254(pcVar12,1);
    }
    uVar15 = 0;
    if (*(int *)(pcVar12 + 8) != 0) {
      uVar15 = *(undefined4 *)(*(int *)(pcVar12 + 8) + 8);
    }
    iVar10 = func_0x2c603124(uVar15);
    iVar11 = FUN_2c5ff4d8();
    if (iVar11 == 0) {
      func_0x2c6025f8(param_2);
    }
    pcVar20 = (char *)FUN_2c5ff4e4();
    if ((pcVar20 == (char *)0x2) || (pcVar20 == &Reset)) {
      uVar19 = 6;
    }
    else {
      uVar19 = 2;
    }
    uVar21 = (uint)*(ushort *)(pcVar12 + 0x20);
    if (iVar10 == 0) {
      uVar16 = uVar19 | uVar21;
      uVar27 = CONCAT44(uVar16,pcVar20);
      if ((uVar19 & ~uVar21) != 0) {
        unaff_lr = 0x2c606713;
        uVar26 = uVar16;
        unaff_r4 = 0;
        unaff_r5 = pcVar12;
        unaff_r6 = param_2;
        register0x00000054 = (BADSPACEBASE *)&pcStack_30;
        goto SUB_2c6061ec;
      }
      uVar26 = uVar19 | uVar21 & 0xfffffff7;
      if (uVar26 != uVar16) {
        uVar27 = CONCAT44(*_LAB_2c606774 ^ uStack_1c,pcVar20);
        uVar19 = 0;
        uVar21 = uVar26;
        if ((*_LAB_2c606774 ^ uStack_1c) != 0) goto LAB_2c606918;
        goto SUB_2c6061ec;
      }
    }
    else {
      uVar26 = uVar19 | uVar21 | 8;
      uVar27 = CONCAT44(uVar19 | uVar21,pcVar20) | 0x800000000;
      if (uVar21 != uVar26) {
LAB_2c6065d2:
        uVar27 = CONCAT44(uVar26,pcVar20);
        uVar19 = *_LAB_2c606774 ^ uStack_1c;
        goto joined_r0x2c606582;
      }
    }
  }
  else if (uVar19 == 9) {
    uVar9 = *(ushort *)(pcVar12 + 0x20);
    uVar26 = uVar9 | 0x40;
    uVar27 = (ulonglong)CONCAT24(uVar9,pcVar12) | 0x4000000000;
    if (uVar9 != uVar26) goto LAB_2c606576;
  }
  else if (uVar19 == 10) {
    uVar26 = *(ushort *)(pcVar12 + 0x20) & 0xffffffbf;
    if (*(ushort *)(pcVar12 + 0x20) != uVar26) {
      unaff_lr = 0x2c606789;
      unaff_r4 = uVar19;
      unaff_r5 = pcVar12;
      unaff_r6 = param_2;
      register0x00000054 = (BADSPACEBASE *)&pcStack_30;
      goto SUB_2c6061ec;
    }
    uVar27 = func_0x2c6049f4(pcVar12);
    if ((int)uVar27 == 2) {
      FUN_2c6052c8(pcVar12,aiStack_2c,aiStack_2c + 2);
      FUN_2c6078f0(pcVar12,aiStack_2c);
      uVar27 = FUN_2c6078f0(pcVar12,aiStack_2c + 2);
    }
  }
  else if (uVar19 == 0xf) {
    uVar9 = *(ushort *)(pcVar12 + 0x20);
    uVar26 = uVar9 & 0xfffffff1;
    uVar27 = (ulonglong)CONCAT24(uVar9,pcVar12) & 0xfffffff1ffffffff;
    pcVar20 = pcVar12;
    if (uVar9 != uVar26) goto LAB_2c6065d2;
  }
  else if (uVar19 == 0x29) {
    cVar4 = FUN_2c6033b4(pcVar12,0,9);
    sVar5 = FUN_2c6033b4(pcVar12,0,10);
    if ((sVar5 != 0) || (cVar4 != '\0')) {
      FUN_2c607248(pcVar12);
    }
    uVar29 = FUN_2c6041fc(pcVar12);
    uVar27 = uVar29 & 0xffffffff00000000;
    if ((int)uVar29 != 0) {
      iVar10 = 0;
      do {
        iVar11 = iVar10 * 4;
        iVar10 = iVar10 + 1;
        uVar27 = FUN_2c607248(*(undefined4 *)(**(int **)(pcVar12 + 8) + iVar11));
      } while ((int)uVar29 != iVar10);
    }
  }
  else if (uVar19 == 0x22) {
    sVar5 = FUN_2c6033b4(pcVar12,0,1);
    sVar6 = FUN_2c6033b4(pcVar12,0,4);
    cVar4 = FUN_2c6033b4(pcVar12,0,9);
    uVar9 = FUN_2c6033b4(pcVar12,0,10);
    uVar27 = CONCAT44(extraout_r1,(uint)uVar9);
    if ((((uVar9 != 0) || (cVar4 != '\0')) || (sVar5 == 0x27d1)) || (sVar6 == 0x27d1)) {
      uVar19 = *_LAB_2c606948 ^ uStack_1c;
      uVar21 = 0;
      if (uVar19 == 0) {
        pcVar12[0x22] = pcVar12[0x22] | 1;
        iVar10 = FUN_2c604178();
        *(byte *)(iVar10 + 0x22) = *(byte *)(iVar10 + 0x22) | 2;
        iVar10 = FUN_2c604188();
        if (*(int *)(iVar10 + 4) == 0) {
          return;
        }
        FUN_2c62be4c();
        return;
      }
      goto LAB_2c606918;
    }
  }
  else {
    if (uVar19 == 0x13) {
      iVar10 = FUN_2c600ac0(pcVar12,0);
      uVar27 = CONCAT44(iVar10,iVar10);
      uVar19 = *_LAB_2c606774 ^ uStack_1c;
      uVar21 = 0;
      if (uVar19 == 0) {
        if (*(char *)(param_2 + 8) == '\x13') {
          iVar11 = (int)**(short **)(param_2 + 0x10);
          if (iVar10 < iVar11) {
            iVar10 = iVar11;
          }
          **(short **)(param_2 + 0x10) = (short)iVar10;
        }
        return;
      }
      goto LAB_2c606918;
    }
    if ((uVar19 < 0x19) && ((int)((0x1240000U >> (uVar19 & 0xff)) << 0x1f) < 0)) {
      uVar19 = *_LAB_2c606774 ^ uStack_1c;
      uVar21 = 0;
      if (uVar19 == 0) {
        aiStack_2c[0] = *_LAB_2c605fa0;
        iVar10 = FUN_2c602408();
        iVar11 = FUN_2c602400(param_2);
        if (iVar10 == 0x12) {
          pcVar12 = (char *)FUN_2c602410(param_2);
          if (*pcVar12 != '\x02') {
            iVar10 = FUN_2c6033b4(iVar11,0,0x17);
            if (iVar10 == 0) {
              sVar5 = FUN_2c6033b4(iVar11,0,0xb);
              sVar6 = FUN_2c6033b4(iVar11,0,0x68);
              sVar7 = FUN_2c6033b4(iVar11,0,0x69);
              sStack_ca = *(short *)(iVar11 + 0x16) - sVar7;
              sStack_cc = *(short *)(iVar11 + 0x14) - sVar6;
              uStack_c8 = CONCAT22(sVar7 + *(short *)(iVar11 + 0x1a),
                                   *(short *)(iVar11 + 0x18) + sVar6);
              iVar10 = FUN_2c62a998(*(undefined4 *)(pcVar12 + 4),&sStack_cc,(int)sVar5);
              if ((iVar10 == 0) || (bVar3 = FUN_2c6033b4(iVar11,0,0x21), bVar3 < 0xfd)) {
                *pcVar12 = '\x01';
              }
              else {
                *pcVar12 = '\0';
              }
            }
            else {
              *pcVar12 = '\x02';
            }
          }
        }
        else if (iVar10 == 0x15) {
          uVar15 = FUN_2c602608(param_2);
          FUN_2c61314c(&sStack_84);
          iVar10 = FUN_2c6033b4(iVar11,0,0x34);
          if (iVar10 != 0) {
            bStack_49 = bStack_49 | 1;
          }
          FUN_2c6004cc(iVar11,0,&sStack_84);
          sVar5 = FUN_2c6033b4(iVar11,0,0x68);
          sStack_ce = FUN_2c6033b4(iVar11,0,0x69);
          sStack_d4 = *(short *)(iVar11 + 0x14) - sVar5;
          sStack_d0 = sVar5 + *(short *)(iVar11 + 0x18);
          sStack_d2 = *(short *)(iVar11 + 0x16) - sStack_ce;
          sStack_ce = sStack_ce + *(short *)(iVar11 + 0x1a);
          FUN_2c600b9c(&sStack_cc,uVar15);
          uStack_c4 = 0;
          uStack_98 = 0;
          uStack_c8 = _LAB_2c605fa4;
          psStack_c0 = &sStack_d4;
          psStack_bc = &sStack_84;
          FUN_2c602340(iVar11,0x1a,&sStack_cc);
          iVar13 = FUN_2c6033b4(iVar11,0,0x17);
          iVar10 = iStack_60;
          if ((iVar13 == 0) || (sStack_84 == 0)) {
            FUN_2c61319c(uVar15,&sStack_84,&sStack_d4);
          }
          else {
            iStack_60 = 0;
            FUN_2c61319c(uVar15,&sStack_84,&sStack_d4);
            uVar14 = FUN_2c62bf1c(0x18);
            FUN_2c6144a0(uVar14,iVar11 + 0x14,(int)sStack_84,0);
            FUN_2c613e5c(uVar14,iVar11 + 0x120);
            if (iVar10 != 0) {
              bStack_81 = 0;
              bStack_4a = 0;
              uStack_40 = 0;
              pcStack_30 = (char *)((uint)pcStack_30 & 0xffffff00);
              iStack_60 = iVar10;
              FUN_2c61319c(uVar15,&sStack_84,&sStack_d4);
            }
          }
          FUN_2c602340(iVar11,0x1b,&sStack_cc);
        }
        else if (iVar10 == 0x18) {
          uVar15 = FUN_2c602608(param_2);
          FUN_2c6052c8(iVar11,asStack_dc,&sStack_d4);
          iVar10 = FUN_2c62a64c(asStack_dc);
          if ((iVar10 != 0) || (iVar10 = FUN_2c62a64c(&sStack_d4), iVar10 != 0)) {
            FUN_2c61314c(&sStack_84);
            bStack_81 = FUN_2c6033b4(iVar11,0x10000,0x21);
            if (2 < bStack_81) {
              uStack_80 = FUN_2c6033b4(iVar11,0x10000,0x20);
            }
            bStack_4a = FUN_2c6033b4(iVar11,0x10000,0x31);
            if (2 < bStack_4a) {
              sStack_4c = FUN_2c6033b4(iVar11,0x10000,0x32);
              if (sStack_4c < 1) {
                bStack_4a = 0;
              }
              else {
                uStack_50 = FUN_2c6033b4(iVar11,0x10000,0x30);
              }
            }
            bVar3 = FUN_2c6033b4(iVar11,0x10000,0x45);
            pcStack_30 = (char *)CONCAT31(pcStack_30._1_3_,bVar3);
            if (2 < bVar3) {
              sStack_38 = FUN_2c6033b4(iVar11,0x10000,0x40);
              if (sStack_38 < 1) {
                pcStack_30 = (char *)((uint)pcStack_30 & 0xffffff00);
              }
              else {
                uVar8 = FUN_2c6033b4(iVar11,0x10000,0x43);
                uStack_34 = (char *)CONCAT22(uVar8,(undefined2)uStack_34);
                uStack_3c = FUN_2c6033b4(iVar11,0x10000,0x44);
              }
            }
            bVar3 = FUN_2c6033b4(iVar11,0x10000,0x60);
            uVar19 = (uint)bStack_81;
            uVar26 = (uint)bVar3;
            if (uVar26 < 0xfd) {
              uVar21 = uVar26 * uVar19;
              uVar19 = uVar21 >> 8;
              uVar26 = ((int)uVar21 >> 8) * uVar26;
              bStack_81 = (byte)(uVar21 >> 8);
              uVar21 = uVar26 >> 8;
              bStack_4a = (byte)(uVar26 >> 8);
              pcStack_30 = (char *)CONCAT31(pcStack_30._1_3_,bStack_4a);
              uVar26 = uVar21;
            }
            else {
              uVar21 = (uint)pcStack_30 & 0xff;
              uVar26 = (uint)bStack_4a;
            }
            if ((uVar26 != 0 || uVar21 != 0) || uVar19 != 0) {
              sStack_84 = FUN_2c6033b4(iVar11,0x10000,0xb);
              FUN_2c600b9c(&sStack_cc,uVar15);
              uStack_c8 = _LAB_2c605fa4;
              uStack_c4 = 2;
              uStack_98 = 0x10000;
              psStack_bc = &sStack_84;
              iVar10 = FUN_2c62a64c(asStack_dc);
              if (iVar10 != 0) {
                psStack_c0 = asStack_dc;
                FUN_2c602340(iVar11,0x1a,&sStack_cc);
                FUN_2c61319c(uVar15,&sStack_84,asStack_dc);
                FUN_2c602340(iVar11,0x1b,&sStack_cc);
              }
              iVar10 = FUN_2c62a64c(&sStack_d4);
              if (iVar10 != 0) {
                psStack_c0 = &sStack_d4;
                FUN_2c602340(iVar11,0x1a,&sStack_cc);
                psStack_c0 = &sStack_d4;
                FUN_2c61319c(uVar15,&sStack_84,&sStack_d4);
                FUN_2c602340(iVar11,0x1b,&sStack_cc);
              }
            }
          }
          iVar10 = FUN_2c6033b4(iVar11,0,0x17);
          if ((iVar10 != 0) && (iVar10 = FUN_2c613f08(iVar11 + 0x120), iVar10 != 0)) {
            FUN_2c613f44();
            FUN_2c62c040(iVar10);
          }
          iVar10 = FUN_2c6033b4(iVar11,0,0x34);
          if (iVar10 != 0) {
            FUN_2c61314c(&sStack_84);
            bStack_81 = 0;
            uStack_54 = 0;
            uStack_40 = 0;
            pcStack_30 = (char *)((uint)pcStack_30 & 0xffffff00);
            FUN_2c6004cc(iVar11,0,&sStack_84);
            sVar5 = FUN_2c6033b4(iVar11,0,0x68);
            sStack_ce = FUN_2c6033b4(iVar11,0,0x69);
            sStack_d4 = *(short *)(iVar11 + 0x14) - sVar5;
            sStack_d0 = sVar5 + *(short *)(iVar11 + 0x18);
            sStack_d2 = *(short *)(iVar11 + 0x16) - sStack_ce;
            sStack_ce = sStack_ce + *(short *)(iVar11 + 0x1a);
            FUN_2c600b9c(&sStack_cc,uVar15);
            uStack_c8 = _LAB_2c605fa4;
            uStack_98 = 0;
            uStack_c4 = 1;
            psStack_c0 = &sStack_d4;
            psStack_bc = &sStack_84;
            FUN_2c602340(iVar11,0x1a,&sStack_cc);
            FUN_2c61319c(uVar15,&sStack_84,&sStack_d4);
            FUN_2c602340(iVar11,0x1b,&sStack_cc);
          }
        }
        if (*_LAB_2c605fa0 != aiStack_2c[0]) {
                    /* WARNING: Subroutine does not return */
          stack_chk_fail();
        }
        return;
      }
      goto LAB_2c606918;
    }
  }
LAB_2c606536:
  uVar19 = *_LAB_2c606774 ^ uStack_1c;
  uVar21 = 0;
  if (uVar19 == 0) {
    return;
  }
LAB_2c606918:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)uVar27,(int)(uVar27 >> 0x20),uVar19,uVar21);
}


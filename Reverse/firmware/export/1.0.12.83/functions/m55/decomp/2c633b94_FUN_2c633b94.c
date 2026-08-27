/* FUN_2c633b94 @ 0x2c633b94 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c633b94(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int *piVar15;
  char *pcVar16;
  uint uVar17;
  undefined4 unaff_r4;
  int iVar18;
  undefined4 unaff_r6;
  code *pcVar19;
  bool bVar20;
  bool bVar21;
  undefined8 uVar22;
  short sStack_bc;
  short sStack_ba;
  undefined1 auStack_b8 [4];
  short sStack_b4;
  short sStack_b2;
  short sStack_b0;
  short sStack_ae;
  short sStack_ac;
  short sStack_aa;
  int iStack_a0;
  byte bStack_89;
  undefined1 auStack_84 [3];
  byte bStack_81;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  iStack_24 = *_LAB_2c633e94;
  iVar8 = FUN_2c602110(_LAB_2c633e98,param_2,param_3,0);
  if (iVar8 == 1) {
    uVar9 = FUN_2c602408(param_2);
    uVar10 = FUN_2c602400(param_2);
    if (uVar9 == 0xe) {
      if (*_LAB_2c633e94 == iStack_24) {
        iVar12 = *DAT_2c632f14;
        iVar8 = FUN_2c6033b4(uVar10,0x70000,100,0);
        if (iVar8 == 0) {
          FUN_2c62e838(uVar10,DAT_2c632f18);
          *(byte *)(uVar10 + 0x54) = *(byte *)(uVar10 + 0x54) | 1;
        }
        else {
          FUN_2c62e7b4(&uStack_58);
          uStack_54 = DAT_2c632f18;
          uStack_30 = 0;
          uStack_3c = DAT_2c632f1c;
          uStack_38 = 1;
          uStack_34 = 1;
          uStack_58 = uVar10;
          iStack_2c = iVar8;
          FUN_2c62e8ec(&uStack_58);
        }
        if (*DAT_2c632f14 == iVar12) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      goto LAB_2c6340e6;
    }
    if (uVar9 == 0xd) {
      piVar15 = (int *)FUN_2c602410(param_2);
      piVar2 = DAT_2c60239c;
      iVar8 = *piVar15;
      if (iVar8 == 0x13) {
        if (*_LAB_2c6340f0 != iStack_24) goto LAB_2c6340e6;
        iVar8 = *(int *)(uVar10 + 0x44) + 1;
      }
      else {
        if (iVar8 != 0x14) {
          if (iVar8 == 0x11) {
            if (*_LAB_2c6340f0 == iStack_24) {
              iVar8 = *_LAB_2c633b90;
              FUN_2c637370(*(undefined4 *)(uVar10 + 0x24),*(undefined4 *)(uVar10 + 0x44),
                           &stack0xffffffe8,0);
              FUN_2c6033b4(uVar10,0,0x59);
              FUN_2c6033b4(uVar10,0,0x57);
              uVar11 = FUN_2c637598(*(undefined4 *)(uVar10 + 0x24),&stack0xffffffe8);
              uVar1 = *(undefined2 *)(uVar10 + 0x40);
              FUN_2c63339c(uVar10,uVar11);
              piVar2 = _LAB_2c633b90;
              *(undefined2 *)(uVar10 + 0x40) = uVar1;
              if (*piVar2 == iVar8) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              stack_chk_fail();
            }
            goto LAB_2c6340e6;
          }
          if (iVar8 == 0x12) {
            if (*_LAB_2c6340f0 == iStack_24) {
              iVar12 = *_LAB_2c633b14;
              FUN_2c637370(*(undefined4 *)(uVar10 + 0x24),*(undefined4 *)(uVar10 + 0x44),
                           &stack0xffffffe8,0);
              sVar5 = FUN_2c6033b4(uVar10,0,0x59);
              iVar8 = FUN_2c6033b4(uVar10,0,0x57);
              sVar4 = *(short *)(iVar8 + 8);
              iVar8 = FUN_2c6073f8(*(undefined4 *)(uVar10 + 0x24));
              if ((short)(sVar5 + (short)((uint)unaff_r6 >> 0x10) + 1 + sVar4) < iVar8) {
                uVar11 = FUN_2c637598(*(undefined4 *)(uVar10 + 0x24),&stack0xffffffe8);
                uVar1 = *(undefined2 *)(uVar10 + 0x40);
                FUN_2c63339c(uVar10,uVar11);
                *(undefined2 *)(uVar10 + 0x40) = uVar1;
              }
              if (*_LAB_2c633b14 == iVar12) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              stack_chk_fail();
            }
            goto LAB_2c6340e6;
          }
          if (iVar8 != 8) {
            if (iVar8 != 0x7f) {
              if (iVar8 == 2) {
                if (*_LAB_2c6340f0 != iStack_24) goto LAB_2c6340e6;
                iVar8 = 0;
              }
              else {
                if (iVar8 != 3) {
                  if ((iVar8 == 10) && ((int)((uint)*(byte *)(uVar10 + 0x60) << 0x1c) < 0)) {
                    if (*_LAB_2c6340f0 == iStack_24) {
                      uVar9 = *DAT_2c602398;
                      if (uVar10 == 0) {
                        uVar22 = 0x1f00000001;
                      }
                      else {
                        iStack_24 = 0;
                        iVar8 = *DAT_2c60239c;
                        iStack_2c = CONCAT31(iStack_2c._1_3_,0x1f);
                        iStack_28 = 0;
                        *DAT_2c60239c = (int)&uStack_34;
                        uStack_34 = uVar10;
                        uStack_30 = uVar10;
                        uVar22 = FUN_2c602140();
                        *piVar2 = iVar8;
                      }
                      if ((*DAT_2c602398 ^ uVar9) == 0) {
                        return;
                      }
                    /* WARNING: Subroutine does not return */
                      stack_chk_fail((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),
                                     *DAT_2c602398 ^ uVar9,0);
                    }
                  }
                  else if (*_LAB_2c633e94 == iStack_24) {
                    iVar12 = *_LAB_2c6338ac;
                    iStack_2c = iVar8;
                    if (((-1 < (int)((uint)*(byte *)(uVar10 + 0x60) << 0x1c)) ||
                        ((iVar8 != 10 && (iVar8 != 0xd)))) &&
                       (iStack_24 = iVar8, iVar8 = func_0x2c633748(uVar10,&iStack_24),
                       puVar3 = _LAB_2c6338b0, iVar8 == 1)) {
                      iVar8 = (*(code *)*_LAB_2c6338b0)(&iStack_2c,0);
                      if (*(int *)(uVar10 + 0x38) != 0) {
                        pcVar19 = (code *)*_LAB_2c6338b4;
                        if ((int)((uint)*(byte *)(uVar10 + 0x60) << 0x1d) < 0) {
                          uVar11 = *(undefined4 *)(uVar10 + 0x2c);
                        }
                        else {
                          uVar11 = FUN_2c63736c(*(undefined4 *)(uVar10 + 0x24));
                        }
                        uVar9 = (*pcVar19)(uVar11);
                        if (*(uint *)(uVar10 + 0x38) <= uVar9) goto LAB_2c6337ee;
                      }
                      pcVar16 = *(char **)(uVar10 + 0x34);
                      if ((pcVar16 == (char *)0x0) || (*pcVar16 == '\0')) {
LAB_2c633800:
                        if ((int)((uint)*(byte *)(uVar10 + 0x60) << 0x1d) < 0) {
                          func_0x2c633234(uVar10);
                        }
                        if ((*(int *)(uVar10 + 0x28) != 0) &&
                           (pcVar16 = (char *)FUN_2c63736c(*(undefined4 *)(uVar10 + 0x24)),
                           *pcVar16 == '\0')) {
                          FUN_2c607df0(uVar10);
                        }
                        FUN_2c6387a8(*(undefined4 *)(uVar10 + 0x24),*(undefined4 *)(uVar10 + 0x44),
                                     &iStack_24);
                        FUN_2c6335f4(uVar10);
                        if ((int)((uint)*(byte *)(uVar10 + 0x60) << 0x1d) < 0) {
                          uVar11 = *(undefined4 *)(uVar10 + 0x2c);
                          iVar8 = FUN_2c66c4ec(uVar11);
                          iVar14 = FUN_2c66c4ec(&iStack_24);
                          iVar8 = FUN_2c62bebc(uVar11,iVar14 + iVar8 + 1);
                          *(int *)(uVar10 + 0x2c) = iVar8;
                          if (iVar8 == 0) goto LAB_2c6337ee;
                          FUN_2c62ba80(iVar8,*(undefined4 *)(uVar10 + 0x44),&iStack_24);
                          func_0x2c633318(uVar10);
                        }
                        FUN_2c63339c(uVar10,*(int *)(uVar10 + 0x44) + 1);
                        FUN_2c602340(uVar10,0x1c,0);
                      }
                      else {
                        iStack_28 = 0;
                        while (pcVar16[iStack_28] != '\0') {
                          iVar14 = (*(code *)*puVar3)(pcVar16,&iStack_28);
                          if (iVar8 == iVar14) goto LAB_2c633800;
                          pcVar16 = *(char **)(uVar10 + 0x34);
                        }
                      }
                    }
LAB_2c6337ee:
                    if (*_LAB_2c6338ac == iVar12) {
                      return;
                    }
                    /* WARNING: Subroutine does not return */
                    stack_chk_fail();
                  }
                  goto LAB_2c6340e6;
                }
                if (*_LAB_2c6340f0 != iStack_24) goto LAB_2c6340e6;
                iVar8 = 0x7fff;
              }
              goto LAB_2c633eb6;
            }
            iVar8 = *(int *)(uVar10 + 0x44);
            FUN_2c63339c(uVar10,iVar8 + 1);
            if (iVar8 == *(int *)(uVar10 + 0x44)) goto LAB_2c633bb0;
          }
          if (*_LAB_2c6340f0 == iStack_24) {
            iVar8 = *_LAB_2c633970;
            if ((*(int *)(uVar10 + 0x44) != 0) &&
               (iVar12 = func_0x2c633748(uVar10,&stack0xffffffe8), iVar12 == 1)) {
              uVar11 = FUN_2c63736c(*(undefined4 *)(uVar10 + 0x24));
              func_0x2c62baec(uVar11,*(int *)(uVar10 + 0x44) + -1,1);
              FUN_2c638730(*(undefined4 *)(uVar10 + 0x24),uVar11);
              FUN_2c6335f4(uVar10);
              if ((*(int *)(uVar10 + 0x28) != 0) &&
                 (pcVar16 = (char *)FUN_2c63736c(*(undefined4 *)(uVar10 + 0x24)), *pcVar16 == '\0'))
              {
                FUN_2c607df0(uVar10);
              }
              if ((int)((uint)*(byte *)(uVar10 + 0x60) << 0x1d) < 0) {
                func_0x2c62baec(*(undefined4 *)(uVar10 + 0x2c),*(int *)(uVar10 + 0x44) + -1,1);
                uVar11 = *(undefined4 *)(uVar10 + 0x2c);
                iVar12 = FUN_2c66c4ec(uVar11);
                iVar12 = FUN_2c62bebc(uVar11,iVar12 + 1);
                *(int *)(uVar10 + 0x2c) = iVar12;
                if (iVar12 == 0) goto LAB_2c6338ca;
              }
              FUN_2c63339c(uVar10,*(int *)(uVar10 + 0x44) + -1);
              FUN_2c602340(uVar10,0x1c,0);
            }
LAB_2c6338ca:
            if (*_LAB_2c633970 == iVar8) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            stack_chk_fail();
          }
          goto LAB_2c6340e6;
        }
        if (*(int *)(uVar10 + 0x44) == 0) goto LAB_2c633bb0;
        if (*_LAB_2c6340f0 != iStack_24) goto LAB_2c6340e6;
        iVar8 = *(int *)(uVar10 + 0x44) + -1;
      }
LAB_2c633eb6:
      iVar12 = *DAT_2c6334c4;
      if (*(int *)(uVar10 + 0x44) == iVar8) goto LAB_2c63345c;
      pcVar19 = (code *)*DAT_2c6334c8;
      FUN_2c63736c(*(undefined4 *)(uVar10 + 0x24));
      iVar14 = (*pcVar19)();
      if (iVar8 < 0) {
        iVar8 = iVar8 + iVar14;
      }
      if ((iVar8 <= iVar14) && (iVar8 != 0x7fff)) {
        iVar14 = iVar8;
      }
      *(int *)(uVar10 + 0x44) = iVar14;
      FUN_2c608c7c(uVar10);
      iVar8 = FUN_2c6033b4(uVar10,0,0x57);
      FUN_2c637370(*(undefined4 *)(uVar10 + 0x24),iVar14,&stack0xffffffe0);
      sVar4 = *(short *)(iVar8 + 8);
      sVar5 = (short)((uint)unaff_r4 >> 0x10);
      iVar8 = FUN_2c604a44(uVar10);
      if (sVar5 < iVar8) {
        FUN_2c6051c4(uVar10,(int)sVar5,1);
      }
      iVar8 = FUN_2c607440(uVar10);
      iVar14 = FUN_2c604a44(uVar10);
      sVar6 = (short)unaff_r4;
      if (iVar8 < ((int)sVar5 + (int)sVar4) - iVar14) {
        FUN_2c6051c4(uVar10,(int)(short)((sVar5 + sVar4) - (short)iVar8),1);
        iVar8 = FUN_2c605068(uVar10);
        if (sVar6 < iVar8) goto LAB_2c633482;
      }
      else {
        iVar8 = FUN_2c605068(uVar10);
        if (sVar6 < iVar8) {
LAB_2c633482:
          FUN_2c60518c(uVar10,(int)sVar6,1);
        }
      }
      iVar8 = FUN_2c607404(uVar10);
      iVar14 = FUN_2c605068(uVar10);
      if (iVar8 < ((int)sVar6 + (int)sVar4) - iVar14) {
        FUN_2c60518c(uVar10,(int)(short)((sVar4 + sVar6) - (short)iVar8),1);
      }
      *(short *)(uVar10 + 0x40) = sVar6;
      FUN_2c632e9c(uVar10);
      FUN_2c632f4c(uVar10);
LAB_2c63345c:
      if (*DAT_2c6334c4 == iVar12) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    uVar17 = uVar9 - 1 & 0xff;
    bVar21 = 7 < uVar9;
    bVar20 = uVar9 == 8;
    if (!bVar20) {
      bVar21 = 1 < uVar17;
    }
    if (!bVar21 || (bVar20 || uVar17 == 2)) {
      uVar10 = 1;
    }
    if (bVar21 && (!bVar20 && uVar17 != 2)) {
      if (uVar9 == 0x15) {
        iVar8 = FUN_2c602400(param_2);
        uVar11 = FUN_2c602608(param_2);
        pcVar16 = (char *)FUN_2c63736c(*(undefined4 *)(iVar8 + 0x24));
        if (((*pcVar16 == '\0') && (*(char **)(iVar8 + 0x28) != (char *)0x0)) &&
           (**(char **)(iVar8 + 0x28) != '\0')) {
          FUN_2c6129e4(&sStack_ac);
          FUN_2c6007ec(iVar8,0x80000,&sStack_ac);
          if ((int)((uint)*(byte *)(iVar8 + 0x60) << 0x1c) < 0) {
            bStack_89 = bStack_89 | 2;
          }
          sVar4 = FUN_2c6033b4(iVar8,0,0x12);
          sVar5 = FUN_2c6033b4(iVar8,0,0x10);
          sVar6 = FUN_2c6033b4(iVar8,0,0x32);
          sStack_b4 = *(short *)(iVar8 + 0x14);
          sStack_b2 = *(short *)(iVar8 + 0x16);
          sStack_b0 = *(short *)(iVar8 + 0x18);
          sStack_ae = *(short *)(iVar8 + 0x1a);
          FUN_2c62a690(&sStack_b4,(int)(short)(sVar6 + sVar4),(int)(short)(sVar6 + sVar5));
          FUN_2c612a20(uVar11,&sStack_ac,&sStack_b4,*(undefined4 *)(iVar8 + 0x28),0);
        }
      }
      else if (uVar9 == 0x18) {
        iVar8 = FUN_2c602400(param_2);
        uVar11 = FUN_2c602608(param_2);
        iVar12 = FUN_2c63736c(*(undefined4 *)(iVar8 + 0x24));
        if ((int)((uint)*(byte *)(iVar8 + 0x54) << 0x1f) < 0) {
          FUN_2c61314c(auStack_84);
          FUN_2c6004cc(iVar8,0x70000,auStack_84);
          sStack_b0 = *(short *)(*(int *)(iVar8 + 0x24) + 0x14);
          sStack_b4 = *(short *)(iVar8 + 0x48) + sStack_b0;
          sStack_b0 = *(short *)(iVar8 + 0x4c) + sStack_b0;
          sStack_ae = *(short *)(*(int *)(iVar8 + 0x24) + 0x16);
          sStack_b2 = sStack_ae + *(short *)(iVar8 + 0x4a);
          sStack_ae = sStack_ae + *(short *)(iVar8 + 0x4e);
          FUN_2c61319c(uVar11,auStack_84,&sStack_b4);
          sVar4 = FUN_2c6033b4(iVar8,0x70000,0x32);
          sVar5 = FUN_2c6033b4(iVar8,0x70000,0x12);
          sVar6 = FUN_2c6033b4(iVar8,0x70000,0x10);
          iVar12 = *(int *)(iVar8 + 0x50) + iVar12;
          iStack_2c = 0;
          iStack_28 = 0;
          uVar13 = (*(code *)*_LAB_2c633e9c)(iVar12);
          FUN_2c62c0d8(&iStack_2c,iVar12,uVar13);
          sStack_b4 = sVar5 + sVar4 + sStack_b4;
          sStack_b2 = sVar4 + sVar6 + sStack_b2;
          iVar12 = FUN_2c6033b4(*(undefined4 *)(iVar8 + 0x24),0,0x55);
          FUN_2c6129e4(&sStack_ac);
          FUN_2c6007ec(iVar8,0x70000,&sStack_ac);
          if ((2 < bStack_81) || (iStack_a0 != iVar12)) {
            FUN_2c612a20(uVar11,&sStack_ac,&sStack_b4,&iStack_2c,0);
          }
        }
      }
    }
    else {
      iVar8 = FUN_2c5ff4d8();
      if (((iVar8 != 0) &&
          (iVar12 = FUN_2c602400(param_2), (int)((uint)*(byte *)(iVar12 + 0x54) << 0x1e) < 0)) &&
         ((iVar14 = FUN_2c5ff4e4(iVar8), iVar14 != 2 && (iVar14 = FUN_2c5ff4e4(iVar8), iVar14 != 4))
         )) {
        FUN_2c607338(*(undefined4 *)(iVar12 + 0x24),&sStack_ac);
        FUN_2c5ff5cc(iVar8,&sStack_bc);
        func_0x2c5ff63c(iVar8,auStack_b8);
        if ((-1 < sStack_bc) && (-1 < sStack_ba)) {
          sStack_b4 = sStack_bc - sStack_ac;
          sStack_b2 = sStack_ba - sStack_aa;
          iVar8 = FUN_2c602408(param_2);
          iVar14 = FUN_2c6073ec(*(undefined4 *)(iVar12 + 0x24));
          iVar18 = *(int *)(iVar12 + 0x24);
          if (sStack_b4 < 0) {
            uVar9 = 0;
          }
          else if (sStack_b4 < iVar14) {
            uVar7 = FUN_2c637598(iVar18,&sStack_b4);
            uVar9 = (uint)uVar7;
            uVar10 = FUN_2c637838(*(undefined4 *)(iVar12 + 0x24),&sStack_b4);
            uVar10 = (uVar10 ^ 1) & 0xff;
          }
          else {
            uVar9 = 0x7fff;
          }
          uVar17 = (uint)*(byte *)(iVar12 + 0x60);
          if ((int)(uVar17 << 0x1e) < 0) {
            if ((int)(uVar17 << 0x1f) < 0) {
              if (iVar8 == 2) {
                *(uint *)(iVar12 + 0x5c) = uVar9;
              }
              else if ((iVar8 == 3) || (iVar8 == 8)) {
                lv_obj_add_flag_invalidate(iVar12,0x300);
                uVar17 = (uint)*(byte *)(iVar12 + 0x60);
                goto LAB_2c63401a;
              }
            }
            else {
              if (uVar10 == 1) goto LAB_2c634020;
              if (iVar8 != 1) goto LAB_2c633bb0;
              *(uint *)(iVar12 + 0x58) = uVar9;
              *(byte *)(iVar12 + 0x60) = *(byte *)(iVar12 + 0x60) | 1;
              *(undefined4 *)(iVar12 + 0x5c) = 0xffff;
              FUN_2c606abc(iVar12,0x300);
            }
          }
          else {
LAB_2c63401a:
            if (-1 < (int)(uVar17 << 0x1f)) {
LAB_2c634020:
              if (iVar8 != 1) goto LAB_2c633bb0;
            }
          }
          FUN_2c63339c(iVar12,uVar9);
          if ((int)((uint)*(byte *)(iVar12 + 0x60) << 0x1f) < 0) {
            uVar10 = *(uint *)(iVar12 + 0x58);
            uVar9 = *(uint *)(iVar12 + 0x5c);
            if (uVar9 <= uVar10 && uVar10 != uVar9) {
              if ((uVar9 != *(uint *)(iVar18 + 0x44)) || (uVar10 != *(uint *)(iVar18 + 0x48))) {
                *(uint *)(iVar18 + 0x44) = uVar9;
                *(undefined4 *)(iVar18 + 0x48) = *(undefined4 *)(iVar12 + 0x58);
                FUN_2c607df0(iVar12);
              }
            }
            else if (uVar9 <= uVar10) {
              if ((*(int *)(iVar18 + 0x44) != 0xffff) || (*(int *)(iVar18 + 0x48) != 0xffff)) {
                *(undefined4 *)(iVar18 + 0x44) = 0xffff;
                *(undefined4 *)(iVar18 + 0x48) = 0xffff;
                FUN_2c607df0(iVar12);
              }
            }
            else if ((uVar10 != *(uint *)(iVar18 + 0x44)) || (uVar9 != *(uint *)(iVar18 + 0x48))) {
              *(uint *)(iVar18 + 0x44) = uVar10;
              *(undefined4 *)(iVar18 + 0x48) = *(undefined4 *)(iVar12 + 0x5c);
              FUN_2c607df0(iVar12);
            }
            if ((iVar8 == 3) || (iVar8 == 8)) {
              *(byte *)(iVar12 + 0x60) = *(byte *)(iVar12 + 0x60) & 0xfe;
            }
          }
        }
      }
    }
  }
LAB_2c633bb0:
  if (*_LAB_2c633e94 == iStack_24) {
    return;
  }
LAB_2c6340e6:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


/* FUN_2c619074 @ 0x2c619074 */

/* WARNING: Possible PIC construction at 0x2c619002: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c619242: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c619264: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x2c619246) */
/* WARNING: Removing unreachable block (ram,0x2c619006) */
/* WARNING: Removing unreachable block (ram,0x2c62bea8) */
/* WARNING: Removing unreachable block (ram,0x2c62beae) */
/* WARNING: Removing unreachable block (ram,0x2c62beb4) */
/* WARNING: Removing unreachable block (ram,0x2c62beb0) */
/* WARNING: Removing unreachable block (ram,0x2c619268) */
/* WARNING: Removing unreachable block (ram,0x2c619248) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c619074(void)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 uVar12;
  uint uVar13;
  short sVar14;
  undefined4 *puVar15;
  undefined1 uVar16;
  short sVar17;
  uint uVar18;
  uint uVar19;
  ushort uVar20;
  uint uVar21;
  uint unaff_r4;
  uint uVar22;
  uint unaff_r5;
  int iVar23;
  int unaff_r6;
  code *pcVar24;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int iVar25;
  undefined4 unaff_r9;
  int iVar26;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined1 *puVar27;
  undefined4 unaff_lr;
  undefined4 *puVar28;
  undefined8 uVar29;
  int iStack_34;
  int iStack_30;
  undefined1 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  byte bStack_18;
  uint uStack_14;
  
  uVar7 = FUN_2c602400();
  iVar8 = FUN_2c635f80();
  if (iVar8 == 0xffff) {
    return;
  }
  uVar9 = FUN_2c635f80(uVar7);
  pcVar10 = (char *)func_0x2c635f84(uVar7,uVar9);
  if (pcVar10 == (char *)0x0) {
    return;
  }
  iVar8 = FUN_2c66b624(pcVar10,_LAB_2c61926c);
  puVar15 = _LAB_2c619274;
  if (iVar8 == 0) {
    *(undefined1 *)(uVar7 + 0x3c) = 0;
    FUN_2c635da8(uVar7,*puVar15);
    goto FUN_2c618fa4;
  }
  iVar8 = FUN_2c66b624(pcVar10,_LAB_2c619270);
  if (iVar8 == 0) {
    uVar16 = 1;
    uVar9 = _LAB_2c619274[1];
  }
  else {
    if (((*pcVar10 != '1') || (pcVar10[1] != '#')) || (pcVar10[2] != '\0')) {
      iVar8 = FUN_2c66b624(pcVar10,_LAB_2c619278);
      if ((iVar8 == 0) || (iVar8 = FUN_2c66b624(pcVar10,_LAB_2c61927c), iVar8 == 0)) {
        iVar8 = FUN_2c602340(uVar7,0x20,0);
        if (iVar8 != 1) {
          return;
        }
        iVar8 = *(int *)(uVar7 + 0x38);
        if (iVar8 == 0) {
          return;
        }
        uVar9 = 0x20;
        goto code_r0x2c602340;
      }
      iVar8 = FUN_2c66b624(pcVar10,_LAB_2c619280);
      if (iVar8 == 0) {
        iVar8 = FUN_2c602340(uVar7,0x1f,0);
        if (iVar8 != 1) {
          return;
        }
        iVar8 = *(int *)(uVar7 + 0x38);
        if (iVar8 == 0) {
          return;
        }
        uVar9 = 0x1f;
        goto code_r0x2c602340;
      }
      iVar8 = *(int *)(uVar7 + 0x38);
      if (iVar8 == 0) {
        return;
      }
      iVar25 = FUN_2c66b624(pcVar10,_LAB_2c619284);
      if ((iVar25 == 0) || (iVar25 = FUN_2c66b624(pcVar10,_LAB_2c619288), iVar25 == 0)) {
        func_0x2c633784(iVar8,10);
        iVar8 = func_0x2c6335e8(*(undefined4 *)(uVar7 + 0x38));
        if (iVar8 == 0) {
          return;
        }
        iVar8 = *(int *)(uVar7 + 0x38);
        uVar9 = 0x1f;
        goto code_r0x2c602340;
      }
      iVar25 = FUN_2c66b624(pcVar10,_LAB_2c61928c);
      if (iVar25 == 0) {
        if (*(int *)(iVar8 + 0x44) == 0) {
          return;
        }
        iVar25 = *(int *)(iVar8 + 0x44) + -1;
      }
      else {
        iVar25 = FUN_2c66b624(pcVar10,_LAB_2c619290);
        if (iVar25 != 0) {
          iVar25 = FUN_2c66b624(pcVar10,_LAB_2c619294);
          if (iVar25 != 0) {
            iVar25 = FUN_2c66b624(pcVar10,_LAB_2c619298);
            if (iVar25 != 0) {
              iStack_1c = *_LAB_2c633738;
              if ((int)((uint)*(byte *)(iVar8 + 0x60) << 0x1d) < 0) {
                func_0x2c633234();
              }
              puVar28 = _LAB_2c633740;
              puVar15 = _LAB_2c63373c;
              if ((*(int *)(iVar8 + 0x34) == 0) && (*(int *)(iVar8 + 0x38) == 0)) {
                iVar25 = func_0x2c633748(iVar8,pcVar10);
                if (iVar25 == 1) {
                  if ((*(int *)(iVar8 + 0x28) != 0) &&
                     (pcVar11 = (char *)FUN_2c63736c(*(undefined4 *)(iVar8 + 0x24)),
                     *pcVar11 == '\0')) {
                    FUN_2c607df0(iVar8);
                  }
                  FUN_2c6387a8(*(undefined4 *)(iVar8 + 0x24),*(undefined4 *)(iVar8 + 0x44),pcVar10);
                  FUN_2c6335f4(iVar8);
                  if ((int)((uint)*(byte *)(iVar8 + 0x60) << 0x1d) < 0) {
                    uVar9 = *(undefined4 *)(iVar8 + 0x2c);
                    iVar25 = FUN_2c66c4ec(uVar9);
                    iVar26 = FUN_2c66c4ec(pcVar10);
                    iVar25 = FUN_2c62bebc(uVar9,iVar26 + iVar25 + 1);
                    *(int *)(iVar8 + 0x2c) = iVar25;
                    if (iVar25 == 0) goto LAB_2c633674;
                    FUN_2c62ba80(iVar25,*(undefined4 *)(iVar8 + 0x44),pcVar10);
                    func_0x2c633318(iVar8);
                  }
                  iVar26 = *(int *)(iVar8 + 0x44);
                  iVar25 = (*(code *)*_LAB_2c633744)(pcVar10);
                  FUN_2c63339c(iVar8,iVar25 + iVar26);
                  if (*_LAB_2c633738 == iStack_1c) {
                    uVar9 = 0x1c;
code_r0x2c602340:
                    piVar3 = DAT_2c60239c;
                    uStack_14 = *DAT_2c602398;
                    if (iVar8 == 0) {
                      uVar29 = CONCAT44(uVar9,1);
                    }
                    else {
                      bStack_18 = bStack_18 & 0xf0;
                      uStack_20 = *DAT_2c60239c;
                      uStack_2c = (undefined1)uVar9;
                      uStack_28 = 0;
                      iStack_1c = 0;
                      *DAT_2c60239c = (int)&iStack_34;
                      iStack_34 = iVar8;
                      iStack_30 = iVar8;
                      uStack_24 = 0;
                      uVar29 = FUN_2c602140();
                      *piVar3 = uStack_20;
                    }
                    if ((*DAT_2c602398 ^ uStack_14) != 0) {
                    /* WARNING: Subroutine does not return */
                      stack_chk_fail((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),
                                     *DAT_2c602398 ^ uStack_14,0);
                    }
                    return;
                  }
                  goto LAB_2c633732;
                }
              }
              else {
                cVar1 = *pcVar10;
                uStack_20 = 0;
                while (cVar1 != '\0') {
                  (*(code *)*puVar15)(pcVar10,&uStack_20);
                  uVar9 = (*(code *)*puVar28)();
                  func_0x2c633784(iVar8,uVar9);
                  cVar1 = pcVar10[uStack_20];
                }
              }
LAB_2c633674:
              if (*_LAB_2c633738 == iStack_1c) {
                return;
              }
LAB_2c633732:
                    /* WARNING: Subroutine does not return */
              stack_chk_fail();
            }
            unaff_r5 = func_0x2c6335e4(iVar8);
            pcVar10 = (char *)func_0x2c6335d0(*(undefined4 *)(uVar7 + 0x38));
            unaff_r4 = uVar7;
            if (*pcVar10 == '-') {
              FUN_2c63339c(*(undefined4 *)(uVar7 + 0x38),1);
              iVar8 = *(int *)(uVar7 + 0x38);
              unaff_lr = 0x2c619269;
              register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
            }
            else {
              if (*pcVar10 != '+') {
                FUN_2c63339c(*(undefined4 *)(uVar7 + 0x38),0);
                func_0x2c633784(*(undefined4 *)(uVar7 + 0x38),0x2d);
                iVar8 = *(int *)(uVar7 + 0x38);
                iVar25 = (unaff_r5 & 0xffff) + 1;
                goto code_r0x2c63339c;
              }
              FUN_2c63339c(*(undefined4 *)(uVar7 + 0x38),1);
              iVar8 = *(int *)(uVar7 + 0x38);
              unaff_lr = 0x2c619247;
              register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
            }
          }
          *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
          *(uint *)((int)register0x00000054 + -8) = unaff_r5;
          *(uint *)((int)register0x00000054 + -0xc) = unaff_r4;
          *(int *)((int)register0x00000054 + -0x14) = *_LAB_2c633970;
          if (*(int *)(iVar8 + 0x44) != 0) {
            *(undefined2 *)((int)register0x00000054 + -0x18) = 0x7f;
            iVar25 = func_0x2c633748(iVar8,(undefined1 *)((int)register0x00000054 + -0x18));
            if (iVar25 == 1) {
              uVar9 = FUN_2c63736c(*(undefined4 *)(iVar8 + 0x24));
              func_0x2c62baec(uVar9,*(int *)(iVar8 + 0x44) + -1,1);
              FUN_2c638730(*(undefined4 *)(iVar8 + 0x24),uVar9);
              FUN_2c6335f4(iVar8);
              if ((*(int *)(iVar8 + 0x28) != 0) &&
                 (pcVar10 = (char *)FUN_2c63736c(*(undefined4 *)(iVar8 + 0x24)), *pcVar10 == '\0'))
              {
                FUN_2c607df0(iVar8);
              }
              if ((int)((uint)*(byte *)(iVar8 + 0x60) << 0x1d) < 0) {
                func_0x2c62baec(*(undefined4 *)(iVar8 + 0x2c),*(int *)(iVar8 + 0x44) + -1,1);
                uVar9 = *(undefined4 *)(iVar8 + 0x2c);
                iVar25 = FUN_2c66c4ec(uVar9);
                iVar25 = FUN_2c62bebc(uVar9,iVar25 + 1);
                *(int *)(iVar8 + 0x2c) = iVar25;
                if (iVar25 == 0) goto LAB_2c6338ca;
              }
              FUN_2c63339c(iVar8,*(int *)(iVar8 + 0x44) + -1);
              FUN_2c602340(iVar8,0x1c,0);
            }
          }
LAB_2c6338ca:
          if (*_LAB_2c633970 != *(int *)((int)register0x00000054 + -0x14)) {
                    /* WARNING: Subroutine does not return */
            stack_chk_fail();
          }
          return;
        }
        iVar25 = *(int *)(iVar8 + 0x44) + 1;
      }
code_r0x2c63339c:
      iStack_1c = *DAT_2c6334c4;
      if (*(int *)(iVar8 + 0x44) == iVar25) goto LAB_2c63345c;
      pcVar24 = (code *)*DAT_2c6334c8;
      FUN_2c63736c(*(undefined4 *)(iVar8 + 0x24));
      iVar26 = (*pcVar24)();
      if (iVar25 < 0) {
        iVar25 = iVar25 + iVar26;
      }
      if ((iVar25 <= iVar26) && (iVar25 != 0x7fff)) {
        iVar26 = iVar25;
      }
      *(int *)(iVar8 + 0x44) = iVar26;
      FUN_2c608c7c(iVar8);
      iVar25 = FUN_2c6033b4(iVar8,0,0x57);
      FUN_2c637370(*(undefined4 *)(iVar8 + 0x24),iVar26,&uStack_20);
      sVar6 = *(short *)(iVar25 + 8);
      iVar26 = (int)uStack_20._2_2_;
      iVar25 = FUN_2c604a44(iVar8);
      if (iVar26 < iVar25) {
        FUN_2c6051c4(iVar8,(int)uStack_20._2_2_,1);
      }
      iVar25 = FUN_2c607440(iVar8);
      iVar23 = (int)uStack_20._2_2_;
      iVar26 = FUN_2c604a44(iVar8);
      if (iVar25 < (iVar23 + sVar6) - iVar26) {
        FUN_2c6051c4(iVar8,(int)(short)((uStack_20._2_2_ + sVar6) - (short)iVar25),1);
        iVar26 = (int)(short)uStack_20;
        iVar25 = FUN_2c605068(iVar8);
        if (iVar26 < iVar25) goto LAB_2c633482;
      }
      else {
        iVar26 = (int)(short)uStack_20;
        iVar25 = FUN_2c605068(iVar8);
        if (iVar26 < iVar25) {
LAB_2c633482:
          FUN_2c60518c(iVar8,(int)(short)uStack_20,1);
        }
      }
      iVar25 = FUN_2c607404(iVar8);
      iVar23 = (int)(short)uStack_20;
      iVar26 = FUN_2c605068(iVar8);
      if (iVar25 < (iVar23 + sVar6) - iVar26) {
        FUN_2c60518c(iVar8,(int)(short)((sVar6 + (short)uStack_20) - (short)iVar25),1);
      }
      *(short *)(iVar8 + 0x40) = (short)uStack_20;
      FUN_2c632e9c(iVar8);
      FUN_2c632f4c(iVar8);
LAB_2c63345c:
      if (*DAT_2c6334c4 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      return;
    }
    uVar16 = 2;
    uVar9 = _LAB_2c619274[2];
  }
  *(undefined1 *)(uVar7 + 0x3c) = uVar16;
  FUN_2c635da8(uVar7,uVar9);
FUN_2c618fa4:
  puVar27 = &stack0xfffffff0;
  uVar21 = *(byte *)(uVar7 + 0x3d) & 1;
  if ((*(byte *)(uVar7 + 0x3d) & 1) == 0) {
    iVar8 = lv_mem_alloc((uint)*(ushort *)(uVar7 + 0x30) << 1);
    FUN_2c62c0d8(iVar8,*(undefined4 *)(_LAB_2c619010 + (uint)*(byte *)(uVar7 + 0x3c) * 4),
                 (uint)*(ushort *)(uVar7 + 0x30) << 1);
    uVar18 = uVar21;
    if (*(short *)(uVar7 + 0x30) != 0) {
      do {
        uVar13 = uVar18 + 1;
        *(ushort *)(iVar8 + (uVar18 & 0xffff) * 2) =
             *(ushort *)(iVar8 + (uVar18 & 0xffff) * 2) & 0xfdff;
        uVar18 = uVar13;
      } while ((uVar13 & 0xffff) < (uint)*(ushort *)(uVar7 + 0x30));
    }
    unaff_lr = 0x2c619007;
    unaff_r5 = uVar7;
    unaff_r6 = iVar8;
  }
  else {
    iVar8 = *(int *)(_LAB_2c619010 + (uint)*(byte *)(uVar7 + 0x3c) * 4);
    uVar21 = unaff_r4;
    puVar27 = (undefined1 *)register0x00000054;
  }
  puVar28 = (undefined4 *)(puVar27 + -4);
  *puVar28 = unaff_lr;
  *(uint *)(puVar27 + -8) = uVar21;
  FUN_2c62c0d8(*(undefined4 *)(uVar7 + 0x2c),iVar8,(uint)*(ushort *)(uVar7 + 0x30) << 1);
  puVar15 = *(undefined4 **)(uVar7 + 0x24);
  if (puVar15 == (undefined4 *)0x0) {
    return;
  }
  uVar21 = *(uint *)(puVar27 + -8);
  *puVar28 = *puVar28;
  *(undefined4 *)(puVar27 + -8) = unaff_r11;
  *(undefined4 *)(puVar27 + -0xc) = unaff_r10;
  *(undefined4 *)(puVar27 + -0x10) = unaff_r9;
  *(undefined4 *)(puVar27 + -0x14) = unaff_r8;
  *(undefined4 *)(puVar27 + -0x18) = unaff_r7;
  *(int *)(puVar27 + -0x1c) = unaff_r6;
  *(uint *)(puVar27 + -0x20) = unaff_r5;
  *(uint *)(puVar27 + -0x24) = uVar21;
  *(undefined2 *)(uVar7 + 0x32) = 1;
  pcVar10 = (char *)*puVar15;
  if (pcVar10 == (char *)0x0) {
    uVar21 = 0;
  }
  else {
    uVar18 = 0;
    uVar21 = 0;
    do {
      while( true ) {
        if (*pcVar10 == '\0') goto LAB_2c63541c;
        if ((*pcVar10 == '\n') && (pcVar10[1] == '\0')) break;
        uVar21 = uVar21 + 1 & 0xffff;
        uVar18 = uVar18 + 1 & 0xffff;
        pcVar10 = (char *)puVar15[uVar18];
        if (pcVar10 == (char *)0x0) goto LAB_2c63541c;
      }
      uVar18 = uVar18 + 1 & 0xffff;
      *(short *)(uVar7 + 0x32) = *(short *)(uVar7 + 0x32) + 1;
      pcVar10 = (char *)puVar15[uVar18];
    } while (pcVar10 != (char *)0x0);
  }
LAB_2c63541c:
  if (*(ushort *)(uVar7 + 0x30) != uVar21) {
    if (*(int *)(uVar7 + 0x28) != 0) {
      FUN_2c62bea8();
      *(undefined4 *)(uVar7 + 0x28) = 0;
    }
    if (*(int *)(uVar7 + 0x2c) != 0) {
      FUN_2c62bea8();
      *(undefined4 *)(uVar7 + 0x2c) = 0;
    }
    uVar9 = lv_mem_alloc(uVar21 << 3);
    *(undefined4 *)(uVar7 + 0x28) = uVar9;
    iVar8 = lv_mem_alloc(uVar21 << 1);
    *(int *)(uVar7 + 0x2c) = iVar8;
    if ((*(int *)(uVar7 + 0x28) == 0) || (uVar18 = uVar21 << 1, iVar8 == 0)) {
      uVar21 = 0;
      uVar18 = uVar21;
    }
    FUN_2c62c3b0(iVar8,uVar18);
    *(short *)(uVar7 + 0x30) = (short)uVar21;
  }
  *(undefined4 **)(uVar7 + 0x24) = puVar15;
  bVar4 = FUN_2c6033b4(uVar7,0,0x16);
  *(uint *)(puVar27 + -100) = (uint)bVar4;
  uVar9 = FUN_2c6033b4(uVar7,0,0x12);
  *(undefined4 *)(puVar27 + -0x30) = uVar9;
  uVar18 = FUN_2c6033b4(uVar7,0,0x10);
  uVar5 = FUN_2c6033b4(uVar7,0,0x14);
  uVar9 = FUN_2c6033b4(uVar7,0,0x15);
  *(undefined4 *)(puVar27 + -0x38) = uVar9;
  uVar12 = FUN_2c607404(uVar7);
  *(undefined4 *)(puVar27 + -0x34) = uVar12;
  sVar6 = FUN_2c607440(uVar7);
  uVar20 = *(ushort *)(uVar7 + 0x32);
  uVar21 = (uint)uVar20;
  *(int *)(puVar27 + -0x2c) = (int)(short)uVar9;
  *(int *)(puVar27 + -0x4c) = (int)(short)(sVar6 - (uVar20 - 1) * uVar5);
  if (uVar21 == 0) {
LAB_2c635650:
    FUN_2c600bac(uVar7);
    FUN_2c607df0(uVar7);
    return;
  }
  uVar13 = 0;
  pcVar10 = (char *)*puVar15;
  *(uint *)(puVar27 + -0x48) = (uint)uVar5;
  *(undefined4 *)(puVar27 + -0x54) = 0;
  *(uint *)(puVar27 + -0x60) = uVar18 & 0xffff;
  *(undefined4 *)(puVar27 + -0x5c) = 1;
  do {
    if (pcVar10 == (char *)0x0) {
LAB_2c635548:
      puVar15 = puVar15 + 1;
      *(uint *)(puVar27 + -0x58) = *(int *)(puVar27 + -0x4c) + uVar13;
    }
    else {
      uVar22 = 0;
      uVar18 = 0;
      do {
        iVar8 = uVar18 + *(int *)(puVar27 + -0x54);
        if (((*pcVar10 == '\n') && (pcVar10[1] == '\0')) || (*pcVar10 == '\0')) break;
        uVar18 = uVar18 + 1 & 0xffff;
        uVar20 = *(ushort *)(*(int *)(uVar7 + 0x2c) + iVar8 * 2);
        pcVar10 = (char *)puVar15[uVar18];
        if ((uVar20 & 7) == 0) {
          uVar20 = (short)uVar22 + 1;
        }
        else {
          uVar20 = (short)uVar22 + (uVar20 & 7);
        }
        uVar22 = (uint)uVar20;
      } while (pcVar10 != (char *)0x0);
      if (uVar18 == 0) goto LAB_2c635548;
      *(uint *)(puVar27 + -0x58) = *(int *)(puVar27 + -0x4c) + uVar13;
      *(int *)(puVar27 + -0x44) =
           (int)(short)((short)(uVar13 / uVar21) + (short)*(undefined4 *)(puVar27 + -0x60));
      *(uint *)(puVar27 + -0x50) = (uint)*(ushort *)(puVar27 + -0x34);
      uVar19 = (uint)(short)(*(ushort *)(puVar27 + -0x34) -
                            ((short)uVar18 + -1) * (short)*(undefined4 *)(puVar27 + -0x38));
      *(uint *)(puVar27 + -0x70) = uVar19 & ~((int)uVar19 >> 0x1f);
      *(int *)(puVar27 + -0x74) =
           (int)(short)((short)*(undefined4 *)(puVar27 + -0x60) + -1 +
                       (short)((*(int *)(puVar27 + -0x4c) + uVar13) / uVar21));
      iVar8 = 0;
      if (uVar18 != 0) {
        uVar13 = 0;
        iVar25 = *(int *)(puVar27 + -0x54) << 1;
        iVar8 = *(int *)(puVar27 + -0x54) + uVar18;
        *(uint *)(puVar27 + -0x68) = (uint)*(ushort *)(puVar27 + -0x2c);
        iVar26 = 0;
        sVar6 = *(short *)(puVar27 + -0x30);
        uVar21 = 0;
        *(int *)(puVar27 + -0x54) = iVar8;
        *(uint *)(puVar27 + -0x40) = uVar18;
        *(undefined4 **)(puVar27 + -0x3c) = puVar15;
        uVar9 = *(undefined4 *)(puVar27 + -0x44);
        *(int *)(puVar27 + -0x6c) = iVar8 * 2;
        do {
          uVar20 = *(ushort *)(*(int *)(uVar7 + 0x2c) + iVar25);
          if ((uVar20 & 7) == 0) {
            iVar26 = iVar26 + 1;
          }
          else {
            iVar26 = iVar26 + (uVar20 & 7);
          }
          uVar18 = uVar21 / uVar22;
          uVar21 = *(int *)(puVar27 + -0x70) * iVar26;
          sVar2 = (short)uVar18 + (short)uVar13;
          sVar17 = (short)uVar13 + -1 + (short)(uVar21 / uVar22);
          sVar14 = sVar2;
          if (*(int *)(puVar27 + -100) == 1) {
            sVar14 = (short)*(undefined4 *)(puVar27 + -0x50) - sVar17;
            sVar17 = (short)*(undefined4 *)(puVar27 + -0x50) - sVar2;
          }
          *(undefined4 *)(puVar27 + -0x80) = *(undefined4 *)(puVar27 + -0x74);
          iVar8 = iVar25 * 4;
          iVar25 = iVar25 + 2;
          FUN_2c62a624(*(int *)(uVar7 + 0x28) + iVar8,(int)(short)(sVar14 + sVar6),uVar9,
                       (int)(short)(sVar17 + sVar6));
          uVar13 = uVar13 + *(int *)(puVar27 + -0x68) & 0xffff;
        } while (iVar25 != *(int *)(puVar27 + -0x6c));
        uVar21 = (uint)*(ushort *)(uVar7 + 0x32);
        iVar8 = *(int *)(puVar27 + -0x40);
        puVar15 = *(undefined4 **)(puVar27 + -0x3c);
      }
      puVar15 = puVar15 + iVar8 + 1;
    }
    uVar13 = *(uint *)(puVar27 + -0x58);
    *(uint *)(puVar27 + -0x60) = *(int *)(puVar27 + -0x60) + *(int *)(puVar27 + -0x48) & 0xffff;
    if (uVar21 <= *(uint *)(puVar27 + -0x5c)) goto LAB_2c635650;
    pcVar10 = (char *)*puVar15;
    *(uint *)(puVar27 + -0x5c) = *(uint *)(puVar27 + -0x5c) + 1;
  } while( true );
}


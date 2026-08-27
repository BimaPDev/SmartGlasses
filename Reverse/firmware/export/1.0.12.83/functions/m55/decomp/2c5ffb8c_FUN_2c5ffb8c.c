/* FUN_2c5ffb8c @ 0x2c5ffb8c */

/* WARNING: Removing unreachable block (ram,0x2c6001d8) */
/* WARNING: Removing unreachable block (ram,0x2c6003b8) */
/* WARNING: Removing unreachable block (ram,0x2c6000c0) */
/* WARNING: Removing unreachable block (ram,0x2c6002f6) */
/* WARNING: Removing unreachable block (ram,0x2c600350) */
/* WARNING: Removing unreachable block (ram,0x2c5ffef0) */
/* WARNING: Removing unreachable block (ram,0x2c600392) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5ffb8c(int param_1)

{
  short sVar1;
  short sVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint *puVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined4 uVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  short sStack_30;
  char cStack_2e;
  char cStack_2d;
  int iStack_2c;
  
  puVar4 = _LAB_2c5ffdf0;
  piVar18 = *(int **)(param_1 + 0xc);
  iVar8 = *piVar18;
  iStack_2c = *_LAB_2c5ffdec;
  iVar15 = *(int *)(iVar8 + 0x10);
  *_LAB_2c5ffdf0 = piVar18;
  puVar5 = _LAB_2c5ffdf4;
  if (iVar15 != 0) {
    uVar16 = (uint)*(byte *)((int)piVar18 + 5);
    if ((int)(uVar16 << 0x1e) < 0) {
      uVar16 = uVar16 & 0xfffffffc;
      piVar18[0xb] = 0;
      piVar18[0xf] = 0;
      *(char *)((int)piVar18 + 5) = (char)uVar16;
      *(byte *)(piVar18 + 0x10) = *(byte *)(piVar18 + 0x10) & 0xf0;
      *puVar5 = 0;
      piVar18[9] = 0;
      piVar18[10] = 0;
      piVar18[0x11] = 0;
      piVar18[0x12] = 0;
      piVar18[6] = 0;
      piVar18[7] = 0;
    }
    puVar5 = _LAB_2c5ffdf4;
    if ((-1 < (int)(uVar16 << 0x1d)) && (*(int *)(*(int *)(iVar8 + 0x10) + 0x14) == 0)) {
      do {
        func_0x2c62a5d4(piVar18,&uStack_3c);
        cVar6 = cStack_2d;
        piVar18 = (int *)*puVar4;
        if ((int)((uint)*(byte *)((int)piVar18 + 5) << 0x1e) < 0) {
          piVar18[0xb] = 0;
          piVar18[0xf] = 0;
          *(byte *)((int)piVar18 + 5) = *(byte *)((int)piVar18 + 5) & 0xfc;
          piVar18[9] = 0;
          piVar18[10] = 0;
          piVar18[0x11] = 0;
          piVar18[0x12] = 0;
          piVar18[6] = 0;
          piVar18[7] = 0;
          *(byte *)(piVar18 + 0x10) = *(byte *)(piVar18 + 0x10) & 0xf0;
        }
        *puVar5 = 0;
        *(char *)(piVar18 + 1) = cStack_2e;
        if (cStack_2e == '\x01') {
          iVar8 = *(int *)(*piVar18 + 0x10);
LAB_2c5ffddc:
          uVar11 = FUN_2c629df4();
          *(undefined4 *)(iVar8 + 0x160) = uVar11;
          piVar18 = (int *)*puVar4;
          pcVar12 = (char *)*piVar18;
          cVar14 = *pcVar12;
LAB_2c5ffc32:
          if (cVar14 == '\x01') {
            piVar9 = *(int **)(pcVar12 + 0x10);
            *(ushort *)((int)piVar18 + 0x12) = uStack_3c._2_2_;
            *(ushort *)(piVar18 + 4) = (ushort)uStack_3c;
            bVar7 = *(byte *)((short *)*piVar9 + 8);
            if ((bVar7 & 0x20) != 0) {
              uStack_3c = CONCAT22(~uStack_3c._2_2_ + *(short *)(*piVar9 + 2),
                                   ~(ushort)uStack_3c + *(short *)*piVar9);
              bVar7 = *(byte *)(*piVar9 + 0x10);
            }
            if ((int)((uint)bVar7 << 0x1b) < 0) {
              uStack_3c = CONCAT22((short)uStack_3c,~uStack_3c._2_2_ + *(short *)(*piVar9 + 2));
            }
            FUN_2c62a47c(*(undefined4 *)(*piVar18 + 0x10));
            FUN_2c62a4a0(*(undefined4 *)(*piVar18 + 0x10));
            if ((piVar18[0x13] != 0) && (piVar18[3] != uStack_3c)) {
              FUN_2c606f34(piVar18[0x13],(int)(short)(ushort)uStack_3c,(int)(short)uStack_3c._2_2_);
            }
            piVar18[2] = uStack_3c;
            if ((char)piVar18[1] == '\x01') {
              FUN_2c5ff718(piVar18 + 1);
            }
            else {
              FUN_2c5ff400();
            }
LAB_2c5ffdd0:
            piVar18[3] = piVar18[2];
            goto LAB_2c5ffdd4;
          }
          if (cVar14 != '\x02') {
            if (cVar14 == '\x04') goto LAB_2c5ffca2;
            if ((cVar14 == '\x03') && (iVar8 = piVar18[0x15], iVar8 != 0)) {
              sVar2 = *(short *)(iVar8 + iStack_34 * 4);
              sVar1 = *(short *)(iVar8 + iStack_34 * 4 + 2);
              if ((cStack_2e == '\x01') &&
                 (((short)piVar18[3] != sVar2 || (*(short *)((int)piVar18 + 0xe) != sVar1)))) {
                FUN_2c5ff400(piVar18 + 1);
              }
              if ((*(byte *)((int)piVar18 + 5) & 2) == 0) {
                *(short *)(piVar18 + 2) = sVar2;
                *(short *)((int)piVar18 + 10) = sVar1;
                if (cStack_2e == '\x01') {
                  FUN_2c5ff718(piVar18 + 1);
                }
                else {
                  FUN_2c5ff400();
                }
                if ((*(byte *)((int)piVar18 + 5) & 2) == 0) goto LAB_2c5ffdd0;
                *puVar5 = 0;
              }
              else {
                *puVar5 = 0;
              }
              goto LAB_2c5ffdd4;
            }
            goto LAB_2c5ffc48;
          }
          iVar8 = func_0x2c602bb8(iStack_38);
          if (iVar8 == 0) {
            piVar18 = (int *)*puVar4;
            uVar16 = (uint)*(byte *)((int)piVar18 + 5);
            if (cStack_2e == '\x01') {
              if ((int)(uVar16 << 0x1c) < 0) goto LAB_2c5ffc4a;
            }
            else if ((int)(uVar16 << 0x1c) < 0) {
              piVar18[0x11] = 0;
              *(undefined1 *)(piVar18 + 2) = 0;
              *(byte *)((int)piVar18 + 5) = *(byte *)((int)piVar18 + 5) & 0xf6;
            }
            iVar8 = piVar18[0x14];
            if (iVar8 == 0) goto LAB_2c5ffc48;
            uVar16 = func_0x2c603118(iVar8);
            *puVar5 = uVar16;
            if (uVar16 == 0) goto LAB_2c5ffdd4;
            iVar15 = FUN_2c606bb4(uVar16,0x80);
            iVar10 = piVar18[3];
            piVar18[3] = iStack_38;
            cVar14 = (char)piVar18[2];
            *(char *)(piVar18 + 2) = cStack_2e;
            if (cStack_2e != '\x01') {
              if (((iVar15 == 0) && (cVar14 == '\x01')) && (cStack_2e == '\0')) {
                iStack_38 = iVar10;
                if (iVar10 == 10) {
                  FUN_2c602340(*puVar5,8,*puVar4);
                  bVar7 = *(byte *)((int)piVar18 + 5);
                  if ((bVar7 & 2) == 0) {
                    if (((bVar7 & 1) == 0) &&
                       (FUN_2c602340(*puVar5,4,*puVar4), (*(byte *)((int)piVar18 + 5) & 2) != 0)) {
                      *puVar5 = bVar7 & 1;
                    }
                    else {
                      FUN_2c602340(*puVar5,7,*puVar4);
                      if ((*(byte *)((int)piVar18 + 5) & 2) == 0) goto LAB_2c5ffff2;
                      *puVar5 = 0;
                    }
                  }
                  else {
                    *puVar5 = 0;
                  }
                  goto LAB_2c5ffdd4;
                }
LAB_2c5ffff2:
                piVar18[0x11] = 0;
                *(byte *)((int)piVar18 + 5) = *(byte *)((int)piVar18 + 5) & 0xfe;
              }
LAB_2c5ffe58:
              piVar18 = (int *)*puVar4;
              *puVar5 = 0;
              uVar16 = (uint)*(byte *)((int)piVar18 + 5);
              goto LAB_2c5ffc4a;
            }
            if (cVar14 != '\0') {
              if ((iVar15 == 0) && (cVar14 == '\x01')) {
                if ((iStack_38 == 10) &&
                   (FUN_2c602340(*puVar5,2,*puVar4), (*(byte *)((int)piVar18 + 5) & 2) != 0)) {
                  *puVar5 = 0;
                  goto LAB_2c5ffdd4;
                }
                bVar7 = *(byte *)((int)piVar18 + 5);
                if ((bVar7 & 1) == 0) {
                  uVar16 = FUN_2c629e10(piVar18[0x11]);
                  if (*(ushort *)(*piVar18 + 0x1c) < uVar16) {
                    *(byte *)((int)piVar18 + 5) = *(byte *)((int)piVar18 + 5) | 1;
                    if (iStack_38 == 10) {
                      iVar8 = FUN_2c629df4();
                      uVar11 = *puVar4;
                      piVar18[0x12] = iVar8;
                      FUN_2c602340(*puVar5,5,uVar11);
                      if ((*(byte *)((int)piVar18 + 5) & 2) != 0) {
                        *puVar5 = bVar7 & 1;
                        goto LAB_2c5ffdd4;
                      }
                    }
                  }
                  else if ((int)((uint)*(byte *)((int)piVar18 + 5) << 0x1f) < 0) goto LAB_2c5fff3e;
                }
                else {
LAB_2c5fff3e:
                  uVar16 = FUN_2c629e10(piVar18[0x12]);
                  if (*(ushort *)(*piVar18 + 0x1e) < uVar16) {
                    iVar15 = FUN_2c629df4();
                    piVar18[0x12] = iVar15;
                    if (iStack_38 == 10) {
                      FUN_2c602340(*puVar5,6,*puVar4);
                      bVar7 = *(byte *)((int)piVar18 + 5);
                      goto joined_r0x2c60049e;
                    }
                    if (iStack_38 == 9) {
                      FUN_2c603048(iVar8,0);
                      FUN_2c602e40(iVar8);
                      bVar7 = *(byte *)((int)piVar18 + 5);
                    }
                    else {
                      if (iStack_38 != 0xb) goto LAB_2c5fff68;
                      FUN_2c603048(iVar8,0);
                      FUN_2c602e74(iVar8);
                      bVar7 = *(byte *)((int)piVar18 + 5);
                    }
                    bVar3 = (bVar7 & 2) == 0;
                    if (!bVar3) goto LAB_2c5fff76;
                  }
                }
              }
              goto LAB_2c5ffe58;
            }
            iVar10 = FUN_2c629df4();
            piVar18[0x11] = iVar10;
            if (iStack_38 == 9) {
              FUN_2c603048(iVar8,0);
              FUN_2c602e40(iVar8);
              bVar7 = *(byte *)((int)piVar18 + 5);
joined_r0x2c60022a:
              bVar3 = (bVar7 & 2) == 0;
              if (!bVar3) {
                *puVar5 = 0;
joined_r0x2c600232:
                if (!bVar3) goto LAB_2c5ffdd4;
              }
              goto LAB_2c5ffe58;
            }
            if (iStack_38 == 0xb) {
              FUN_2c603048(iVar8,0);
              FUN_2c602e74(iVar8);
              bVar7 = *(byte *)((int)piVar18 + 5);
              goto joined_r0x2c60022a;
            }
            if (iVar15 != 0) goto LAB_2c5ffe58;
            if (iStack_38 != 10) {
              if (iStack_38 == 0x1b) {
                func_0x2c603018(iVar8);
                uVar16 = (uint)*(byte *)((int)piVar18 + 5);
                if ((int)(uVar16 << 0x1e) < 0) {
                  *puVar5 = 0;
                }
                if (-1 < (int)(uVar16 << 0x1e)) {
                  uVar13 = *puVar4;
                  uVar11 = 0x20;
                  goto LAB_2c6000a8;
                }
                goto LAB_2c5ffdd4;
              }
LAB_2c5fff68:
              func_0x2c603018(iVar8);
              bVar7 = *(byte *)((int)piVar18 + 5);
joined_r0x2c60049e:
              bVar3 = false;
              if ((bVar7 & 2) == 0) goto LAB_2c5ffe58;
LAB_2c5fff76:
              *puVar5 = 0;
              goto joined_r0x2c600232;
            }
            func_0x2c603018(iVar8);
            uVar16 = (uint)*(byte *)((int)piVar18 + 5);
            if ((int)(uVar16 << 0x1e) < 0) {
              *puVar5 = 0;
            }
            if (-1 < (int)(uVar16 << 0x1e)) {
              uVar13 = *puVar4;
              uVar11 = 1;
LAB_2c6000a8:
              FUN_2c602340(*puVar5,uVar11,uVar13);
              if ((*(byte *)((int)piVar18 + 5) & 2) == 0) goto LAB_2c5ffe58;
              *puVar5 = (uVar16 & 3) >> 1;
            }
            goto LAB_2c5ffdd4;
          }
          func_0x2c6027a0(*puVar4,&uStack_3c);
          piVar18 = (int *)*puVar4;
          uVar16 = (uint)*(byte *)((int)piVar18 + 5);
        }
        else {
          pcVar12 = (char *)*piVar18;
          cVar14 = *pcVar12;
          if (cVar14 != '\x04') goto LAB_2c5ffc32;
          if (sStack_30 != 0) {
            iVar8 = *(int *)(pcVar12 + 0x10);
            goto LAB_2c5ffddc;
          }
LAB_2c5ffca2:
          bVar7 = *(byte *)((int)piVar18 + 5);
          if (cStack_2e == '\x01') {
            if ((int)((uint)bVar7 << 0x1c) < 0) goto LAB_2c5ffdd4;
LAB_2c5ffe9a:
            cVar14 = (char)piVar18[2];
          }
          else {
            if (-1 < (int)((uint)bVar7 << 0x1c)) goto LAB_2c5ffe9a;
            *(undefined1 *)(piVar18 + 2) = 0;
            cVar14 = '\0';
            piVar18[0x11] = 0;
            *(byte *)((int)piVar18 + 5) = bVar7 & 0xf6;
          }
          *(char *)(piVar18 + 2) = cStack_2e;
          iVar8 = piVar18[0x14];
          piVar18[3] = iStack_38;
          if (iVar8 != 0) {
            uVar16 = func_0x2c603118(iVar8);
            *puVar5 = uVar16;
            if (uVar16 != 0) {
              if (cStack_2e != '\0') {
                sStack_30 = 0;
              }
              uVar16 = func_0x2c603118(iVar8);
              *puVar5 = uVar16;
              if (uVar16 != 0) {
                if (cStack_2e == '\x01') {
                  if (cVar14 == '\0') {
                    iVar15 = FUN_2c629df4();
                    piVar18[0x11] = iVar15;
                    if (iStack_38 == 10) {
                      iVar15 = func_0x2c5ff1a8(*puVar5);
                      if ((iVar15 == 0) && (iVar15 = FUN_2c606b94(*puVar5,0x10), iVar15 == 0)) {
                        func_0x2c603124(iVar8);
                      }
                      else {
                        iVar15 = func_0x2c603124(iVar8);
                        if (iVar15 == 0) goto LAB_2c5ffd20;
                      }
                      uVar13 = *puVar4;
                      uVar11 = 1;
LAB_2c6001f6:
                      FUN_2c602340(*puVar5,uVar11,uVar13);
                      bVar7 = *(byte *)((int)piVar18 + 5);
joined_r0x2c600202:
                      bVar3 = (bVar7 & 2) == 0;
                      if (!bVar3) {
                        *puVar5 = 0;
joined_r0x2c60005e:
                        if (!bVar3) goto LAB_2c5ffdd4;
                      }
                    }
                    else if (iStack_38 == 0x14) {
LAB_2c600130:
                      sStack_30 = sStack_30 + -1;
                    }
                    else {
                      if (iStack_38 != 0x13) {
                        if (iStack_38 == 0x1b) {
                          func_0x2c603018(iVar8);
                          uVar16 = (uint)*(byte *)((int)piVar18 + 5);
                          if ((int)(uVar16 << 0x1e) < 0) {
                            *puVar5 = 0;
                          }
                          uVar17 = (uVar16 & 3) >> 1;
                          if ((int)(uVar16 << 0x1e) < 0) goto LAB_2c5ffdd4;
                          FUN_2c602340(*puVar5,0x20,*puVar4);
                          bVar7 = *(byte *)((int)piVar18 + 5);
                        }
                        else {
                          func_0x2c603018(iVar8);
                          bVar7 = *(byte *)((int)piVar18 + 5);
                          uVar17 = 0;
                        }
                        if ((bVar7 & 2) == 0) goto LAB_2c5ffd20;
                        *puVar5 = uVar17;
                        bVar3 = false;
                        goto joined_r0x2c60005e;
                      }
LAB_2c600208:
                      sStack_30 = sStack_30 + 1;
                    }
                  }
                  else if (cVar14 == '\x01') {
                    if ((int)((uint)*(byte *)((int)piVar18 + 5) << 0x1f) < 0) {
LAB_2c5fff9a:
                      uVar16 = FUN_2c629e10(piVar18[0x12]);
                      if (*(ushort *)(*piVar18 + 0x1e) < uVar16) {
                        iVar15 = FUN_2c629df4();
                        piVar18[0x12] = iVar15;
                        if (iStack_38 == 10) {
                          uVar13 = *puVar4;
                          uVar11 = 6;
                          goto LAB_2c6001f6;
                        }
                        if (iStack_38 == 0x14) goto LAB_2c600130;
                        if (iStack_38 == 0x13) goto LAB_2c600208;
                        func_0x2c603018(iVar8);
                        bVar7 = *(byte *)((int)piVar18 + 5);
                        goto joined_r0x2c600202;
                      }
                    }
                    else {
                      uVar16 = FUN_2c629e10(piVar18[0x11]);
                      if (*(ushort *)(*piVar18 + 0x1c) < uVar16) {
                        *(byte *)((int)piVar18 + 5) = *(byte *)((int)piVar18 + 5) | 1;
                        iVar15 = FUN_2c629df4();
                        piVar18[0x12] = iVar15;
                        if (iStack_38 == 10) {
                          iVar15 = func_0x2c5ff1a8(*puVar5);
                          if ((iVar15 == 0) && (iVar15 = FUN_2c606b94(*puVar5,0x10), iVar15 == 0)) {
                            FUN_2c602340(*puVar5,5,*puVar4);
                            bVar7 = *(byte *)((int)piVar18 + 5);
                            if (((int)((uint)bVar7 << 0x1e) < 0) &&
                               (*puVar5 = 0, (int)((uint)bVar7 << 0x1e) < 0)) goto LAB_2c5ffdd4;
                          }
                          else {
                            uVar16 = func_0x2c603130(iVar8);
                            if (1 < uVar16) {
                              bVar7 = func_0x2c603124(iVar8);
                              FUN_2c603048(iVar8,bVar7 ^ 1);
                              FUN_2c606b80(*puVar5,0x20);
                            }
                          }
                        }
                        *(byte *)((int)piVar18 + 5) = *(byte *)((int)piVar18 + 5) | 1;
                      }
                      else if ((int)((uint)*(byte *)((int)piVar18 + 5) << 0x1f) < 0)
                      goto LAB_2c5fff9a;
                    }
                  }
                }
                else {
                  if ((cStack_2e != '\0') || (cVar14 != '\x01')) goto LAB_2c5ffd20;
                  if (iStack_38 == 10) {
                    iVar15 = func_0x2c5ff1a8();
                    if ((iVar15 == 0) && (iVar15 = FUN_2c606b94(*puVar5,0x10), iVar15 == 0)) {
                      FUN_2c602340(*puVar5,8,*puVar4);
                      bVar7 = *(byte *)((int)piVar18 + 5);
                      if ((bVar7 & 2) != 0) {
                        *puVar5 = 0;
                      }
                      uVar16 = (uint)(bVar7 >> 1);
                      if ((int)((uint)bVar7 << 0x1e) < 0) goto LAB_2c5ffdd4;
                      if ((int)((uint)bVar7 << 0x1f) < 0) {
                        if ((bVar7 & 2) != 0) {
LAB_2c60032e:
                          *puVar5 = 0;
                          goto LAB_2c600330;
                        }
                      }
                      else {
                        FUN_2c602340(*puVar5,4,*puVar4);
                        uVar16 = (uint)(*(byte *)((int)piVar18 + 5) >> 1);
                        if ((int)((uint)*(byte *)((int)piVar18 + 5) << 0x1e) < 0) goto LAB_2c60032e;
LAB_2c600330:
                        if ((int)(uVar16 << 0x1f) < 0) goto LAB_2c5ffdd4;
                      }
                      FUN_2c602340(*puVar5,7,*puVar4);
                      if ((*(byte *)((int)piVar18 + 5) & 2) != 0) {
                        *puVar5 = 0;
                        goto LAB_2c5ffdd4;
                      }
                    }
                    else {
                      iVar15 = func_0x2c603124(iVar8);
                      if (iVar15 == 0) {
                        if (-1 < (int)((uint)*(byte *)((int)piVar18 + 5) << 0x1f)) {
                          FUN_2c603048(iVar8,1);
                        }
                      }
                      else {
                        if ((-1 < (int)((uint)*(byte *)((int)piVar18 + 5) << 0x1f)) ||
                           (uVar16 = func_0x2c603130(iVar8), uVar16 < 2)) {
                          FUN_2c602340(*puVar5,8,*puVar4);
                          uVar16 = (uint)*(byte *)((int)piVar18 + 5);
                          if ((int)(uVar16 << 0x1e) < 0) {
                            *puVar5 = 0;
                          }
                          if (-1 < (int)(uVar16 << 0x1e)) {
                            FUN_2c602340(*puVar5,4,*puVar4);
                            uVar17 = (uint)*(byte *)((int)piVar18 + 5);
                            if ((int)(uVar17 << 0x1e) < 0) {
                              *puVar5 = (uVar16 & 3) >> 1;
                            }
                            if (-1 < (int)(uVar17 << 0x1e)) {
                              FUN_2c602340(*puVar5,7,*puVar4);
                              uVar16 = (uint)*(byte *)((int)piVar18 + 5);
                              if ((int)(uVar16 << 0x1e) < 0) {
                                *puVar5 = (uVar17 & 3) >> 1;
                              }
                              if (-1 < (int)(uVar16 << 0x1e)) {
                                func_0x2c603018(iVar8,10);
                                if ((*(byte *)((int)piVar18 + 5) & 2) == 0) goto LAB_2c5ffd12;
                                *puVar5 = (uVar16 & 3) >> 1;
                              }
                            }
                          }
                          goto LAB_2c5ffdd4;
                        }
                        FUN_2c606b80(*puVar5,0x20);
                      }
                    }
                  }
LAB_2c5ffd12:
                  piVar18[0x11] = 0;
                  *(byte *)((int)piVar18 + 5) = *(byte *)((int)piVar18 + 5) & 0xfe;
                }
LAB_2c5ffd20:
                *puVar5 = 0;
                if (sStack_30 != 0) {
                  iVar15 = func_0x2c603124(iVar8);
                  if (iVar15 == 0) {
                    if (sStack_30 < 0) {
                      iVar15 = 0;
                      do {
                        FUN_2c602e74(iVar8);
                        if ((*(byte *)((int)piVar18 + 5) & 2) != 0) {
                          *puVar5 = 0;
                          break;
                        }
                        iVar15 = iVar15 + 1;
                      } while (iVar15 < -(int)sStack_30);
                    }
                    else if (sStack_30 != 0) {
                      iVar15 = 0;
                      do {
                        FUN_2c602e40(iVar8);
                        if ((*(byte *)((int)piVar18 + 5) & 2) != 0) {
                          *puVar5 = 0;
                          break;
                        }
                        iVar15 = iVar15 + 1;
                      } while (iVar15 < sStack_30);
                    }
                  }
                  else if (sStack_30 < 0) {
                    iVar15 = 0;
                    do {
                      func_0x2c603018(iVar8,0x14);
                      if ((*(byte *)((int)piVar18 + 5) & 2) != 0) {
                        *puVar5 = 0;
                        break;
                      }
                      iVar15 = iVar15 + 1;
                    } while (iVar15 < -(int)sStack_30);
                  }
                  else if (sStack_30 != 0) {
                    iVar15 = 0;
                    do {
                      func_0x2c603018(iVar8,0x13);
                      if ((*(byte *)((int)piVar18 + 5) & 2) != 0) {
                        *puVar5 = 0;
                        break;
                      }
                      iVar15 = iVar15 + 1;
                    } while (iVar15 < sStack_30);
                  }
                }
              }
            }
          }
LAB_2c5ffdd4:
          piVar18 = (int *)*puVar4;
LAB_2c5ffc48:
          uVar16 = (uint)*(byte *)((int)piVar18 + 5);
        }
LAB_2c5ffc4a:
        if ((int)(uVar16 << 0x1e) < 0) {
          bVar7 = *(byte *)(piVar18 + 0x10);
          piVar18[0xb] = 0;
          piVar18[0xf] = 0;
          *puVar5 = 0;
          *(byte *)(piVar18 + 0x10) = bVar7 & 0xf0;
          piVar18[9] = 0;
          piVar18[10] = 0;
          piVar18[0x11] = 0;
          piVar18[0x12] = 0;
          piVar18[6] = 0;
          piVar18[7] = 0;
          *(byte *)((int)piVar18 + 5) = *(byte *)((int)piVar18 + 5) & 0xfc;
        }
      } while (cVar6 != '\0');
      *puVar4 = 0;
      *puVar5 = 0;
    }
  }
  if (*_LAB_2c5ffdec == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


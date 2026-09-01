/* FUN_10087aa4 @ 0x10087aa4 */

void FUN_10087aa4(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  byte bVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  short local_2c;
  char local_2a;
  char local_29;
  
  puVar2 = DAT_10087d64;
  iVar13 = *(int *)(**(int **)(param_1 + 0xc) + 0x10);
  *DAT_10087d64 = *(int **)(param_1 + 0xc);
  if (((iVar13 != 0) &&
      (piVar6 = (int *)FUN_100874f8(), piVar3 = DAT_10087d80,
      -1 < (int)((uint)*(byte *)((int)piVar6 + 5) << 0x1d))) &&
     (*(int *)(*(int *)(*piVar6 + 0x10) + 0x14) == 0)) {
    do {
      FUN_10093048(*puVar2,&local_3c);
      cVar4 = local_29;
      puVar7 = (undefined4 *)FUN_100874f8(*puVar2);
      *piVar3 = 0;
      *(char *)(puVar7 + 1) = local_2a;
      if ((local_2a == '\x01') || ((*(char *)*puVar7 == '\x04' && (local_2c != 0)))) {
        iVar13 = *(int *)((char *)*puVar7 + 0x10);
        uVar8 = FUN_1012a75c();
        *(undefined4 *)(iVar13 + 0x264) = uVar8;
      }
      piVar6 = (int *)*puVar2;
      cVar1 = *(char *)*piVar6;
      if (cVar1 == '\x01') {
        piVar15 = (int *)**(undefined4 **)((char *)*piVar6 + 0x10);
        uVar14 = (uint)*(byte *)(piVar15 + 7);
        piVar6[8] = local_3c;
        piVar6[9] = local_38;
        if ((int)(uVar14 << 0x1a) < 0) {
          local_3c = ~local_3c + *piVar15;
          local_38 = ~local_38 + piVar15[1];
          if ((int)(uVar14 << 0x1b) < 0) {
LAB_10087b48:
            uVar14 = ~local_38;
            local_38 = local_3c;
            local_3c = piVar15[1] + uVar14;
          }
        }
        else if ((uVar14 & 0x30) == 0x10) goto LAB_10087b48;
        if ((int)local_3c < 0) {
          FUN_10094174(2,DAT_10087d70,0x16d,DAT_10087d6c,DAT_10087d68,local_3c);
        }
        uVar14 = local_3c;
        iVar13 = FUN_10092f10(*(undefined4 *)(*piVar6 + 0x10));
        if (iVar13 <= (int)uVar14) {
          FUN_10094174(2,DAT_10087d70,0x170,DAT_10087d6c,DAT_10087d74,local_3c);
        }
        if ((int)local_38 < 0) {
          FUN_10094174(2,DAT_10087d70,0x173,DAT_10087d6c,DAT_10087d78,local_38);
        }
        uVar14 = local_38;
        iVar13 = FUN_10092f2c(*(undefined4 *)(*piVar6 + 0x10));
        if (iVar13 <= (int)uVar14) {
          FUN_10094174(2,DAT_10087d70,0x176,DAT_10087d6c,DAT_10087d7c,local_38);
        }
        if ((piVar6[0x1f] != 0) && ((piVar6[6] != local_3c || (piVar6[7] != local_38)))) {
          FUN_1012562a();
        }
        piVar6[2] = local_3c;
        piVar6[3] = local_38;
        if ((char)piVar6[1] == '\x01') {
          FUN_10087738();
        }
        else {
          FUN_10087534(piVar6 + 1);
        }
LAB_10087bfe:
        piVar6[6] = piVar6[2];
        piVar6[7] = piVar6[3];
      }
      else if (cVar1 == '\x02') {
        bVar5 = *(byte *)((int)piVar6 + 5);
        if (local_2a == '\x01') {
          if ((bVar5 & 8) != 0) goto LAB_10087c24;
        }
        else if ((bVar5 & 8) != 0) {
          piVar6[0x1d] = 0;
          *(byte *)((int)piVar6 + 5) = bVar5 & 0xf6;
          *(undefined1 *)(piVar6 + 2) = 0;
        }
        iVar13 = piVar6[0x20];
        if (iVar13 != 0) {
          iVar9 = FUN_1012455a(iVar13);
          *piVar3 = iVar9;
          if (iVar9 != 0) {
            iVar9 = FUN_10124cd6(iVar9,0x80);
            iVar11 = piVar6[3];
            piVar6[3] = local_34;
            cVar1 = (char)piVar6[2];
            *(char *)(piVar6 + 2) = local_2a;
            if (local_2a == '\x01') {
              if (cVar1 == '\0') {
                iVar11 = FUN_1012a75c();
                piVar6[0x1d] = iVar11;
                if (local_34 == 9) {
                  FUN_1012458c(iVar13,0);
                  FUN_10087314(iVar13);
                }
                else if (local_34 == 0xb) {
                  FUN_1012458c(iVar13,0);
                  FUN_10087344(iVar13);
                }
                else {
                  if (iVar9 != 0) goto LAB_10087cb4;
                  if (local_34 == 10) {
                    FUN_10124564(iVar13);
                    iVar13 = FUN_100874e0(piVar6 + 1);
                    if (iVar13 != 0) goto LAB_10087c24;
                    uVar8 = *puVar2;
                    uVar10 = 1;
LAB_10087cee:
                    FUN_10086f50(*piVar3,uVar10,uVar8);
                  }
                  else {
                    if (local_34 == 0x1b) {
                      FUN_10124564(iVar13);
                      iVar13 = FUN_100874e0(piVar6 + 1);
                      if (iVar13 == 0) {
                        uVar10 = 0x20;
                        uVar8 = *puVar2;
                        goto LAB_10087cee;
                      }
                      goto LAB_10087c24;
                    }
LAB_10087d9a:
                    FUN_10124564(iVar13);
                  }
                }
LAB_10087cac:
                iVar13 = FUN_100874e0(piVar6 + 1);
                if (iVar13 != 0) goto LAB_10087c24;
              }
              else if ((iVar9 == 0) && (cVar1 == '\x01')) {
                if (local_34 == 10) {
                  FUN_10086f50(*piVar3,2,*puVar2);
                  iVar9 = FUN_100874e0(piVar6 + 1);
                  if (iVar9 != 0) goto LAB_10087c24;
                }
                if ((int)((uint)*(byte *)((int)piVar6 + 5) << 0x1f) < 0) {
LAB_10087d2c:
                  uVar14 = FUN_1012a764(piVar6[0x1e]);
                  if (*(ushort *)(*piVar6 + 0x1e) < uVar14) {
                    iVar9 = FUN_1012a75c();
                    piVar6[0x1e] = iVar9;
                    if (local_34 == 10) {
                      uVar10 = 6;
                      uVar8 = *puVar2;
                      goto LAB_10087cee;
                    }
                    if (local_34 == 9) {
                      FUN_1012458c(iVar13,0);
                      FUN_10087314(iVar13);
                    }
                    else {
                      if (local_34 != 0xb) goto LAB_10087d9a;
                      FUN_1012458c(iVar13,0);
                      FUN_10087344(iVar13);
                    }
                    goto LAB_10087cac;
                  }
                }
                else {
                  uVar14 = FUN_1012a764(piVar6[0x1d]);
                  if (*(ushort *)(*piVar6 + 0x1c) < uVar14) {
                    *(byte *)((int)piVar6 + 5) = *(byte *)((int)piVar6 + 5) | 1;
                    if (local_34 == 10) {
                      iVar13 = FUN_1012a75c();
                      piVar6[0x1e] = iVar13;
                      FUN_10086f50(*piVar3,5,*puVar2);
                      goto LAB_10087cac;
                    }
                  }
                  else if ((int)((uint)*(byte *)((int)piVar6 + 5) << 0x1f) < 0) goto LAB_10087d2c;
                }
              }
            }
            else {
              if (((iVar9 != 0) || (local_2a != '\0')) || (cVar1 != '\x01')) goto LAB_10087cb4;
              local_34 = iVar11;
              if (iVar11 == 10) {
                piVar15 = piVar6 + 1;
                FUN_10086f50(*piVar3,8,*puVar2);
                iVar13 = FUN_100874e0(piVar15);
                if (iVar13 == 0) {
                  if (-1 < (int)((uint)*(byte *)((int)piVar6 + 5) << 0x1f)) {
                    FUN_10086f50(*piVar3,4,*puVar2);
                    iVar13 = FUN_100874e0(piVar15);
                    if (iVar13 != 0) goto LAB_10087c24;
                  }
                  FUN_10086f50(*piVar3,7,*puVar2);
                  iVar13 = FUN_100874e0(piVar15);
                  if (iVar13 == 0) goto LAB_10088260;
                }
                goto LAB_10087c24;
              }
LAB_10088260:
              piVar6[0x1d] = 0;
              *(byte *)((int)piVar6 + 5) = *(byte *)((int)piVar6 + 5) & 0xfe;
            }
LAB_10087cb4:
            *piVar3 = 0;
          }
        }
      }
      else if (cVar1 == '\x04') {
        bVar5 = *(byte *)((int)piVar6 + 5);
        if (local_2a == '\x01') {
          if ((bVar5 & 8) != 0) goto LAB_10087c24;
        }
        else if ((bVar5 & 8) != 0) {
          piVar6[0x1d] = 0;
          *(byte *)((int)piVar6 + 5) = bVar5 & 0xf6;
          *(undefined1 *)(piVar6 + 2) = 0;
        }
        iVar13 = piVar6[0x20];
        cVar1 = (char)piVar6[2];
        piVar6[3] = local_34;
        *(char *)(piVar6 + 2) = local_2a;
        if (iVar13 != 0) {
          iVar9 = FUN_1012455a(iVar13);
          *piVar3 = iVar9;
          if (iVar9 != 0) {
            if (local_2a != '\0') {
              local_2c = 0;
            }
            iVar9 = FUN_1012455a(iVar13);
            *piVar3 = iVar9;
            if (iVar9 != 0) {
              if (local_2a == '\x01') {
                if (cVar1 == '\0') {
                  iVar9 = FUN_1012a75c();
                  piVar6[0x1d] = iVar9;
                  if (local_34 == 10) {
                    iVar11 = FUN_10124dec(*piVar3);
                    iVar9 = 1;
                    if (iVar11 == 0) {
                      iVar9 = FUN_10124cb8(*piVar3,0x10);
                    }
                    iVar11 = FUN_10124658(iVar13);
                    if ((iVar11 == 0) && (iVar9 != 0)) goto LAB_10087f9c;
                    uVar8 = 1;
                    uVar12 = *puVar2;
LAB_10087e84:
                    FUN_10086f50(*piVar3,uVar8,uVar12);
                  }
                  else {
                    if (local_34 == 0x14) {
LAB_10087ea4:
                      local_2c = local_2c + -1;
                      goto LAB_10087f9c;
                    }
                    if (local_34 == 0x13) {
LAB_10087eb4:
                      local_2c = local_2c + 1;
                      goto LAB_10087f9c;
                    }
                    if (local_34 == 0x1b) {
                      FUN_10124564(iVar13);
                      iVar9 = FUN_100874e0(piVar6 + 1);
                      if (iVar9 != 0) goto LAB_10087c24;
                      FUN_10086f50(*piVar3,0x20,*puVar2);
                    }
                    else {
                      FUN_10124564(iVar13);
                    }
                  }
LAB_10087ee2:
                  iVar9 = FUN_100874e0(piVar6 + 1);
                  if (iVar9 != 0) goto LAB_10087c24;
                }
                else {
                  if (cVar1 != '\x01') goto LAB_10087f9c;
                  if (-1 < (int)((uint)*(byte *)((int)piVar6 + 5) << 0x1f)) {
                    uVar14 = FUN_1012a764(piVar6[0x1d]);
                    if (*(ushort *)(*piVar6 + 0x1c) < uVar14) {
                      *(byte *)((int)piVar6 + 5) = *(byte *)((int)piVar6 + 5) | 1;
                      iVar9 = FUN_1012a75c();
                      piVar6[0x1e] = iVar9;
                      if (local_34 == 10) {
                        iVar9 = FUN_10124dec(*piVar3);
                        if ((iVar9 == 0) && (iVar9 = FUN_10124cb8(*piVar3,0x10), iVar9 == 0)) {
                          FUN_10086f50(*piVar3,5,*puVar2);
                          iVar9 = FUN_100874e0(piVar6 + 1);
                          if (iVar9 != 0) goto LAB_10087c24;
                        }
                        else {
                          uVar14 = thunk_FUN_1012b084(iVar13);
                          if (1 < uVar14) {
                            bVar5 = FUN_10124658(iVar13);
                            FUN_1012458c(iVar13,bVar5 ^ 1);
                            FUN_10124ca6(*piVar3,0x20);
                          }
                        }
                      }
                      bVar5 = *(byte *)((int)piVar6 + 5) | 1;
                      goto LAB_10087f72;
                    }
                    if (-1 < (int)((uint)*(byte *)((int)piVar6 + 5) << 0x1f)) goto LAB_10087f9c;
                  }
                  uVar14 = FUN_1012a764(piVar6[0x1e]);
                  if (*(ushort *)(*piVar6 + 0x1e) < uVar14) {
                    iVar9 = FUN_1012a75c();
                    piVar6[0x1e] = iVar9;
                    if (local_34 != 10) {
                      if (local_34 != 0x14) {
                        if (local_34 == 0x13) goto LAB_10087eb4;
                        FUN_10124564(iVar13);
                        goto LAB_10087ee2;
                      }
                      goto LAB_10087ea4;
                    }
                    uVar8 = 6;
                    uVar12 = *puVar2;
                    goto LAB_10087e84;
                  }
                }
              }
              else if ((local_2a == '\0') && (cVar1 == '\x01')) {
                if (local_34 == 10) {
                  iVar9 = FUN_10124dec();
                  if ((iVar9 == 0) && (iVar9 = FUN_10124cb8(*piVar3,0x10), iVar9 == 0)) {
                    FUN_10086f50(*piVar3,8,*puVar2);
                    iVar9 = FUN_100874e0(piVar6 + 1);
                    if (iVar9 == 0) {
                      if (-1 < (int)((uint)*(byte *)((int)piVar6 + 5) << 0x1f)) {
                        FUN_10086f50(*piVar3,4,*puVar2);
                      }
                      iVar9 = FUN_100874e0(piVar6 + 1);
                      if (iVar9 == 0) {
                        FUN_10086f50(*piVar3,7,*puVar2);
LAB_1008803e:
                        iVar9 = FUN_100874e0(piVar6 + 1);
                        if (iVar9 == 0) goto LAB_1008804a;
                      }
                    }
                    goto LAB_10087c24;
                  }
                  iVar9 = FUN_10124658(iVar13);
                  if (iVar9 == 0) {
                    if (-1 < (int)((uint)*(byte *)((int)piVar6 + 5) << 0x1f)) {
                      FUN_1012458c(iVar13,1);
                    }
                  }
                  else {
                    if ((-1 < (int)((uint)*(byte *)((int)piVar6 + 5) << 0x1f)) ||
                       (uVar14 = thunk_FUN_1012b084(iVar13), uVar14 < 2)) {
                      piVar15 = piVar6 + 1;
                      FUN_10086f50(*piVar3,8,*puVar2);
                      iVar9 = FUN_100874e0(piVar15);
                      if (iVar9 == 0) {
                        FUN_10086f50(*piVar3,4,*puVar2);
                        iVar9 = FUN_100874e0(piVar15);
                        if (iVar9 == 0) {
                          FUN_10086f50(*piVar3,7,*puVar2);
                          iVar9 = FUN_100874e0(piVar15);
                          if (iVar9 == 0) {
                            FUN_10124564(iVar13,10);
                            goto LAB_1008803e;
                          }
                        }
                      }
                      goto LAB_10087c24;
                    }
                    FUN_10124ca6(*piVar3,0x20);
                  }
                }
LAB_1008804a:
                piVar6[0x1d] = 0;
                bVar5 = *(byte *)((int)piVar6 + 5) & 0xfe;
LAB_10087f72:
                *(byte *)((int)piVar6 + 5) = bVar5;
              }
LAB_10087f9c:
              iVar9 = 0;
              *piVar3 = 0;
              if (local_2c != 0) {
                iVar11 = FUN_10124658(iVar13);
                if (iVar11 == 0) {
                  if (local_2c < 0) {
                    for (iVar9 = 0; iVar9 < -(int)local_2c; iVar9 = iVar9 + 1) {
                      FUN_10087344(iVar13);
                      iVar11 = FUN_100874e0(piVar6 + 1);
                      if (iVar11 != 0) break;
                    }
                  }
                  else if (local_2c != 0) {
                    for (iVar9 = 0; iVar9 < local_2c; iVar9 = iVar9 + 1) {
                      FUN_10087314(iVar13);
                      iVar11 = FUN_100874e0(piVar6 + 1);
                      if (iVar11 != 0) break;
                    }
                  }
                }
                else if (local_2c < 0) {
                  for (; iVar9 < -(int)local_2c; iVar9 = iVar9 + 1) {
                    FUN_10124564(iVar13,0x14);
                    iVar11 = FUN_100874e0(piVar6 + 1);
                    if (iVar11 != 0) break;
                  }
                }
                else if (local_2c != 0) {
                  for (; iVar9 < local_2c; iVar9 = iVar9 + 1) {
                    FUN_10124564(iVar13,0x13);
                    iVar11 = FUN_100874e0(piVar6 + 1);
                    if (iVar11 != 0) break;
                  }
                }
              }
            }
          }
        }
      }
      else if (cVar1 == '\x03') {
        iVar13 = piVar6[0x21];
        if (iVar13 == 0) {
          FUN_10094174(2,DAT_10088284,0x30a,DAT_10088280,DAT_1008827c);
        }
        else {
          piVar15 = piVar6 + 1;
          iVar9 = *(int *)(iVar13 + local_30 * 8);
          iVar13 = *(int *)(iVar13 + local_30 * 8 + 4);
          if ((local_2a == '\x01') && ((iVar9 != piVar6[6] || (iVar13 != piVar6[7])))) {
            FUN_10087534(piVar15);
          }
          iVar11 = FUN_100874e0(piVar15);
          if (iVar11 == 0) {
            piVar6[2] = iVar9;
            piVar6[3] = iVar13;
            if (local_2a == '\x01') {
              FUN_10087738();
            }
            else {
              FUN_10087534(piVar15);
            }
            iVar13 = FUN_100874e0(piVar15);
            if (iVar13 == 0) goto LAB_10087bfe;
          }
        }
      }
LAB_10087c24:
      FUN_100874f8(*puVar2);
    } while (cVar4 != '\0');
    *puVar2 = 0;
    *piVar3 = 0;
  }
  return;
}


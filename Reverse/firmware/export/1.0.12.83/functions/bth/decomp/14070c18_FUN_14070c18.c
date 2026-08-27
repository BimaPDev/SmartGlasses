/* FUN_14070c18 @ 0x14070c18 */

void FUN_14070c18(uint param_1)

{
  ushort uVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  int *piVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  ushort *puVar18;
  undefined4 *puVar19;
  char cVar20;
  int iVar21;
  ushort local_34;
  ushort local_30;
  
  iVar3 = DAT_14071194;
  iVar11 = *(int *)(DAT_14071194 + (param_1 + 6) * 4);
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14071180,0x259,DAT_1407117c);
  }
  if (-1 < (int)((*(uint *)(DAT_14071194 + 0x24) >> (param_1 & 0xff)) << 0x1f)) {
    uVar9 = 1 << (param_1 & 0xff);
    do {
      iVar12 = *(int *)(iVar11 + 0x24);
      if (iVar12 == 0) {
        return;
      }
      if (-1 < (int)((uint)*(byte *)(iVar11 + 0x3a) << 0x1f)) {
        return;
      }
      uVar8 = *(ushort *)(iVar12 + 8);
      iVar14 = *(int *)(iVar12 + 4);
      uVar1 = uVar8 >> 0xe;
      iVar21 = iVar14;
      if (uVar1 == 1) {
joined_r0x14070d06:
        if (iVar21 != 0) {
          uVar16 = (uint)*(byte *)(iVar11 + 0x33);
          uVar17 = (uint)*(byte *)(iVar11 + 0x32);
          uVar13 = uVar8 & 0x3fff;
          if (uVar16 < uVar17) {
            do {
              if (uVar13 == 0) goto LAB_14070ce4;
              uVar7 = uVar17 - uVar16;
              if (uVar13 <= uVar17 - uVar16) {
                uVar7 = uVar13;
              }
              FUN_140e5278(uVar16 + 0x34 + iVar11,iVar14,uVar7);
              uVar17 = *(byte *)(iVar11 + 0x33) + uVar7;
              uVar16 = uVar17 & 0xff;
              iVar14 = iVar14 + uVar7;
              uVar13 = uVar13 - uVar7 & 0xffff;
              *(char *)(iVar11 + 0x33) = (char)uVar17;
              if (uVar16 == 4) {
                if (((param_1 < 2) && (iVar21 = *(int *)(iVar3 + (param_1 + 6) * 4), iVar21 != 0))
                   && (*(char *)(iVar21 + 0x3c) != '\0')) {
                  piVar6 = (int *)(iVar21 + 0x3c);
                  cVar20 = '\0';
                  while( true ) {
                    piVar6 = piVar6 + 1;
                    iVar10 = *piVar6;
                    cVar4 = cVar20 + '\x01';
                    if ((iVar10 != 0) && (*(short *)(iVar10 + 0x14) == *(short *)(iVar11 + 0x36)))
                    break;
                    cVar20 = cVar4;
                    if (*(char *)(iVar21 + 0x3c) == cVar4) goto LAB_14070e3c;
                  }
                  uVar17 = (uint)*(ushort *)(iVar10 + 0x12);
                  if (-1 < (int)(uVar17 << 0x1f)) goto LAB_14070e3c;
                  if ((int)(uVar17 << 0x18) < 0) {
LAB_14070ee8:
                    bVar15 = *(byte *)(iVar11 + 0x32);
LAB_14070eec:
                    uVar17 = (uint)bVar15;
                    *(char *)(iVar11 + 0x31) = cVar20;
                    goto LAB_14070d52;
                  }
                  uVar8 = *(ushort *)(iVar11 + 0x34);
                  uVar7 = (uint)uVar8;
                  if (*(ushort *)(iVar10 + 0x1c) < uVar7) {
                    FUN_1406f968(param_1,cVar20,0x32);
                    uVar16 = (uint)*(byte *)(iVar11 + 0x33);
                    uVar17 = (uint)*(byte *)(iVar11 + 0x32);
                  }
                  else if (((int)(uVar17 << 0x1d) < 0) && (*(short *)(iVar10 + 0x20) == 0)) {
                    FUN_1406f968(param_1,cVar20,0x3b);
                    uVar16 = (uint)*(byte *)(iVar11 + 0x33);
                    uVar17 = (uint)*(byte *)(iVar11 + 0x32);
                  }
                  else {
                    iVar21 = *(int *)(iVar10 + 0xc);
                    if (iVar21 != 0) {
                      if ((int)((uint)*(byte *)(iVar21 + 0x2d) << 0x1c) < 0) {
                        puVar18 = (ushort *)0x0;
                      }
                      else {
                        puVar18 = (ushort *)(iVar21 + ((*(byte *)(iVar21 + 0x2d) & 0xf) + 3) * 4);
                      }
                      if ((int)((uint)*(ushort *)(iVar21 + 4) - (uint)puVar18[1]) < (int)uVar7) {
                        FUN_1406f968(param_1,cVar20,0x34);
                      }
                      puVar18[2] = uVar8;
                      *puVar18 = *puVar18 + 1;
                      *(short *)(iVar10 + 0x20) = *(short *)(iVar10 + 0x20) + -1;
                      if ((int)((uint)puVar18[1] + (*(ushort *)(iVar10 + 0x1c) - 1)) /
                          (int)(uint)*(ushort *)(iVar10 + 0x1c) < (int)(uint)*puVar18) {
                        FUN_1406f8f8(param_1,cVar20,1);
                        *(short *)(iVar10 + 0x20) = *(short *)(iVar10 + 0x20) + 1;
                        *puVar18 = *puVar18 - 1;
                      }
                      uVar16 = (uint)*(byte *)(iVar11 + 0x33);
                      goto LAB_14070ee8;
                    }
                    if (1 < uVar7) {
                      bVar15 = *(char *)(iVar11 + 0x32) + 2;
                      *(byte *)(iVar11 + 0x32) = bVar15;
                      goto LAB_14070eec;
                    }
                    FUN_1406f968(param_1,cVar20,0x34);
                    uVar16 = (uint)*(byte *)(iVar11 + 0x33);
                    uVar17 = (uint)*(byte *)(iVar11 + 0x32);
                  }
                }
                else {
LAB_14070e3c:
                  uVar17 = (uint)*(byte *)(iVar11 + 0x32);
                }
                if (uVar16 < uVar17) goto LAB_14070ce4;
                break;
              }
              if (uVar16 == 6) {
                iVar21 = *(int *)(iVar11 + (*(byte *)(iVar11 + 0x31) + 0x10) * 4);
                if (iVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1402a64c(0x42,DAT_14071180,0x2fd,DAT_1407117c);
                }
                if (*(ushort *)(iVar21 + 0x18) < *(ushort *)(iVar11 + 0x38)) {
                  FUN_1406f968(param_1,(uint)*(byte *)(iVar11 + 0x31),0x31);
                  uVar16 = (uint)*(byte *)(iVar11 + 0x33);
                  goto LAB_14070e3c;
                }
                uVar16 = (uint)*(byte *)(iVar11 + 0x33);
                uVar17 = (uint)*(byte *)(iVar11 + 0x32);
              }
              else {
                uVar17 = (uint)*(byte *)(iVar11 + 0x32);
              }
LAB_14070d52:
            } while (uVar16 < uVar17);
          }
          uVar17 = (uint)*(byte *)(iVar11 + 0x31);
          if (uVar17 != 0xff) {
            puVar19 = *(undefined4 **)(iVar11 + (uVar17 + 0x10) * 4);
            iVar21 = puVar19[3];
            if (iVar21 == 0) {
              local_34 = *(ushort *)(iVar11 + 0x34);
              uVar7 = (uint)local_34;
              local_30 = 0;
              if (uVar16 == 4) {
                if (*(ushort *)(puVar19 + 7) < uVar7) {
                  if (0x16 < uVar7) {
                    uVar7 = 0x17;
                  }
                  local_34 = (ushort)uVar7;
                  local_30 = 0x31;
                }
              }
              else {
                if (uVar16 != 6) {
                    /* WARNING: Subroutine does not return */
                  FUN_1402a64c(0x42,DAT_14071180,0x338,DAT_1407117c);
                }
                local_34 = local_34 - 2;
                uVar7 = (uint)*(ushort *)(iVar11 + 0x38);
                *(short *)(puVar19 + 8) = *(short *)(puVar19 + 8) + -1;
              }
              if (*(char *)(iVar3 + 0x31) == '\0') {
                if (uVar7 == uVar13) {
                  *(undefined1 *)(iVar11 + 0x31) = 0xff;
                }
                if ((uVar13 & 0xc000) == 0) {
                  *(ushort *)(iVar12 + 8) = *(ushort *)(iVar12 + 8) & 0xc000 | (ushort)uVar13;
                  *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | uVar9;
                  return;
                }
                    /* WARNING: Subroutine does not return */
                FUN_1402a64c(0x44,DAT_14071190,0x345,DAT_1407117c,0x3fff,uVar13);
              }
              iVar21 = FUN_14073468(puVar19 + 3,0);
              puVar2 = DAT_14071184;
              if (iVar21 != 0) {
                *(undefined1 *)(iVar11 + 0x31) = 0xff;
                if ((int)((uint)*(ushort *)((int)puVar19 + 0x12) << 0x18) < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1402a64c(0x42,DAT_14071180,0x35a,DAT_1407117c);
                }
                FUN_1406f968(param_1,uVar17,0x4b);
                goto LAB_14070ce4;
              }
              *(char *)(iVar3 + 0x31) = *(char *)(iVar3 + 0x31) + -1;
              *puVar2 = *puVar2 & 0xffffff00 | param_1 | 0xff00;
              FUN_140738f8(puVar19[3],DAT_14071188,puVar2);
              puVar18 = (ushort *)puVar19[3];
              if (puVar18 != (ushort *)0x0) {
                if ((*(byte *)((int)puVar18 + 0x2d) & 8) == 0) {
                  puVar18 = puVar18 + ((*(byte *)((int)puVar18 + 0x2d) & 0xf) + 3) * 2;
                }
                else {
                  puVar18 = (ushort *)0x0;
                }
              }
              puVar18[2] = local_34;
              puVar18[3] = local_30;
              puVar18[1] = 0;
              *puVar18 = 1;
              iVar21 = puVar19[3];
              if (iVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1402a64c(0x42,DAT_14071180,0x37a,DAT_1407117c);
              }
            }
            else if ((int)((uint)*(byte *)(iVar21 + 0x2d) << 0x1c) < 0) {
              puVar18 = (ushort *)0x0;
            }
            else {
              puVar18 = (ushort *)(iVar21 + ((*(byte *)(iVar21 + 0x2d) & 0xf) + 3) * 4);
            }
            uVar16 = (uint)puVar18[2];
            if (uVar13 <= puVar18[2]) {
              uVar16 = uVar13;
            }
            FUN_140e5278((uint)puVar18[1] + iVar21 + *(ushort *)(iVar21 + 6) + 0x30,iVar14);
            uVar8 = puVar18[2];
            puVar18[2] = (ushort)(uVar8 - uVar16);
            puVar18[1] = (short)uVar16 + puVar18[1];
            if ((uVar8 - uVar16 & 0xffff) == 0) {
              *(undefined1 *)(iVar11 + 0x31) = 0xff;
              iVar21 = puVar19[3];
              uVar8 = 0;
              if (iVar21 != 0) {
                uVar8 = *(ushort *)(iVar21 + 4);
              }
              if (puVar18[1] == uVar8) {
                puVar19[3] = 0;
                puVar2 = DAT_1407118c;
                if ((int)((uint)*(ushort *)((int)puVar19 + 0x12) << 0x1d) < 0) {
                  *DAT_1407118c = *DAT_1407118c & 0xffff0000 | param_1 | uVar17 << 8;
                  *puVar2 = param_1 & 0xffff | uVar17 << 8 | (uint)*puVar18 << 0x10;
                  FUN_140738f8(iVar21,DAT_14071188,puVar2);
                }
                (**(code **)*puVar19)(param_1,uVar17,puVar18[3],iVar21);
                FUN_140735a8(iVar21);
              }
            }
          }
        }
      }
      else if (uVar1 == 2) {
        uVar16 = (uint)*(byte *)(iVar11 + 0x31);
        if (uVar16 != 0xff) {
          puVar19 = *(undefined4 **)(iVar11 + (uVar16 + 0x10) * 4);
          if (puVar19 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x42,DAT_14071180,0x273,DAT_1407117c);
          }
          if ((int)((uint)*(ushort *)((int)puVar19 + 0x12) << 0x18) < 0) {
            iVar21 = puVar19[3];
            if (iVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1402a64c(0x42,DAT_14071180,0x27e,DAT_1407117c);
            }
            if ((int)((uint)*(byte *)(iVar21 + 0x2d) << 0x1c) < 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = iVar21 + ((*(byte *)(iVar21 + 0x2d) & 0xf) + 3) * 4;
            }
            puVar19[3] = 0;
            sVar5 = *(short *)(iVar10 + 6);
            if (sVar5 == 0) {
              sVar5 = 0x34;
            }
            (**(code **)*puVar19)(param_1,uVar16,sVar5,iVar21);
            FUN_140735a8(iVar21);
          }
          else {
            FUN_1406f968(param_1,uVar16,0x34);
          }
        }
        *(undefined1 *)(iVar11 + 0x31) = 0xff;
        *(undefined2 *)(iVar11 + 0x32) = 4;
        *(ushort *)(iVar12 + 8) = (ushort)(((uint)*(ushort *)(iVar12 + 8) << 0x12) >> 0x12) | 0x4000
        ;
        iVar21 = *(int *)(iVar12 + 4);
        goto joined_r0x14070d06;
      }
LAB_14070ce4:
      FUN_14073a58(iVar11 + 0x24);
      FUN_1406dba8(iVar12);
    } while ((uVar9 & *(uint *)(iVar3 + 0x24)) == 0);
  }
  return;
}


/* FUN_2c630178 @ 0x2c630178 */

/* WARNING: Removing unreachable block (ram,0x2c600c16) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c630178(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  short *psVar18;
  byte *pbVar19;
  int *piVar20;
  int iVar21;
  byte bVar22;
  uint uVar23;
  int iVar24;
  undefined8 uVar25;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  undefined2 uStack_128;
  undefined2 uStack_126;
  undefined1 auStack_124 [4];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined1 *puStack_114;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_dc [88];
  undefined1 auStack_84 [68];
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  iStack_2c = *_LAB_2c6304ac;
  iVar14 = FUN_2c602110(_LAB_2c6304b0,param_2,param_3,0);
  if (iVar14 != 1) goto LAB_2c630194;
  iVar14 = FUN_2c602408(param_2);
  iVar15 = FUN_2c602400(param_2);
  iVar16 = func_0x2c639428();
  if ((iVar16 == 1) || (iVar16 != 2)) {
    if (iVar14 == 0x11) {
      bVar1 = false;
      goto LAB_2c6303ec;
    }
    if (iVar14 == 1) {
      FUN_2c607df0(iVar15);
      *(byte *)(iVar15 + 0x7c) = *(byte *)(iVar15 + 0x7c) | 1;
      goto LAB_2c630488;
    }
LAB_2c6301d6:
    if (iVar14 == 2) {
      if (*(int *)(iVar15 + 0x78) != 0) {
        uVar11 = FUN_2c5ff4d8();
        iVar14 = FUN_2c5ff4e4();
        if (iVar14 == 1) {
          FUN_2c5ff5cc(uVar11,&uStack_34);
          iVar13 = *(int *)(iVar15 + 0x2c) - *(int *)(iVar15 + 0x28);
          iVar14 = FUN_2c6073ec(iVar15);
          iVar16 = FUN_2c6073f8(iVar15);
          if (iVar14 < iVar16) {
            sVar4 = FUN_2c6033b4(iVar15,0,0x10);
            sVar5 = FUN_2c6033b4(iVar15,0,0x11);
            sVar6 = FUN_2c6073f8(iVar15);
            iVar14 = *(int *)(iVar15 + 0x28);
            iVar16 = (iVar13 * (((int)sVar5 + (int)*(short *)(iVar15 + 0x1a)) - (int)uStack_34._2_2_
                               )) / (int)(short)(sVar6 - (sVar5 + sVar4)) + iVar14;
          }
          else {
            sVar4 = FUN_2c6033b4(iVar15,0,0x12);
            sVar5 = FUN_2c6033b4(iVar15,0,0x13);
            sVar6 = FUN_2c6073ec(iVar15);
            cVar2 = FUN_2c6033b4(iVar15,0,0x16);
            if (cVar2 == '\x01') {
              iVar16 = ((int)*(short *)(iVar15 + 0x18) - (int)sVar5) - (int)(short)uStack_34;
            }
            else {
              iVar16 = (int)(short)uStack_34 - ((int)sVar4 + (int)*(short *)(iVar15 + 0x14));
            }
            iVar14 = *(int *)(iVar15 + 0x28);
            iVar16 = (iVar13 * iVar16) / (int)(short)(sVar6 - (sVar4 + sVar5)) + iVar14;
          }
          piVar20 = *(int **)(iVar15 + 0x78);
          if (piVar20 == (int *)(iVar15 + 0x30)) {
            iVar13 = *(int *)(iVar15 + 0x24);
          }
          else {
            iVar13 = *(int *)(iVar15 + 0x2c);
            iVar14 = *(int *)(iVar15 + 0x30);
          }
          if (iVar13 <= iVar16) {
            iVar16 = iVar13;
          }
          if (iVar16 < iVar14) {
            iVar16 = iVar14;
          }
          if (iVar16 != *piVar20) {
            *piVar20 = iVar16;
            FUN_2c607df0(iVar15);
            FUN_2c602340(iVar15,0x1c,0);
          }
        }
      }
    }
    else if ((iVar14 == 8) || (iVar14 == 3)) {
      *(undefined4 *)(iVar15 + 0x78) = 0;
      *(byte *)(iVar15 + 0x7c) = *(byte *)(iVar15 + 0x7c) & 0xfe;
      FUN_2c607df0(iVar15);
      iVar14 = FUN_2c606bc0(iVar15);
      iVar16 = func_0x2c603124();
      FUN_2c5ff4d8();
      iVar13 = FUN_2c5ff4e4();
      if ((iVar13 == 4) && (iVar16 != 0)) {
        iVar16 = func_0x2c639428(iVar15);
        if (iVar16 == 2) {
          bVar22 = *(byte *)(iVar15 + 0x7c);
          if (-1 < (int)((uint)bVar22 << 0x1e)) {
            *(byte *)(iVar15 + 0x7c) = bVar22 | 2;
            goto LAB_2c630194;
          }
          *(byte *)(iVar15 + 0x7c) = bVar22 & 0xfd;
          iVar15 = *_LAB_2c630760;
        }
        else {
          iVar15 = *_LAB_2c6304ac;
        }
        if (iVar15 == iStack_2c) {
          if (iVar14 == 0) {
            return;
          }
          if ((int)((uint)*(byte *)(iVar14 + 0x1c) << 0x1e) < 0) {
            *(byte *)(iVar14 + 0x1c) = *(byte *)(iVar14 + 0x1c) & 0xfd;
            if ((*(int **)(iVar14 + 0xc) != (int *)0x0) &&
               (iVar14 = **(int **)(iVar14 + 0xc), iVar14 != 0)) {
              uVar11 = FUN_2c602bd8();
              iVar15 = FUN_2c602340(iVar14,0xe,uVar11);
              if (iVar15 == 1) {
                FUN_2c607df0(iVar14);
                return;
              }
            }
          }
          return;
        }
        goto LAB_2c63073e;
      }
    }
    else if (iVar14 == 0xe) {
      FUN_2c5ff4d8();
      iVar14 = FUN_2c5ff4e4();
      if ((iVar14 == 4) || (iVar14 == 2)) {
        *(byte *)(iVar15 + 0x7c) = *(byte *)(iVar15 + 0x7c) & 0xfd;
      }
    }
    else {
      if (iVar14 == 0x29) {
        if (*_LAB_2c6304ac == iStack_2c) {
          iVar14 = *DAT_2c600c28;
          sVar4 = 0;
          if (*(int *)(iVar15 + 8) != 0) {
            sVar4 = *(short *)(*(int *)(iVar15 + 8) + 0x16);
          }
          FUN_2c602340(iVar15,0x13,&stack0xffffffea);
          if (sVar4 == 0) {
            iVar16 = *(int *)(iVar15 + 8);
          }
          else {
            FUN_2c607df0(iVar15);
            iVar16 = *(int *)(iVar15 + 8);
          }
          if (iVar16 != 0) {
            *(undefined2 *)(iVar16 + 0x16) = 0;
          }
          if (sVar4 != 0) {
            FUN_2c607df0(iVar15);
          }
          if (*DAT_2c600c28 != iVar14) {
                    /* WARNING: Subroutine does not return */
            stack_chk_fail();
          }
          return;
        }
        goto LAB_2c63073e;
      }
      if (iVar14 == 0x13) {
        sVar4 = FUN_2c6033b4(iVar15,0x30000,0x12);
        sVar5 = FUN_2c6033b4(iVar15,0x30000,0x13);
        sVar6 = FUN_2c6033b4(iVar15,0x30000,0x10);
        sVar7 = FUN_2c6033b4(iVar15,0x30000,0x11);
        sVar8 = FUN_2c6033b4(iVar15,0x30000,0x6c);
        sVar9 = FUN_2c6033b4(iVar15,0x30000,0x68);
        sVar10 = FUN_2c6033b4(iVar15,0x30000,0x69);
        iStack_3c = (int)sVar10;
        iStack_40 = FUN_2c6073ec(iVar15);
        iStack_40 = iStack_40 + sVar9 * 2;
        iVar14 = FUN_2c6073f8(iVar15);
        if (iStack_40 < iVar14 + iStack_3c * 2) {
          iVar14 = FUN_2c6073ec(iVar15);
          iVar14 = sVar9 * 2 + iVar14;
        }
        else {
          iStack_40 = iStack_3c << 1;
          iVar14 = FUN_2c6073f8(iVar15);
          iVar14 = iVar14 + iStack_40;
        }
        sVar9 = FUN_2c600ac0(iVar15,0x30000);
        psVar18 = (short *)FUN_2c602410(param_2);
        if (sVar4 < sVar5) {
          sVar4 = sVar5;
        }
        if (sVar4 < sVar6) {
          sVar4 = sVar6;
        }
        if (sVar4 < sVar7) {
          sVar4 = sVar7;
        }
        sVar4 = sVar4 + 2 + sVar9 + (short)((uint)((iVar14 * 0x8000 >> 0x10) * (int)sVar8) >> 8);
        if (sVar4 < *psVar18) {
          sVar4 = *psVar18;
        }
        *psVar18 = sVar4;
      }
      else {
        if (iVar14 == 0xd) {
          pbVar19 = (byte *)FUN_2c602410(param_2);
          bVar22 = *pbVar19;
          if ((bVar22 & 0xfd) == 0x11) {
            if ((int)((uint)*(byte *)(iVar15 + 0x7c) << 0x1e) < 0) {
              iVar14 = func_0x2c63940c(iVar15);
              func_0x2c639378(iVar15,iVar14 + 1);
            }
            else {
              iVar14 = func_0x2c639400();
              FUN_2c639338(iVar15,iVar14 + 1);
            }
          }
          else {
            if ((bVar22 != 0x14) && (bVar22 != 0x12)) goto LAB_2c630194;
            if ((int)((uint)*(byte *)(iVar15 + 0x7c) << 0x1e) < 0) {
              iVar14 = func_0x2c63940c(iVar15);
              func_0x2c639378(iVar15,iVar14 + -1,1);
            }
            else {
              iVar14 = func_0x2c639400();
              FUN_2c639338(iVar15,iVar14 + -1,1);
            }
          }
          piVar20 = DAT_2c60239c;
          if (*_LAB_2c630760 == iStack_2c) {
            uVar23 = *DAT_2c602398;
            if (iVar15 == 0) {
              uVar25 = 0x1c00000001;
            }
            else {
              iVar14 = *DAT_2c60239c;
              iStack_2c = CONCAT31(iStack_2c._1_3_,0x1c);
              uStack_28 = 0;
              *DAT_2c60239c = (int)&uStack_34;
              uStack_34 = iVar15;
              iStack_30 = iVar15;
              uVar25 = FUN_2c602140();
              *piVar20 = iVar14;
            }
            if ((*DAT_2c602398 ^ uVar23) != 0) {
                    /* WARNING: Subroutine does not return */
              stack_chk_fail((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),*DAT_2c602398 ^ uVar23,0);
            }
            return;
          }
          goto LAB_2c63073e;
        }
        if (iVar14 == 0x15) {
          if (*_LAB_2c6304ac != iStack_2c) goto LAB_2c63073e;
          iStack_2c = *_LAB_2c630170;
          iVar14 = FUN_2c602400();
          uVar11 = FUN_2c602608(param_2);
          cVar2 = FUN_2c6033b4(iVar14,0,0x16);
          iVar15 = FUN_2c6073ec(iVar14);
          iVar16 = FUN_2c6073f8(iVar14);
          if ((((*(byte *)(iVar14 + 100) & 3) == 1) && (*(int *)(iVar14 + 0x28) < 0)) &&
             (0 < *(int *)(iVar14 + 0x2c))) {
            if (iVar16 <= iVar15) {
              uVar12 = FUN_2c6073f8();
              if (*(int *)(iVar14 + 0x24) < 0) {
                uStack_12c = *(undefined2 *)(iVar14 + 0x34);
                goto LAB_2c62fff2;
              }
LAB_2c63008e:
              if (cVar2 == '\x01') {
                uStack_12c = *(undefined2 *)(iVar14 + 0x34);
              }
              else {
                uStack_12c = *(undefined2 *)(iVar14 + 0x38);
              }
              goto LAB_2c62fff2;
            }
            uVar12 = FUN_2c6073ec(iVar14);
            if (*(int *)(iVar14 + 0x24) < 0) {
              uStack_12a = *(undefined2 *)(iVar14 + 0x3a);
              goto LAB_2c62fff2;
            }
          }
          else {
            if (iVar16 <= iVar15) {
              uVar12 = FUN_2c6073f8(iVar14);
              goto LAB_2c63008e;
            }
            uVar12 = FUN_2c6073ec();
          }
          uStack_12a = *(undefined2 *)(iVar14 + 0x36);
LAB_2c62fff2:
          iVar24 = iVar14 + 0x70;
          FUN_2c61314c(auStack_dc);
          FUN_2c6004cc(iVar14,0x30000,auStack_dc);
          FUN_2c62fe64(iVar14,&uStack_12c,uVar12,iVar16 <= iVar15);
          *(undefined2 *)(iVar14 + 0x70) = uStack_12c;
          *(undefined2 *)(iVar14 + 0x72) = uStack_12a;
          *(undefined2 *)(iVar14 + 0x74) = uStack_128;
          *(undefined2 *)(iVar14 + 0x76) = uStack_126;
          FUN_2c600b9c(auStack_124,uVar11);
          puStack_114 = auStack_dc;
          uStack_11c = 0;
          uStack_ec = 0;
          uStack_f0 = 0x30000;
          uStack_120 = _LAB_2c630174;
          iStack_118 = iVar24;
          iVar13 = func_0x2c639428(iVar14);
          if (iVar13 == 2) {
            FUN_2c62c0d8(auStack_84,auStack_dc,0x58);
            FUN_2c602340(iVar14,0x1a,auStack_124);
            FUN_2c61319c(uVar11,auStack_dc,iVar24);
            FUN_2c602340(iVar14,0x1b,auStack_124);
            if (iVar15 < iVar16) {
              uStack_12a = *(undefined2 *)(iVar14 + 0x3a);
            }
            else if (cVar2 == '\x01') {
              uStack_12c = *(undefined2 *)(iVar14 + 0x38);
            }
            else {
              uStack_12c = *(undefined2 *)(iVar14 + 0x34);
            }
            FUN_2c62fe64(iVar14,&uStack_12c,uVar12,iVar16 <= iVar15);
            *(undefined2 *)(iVar14 + 0x68) = uStack_12c;
            *(undefined2 *)(iVar14 + 0x6a) = uStack_12a;
            *(undefined2 *)(iVar14 + 0x6c) = uStack_128;
            iVar24 = iVar14 + 0x68;
            *(undefined2 *)(iVar14 + 0x6e) = uStack_126;
            FUN_2c62c0d8(auStack_dc,auStack_84,0x58);
            puStack_114 = auStack_dc;
            uStack_11c = 1;
            uStack_ec = 1;
            iStack_118 = iVar24;
            FUN_2c602340(iVar14,0x1a,auStack_124);
          }
          else {
            FUN_2c602340(iVar14,0x1a,auStack_124);
          }
          FUN_2c61319c(uVar11,auStack_dc,iVar24);
          FUN_2c602340(iVar14,0x1b,auStack_124);
          if (*_LAB_2c630170 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
            stack_chk_fail();
          }
          return;
        }
      }
    }
  }
  else {
    bVar1 = true;
    if (iVar14 == 0x11) {
LAB_2c6303ec:
      puVar17 = (undefined4 *)FUN_2c602410(param_2);
      iVar14 = 0;
      if (*(int *)(iVar15 + 8) != 0) {
        iVar14 = (int)*(short *)(*(int *)(iVar15 + 8) + 0x14);
      }
      uStack_34 = *(int *)(iVar15 + 0x70);
      iStack_30 = *(int *)(iVar15 + 0x74);
      FUN_2c62a66c(&uStack_34,iVar14,iVar14);
      iVar16 = FUN_2c62a750(&uStack_34,*puVar17,0);
      *(char *)(puVar17 + 1) = (char)iVar16;
      if ((iVar16 != 1) && (bVar1)) {
        uStack_34 = *(int *)(iVar15 + 0x68);
        iStack_30 = *(int *)(iVar15 + 0x6c);
        FUN_2c62a66c(&uStack_34,iVar14,iVar14);
        uVar3 = FUN_2c62a750(&uStack_34,*puVar17,0);
        *(undefined1 *)(puVar17 + 1) = uVar3;
      }
    }
    else {
      if (iVar14 != 1) goto LAB_2c6301d6;
      FUN_2c607df0(iVar15);
      *(byte *)(iVar15 + 0x7c) = *(byte *)(iVar15 + 0x7c) | 1;
      uVar11 = FUN_2c5ff4d8();
      FUN_2c5ff5cc(uVar11,&uStack_34);
      iVar14 = FUN_2c6073ec(iVar15);
      iVar16 = FUN_2c6073f8(iVar15);
      cVar2 = FUN_2c6033b4(iVar15,0,0x16);
      if (iVar14 < iVar16) {
        iVar14 = (int)uStack_34._2_2_;
        iVar16 = (int)*(short *)(iVar15 + 0x72);
        if (iVar14 < iVar16) goto LAB_2c630488;
        if (*(short *)(iVar15 + 0x6e) < iVar14) goto LAB_2c63071e;
        iVar13 = ((int)*(short *)(iVar15 + 0x6a) +
                 ((int)*(short *)(iVar15 + 0x6e) - (int)*(short *)(iVar15 + 0x6a)) / 2) - iVar14;
        if (iVar13 < 0) {
          iVar13 = -iVar13;
        }
        iVar14 = (iVar16 + (*(short *)(iVar15 + 0x76) - iVar16) / 2) - iVar14;
        if (iVar14 < 0) {
          iVar14 = -iVar14;
        }
        bVar22 = *(byte *)(iVar15 + 0x7c);
        if ((short)iVar13 <= (short)iVar14) goto LAB_2c6306d6;
LAB_2c6303da:
        *(int *)(iVar15 + 0x78) = iVar15 + 0x24;
        *(byte *)(iVar15 + 0x7c) = bVar22 & 0xfd;
      }
      else {
        iVar14 = (int)(short)uStack_34;
        if (cVar2 == '\x01') {
          iVar16 = (int)*(short *)(iVar15 + 0x70);
          if (iVar16 <= iVar14) {
            iVar13 = (int)*(short *)(iVar15 + 0x6c);
            if (iVar13 < iVar14) goto LAB_2c63071e;
            iVar24 = (int)*(short *)(iVar15 + 0x74);
            iVar21 = (int)*(short *)(iVar15 + 0x68);
            goto LAB_2c6303a8;
          }
        }
        else {
          iVar24 = (int)*(short *)(iVar15 + 0x74);
          if (iVar14 <= iVar24) {
            iVar21 = (int)*(short *)(iVar15 + 0x68);
            if (iVar14 < iVar21) {
LAB_2c63071e:
              *(int *)(iVar15 + 0x78) = iVar15 + 0x30;
              goto LAB_2c630194;
            }
            iVar16 = (int)*(short *)(iVar15 + 0x70);
            iVar13 = (int)*(short *)(iVar15 + 0x6c);
LAB_2c6303a8:
            iVar13 = (iVar21 + (iVar13 - iVar21) / 2) - iVar14;
            iVar14 = (iVar16 + (iVar24 - iVar16) / 2) - iVar14;
            if (iVar13 < 0) {
              iVar13 = -iVar13;
            }
            if (iVar14 < 0) {
              iVar14 = -iVar14;
            }
            bVar22 = *(byte *)(iVar15 + 0x7c);
            if ((short)iVar13 <= (short)iVar14) {
LAB_2c6306d6:
              *(int *)(iVar15 + 0x78) = iVar15 + 0x30;
              *(byte *)(iVar15 + 0x7c) = bVar22 | 2;
              goto LAB_2c630194;
            }
            goto LAB_2c6303da;
          }
        }
LAB_2c630488:
        *(int *)(iVar15 + 0x78) = iVar15 + 0x24;
      }
    }
  }
LAB_2c630194:
  if (*_LAB_2c6304ac == iStack_2c) {
    return;
  }
LAB_2c63073e:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


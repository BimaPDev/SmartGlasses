/* FUN_14078778 @ 0x14078778 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14078778(void)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  ushort *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  ushort *puVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  undefined4 uVar15;
  byte bVar16;
  uint uVar17;
  char cVar18;
  int iVar19;
  code *pcVar20;
  uint uVar21;
  ushort uVar22;
  int iVar23;
  undefined2 uVar24;
  ushort uVar25;
  
  iVar19 = DAT_14078a54;
  FUN_140e5148(*(undefined4 *)(DAT_14078a54 + 4),0xffffffff);
  iVar9 = FUN_14074d5c(iVar19 + 0x218);
  FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
  if (iVar9 == 0) {
    bVar7 = false;
  }
  else {
    bVar16 = *(byte *)(iVar9 + 4) & 7;
    if (bVar16 == 4) {
      puVar11 = (ushort *)FUN_14075cf4(iVar9);
      uVar21 = (uint)*(byte *)((int)puVar11 + 1);
      iVar12 = (int)puVar11 + 1;
      uVar17 = 0;
      if ((char)puVar11[1] != '\0') {
        uVar17 = (uint)*(byte *)((int)puVar11 + 3);
      }
      if (*(char *)(iVar19 + 8) == '\0') {
        if (0x48 < uVar21) {
          if (uVar21 != 0xff) goto switchD_14078b4c_caseD_4;
          goto switchD_14078b4c_caseD_8;
        }
        if (uVar21 < 3) {
switchD_14078b4c_caseD_4:
          pcVar20 = *(code **)(iVar19 + 0x1c);
          goto joined_r0x140791d0;
        }
        switch(uVar21) {
        case 3:
        case 0x2c:
          FUN_14077b14(iVar12);
          pcVar20 = *(code **)(iVar19 + 0x1c);
          if (pcVar20 == (code *)0x0) break;
          goto LAB_14078d26;
        default:
          goto switchD_14078b4c_caseD_4;
        case 5:
          uVar22 = puVar11[2];
          uVar25 = uVar22 & 0xfff;
          pbVar14 = (byte *)FUN_1407667c(0,uVar25);
          if (pbVar14 != (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x45,DAT_14079150,DAT_14079154,*(undefined1 *)((int)puVar11 + 3),uVar25,
                         (*pbVar14 & 0xf) >> 1,(char)puVar11[3]);
          }
          if ((uVar22 & 0x80) == 0) {
LAB_14078f60:
            pcVar20 = *(code **)(iVar19 + 0x274);
          }
          else {
            pcVar20 = *(code **)(iVar19 + 0x1c);
          }
          if (pcVar20 != (code *)0x0) {
            (*pcVar20)(iVar12);
          }
          FUN_14077b14(iVar12);
          break;
        case 8:
        case 0x30:
          goto switchD_14078b4c_caseD_8;
        case 0xe:
          uVar22 = puVar11[2];
          cVar1 = (char)puVar11[3];
          if (uVar22 == 0xc31) {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x42,DAT_14079144,*(undefined1 *)(iVar19 + 0x214),cVar1);
          }
          if (uVar22 == 0xc33) {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x45,_LAB_140792e4,0x3fd,0xff,0x16,6,cVar1);
          }
          if (uVar22 == 0xc66) {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x42,_LAB_140792ec,*(undefined1 *)((int)puVar11 + 7),cVar1);
          }
          if (uVar22 == 0xc67) {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x42,_LAB_140792f0,*(undefined1 *)(iVar19 + 0x215),cVar1);
          }
          if (uVar22 == 0x1005) {
            uVar2 = *(undefined1 *)((int)puVar11 + 9);
            uVar25 = puVar11[5];
            uVar22 = puVar11[6];
            uVar24 = *(undefined2 *)((int)puVar11 + 7);
            if ((cVar1 == '\0') && (uVar25 != 0)) {
              FUN_140e5148(*(undefined4 *)(iVar19 + 4),0xffffffff);
              *(undefined2 *)(iVar19 + 0x262) = uVar24;
              *(ushort *)(iVar19 + 0x264) = uVar25;
              *(ushort *)(iVar19 + 0x266) = uVar25;
              FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
            }
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x46,_LAB_140792e8,(char)puVar11[3],uVar24,uVar2,uVar25,uVar25,uVar22);
          }
          if (uVar22 == 0x2002) {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x43,DAT_14079148,cVar1,*(undefined2 *)((int)puVar11 + 7),
                         *(undefined1 *)((int)puVar11 + 9));
          }
        case 0xf:
          if (*(code **)(iVar19 + 0x1c) != (code *)0x0) {
            (**(code **)(iVar19 + 0x1c))(iVar12);
          }
          if (*(code **)(iVar19 + 0x274) != (code *)0x0) {
            (**(code **)(iVar19 + 0x274))(iVar12);
          }
          FUN_14076f28(iVar12);
          break;
        case 0x13:
          goto switchD_14078b4c_caseD_13;
        case 0x1a:
          FUN_14077394();
          cVar1 = *(char *)((int)puVar11 + 3);
          if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x40,_LAB_140792dc);
          }
          if (cVar1 == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_1402b0f8(_LAB_140792fc);
          }
          if (cVar1 == '\x02') {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x40,DAT_1407914c);
          }
          break;
        case 0x3e:
          if (uVar17 == 2) goto switchD_14078b4c_caseD_8;
          if ((uVar17 < 0x1e) && ((int)((_LAB_140792e0 >> uVar17) << 0x1f) < 0)) {
            FUN_14077b14(iVar12);
            pcVar20 = *(code **)(iVar19 + 0x274);
            goto joined_r0x140791d0;
          }
          if ((uVar17 & 0xfd) == 0x1c) goto LAB_14078f60;
          goto LAB_14078d40;
        case 0x48:
          break;
        }
      }
      else {
        if (uVar21 != 0x13) {
          if (uVar21 - 0xe < 2) {
            if (uVar21 == 0xe) {
              iVar19 = 1;
            }
            else {
              iVar19 = 2;
            }
            if (*(short *)((int)puVar11 + iVar19 + 3) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1402a64c(0x42,DAT_14079178,uVar21);
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x42,DAT_14078de4,uVar21,uVar17);
        }
switchD_14078b4c_caseD_13:
        uVar17 = (uint)*(byte *)((int)puVar11 + 3);
        if (uVar17 != 0) {
          bVar7 = false;
          iVar23 = 0;
          puVar4 = puVar11;
          do {
            if (puVar4[3] != 0) {
              uVar17 = FUN_140767a8(0,puVar4[2] & 0xfff);
              if ((uVar17 & 0xfd) == 1) {
                bVar7 = true;
              }
              uVar17 = (uint)*(byte *)((int)puVar11 + 3);
            }
            iVar23 = iVar23 + 1;
            puVar4 = puVar4 + 2;
          } while (iVar23 < (int)uVar17);
          if (bVar7) {
            FUN_140e5148(*(undefined4 *)(iVar19 + 4),0xffffffff);
            if (*(char *)(iVar19 + 0x268) != '\0') {
              *(undefined1 *)(iVar19 + 0x268) = 0;
              thunk_FUN_140a20f4();
            }
            FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
          }
        }
switchD_14078b4c_caseD_8:
        if (*(code **)(iVar19 + 0x1c) != (code *)0x0) {
          (**(code **)(iVar19 + 0x1c))(iVar12);
        }
LAB_14078d40:
        pcVar20 = *(code **)(iVar19 + 0x274);
joined_r0x140791d0:
        if (pcVar20 != (code *)0x0) {
LAB_14078d26:
          (*pcVar20)(iVar12);
        }
      }
      FUN_14078274(iVar9);
    }
    else {
      if (bVar16 != 2) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x41,DAT_14078a58);
      }
      iVar12 = FUN_14075cf4(iVar9);
      bVar16 = *(byte *)(iVar9 + 5);
      iVar23 = iVar12 + -0x10;
      FUN_14075520(iVar23,5);
      if ((bVar16 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x42,DAT_14079158,*(undefined2 *)(iVar9 + 0xe),(bVar16 & 0xf) * 0x1000);
      }
      iVar13 = FUN_1407667c(1,*(undefined2 *)(iVar9 + 0xe));
      if (iVar13 == 0) {
        iVar13 = FUN_1407667c(3,*(undefined2 *)(iVar9 + 0xe));
        if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x41,_LAB_140792d8,*(undefined2 *)(iVar9 + 0xe));
        }
        if (*(int *)(iVar19 + 0x270) != 0) {
          uVar22 = *(ushort *)(iVar9 + 0xe);
          uVar15 = FUN_14075258(iVar23);
          *(int *)(iVar12 + -4) = iVar9;
          bVar7 = true;
          (**(code **)(iVar19 + 0x270))(uVar22 | 0x2000,uVar15,*(undefined2 *)(iVar12 + -8));
          goto LAB_140787cc;
        }
      }
      else if (*(int *)(iVar19 + 0x18) != 0) {
        *(byte *)(iVar12 + -0xc) = *(byte *)(iVar12 + -0xc) | 0x40;
        (**(code **)(iVar19 + 0x18))(*(undefined2 *)(iVar9 + 0xe),iVar23);
        *(byte *)(iVar12 + -0xc) = *(byte *)(iVar12 + -0xc) & 0xbf;
      }
      FUN_14078274(iVar9);
      FUN_14078370(1);
      FUN_14078370(3);
    }
    FUN_14075d70(iVar9);
    bVar7 = true;
  }
LAB_140787cc:
  FUN_140e5148(*(undefined4 *)(iVar19 + 4),0xffffffff);
  iVar9 = FUN_14074d50(DAT_14078a5c);
  FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
  if (iVar9 == 0) {
LAB_1407881a:
    bVar5 = false;
  }
  else {
    FUN_140e5148(*(undefined4 *)(iVar19 + 4),0xffffffff);
    sVar3 = *(short *)(iVar19 + 0x24e);
    FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
    if (sVar3 == 0) {
      uVar17 = DAT_14078a64 * *DAT_14078a60 + DAT_14078a68;
      *DAT_14078a60 = *DAT_14078a60 + 1;
      if ((uVar17 >> 2 | uVar17 * 0x40000000) <= DAT_14078a6c) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x42,DAT_14078dfc,*(undefined2 *)(iVar19 + 0x250),
                     *(undefined2 *)(iVar19 + 0x252));
      }
      goto LAB_1407881a;
    }
    FUN_140e5148(*(undefined4 *)(iVar19 + 4),0xffffffff);
    iVar9 = FUN_14074d5c(DAT_14078de8);
    FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x40,DAT_14078e14);
    }
    iVar12 = FUN_14075258(iVar9);
    sVar3 = *(short *)(iVar12 + 1);
    if (*(char *)(iVar19 + 8) == '\0') {
      uVar15 = FUN_14075258(iVar9);
      thunk_FUN_140bd248(uVar15,*(undefined2 *)(iVar9 + 8));
      if (sVar3 != 0xc35) {
        FUN_140e5148(*(undefined4 *)(iVar19 + 4),0xffffffff);
        if (*(short *)(iVar19 + 0x24e) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x42,DAT_14078e18,0,1);
        }
        *(short *)(iVar19 + 0x24e) = *(short *)(iVar19 + 0x24e) + -1;
        FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
      }
    }
    else {
      if (sVar3 != 0xc35) {
        uVar15 = DAT_14078dec;
        if (-1 < (int)((uint)*(byte *)(iVar9 + 5) << 0x1c)) {
          uVar15 = DAT_14078df0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x41,uVar15,sVar3);
      }
      uVar15 = FUN_14075258(iVar9);
      thunk_FUN_140bd248(uVar15,*(undefined2 *)(iVar9 + 8));
    }
    if ((*(byte *)(iVar9 + 5) & 4) == 0) {
      FUN_14076ea8(*(byte *)(iVar9 + 5) & 4,iVar9);
      bVar5 = true;
    }
    else {
      bVar5 = true;
    }
  }
  FUN_140e5148(*(undefined4 *)(iVar19 + 4),0xffffffff);
  iVar9 = FUN_14074d50(DAT_14078a70);
  FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
  uVar8 = DAT_14078a84;
  uVar15 = DAT_14078a70;
  if (iVar9 == 0) {
    FUN_140e5148(*(undefined4 *)(iVar19 + 4),0xffffffff);
    iVar9 = FUN_14074d50(DAT_1407915c);
    FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
    if (iVar9 != 0) {
      bVar6 = false;
      uVar17 = 0;
      goto LAB_14078914;
    }
  }
  else {
    uVar17 = 0;
    while( true ) {
      FUN_140e5148(*(undefined4 *)(iVar19 + 4),0xffffffff);
      sVar3 = *(short *)(iVar19 + 0x264);
      FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
      if (sVar3 == 0) break;
      FUN_140e5148(*(undefined4 *)(iVar19 + 4),0xffffffff);
      iVar9 = FUN_1407717c(1);
      if (iVar9 == 0) {
        uVar17 = *(uint *)(iVar19 + 0x25c);
        bVar6 = true;
        FUN_140e52d8(*(undefined4 *)(iVar19 + 4),0);
        uVar24 = (undefined2)uVar17;
        uVar17 = uVar17 & 0xffff;
LAB_14078a06:
        uVar21 = DAT_14078a64 * *DAT_14078a80 + DAT_14078a68;
        *DAT_14078a80 = *DAT_14078a80 + 1;
        if ((uVar21 >> 2 | uVar21 * 0x40000000) <= DAT_14078a6c) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x42,DAT_14079140,uVar24,*(undefined2 *)(iVar19 + 0x260));
        }
        FUN_140e5148(*(undefined4 *)(iVar19 + 4),0xffffffff);
        iVar9 = FUN_14074d50(DAT_14078a74);
        FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
        if (iVar9 == 0) goto joined_r0x14078a42;
        goto LAB_14078914;
      }
      iVar9 = FUN_14074cec(uVar15);
      uVar24 = (undefined2)*(uint *)(iVar19 + 0x25c);
      uVar17 = *(uint *)(iVar19 + 0x25c) & 0xffff;
      FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
      bVar6 = false;
      if (iVar9 == 0) goto LAB_14078a06;
      iVar12 = FUN_14075258(iVar9);
      uVar22 = *(ushort *)(iVar12 + 1) & 0xfff;
      iVar12 = FUN_1407667c(1,uVar22);
      if ((iVar12 == 0) || ((int)((uint)*(byte *)(iVar12 + 1) << 0x1c) < 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x41,uVar8,uVar22);
      }
      uVar10 = FUN_14075258(iVar9);
      thunk_FUN_140bd248(uVar10,*(undefined2 *)(iVar9 + 8));
      FUN_14076bf8();
      FUN_140e5148(*(undefined4 *)(iVar19 + 4),0xffffffff);
      iVar12 = FUN_1407667c(1,uVar22);
      if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x4042,_LAB_140792f4,uVar22,1);
      }
      cVar1 = *(char *)(iVar19 + 9);
      cVar18 = *(char *)(iVar12 + 0xd) + '\x01';
      *(char *)(iVar12 + 0xd) = cVar18;
      if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x44,DAT_14078df4,uVar22,cVar18,*(undefined2 *)(iVar19 + 0x264),
                     *(undefined2 *)(iVar19 + 0x288));
      }
      FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
      FUN_14075520(iVar9,5);
      if (*(code **)(iVar19 + 0x14) != (code *)0x0) {
        (**(code **)(iVar19 + 0x14))(uVar22,iVar9);
      }
      if (-1 < (int)((uint)*(byte *)(iVar9 + 5) << 0x1e)) {
        FUN_14075428(iVar9);
      }
      FUN_140e5148(*(undefined4 *)(iVar19 + 4),0xffffffff);
      uVar21 = *(uint *)(iVar19 + 0x25c);
      if ((uVar21 & 0xffff) < 0x50) {
        FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
        if (7 < (int)(0x50 - (uVar21 & 0xffff))) {
          FUN_140e5148(*(undefined4 *)(iVar19 + 4),0xffffffff);
          iVar9 = FUN_14074d50(DAT_14078a74);
          FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
          if (iVar9 == 0) goto LAB_140789e8;
          bVar5 = true;
          bVar6 = false;
          goto LAB_14078914;
        }
      }
      else {
        FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
      }
      bVar5 = true;
    }
    uVar21 = DAT_14079164 * *DAT_14079160 + DAT_14079168;
    *DAT_14079160 = *DAT_14079160 + 1;
    if ((uVar21 >> 2 | uVar21 * 0x40000000) <= DAT_1407916c) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_14079170,uVar17,*(undefined2 *)(iVar19 + 0x260));
    }
    FUN_140e5148(*(undefined4 *)(iVar19 + 4),0xffffffff);
    iVar9 = FUN_14074d50(DAT_1407915c);
    FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
    if (iVar9 != 0) {
      bVar6 = true;
LAB_14078914:
      FUN_140e5148(*(undefined4 *)(iVar19 + 4),0xffffffff);
      if (*(char *)(iVar19 + 0x28c) == '\0') {
        sVar3 = *(short *)(iVar19 + 0x288);
      }
      else {
        FUN_140e5148(*(undefined4 *)(iVar19 + 4),0xffffffff);
        sVar3 = *(short *)(iVar19 + 0x264);
        FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
      }
      FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
      if (sVar3 == 0) {
        uVar21 = DAT_14078a64 * *DAT_14078a78 + DAT_14078a68;
        *DAT_14078a78 = *DAT_14078a78 + 1;
        if ((uVar21 >> 2 | uVar21 * 0x40000000) <= DAT_14078a6c) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x42,DAT_14078df8,uVar17,*(undefined2 *)(iVar19 + 0x284));
        }
      }
      else {
        FUN_140e5148(*(undefined4 *)(iVar19 + 4),0xffffffff);
        iVar9 = FUN_1407717c(3);
        if (iVar9 == 0) {
          uVar24 = (undefined2)*(undefined4 *)(iVar19 + 0x280);
          FUN_140e52d8(*(undefined4 *)(iVar19 + 4),0);
          uVar17 = DAT_14078e04 * *DAT_14078e00 + DAT_14078e08;
          *DAT_14078e00 = *DAT_14078e00 + 1;
          if ((uVar17 >> 2 | uVar17 * 0x40000000) <= DAT_14078e0c) {
LAB_14078d70:
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x42,DAT_14078e10,uVar24,*(undefined2 *)(iVar19 + 0x284));
          }
        }
        else {
          iVar9 = FUN_14074cec(DAT_14078a74);
          uVar24 = (undefined2)*(undefined4 *)(iVar19 + 0x280);
          FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
          if (iVar9 == 0) {
            iVar9 = *_LAB_140792f8;
            *_LAB_140792f8 = iVar9 + 1;
            if (iVar9 % 300 == 0) goto LAB_14078d70;
joined_r0x14078a42:
            if (!bVar6) goto LAB_14078968;
          }
          else {
            iVar12 = FUN_14075258(iVar9);
            uVar22 = *(ushort *)(iVar12 + 1) & 0xfff;
            iVar12 = FUN_1407667c(3,uVar22);
            if ((iVar12 == 0) || ((int)((uint)*(byte *)(iVar12 + 1) << 0x1c) < 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_1402a64c(0x41,DAT_14078a7c,uVar22);
            }
            uVar15 = FUN_14075258(iVar9);
            thunk_FUN_140bd248(uVar15,*(undefined2 *)(iVar9 + 8));
            FUN_140e5148(*(undefined4 *)(iVar19 + 4),0xffffffff);
            if (*(char *)(iVar19 + 0x28c) == '\0') {
              if (*(short *)(iVar19 + 0x288) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1402a64c(0x43,DAT_1407917c,0,1);
              }
              *(short *)(iVar19 + 0x288) = *(short *)(iVar19 + 0x288) + -1;
            }
            else {
              FUN_14076bf8();
            }
            FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
            FUN_140e5148(*(undefined4 *)(iVar19 + 4),0xffffffff);
            iVar12 = FUN_1407667c(3,uVar22);
            if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1402a64c(0x4042,_LAB_14079300,uVar22,1);
            }
            cVar1 = *(char *)(iVar19 + 9);
            cVar18 = *(char *)(iVar12 + 0xd) + '\x01';
            *(char *)(iVar12 + 0xd) = cVar18;
            if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_1402a64c(0x44,DAT_14079174,uVar22,cVar18,*(undefined2 *)(iVar19 + 0x264),
                           *(undefined2 *)(iVar19 + 0x288));
            }
            FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
            if (*(code **)(iVar19 + 0x26c) != (code *)0x0) {
              (**(code **)(iVar19 + 0x26c))(uVar22);
            }
            FUN_14075428(iVar9);
            bVar5 = bVar6;
            if (!bVar6) goto LAB_140789e8;
          }
        }
      }
    }
    FUN_140e5148(*(undefined4 *)(iVar19 + 4),0xffffffff);
    *(undefined1 *)(iVar19 + 0x268) = 1;
    FUN_140e52d8(*(undefined4 *)(iVar19 + 4));
  }
LAB_14078968:
  if ((!bVar5) && (!bVar7)) {
    return;
  }
LAB_140789e8:
  thunk_FUN_140a20f4();
  return;
}


/* FUN_140839b8 @ 0x140839b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140839b8(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  int *piVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  char *pcVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  byte bVar19;
  byte bVar20;
  uint uVar21;
  byte bVar22;
  byte bVar23;
  undefined4 unaff_lr;
  int *local_40 [5];
  int local_2c;
  
  local_2c = *DAT_14083c68;
  piVar5 = (int *)FUN_1408acf0(param_2,1,param_3,0);
  if ((piVar5 == (int *)0x0) || (param_2 != *piVar5)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_14083c6c,param_2);
  }
  if (*(char *)((int)piVar5 + 5) == '\0') {
    if (*DAT_14083c68 == local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_14083c74,param_1,0);
    }
    goto LAB_1408430a;
  }
  pbVar6 = (byte *)FUN_14075258(param_3);
  uVar3 = *(ushort *)(param_3 + 8);
  bVar20 = *pbVar6;
  bVar1 = pbVar6[1];
  *(ushort *)(param_3 + 8) = uVar3 - 1;
  pbVar7 = (byte *)FUN_14075260(param_3);
  bVar22 = *pbVar7;
  pbVar7 = (byte *)FUN_14075258(param_3);
  iVar8 = FUN_14082098();
  iVar9 = FUN_14082098();
  uVar21 = bVar1 & 0xef;
  bVar1 = *(byte *)(iVar9 + (uint)(*(byte *)(iVar9 + (uint)(byte)~*pbVar7) ^ pbVar7[1]));
  if (uVar21 != 0xef) {
    bVar1 = *(byte *)(iVar8 + (uint)(bVar1 ^ pbVar7[2]));
  }
  if (*(char *)(iVar8 + (uint)(bVar1 ^ bVar22)) != -0x31) {
    if (*DAT_14083c68 == local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x40,DAT_14083c78,0,0);
    }
    goto LAB_1408430a;
  }
  if ((int)((uint)pbVar6[2] << 0x1f) < 0) {
    uVar14 = 3;
  }
  else {
    uVar14 = 4;
  }
  FUN_14075520(param_3,uVar14);
  if ((uint)uVar3 < (uint)*(ushort *)(param_3 + 8)) {
    iVar8 = *DAT_14083c68;
    uVar21 = (uint)uVar3;
    uVar14 = DAT_14083c7c;
joined_r0x14083bd8:
    if (iVar8 == local_2c) {
LAB_14083a04:
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,uVar14,uVar21,0);
    }
    goto LAB_1408430a;
  }
  bVar20 = bVar20 >> 2;
  if (uVar21 == 0x43) {
    if ((int)((uint)pbVar6[1] << 0x1b) < 0) {
      uVar14 = FUN_140862b4((int)piVar5 + 6);
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_14083f80,uVar14,bVar20);
    }
  }
  else if (uVar21 < 0x44) {
    if (uVar21 == 0xf) {
      uVar14 = FUN_140862b4((int)piVar5 + 6);
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_14083c80,uVar14,bVar20);
    }
    if (uVar21 != 0x2f) {
LAB_14083c4e:
      iVar8 = *DAT_14083c68;
      uVar14 = DAT_14083c84;
      goto joined_r0x14083bd8;
    }
    if ((int)((uint)pbVar6[1] << 0x1b) < 0) {
      uVar14 = FUN_140862b4((int)piVar5 + 6);
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_14083f88,uVar14,bVar20);
    }
  }
  else if (uVar21 == 99) {
    if ((int)((uint)pbVar6[1] << 0x1b) < 0) {
      uVar14 = FUN_140862b4((int)piVar5 + 6);
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_14083f74,uVar14,bVar20,piVar5);
    }
  }
  else {
    if (uVar21 != 0xef) goto LAB_14083c4e;
    if (bVar20 != 0) {
      if (*DAT_14083f78 == local_2c) {
        bVar22 = pbVar6[1];
        uVar21 = bVar22 & 0x10;
        uVar14 = FUN_140862b4((int)piVar5 + 6);
        piVar5 = piVar5 + 3;
        piVar17 = (int *)*piVar5;
        if (piVar17 != piVar5) {
          iVar8 = 0x3ea;
          do {
            if (*(byte *)(piVar17 + 0xc) == bVar20) {
              if ((*(char *)((int)piVar17 + 0x32) != '\0') &&
                 (*(char *)((int)piVar17 + 0x33) != '\0')) {
                if ((bVar22 & 0x10) == 0) {
                  uVar13 = *(undefined1 *)((int)piVar17 + 0x39);
                  uVar18 = uVar21;
                }
                else if (*(char *)((int)piVar17 + 0x39) == '\0') {
                  uVar13 = 0;
                  uVar18 = 0;
                }
                else {
                  pbVar6 = (byte *)FUN_14075258(param_3);
                  uVar18 = (uint)*pbVar6;
                  FUN_14075520(param_3,1);
                  uVar16 = *(byte *)((int)piVar17 + 0x3b) + uVar18;
                  if (0xfe < uVar16) {
                    uVar16 = 0xff;
                  }
                  *(char *)((int)piVar17 + 0x3b) = (char)uVar16;
                  FUN_14082488(piVar17);
                  uVar13 = *(undefined1 *)((int)piVar17 + 0x39);
                }
                    /* WARNING: Subroutine does not return */
                FUN_1402a64c(0x47,_LAB_1408315c,uVar14,bVar20,*(undefined1 *)((int)piVar17 + 0x3b),
                             uVar18,uVar21,uVar13,(char)piVar17[6]);
              }
                    /* WARNING: Subroutine does not return */
              FUN_1402a64c(0x45,_LAB_14083160,uVar14,*(char *)((int)piVar17 + 0x32),
                           *(char *)((int)piVar17 + 0x33),piVar17[0x11],*(undefined2 *)(param_3 + 8)
                          );
            }
            iVar8 = iVar8 + -1;
            piVar17 = (int *)*piVar17;
            if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_14082394();
            }
          } while (piVar17 != piVar5);
        }
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x41,_LAB_14083164);
      }
      goto LAB_1408430a;
    }
    pbVar6 = (byte *)FUN_14075258(param_3);
    uVar21 = (uint)*(ushort *)(param_3 + 8);
    bVar22 = pbVar6[1];
    iVar8 = (uint)*pbVar6 << 0x1e;
    iVar9 = -(iVar8 >> 0x1f);
    bVar1 = *pbVar6 >> 2;
    FUN_14075520(param_3);
    if (uVar21 < *(ushort *)(param_3 + 8)) {
      uVar14 = DAT_1408442c;
      if (*DAT_14084424 != local_2c) goto LAB_1408430a;
      goto LAB_14083a04;
    }
    switch(bVar1) {
    case 4:
      break;
    default:
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_14083f84,bVar1);
    case 8:
      if (uVar21 < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x41,DAT_140846d4);
      }
      if (iVar9 != 0) {
        uVar14 = FUN_14075258(param_3);
        uVar3 = *(ushort *)(param_3 + 8);
        uVar21 = (uint)uVar3;
        iVar8 = FUN_1408e504(uVar21 + 6,0,unaff_lr,0x330);
        if (iVar8 != 0) {
          pbVar6 = (byte *)FUN_14075458(iVar8,3);
          cVar2 = (char)uVar3;
          *pbVar6 = (char)piVar5[1] << 1 | 1;
          pbVar6[1] = 0xef;
          pbVar6[2] = (cVar2 + '\x02') * '\x02' | 1;
          puVar11 = (undefined1 *)FUN_14075458(iVar8,2);
          puVar11[1] = cVar2 << 1 | 1;
          *puVar11 = 0x21;
          uVar10 = FUN_14075458(iVar8,uVar21);
          FUN_140e5278(uVar10,uVar14,uVar21);
          goto LAB_14083f26;
        }
      }
      break;
    case 0x14:
      pbVar6 = (byte *)FUN_14075258(param_3);
      if (iVar9 != 0) {
        bVar22 = *pbVar6;
        bVar1 = pbVar6[1];
        iVar8 = FUN_1408e504(8,0,unaff_lr,0x2cb);
        if (iVar8 != 0) {
          pbVar6 = (byte *)FUN_14075458(iVar8,3);
          *pbVar6 = (char)piVar5[1] << 1 | 1;
          pbVar6[1] = 0xef;
          pbVar6[2] = 9;
          puVar11 = (undefined1 *)FUN_14075458(iVar8,2);
          puVar11[1] = 5;
          *puVar11 = 0x51;
          pbVar6 = (byte *)FUN_14075458(iVar8,2);
          *pbVar6 = bVar22 & 0xfc | 3;
          pbVar6[1] = bVar1;
          goto LAB_14083f26;
        }
      }
      break;
    case 0x18:
      if ((iVar9 != 0) && (iVar8 = FUN_1408e504(6,0,unaff_lr,0x2f0), iVar8 != 0)) {
        pbVar6 = (byte *)FUN_14075458(iVar8,3);
        *pbVar6 = (char)piVar5[1] << 1 | 1;
        pbVar6[1] = 0xef;
        pbVar6[2] = 5;
        puVar11 = (undefined1 *)FUN_14075458(iVar8,2);
        puVar11[1] = 1;
        *puVar11 = 0x61;
LAB_14083f26:
        pbVar6 = (byte *)FUN_14075458(iVar8,1);
        pbVar7 = (byte *)FUN_14075258(iVar8);
        iVar9 = FUN_14082098();
        *pbVar6 = ~*(byte *)(iVar9 + (uint)(*(byte *)(iVar9 + (uint)(byte)~*pbVar7) ^ pbVar7[1]));
        if (*(char *)((int)piVar5 + 5) == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x40,DAT_140846c0);
        }
        if (*DAT_14083f78 == local_2c) {
LAB_14083f68:
          FUN_1408e540(*piVar5,iVar8,0,0);
          return;
        }
        goto LAB_1408430a;
      }
      break;
    case 0x20:
      pcVar12 = (char *)FUN_14075258(param_3);
      cVar2 = *pcVar12;
      uVar21 = FUN_140862b4((int)piVar5 + 6);
      if (cVar2 != '\0') {
        piVar17 = piVar5 + 3;
        local_40[0] = (int *)*piVar17;
        if (piVar17 != local_40[0]) {
          iVar15 = 0x3ea;
          do {
            if ((char)local_40[0][0xc] == cVar2) {
              if (iVar9 == 0) {
                if ((char)local_40[0][6] == '\x01') {
                  if ((pcVar12[1] & 0xefU) == 0xe0) {
                    *(byte *)((int)local_40[0] + 0x3b) = pcVar12[7] & 7;
                  }
                  else {
                    bVar22 = (byte)((uint)iVar8 >> 0x1f);
                    *(byte *)((int)local_40[0] + 0x39) = bVar22;
                    *(byte *)((int)local_40[0] + 0x3a) = bVar22;
                  }
                  uVar14 = DAT_14084410;
                  *(char *)((int)local_40[0] + 0x37) = pcVar12[2];
                  uVar4 = *(undefined2 *)(pcVar12 + 4);
                  *(undefined2 *)(local_40[0] + 7) = uVar4;
                    /* WARNING: Subroutine does not return */
                  FUN_1402a64c(0x41,uVar14,uVar4);
                }
              }
              else {
                FUN_1408201c(local_40[0],1,pcVar12);
                FUN_14082c1c(piVar5,0,local_40[0]);
              }
              goto switchD_14083af4_caseD_4;
            }
            iVar15 = iVar15 + -1;
            local_40[0] = (int *)*local_40[0];
            if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_14082394();
            }
          } while (local_40[0] != piVar17);
        }
        local_40[0] = (int *)0x0;
        iVar8 = FUN_140836dc(piVar5,cVar2,local_40);
        if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1402a64c(0x42,DAT_140846ec,uVar21,cVar2);
        }
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x43,DAT_140846e4,uVar21,cVar2,pcVar12[7]);
      }
      uVar14 = DAT_140846bc;
      if (*DAT_140846b4 == local_2c) goto LAB_14083a04;
      goto LAB_1408430a;
    case 0x24:
      pbVar6 = (byte *)FUN_14075258(param_3);
      if (iVar9 != 0) {
        bVar1 = *pbVar6;
        if (bVar22 >> 1 == 1) {
          bVar19 = 0x13;
          bVar22 = 0x11;
          bVar20 = 3;
          bVar23 = 7;
        }
        else {
          uVar3 = *(ushort *)(pbVar6 + 6);
          uVar21 = (uint)uVar3;
          bVar22 = (byte)uVar3;
          bVar23 = bVar22 & 1;
          if (((uVar3 & 1) != 0) && (bVar23 = pbVar6[1], bVar23 != 7)) {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x41,DAT_14084414,bVar23);
          }
          bVar20 = bVar22 & 2;
          if (((uVar3 & 2) != 0) && (bVar20 = pbVar6[2] & 3, bVar20 != 3)) {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x41,DAT_14084418,bVar20);
          }
          if (((int)(uVar21 << 0x1d) < 0) && ((int)((uint)pbVar6[2] << 0x1d) < 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x41,DAT_140846d8,1);
          }
          if (((int)(uVar21 << 0x1c) < 0) && ((pbVar6[2] & 0x38) != 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x41,DAT_140846dc,(pbVar6[2] & 0x3f) >> 3);
          }
          if (((uVar3 & 0x3f00) != 0) && (pbVar6[3] != 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x41,DAT_140846e0);
          }
          bVar22 = bVar22 & 0x20;
          if (((uVar3 & 0x20) != 0) && (bVar22 = pbVar6[4], bVar22 != 0x11)) {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x41,DAT_1408441c,bVar22);
          }
          bVar19 = 0;
          if (((int)(uVar21 << 0x19) < 0) && (bVar19 = pbVar6[5], bVar19 != 0x13)) {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x41,DAT_14084420,bVar19);
          }
        }
        iVar8 = FUN_1408e504(0xe,0,unaff_lr,0x29f);
        if (iVar8 != 0) {
          pbVar6 = (byte *)FUN_14075458(iVar8,3);
          iVar9 = piVar5[1];
          pbVar6[2] = 0x15;
          *pbVar6 = (char)iVar9 << 1 | 1;
          pbVar6[1] = 0xef;
          puVar11 = (undefined1 *)FUN_14075458(iVar8,2);
          *puVar11 = 0x91;
          puVar11[1] = 0x11;
          pbVar6 = (byte *)FUN_14075458(iVar8,8);
          pbVar6[5] = bVar19;
          pbVar6[6] = 0x7f;
          pbVar6[7] = 0x3f;
          *pbVar6 = bVar1 & 0xfc | 3;
          pbVar6[1] = bVar23;
          pbVar6[2] = bVar20;
          pbVar6[3] = 0;
          pbVar6[4] = bVar22;
          pbVar6 = (byte *)FUN_14075458(iVar8,1);
          pbVar7 = (byte *)FUN_14075258(iVar8);
          iVar9 = FUN_14082098();
          *pbVar6 = ~*(byte *)(iVar9 + (uint)(*(byte *)(iVar9 + (uint)(byte)~*pbVar7) ^ pbVar7[1]));
          if (*(char *)((int)piVar5 + 5) == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_1402a64c(0x40,DAT_140846c0);
          }
          if (*DAT_14084424 != local_2c) goto LAB_1408430a;
          goto LAB_14083f68;
        }
      }
      break;
    case 0x28:
      if ((iVar9 != 0) && (iVar8 = FUN_1408e504(6,0,unaff_lr,0x310), iVar8 != 0)) {
        pbVar6 = (byte *)FUN_14075458(iVar8,3);
        *pbVar6 = (char)piVar5[1] << 1 | 1;
        pbVar6[1] = 0xef;
        pbVar6[2] = 5;
        puVar11 = (undefined1 *)FUN_14075458(iVar8,2);
        puVar11[1] = 1;
        *puVar11 = 0xa1;
        goto LAB_14083f26;
      }
      break;
    case 0x38:
      pbVar6 = (byte *)FUN_14075258(param_3);
      bVar22 = *pbVar6;
      uVar14 = FUN_140862b4((int)piVar5 + 6);
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x43,DAT_14083f90,uVar14,bVar22 >> 2,iVar9);
    }
  }
switchD_14083af4_caseD_4:
  if (*DAT_14083c68 == local_2c) {
    return;
  }
LAB_1408430a:
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}


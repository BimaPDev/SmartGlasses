/* FUN_100f2490 @ 0x100f2490 */

/* WARNING: Type propagation algorithm not settling */

void FUN_100f2490(void)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  short sVar17;
  int iVar18;
  short *psVar19;
  int *piVar20;
  undefined4 *puVar21;
  undefined1 auStack_bc [16];
  uint local_ac;
  short *local_a8;
  int local_a4;
  int local_a0;
  short *local_9c [2];
  int local_94 [6];
  short asStack_7c [4];
  undefined1 auStack_74 [4];
  int aiStack_70 [5];
  short local_5c;
  short local_5a;
  short local_58;
  short local_56;
  undefined2 local_54;
  undefined4 local_50;
  short local_3c;
  short local_3a;
  short local_38;
  short local_36;
  
  local_94[0] = 0;
  local_94[1] = 0;
  local_94[2] = 0;
  iVar6 = FUN_1013938e();
  piVar16 = DAT_100f27c8;
  if (iVar6 == 0) {
    local_ac = 0;
  }
  else {
    local_ac = 3;
  }
  FUN_1011dbf4(DAT_100f27c8 + 0x1b,0xffffffff);
  if ((char)piVar16[0x18] != '\0') {
    for (piVar16 = (int *)*piVar16; piVar16 != (int *)0x0; piVar16 = (int *)*piVar16) {
      bVar1 = *(byte *)((int)piVar16 + 0x15);
      while (-1 < (int)((uint)bVar1 << 0x1e)) {
        piVar16 = (int *)*piVar16;
        if (piVar16 == (int *)0x0) goto LAB_100f25e6;
        bVar1 = *(byte *)((int)piVar16 + 0x15);
      }
      thunk_FUN_10139338(piVar16[9]);
      *(undefined1 *)((int)piVar16 + 0x15) = 0;
    }
LAB_100f25e6:
    FUN_10113e2c(DAT_100f27b8);
    return;
  }
  if (((*(char *)((int)piVar16 + 0x81) == '\0') &&
      (uVar12 = (uint)*(byte *)((int)piVar16 + 0x62), (*(byte *)((int)piVar16 + 0x62) & 0x30) == 0))
     && (((piVar16[0x22] == 0 && (piVar16[0x23] == 0)) || (*(char *)((int)piVar16 + 99) == '\0'))))
  {
    if (-1 < (int)(uVar12 << 0x1f)) goto LAB_100f25e6;
  }
  else {
    uVar12 = *(byte *)((int)piVar16 + 0x62) | 2;
    *(char *)((int)piVar16 + 0x62) = (char)uVar12;
  }
  puVar4 = DAT_100f27b4;
  if ((int)(uVar12 << 0x1e) < 0) {
    bVar1 = *(byte *)((int)piVar16 + 0x62);
    puVar21 = DAT_100f27b4 + -1;
    *DAT_100f27b4 = DAT_100f27b4[-2];
    puVar4[1] = *puVar21;
    *(byte *)((int)piVar16 + 0x62) = bVar1 & 0xfd;
  }
  else {
    FUN_10067af8(DAT_100f27b4);
  }
  local_a0 = FUN_100f0898();
  piVar15 = (int *)*piVar16;
  if (piVar15 == (int *)0x0) {
    *(byte *)((int)piVar16 + 0x62) = *(byte *)((int)piVar16 + 0x62) & 0xfe;
    FUN_10113e2c(DAT_100f2b24);
    return;
  }
  iVar6 = 0;
  psVar19 = (short *)0x2;
  bVar2 = false;
  do {
    if (((!bVar2) && (-1 < (int)psVar19)) && ((*(byte *)(piVar15 + 5) & 5) == 0)) {
      iVar18 = FUN_1013d990(asStack_7c + (int)psVar19 * 0x10,DAT_100f27b4,piVar15 + 2);
      local_a8 = psVar19;
      local_a4 = (int)psVar19 << 5;
      if (iVar18 == 0) goto LAB_100f2514;
      iVar18 = FUN_10139378(piVar15[9]);
      *(int *)((int)local_94 + local_a4 + 0xc) = iVar18;
      if ((iVar18 == 0) ||
         (iVar18 = FUN_100f0da4(piVar15,local_94 + (int)psVar19 * 8 + 3), iVar18 == 0))
      goto LAB_100f2514;
      if (*(char *)((int)piVar15 + 0x17) != '\0') {
        bVar1 = *(byte *)((int)piVar15 + 0x15);
        iVar18 = DAT_100f27bc;
        if ((bVar1 & 2) == 0) {
          iVar18 = 0;
        }
        iVar7 = piVar15[9];
        aiStack_70[(int)psVar19 * 8] = iVar18;
        aiStack_70[(int)psVar19 * 8 + 1] = iVar7;
        auStack_74[(int)psVar19 * 0x20] = 0;
        if ((bVar1 & 5) != 0) {
          local_ac = local_ac | 1;
        }
        if ((bVar1 & 9) != 0) {
          local_ac = local_ac | 2;
        }
        iVar18 = FUN_1011e72e(DAT_100f27c0,piVar15 + 2);
        bVar2 = false;
        if (iVar18 != 0) {
          bVar2 = (DAT_100f27c4 & *(uint *)(piVar15[9] + 4)) == 0;
        }
        iVar6 = (int)(char)((char)iVar6 + '\x01');
        psVar19 = (short *)(int)(char)((char)psVar19 + -1);
        local_94[(int)local_a8] = (int)piVar15;
        *(undefined1 *)((int)piVar15 + 0x15) = 0;
        goto LAB_100f251a;
      }
      piVar15 = (int *)*piVar16;
      while (piVar15 != (int *)0x0) {
        if ((int)((uint)*(byte *)((int)piVar15 + 0x15) << 0x1e) < 0) {
          thunk_FUN_10139338(piVar15[9]);
          *(undefined1 *)((int)piVar15 + 0x15) = 0;
          piVar15 = (int *)*piVar15;
        }
        else {
          piVar15 = (int *)*piVar15;
        }
      }
      iVar6 = (int)(char)('\x03' - (char)iVar6);
      if (2 < iVar6) goto LAB_100f25da;
      piVar15 = local_94 + iVar6 * 8 + 3;
      do {
        if ((code *)piVar15[6] != (code *)0x0) {
          (*(code *)piVar15[6])(piVar15[7]);
          piVar15[6] = 0;
        }
        piVar15 = piVar15 + 8;
      } while (aiStack_70 + ((2U - iVar6 & 0xff) + iVar6) * 8 + 2 != piVar15);
      iVar6 = 0;
      goto LAB_100f2726;
    }
LAB_100f2514:
    if ((int)((uint)*(byte *)((int)piVar15 + 0x15) << 0x1e) < 0) {
      thunk_FUN_10139338(piVar15[9]);
      *(undefined1 *)((int)piVar15 + 0x15) = 0;
    }
LAB_100f251a:
    piVar15 = (int *)*piVar15;
  } while (piVar15 != (int *)0x0);
  if (0 < iVar6) {
    piVar20 = local_94 + 3;
    iVar18 = 2;
    piVar15 = piVar20;
    do {
      piVar15 = piVar15 + -1;
      if (-1 < (int)((uint)*(byte *)(*piVar15 + 0x16) << 0x1c)) {
        if (((char)iVar18 < '\0') || (cVar10 = (char)iVar18 + (char)iVar6 + -2, cVar10 < '\x02'))
        break;
        psVar19 = *(short **)(piVar20[iVar18 * 8] + 4);
        iVar7 = iVar18 * 0x20;
        uVar12 = (uint)psVar19 & DAT_100f2b28;
        if (uVar12 == 0) {
          if (*(char *)(local_a0 + 1) == -1) break;
          local_a8 = asStack_7c + iVar18 * 0x10;
          local_a4 = iVar18 * 0x20;
          local_9c[0] = psVar19;
          iVar18 = FUN_1011e5fe(local_9c + iVar18 * 8);
          psVar19 = local_a8;
          psVar8 = local_9c[0];
          if (iVar18 == 0) {
LAB_100f2824:
            local_a8 = local_9c[0];
            if ((cVar10 == '\x02') ||
               (iVar18 = FUN_1011e5fe(auStack_bc + local_a4,psVar19), iVar18 == 0)) break;
            psVar8 = local_a8;
            if (uVar12 != 0) goto LAB_100f2846;
          }
          uVar12 = FUN_1005fb14(psVar8);
          if (uVar12 < 0x11) {
            auStack_74[iVar7 + 1] = *(undefined1 *)(local_a0 + 1);
          }
          else {
            iVar13 = (int)*(short *)((int)piVar16 + 10);
            iVar18 = (int)*(short *)(local_94[2] + 10);
            iVar9 = (int)*(short *)(local_94[2] + 0xe);
            if (iVar18 < iVar13) {
LAB_100f2b10:
              uVar14 = iVar9 - iVar13 & 0xffff;
              uVar12 = iVar9 - iVar18 & 0xffff;
            }
            else {
              iVar13 = (int)*(short *)((int)piVar16 + 0xe);
              if (iVar13 < iVar9) {
LAB_100f2b1a:
                uVar14 = iVar13 - iVar18 & 0xffff;
                uVar12 = iVar9 - iVar18 & 0xffff;
              }
              else {
                iVar18 = (int)*(short *)(local_94[2] + 8);
                iVar13 = (int)(short)piVar16[2];
                iVar9 = (int)*(short *)(local_94[2] + 0xc);
                if (iVar18 < iVar13) goto LAB_100f2b10;
                iVar13 = (int)(short)piVar16[3];
                if (iVar13 < iVar9) goto LAB_100f2b1a;
                uVar12 = 0;
                uVar14 = 0;
              }
            }
            auStack_74[iVar7 + 1] = (char)((uVar14 * 0xff) / uVar12);
          }
        }
        else {
          local_a8 = asStack_7c + iVar18 * 0x10;
          local_a4 = iVar18 * 0x20;
          local_9c[0] = psVar19;
          iVar18 = FUN_1011e5fe(local_9c + iVar18 * 8);
          psVar19 = local_a8;
          if (iVar18 == 0) goto LAB_100f2824;
LAB_100f2846:
          auStack_74[iVar7 + 1] = 0xff;
        }
        auStack_74[iVar7] = 2;
        break;
      }
      iVar18 = iVar18 + -1;
    } while (1 - (iVar6 - 1U & 0xff) != iVar18);
    if (iVar6 == 1) {
      if ((short)piVar16[4] < local_3c) {
        sVar5 = *(short *)((int)piVar16 + 0x12);
        sVar17 = *(short *)((int)piVar16 + 0x16);
      }
      else {
        sVar5 = *(short *)((int)piVar16 + 0x12);
        if (local_38 < (short)piVar16[5]) {
          sVar17 = *(short *)((int)piVar16 + 0x16);
        }
        else {
          sVar17 = *(short *)((int)piVar16 + 0x16);
          if ((local_3a <= sVar5) && (sVar17 <= local_36)) goto LAB_100f2552;
        }
      }
      iVar6 = 2;
      local_5c = (short)piVar16[4];
      local_5a = sVar5;
      local_58 = (short)piVar16[5];
      local_56 = sVar17;
      aiStack_70[2] = 0;
      local_50 = 0;
      local_54 = 0;
    }
LAB_100f2552:
    cVar3 = (char)iVar6;
    piVar15 = piVar20;
    cVar10 = '\x02';
LAB_100f255e:
    piVar15 = piVar15 + -1;
    iVar18 = (int)cVar10;
    bVar1 = *(byte *)(*piVar15 + 0x16);
    cVar11 = cVar10 + -1;
    if ((bVar1 & 8) != 0) goto LAB_100f2558;
    if ((iVar18 < 0) || (cVar10 = cVar3 + -2 + cVar10, cVar10 < '\x01')) goto LAB_100f2786;
    if ((piVar16[0x24] != 0) && (*(char *)((int)piVar16 + 0x81) != '\0')) {
      iVar6 = (int)(char)('\x03' - cVar3);
      piVar15 = piVar20 + iVar6 * 8;
      do {
        if ((code *)piVar15[6] != (code *)0x0) {
          (*(code *)piVar15[6])(piVar15[7]);
          piVar15[6] = bVar1 & 8;
        }
        piVar15 = piVar15 + 8;
      } while (piVar15 != aiStack_70 + ((2U - iVar6 & 0xff) + iVar6) * 8 + 2);
      if (local_94[iVar18 * 8 + 3] == 0) {
        *(byte *)((int)piVar16 + 0x62) = *(byte *)((int)piVar16 + 0x62) & 0xfe;
        FUN_10113e2c(DAT_100f2b24);
        return;
      }
LAB_100f25d2:
      FUN_100f0e60(piVar20,iVar18);
LAB_100f25da:
      *(byte *)((int)piVar16 + 0x62) = *(byte *)((int)piVar16 + 0x62) & 0xfe;
      goto LAB_100f25e6;
    }
    bVar1 = *(byte *)((int)piVar16 + 0x62);
    uVar12 = bVar1 & 0x10;
    if ((bVar1 & 0x10) == 0) {
      if ((bVar1 & 0x20) == 0) {
        if (*(char *)((int)piVar16 + 0x83) < '\x01') goto LAB_100f2786;
        iVar6 = (int)(char)('\x03' - cVar3);
        piVar20 = piVar20 + iVar6 * 8;
        do {
          if ((code *)piVar20[6] != (code *)0x0) {
            (*(code *)piVar20[6])(piVar20[7]);
            piVar20[6] = bVar1 & 0x20;
          }
          piVar20 = piVar20 + 8;
        } while (aiStack_70 + ((2U - iVar6 & 0xff) + iVar6) * 8 + 2 != piVar20);
      }
      else {
        if (cVar10 == '\x02') {
          if ((local_94[iVar18 * 8 + 3] != 0) && ((&local_a8)[iVar18 * 8] != (short *)0x0)) {
            iVar6 = (int)(char)('\x03' - cVar3);
            piVar15 = piVar20 + iVar6 * 8;
            do {
              if ((code *)piVar15[6] != (code *)0x0) {
                (*(code *)piVar15[6])(piVar15[7]);
                piVar15[6] = uVar12;
              }
              piVar15 = piVar15 + 8;
            } while (aiStack_70 + ((2U - iVar6 & 0xff) + iVar6) * 8 + 2 != piVar15);
            goto LAB_100f25d2;
          }
          goto LAB_100f2786;
        }
        if (cVar10 != '\x01') goto LAB_100f2786;
        iVar6 = (int)(char)('\x03' - cVar3);
        piVar20 = piVar20 + iVar6 * 8;
        do {
          if ((code *)piVar20[6] != (code *)0x0) {
            (*(code *)piVar20[6])(piVar20[7]);
            piVar20[6] = uVar12;
          }
          piVar20 = piVar20 + 8;
        } while (aiStack_70 + ((2U - iVar6 & 0xff) + iVar6) * 8 + 2 != piVar20);
      }
    }
    else {
      if (((short)piVar16[0x1a] == 0) || ((short)piVar16[0x1a] == 0xb4)) {
        sVar5 = asStack_7c[iVar18 * 0x10];
      }
      else {
        sVar5 = asStack_7c[iVar18 * 0x10 + 1];
      }
      if (cVar10 == '\x02') {
        if (local_94[iVar18 * 8 + 3] != 0) {
          iVar6 = (int)(char)('\x03' - cVar3);
          piVar15 = piVar20 + iVar6 * 8;
          do {
            if ((code *)piVar15[6] != (code *)0x0) {
              (*(code *)piVar15[6])(piVar15[7]);
              piVar15[6] = 0;
            }
            piVar15 = piVar15 + 8;
          } while (aiStack_70 + ((2U - iVar6 & 0xff) + iVar6) * 8 + 2 != piVar15);
          goto LAB_100f25d2;
        }
        goto LAB_100f2786;
      }
      if ((cVar10 != '\x01') || ((sVar5 == 0 && (*(char *)((int)piVar16 + 0x83) < '\x01'))))
      goto LAB_100f2786;
      iVar6 = (int)(char)('\x03' - cVar3);
      piVar20 = piVar20 + iVar6 * 8;
      do {
        if ((code *)piVar20[6] != (code *)0x0) {
          (*(code *)piVar20[6])(piVar20[7]);
          piVar20[6] = 0;
        }
        piVar20 = piVar20 + 8;
      } while (aiStack_70 + ((2U - iVar6 & 0xff) + iVar6) * 8 + 2 != piVar20);
    }
    iVar6 = 0;
  }
LAB_100f2726:
  *(byte *)((int)piVar16 + 0x62) = *(byte *)((int)piVar16 + 0x62) & 0xfe;
  goto LAB_100f2732;
LAB_100f2558:
  cVar10 = cVar11;
  if ((char)(cVar3 + -2 + cVar11) < '\x01') goto LAB_100f2786;
  goto LAB_100f255e;
LAB_100f2786:
  if ((int)(local_ac << 0x1e) < 0) {
    piVar16[0x17] = piVar16[0x17] + 1;
  }
  piVar16[4] = piVar16[3];
  piVar16[5] = piVar16[2];
  *(byte *)((int)piVar16 + 0x62) = *(byte *)((int)piVar16 + 0x62) & 0xfe;
LAB_100f2732:
  FUN_10113e2c(DAT_100f27b8);
  if (0 < iVar6) {
    FUN_10067b48(local_94 + (3 - iVar6) * 8 + 3,iVar6,local_ac);
  }
  return;
}


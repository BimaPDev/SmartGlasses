/* FUN_2c4cf288 @ 0x2c4cf288 */

void FUN_2c4cf288(uint *param_1,int *param_2,uint param_3,char *param_4)

{
  byte *pbVar1;
  uint *puVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  undefined4 uVar6;
  int *extraout_r1;
  uint uVar7;
  int *piVar8;
  int *extraout_r1_00;
  int *extraout_r1_01;
  int *extraout_r1_02;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  int *piVar12;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 uVar17;
  undefined4 *puVar18;
  byte *pbVar19;
  undefined8 uVar20;
  undefined1 auStack_100 [212];
  uint local_2c;
  int *piVar13;
  
  local_2c = *DAT_2c4cf554;
  piVar8 = param_2;
  if (param_1 == (uint *)0x0) {
    iVar11 = 0x2001;
    goto LAB_2c4cf31a;
  }
  iVar11 = (int)*(short *)((int)param_2 + 0xf2);
  if (iVar11 < 0x2b) {
    if (iVar11 < 2) {
switchD_2c4cf2b8_caseD_3:
      iVar11 = 0x2002;
      goto LAB_2c4cf31a;
    }
    switch(iVar11) {
    case 2:
      goto switchD_2c4cf2b8_caseD_2;
    default:
      goto switchD_2c4cf2b8_caseD_3;
    case 5:
    case 0x11:
    case 0x17:
    case 0x1d:
    case 0x2a:
      goto switchD_2c4cf2b8_caseD_5;
    case 0x14:
      goto switchD_2c4cf2b8_caseD_14;
    case 0x27:
      uVar17 = 2;
      goto LAB_2c4cf342;
    }
  }
  if ((iVar11 != 0x8f) && (iVar11 != 0x92)) goto switchD_2c4cf2b8_caseD_3;
  goto switchD_2c4cf2b8_caseD_5;
LAB_2c4cf778:
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 7;
  FUN_2c4ceba4(param_1);
  iVar11 = 2;
  piVar8 = extraout_r1_00;
  goto LAB_2c4cf31a;
switchD_2c4cf2b8_caseD_2:
  param_1[0xb2] = 1;
switchD_2c4cf2b8_caseD_14:
  if (param_2[5] != 0) {
    iVar11 = 0x2003;
    goto LAB_2c4cf31a;
  }
switchD_2c4cf2b8_caseD_5:
  uVar17 = 1;
LAB_2c4cf342:
  puVar15 = param_1 + 0x76;
  iVar11 = FUN_2c4d4b50(puVar15);
  if ((iVar11 == 0) || ((char)param_2[0x42] < '\x01')) {
LAB_2c4cf356:
    FUN_2c4d4b3c(puVar15);
    piVar8 = extraout_r1;
  }
  else {
    FUN_2c4d58e4(auStack_100);
    uVar20 = FUN_2c4d58b8(puVar15,auStack_100);
    piVar8 = (int *)((ulonglong)uVar20 >> 0x20);
    if (1 < (uint)uVar20) goto LAB_2c4cf356;
  }
  uVar16 = (uint)(char)param_2[0x42];
  switch(uVar16) {
  case 0:
    piVar13 = param_2 + 8;
    uVar20 = FUN_2c4d4b50(piVar13);
    piVar8 = (int *)((ulonglong)uVar20 >> 0x20);
    if ((int)uVar20 == 0) {
      iVar11 = 0x2007;
      *(undefined1 *)(param_1 + 0x74) = 0;
      goto LAB_2c4cf31a;
    }
    uVar16 = (uint)*(byte *)((int)param_2 + 0xee);
    if (uVar16 != 0) {
      FUN_2c674668(puVar15,piVar13,0xd1);
      uVar20 = FUN_2c4d6324(piVar13,param_1 + 0x4a,0x10,param_1 + 0x74);
      piVar8 = (int *)((ulonglong)uVar20 >> 0x20);
      if ((int)uVar20 < 0x3d) {
        piVar8 = (int *)((int)param_1 + 0x165);
        piVar13 = (int *)((int)uVar20 + 0x128 + (int)param_1);
        do {
          piVar12 = (int *)((int)piVar13 + 1);
          *(undefined1 *)piVar13 = 0xff;
          piVar13 = piVar12;
        } while (piVar8 != piVar12);
      }
      goto switchD_2c4cf364_caseD_1;
    }
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
switchD_2c4cf364_caseD_1:
    if (uVar16 - 1 < 8) {
      if ('\x0e' < (char)param_2[0x42]) {
        iVar11 = 0x2007;
        goto LAB_2c4cf31a;
      }
      goto LAB_2c4cf3f4;
    }
    break;
  case 7:
  case 0xc:
  case 0xe:
    uVar16 = 8;
    goto LAB_2c4cf3f4;
  case 0xb:
    uVar16 = 7;
LAB_2c4cf3f4:
    param_1[0xc] = 0;
    FUN_2c674268(param_1 + 0xd,0,0xf4);
    iVar11 = DAT_2c4cf558;
    uVar14 = (uint)(char)param_2[0x42];
    if ((0 < (int)uVar14) || (*(short *)((int)param_2 + 0xf2) == 0x2a)) {
      iVar9 = 0;
      puVar15 = param_1 + 0x4a;
      while( true ) {
        puVar10 = (undefined1 *)((uVar14 - 1) * 7 + iVar11 + iVar9);
        iVar9 = iVar9 + 1;
        *(undefined1 *)puVar15 = *puVar10;
        if (iVar9 == 7) break;
        uVar14 = (uint)(char)param_2[0x42];
        puVar15 = (uint *)((int)puVar15 + 1);
      }
      puVar15 = (uint *)((int)param_1 + 0x12e);
      do {
        puVar15 = (uint *)((int)puVar15 + 1);
        *(undefined1 *)puVar15 = 0xff;
      } while (param_1 + 0x59 != puVar15);
      puVar10 = (undefined1 *)((int)param_1 + 0x1a1);
      iVar11 = 0;
      do {
        puVar10 = puVar10 + 1;
        *puVar10 = (char)iVar11;
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)uVar16);
      if (uVar16 != 8) {
        puVar10 = (undefined1 *)(uVar16 + 0x1a1 + (int)param_1);
        do {
          puVar10 = puVar10 + 1;
          *puVar10 = 0xff;
        } while ((undefined1 *)((int)param_1 + 0x1a9) != puVar10);
      }
      *(char *)(param_1 + 0x74) = (char)param_2[0x42];
      uVar14 = (uint)(char)param_2[0x42];
    }
    param_1[0xb4] = uVar14;
    if ((short)param_1[0xb3] == *(short *)((int)param_2 + 0xf2)) {
      if (*(char *)((int)param_1 + 0x4ad) != '\x01') {
        if ((param_3 & 2) != 0) goto LAB_2c4cf49c;
        goto LAB_2c4cf656;
      }
      bVar5 = false;
LAB_2c4cf674:
      param_1[0xb5] = 0;
      *(short *)(param_1 + 0xb8) = (short)param_2[0x40];
      uVar7 = param_2[0x41];
      if (param_1[0xb9] != uVar7) {
        bVar5 = true;
      }
      uVar14 = 0;
      if ((param_3 & 2) == 0) goto LAB_2c4cf4c8;
LAB_2c4cf4c4:
      uVar14 = param_3 & 2;
      param_1[0xb9] = uVar7;
    }
    else {
      if ((param_3 & 2) != 0) {
        *(short *)(param_1 + 0xb3) = *(short *)((int)param_2 + 0xf2);
        if (*(char *)((int)param_1 + 0x4ad) == '\x01') {
          param_1[0xb5] = 0;
          *(short *)(param_1 + 0xb8) = (short)param_2[0x40];
          uVar7 = param_2[0x41];
          if (uVar7 != param_1[0xb9]) {
            bVar5 = true;
            goto LAB_2c4cf4c4;
          }
LAB_2c4cf78e:
          uVar14 = uVar7;
        }
        else {
LAB_2c4cf49c:
          uVar7 = param_1[0xb9];
          *(undefined2 *)(param_1 + 299) = 0x101;
          param_1[0xb5] = 0;
          *(short *)(param_1 + 0xb8) = (short)param_2[0x40];
          uVar14 = param_2[0x41];
          if (param_2[0x41] == uVar7) goto LAB_2c4cf78e;
        }
        uVar7 = uVar14;
        bVar5 = true;
        goto LAB_2c4cf4c4;
      }
      if (*(char *)((int)param_1 + 0x4ad) == '\x01') {
        bVar5 = true;
        goto LAB_2c4cf674;
      }
LAB_2c4cf656:
      uVar14 = 0;
      bVar5 = true;
      param_1[0xb5] = 0;
      *(short *)(param_1 + 0xb8) = (short)param_2[0x40];
    }
LAB_2c4cf4c8:
    if (*(char *)((int)param_2 + 0x10d) == '\0') {
      uVar7 = 0;
    }
    else {
      uVar7 = 0x8000;
    }
    param_1[0xc] = uVar7;
    if (*(char *)((int)param_2 + 0x10e) != '\0') {
      uVar7 = uVar7 | 0x20000;
    }
    param_1[0xc] = uVar7;
    if (*(char *)((int)param_2 + 0x10a) != '\0') {
      uVar7 = uVar7 | 1;
    }
    param_1[0xc] = uVar7;
    if (*(char *)((int)param_2 + 0x10b) != '\0') {
      uVar7 = uVar7 | 2;
    }
    param_1[0xc] = uVar7;
    if ((char)param_2[0x43] != '\0') {
      uVar7 = uVar7 | 4;
    }
    param_1[0xc] = uVar7;
    if (*(short *)((int)param_2 + 0xf2) == 0x17) {
      uVar7 = uVar7 | 0x20;
    }
    param_1[0xc] = uVar7;
    if (-1 < *(char *)((int)param_2 + 0x109)) {
      uVar7 = uVar7 | 0x40;
    }
    param_1[0xc] = uVar7;
    cVar3 = *(char *)((int)param_2 + 0x109);
    if (cVar3 < '\0') {
      *(char *)(param_1 + 0xbc) = cVar3;
    }
    else {
      piVar8 = (int *)(int)(char)param_2[0x42];
      if (((int)piVar8 < 1) || (*(char *)(param_1 + 0xbc) = cVar3, '\x01' < cVar3)) {
        iVar11 = 0x2004;
        goto LAB_2c4cf31a;
      }
    }
    piVar8 = (int *)param_1[10];
    if ((piVar8 == (int *)param_2[0x3d]) &&
       (piVar8 = (int *)param_2[0x3e], (int *)param_1[0xb6] == piVar8)) {
      if (param_1[1] != uVar16) goto LAB_2c4cf576;
      if ((param_3 & 1) != 0) {
        if (!bVar5) {
          iVar11 = 0;
          goto LAB_2c4cf31a;
        }
        goto LAB_2c4cf76e;
      }
    }
    else {
      if (uVar14 != 0) {
        uVar20 = FUN_2c4cddec(param_1 + 6,param_2[0x3e],*(undefined1 *)((int)param_2 + 0x10f));
        piVar8 = (int *)((ulonglong)uVar20 >> 0x20);
        iVar11 = (int)uVar20;
        if (iVar11 != 0) goto LAB_2c4cf31a;
        param_1[0xb1] = param_1[10] / (uint)(byte)param_1[299];
        param_1[0xb6] = (uint)param_2[0x3e] / (uint)(byte)param_1[299];
      }
LAB_2c4cf576:
      if ((param_3 & 1) != 0) {
LAB_2c4cf76e:
        iVar11 = 0;
        *param_4 = '\x01';
        goto LAB_2c4cf31a;
      }
    }
    if (*param_4 != '\0') {
      iVar11 = 0;
      puVar15 = param_1 + 199;
      do {
        uVar14 = FUN_2c4d1048(iVar11);
        puVar15 = puVar15 + 1;
        *puVar15 = uVar14;
        if (uVar14 == 0) goto LAB_2c4cf778;
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)uVar16);
      iVar11 = 0;
      pbVar19 = (byte *)((int)param_1 + 0x127);
      do {
        pbVar1 = pbVar19 + 1;
        bVar4 = *pbVar1;
        iVar9 = (int)(char)bVar4;
        if ((bVar4 < 0x13) && ((1 << (uint)bVar4 & DAT_2c4cf8b8) != 0)) {
          switch(iVar9) {
          case 0:
          case 3:
          case 0x10:
          case 0x12:
            iVar9 = 1;
            break;
          case 1:
            iVar9 = 2;
            break;
          default:
            iVar9 = 0;
            break;
          case 0x11:
            if (pbVar19[0x331] == 1) {
              iVar9 = 1;
            }
            else {
              iVar9 = 2;
            }
          }
          uVar14 = param_1[iVar11 + 200];
          uVar6 = FUN_2c4dc50c(1,4);
          *(undefined4 *)(uVar14 + 200) = uVar6;
          uVar14 = param_1[iVar11 + 200];
          if (*(int *)(uVar14 + 200) == 0) goto LAB_2c4cf778;
          if (iVar11 == 0) {
            uVar6 = FUN_2c4d7104(0x13b4,8);
            *(undefined4 *)(uVar14 + 0xc4) = uVar6;
            puVar18 = *(undefined4 **)(param_1[200] + 200);
            uVar6 = FUN_2c4d10bc(0);
            *puVar18 = uVar6;
          }
          else {
            uVar6 = FUN_2c4d7104(0x13b4,8);
            *(undefined4 *)(uVar14 + 0xc4) = uVar6;
            **(undefined4 **)(param_1[iVar11 + 200] + 200) = **(undefined4 **)(param_1[200] + 200);
          }
          uVar14 = param_1[iVar11 + 200];
          if ((*(int *)(uVar14 + 0xc4) == 0) || (**(int **)(uVar14 + 200) == 0)) goto LAB_2c4cf778;
          *(int *)(uVar14 + 0xc0) = *(int *)(uVar14 + 0xc4);
          piVar8 = (int *)param_1[iVar11 + 200];
          piVar8[0x25] = param_1[0xd8] + iVar11 * 0x1000;
          if (iVar9 == 2) {
            if (6 < iVar11) goto switchD_2c4cf364_caseD_8;
            *(undefined4 *)(param_1[iVar11 + 0xc9] + 0xc4) =
                 *(undefined4 *)(param_1[iVar11 + 200] + 0xc4);
            *(undefined4 *)(param_1[iVar11 + 0xc9] + 200) =
                 *(undefined4 *)(param_1[iVar11 + 200] + 200);
            **(undefined4 **)(param_1[iVar11 + 0xc9] + 200) =
                 **(undefined4 **)(param_1[iVar11 + 200] + 200);
            *(int *)(param_1[iVar11 + 0xc9] + 0xc0) = *(int *)(param_1[iVar11 + 200] + 0xc4) + 0x878
            ;
            *(uint *)(param_1[iVar11 + 0xc9] + 0x94) = iVar11 * 0x1000 + 0x1000 + param_1[0xd8];
          }
          iVar11 = iVar11 + iVar9;
          iVar9 = (int)(char)*pbVar1;
        }
      } while ((iVar9 != 7) && (pbVar19 = pbVar1, pbVar1 != (byte *)((int)param_1 + 0x137)));
      uVar14 = 0;
      puVar15 = param_1 + 0xcf;
      do {
        puVar18 = (undefined4 *)FUN_2c4d102c(uVar14);
        puVar2 = puVar15 + 1;
        *puVar2 = (uint)puVar18;
        if (puVar18 == (undefined4 *)0x0) goto LAB_2c4cf778;
        uVar6 = FUN_2c4d1064(uVar14);
        *puVar18 = uVar6;
        piVar8 = (int *)*puVar2;
        if (*piVar8 == 0) goto LAB_2c4cf778;
        if ((param_1[0xc] & 0x300) == 0) {
          FUN_2c4d0d20(puVar15[-7],piVar8 + 0xd,*(int *)(puVar15[-7] + 0xc4) + 0x1170);
          piVar8 = extraout_r1_01;
        }
        uVar14 = uVar14 + 1;
        puVar15 = puVar2;
      } while ((int)uVar14 < (int)uVar16);
      if (*param_1 != uVar16) {
        *param_1 = uVar14;
      }
      param_1[1] = uVar16;
      iVar11 = 0;
      param_1[0x126] = 0;
      puVar15 = param_1 + 199;
      if (*param_4 != '\0') {
        do {
          if (((short)param_1[0xb3] == 0x17) || ((short)param_1[0xb3] == 0x27)) {
            *(uint *)(puVar15[1] + 0xb8) = param_1[0xb6];
          }
          else {
            uVar16 = param_1[0xb6];
            if ((int)uVar16 < 0) {
              uVar16 = uVar16 + 7;
            }
            *(int *)(puVar15[1] + 0xb8) = (int)uVar16 >> 3;
          }
          iVar11 = iVar11 + 1;
          *(undefined1 *)(puVar15[1] + 0xbd) = uVar17;
          FUN_2c4d9534((undefined4 *)puVar15[9] + 1,*(undefined4 *)puVar15[9],0x300);
          piVar8 = extraout_r1_02;
          puVar15 = puVar15 + 1;
        } while (iVar11 < (int)param_1[1]);
      }
    }
    iVar11 = 0;
    param_1[0xbb] = param_1[0xc];
    goto LAB_2c4cf31a;
  }
switchD_2c4cf364_caseD_8:
  iVar11 = 0x2007;
LAB_2c4cf31a:
  if ((*DAT_2c4cf554 ^ local_2c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(iVar11,piVar8,*DAT_2c4cf554 ^ local_2c,0);
  }
  return;
}


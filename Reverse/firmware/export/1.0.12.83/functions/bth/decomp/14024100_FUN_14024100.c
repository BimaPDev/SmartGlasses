/* FUN_14024100 @ 0x14024100 */

void FUN_14024100(uint *param_1,int *param_2,uint param_3,char *param_4)

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
  undefined1 *puVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 uVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  int *piVar19;
  int iVar20;
  undefined8 uVar21;
  undefined1 auStack_100 [212];
  uint local_2c;
  
  local_2c = *DAT_140243bc;
  piVar8 = param_2;
  if (param_1 == (uint *)0x0) {
    iVar11 = 0x2001;
    goto LAB_14024192;
  }
  iVar11 = (int)*(short *)((int)param_2 + 0xf2);
  if (iVar11 < 0x2b) {
    if (iVar11 < 2) {
switchD_14024130_caseD_3:
      iVar11 = 0x2002;
      goto LAB_14024192;
    }
    switch(iVar11) {
    case 2:
      goto switchD_14024130_caseD_2;
    default:
      goto switchD_14024130_caseD_3;
    case 5:
    case 0x11:
    case 0x17:
    case 0x1d:
    case 0x2a:
      goto switchD_14024130_caseD_5;
    case 0x14:
      goto switchD_14024130_caseD_14;
    case 0x27:
      uVar16 = 2;
      goto LAB_140241ba;
    }
  }
  if ((iVar11 != 0x8f) && (iVar11 != 0x92)) goto switchD_14024130_caseD_3;
  goto switchD_14024130_caseD_5;
LAB_140245f0:
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 7;
  FUN_140249a4(param_1);
  iVar11 = 2;
  piVar8 = extraout_r1_00;
  goto LAB_14024192;
switchD_14024130_caseD_2:
  param_1[0xb2] = 1;
switchD_14024130_caseD_14:
  if (param_2[5] != 0) {
    iVar11 = 0x2003;
    goto LAB_14024192;
  }
switchD_14024130_caseD_5:
  uVar16 = 1;
LAB_140241ba:
  puVar14 = param_1 + 0x76;
  iVar11 = FUN_14024af4(puVar14);
  if ((iVar11 == 0) || ((char)param_2[0x42] < '\x01')) {
LAB_140241ce:
    FUN_14024788(puVar14);
    piVar8 = extraout_r1;
  }
  else {
    FUN_14024924(auStack_100);
    uVar21 = FUN_14024a94(puVar14,auStack_100);
    piVar8 = (int *)((ulonglong)uVar21 >> 0x20);
    if (1 < (uint)uVar21) goto LAB_140241ce;
  }
  uVar15 = (uint)(char)param_2[0x42];
  switch(uVar15) {
  case 0:
    piVar19 = param_2 + 8;
    uVar21 = FUN_14024af4(piVar19);
    piVar8 = (int *)((ulonglong)uVar21 >> 0x20);
    if ((int)uVar21 == 0) {
      iVar11 = 0x2007;
      *(undefined1 *)(param_1 + 0x74) = 0;
      goto LAB_14024192;
    }
    uVar15 = (uint)*(byte *)((int)param_2 + 0xee);
    if (uVar15 != 0) {
      func_0x13f4a83c(puVar14,piVar19,0xd1);
      uVar21 = FUN_14024a74(piVar19,param_1 + 0x4a,0x10,param_1 + 0x74);
      piVar8 = (int *)((ulonglong)uVar21 >> 0x20);
      if ((int)uVar21 < 0x3d) {
        piVar8 = (int *)0xff;
        puVar10 = (undefined1 *)((int)uVar21 + 0x128 + (int)param_1);
        do {
          puVar12 = puVar10 + 1;
          *puVar10 = 0xff;
          puVar10 = puVar12;
        } while ((undefined1 *)((int)param_1 + 0x165) != puVar12);
      }
      goto switchD_140241dc_caseD_1;
    }
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
switchD_140241dc_caseD_1:
    if (uVar15 - 1 < 8) {
      if ('\x0e' < (char)param_2[0x42]) {
        iVar11 = 0x2007;
        goto LAB_14024192;
      }
      goto LAB_1402426c;
    }
    break;
  case 7:
  case 0xc:
  case 0xe:
    uVar15 = 8;
    goto LAB_1402426c;
  case 0xb:
    uVar15 = 7;
LAB_1402426c:
    param_1[0xc] = 0;
    func_0x13f4aa28(param_1 + 0xd,0,0xf4);
    iVar11 = DAT_140243c0;
    uVar13 = (uint)(char)param_2[0x42];
    if ((0 < (int)uVar13) || (*(short *)((int)param_2 + 0xf2) == 0x2a)) {
      iVar9 = 0;
      puVar14 = param_1 + 0x4a;
      while( true ) {
        puVar10 = (undefined1 *)((uVar13 - 1) * 7 + iVar11 + iVar9);
        iVar9 = iVar9 + 1;
        *(undefined1 *)puVar14 = *puVar10;
        if (iVar9 == 7) break;
        uVar13 = (uint)(char)param_2[0x42];
        puVar14 = (uint *)((int)puVar14 + 1);
      }
      puVar14 = (uint *)((int)param_1 + 0x12e);
      do {
        puVar14 = (uint *)((int)puVar14 + 1);
        *(undefined1 *)puVar14 = 0xff;
      } while (param_1 + 0x59 != puVar14);
      iVar11 = 0;
      puVar10 = (undefined1 *)((int)param_1 + 0x1a1);
      do {
        puVar10 = puVar10 + 1;
        *puVar10 = (char)iVar11;
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)uVar15);
      if (uVar15 != 8) {
        puVar10 = (undefined1 *)(uVar15 + 0x1a1 + (int)param_1);
        do {
          puVar10 = puVar10 + 1;
          *puVar10 = 0xff;
        } while ((undefined1 *)((int)param_1 + 0x1a9) != puVar10);
      }
      *(char *)(param_1 + 0x74) = (char)param_2[0x42];
      uVar13 = (uint)(char)param_2[0x42];
    }
    param_1[0xb4] = uVar13;
    if ((short)param_1[0xb3] == *(short *)((int)param_2 + 0xf2)) {
      if (*(char *)((int)param_1 + 0x4ad) != '\x01') {
        if ((param_3 & 2) != 0) goto LAB_14024314;
        goto LAB_140244ce;
      }
      bVar5 = false;
LAB_140244ec:
      param_1[0xb5] = 0;
      *(short *)(param_1 + 0xb8) = (short)param_2[0x40];
      uVar7 = param_2[0x41];
      if (param_1[0xb9] != uVar7) {
        bVar5 = true;
      }
      uVar13 = 0;
      if ((param_3 & 2) == 0) goto LAB_14024340;
LAB_1402433c:
      uVar13 = param_3 & 2;
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
            goto LAB_1402433c;
          }
LAB_14024606:
          uVar13 = uVar7;
        }
        else {
LAB_14024314:
          *(undefined2 *)(param_1 + 299) = 0x101;
          param_1[0xb5] = 0;
          uVar7 = param_1[0xb9];
          *(short *)(param_1 + 0xb8) = (short)param_2[0x40];
          uVar13 = param_2[0x41];
          if (param_2[0x41] == uVar7) goto LAB_14024606;
        }
        uVar7 = uVar13;
        bVar5 = true;
        goto LAB_1402433c;
      }
      if (*(char *)((int)param_1 + 0x4ad) == '\x01') {
        bVar5 = true;
        goto LAB_140244ec;
      }
LAB_140244ce:
      uVar13 = 0;
      param_1[0xb5] = 0;
      bVar5 = true;
      *(short *)(param_1 + 0xb8) = (short)param_2[0x40];
    }
LAB_14024340:
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
        goto LAB_14024192;
      }
    }
    piVar8 = (int *)param_1[10];
    if ((piVar8 == (int *)param_2[0x3d]) &&
       (piVar8 = (int *)param_2[0x3e], (int *)param_1[0xb6] == piVar8)) {
      if (param_1[1] != uVar15) goto LAB_140243ee;
      if ((param_3 & 1) != 0) {
        if (!bVar5) {
          iVar11 = 0;
          goto LAB_14024192;
        }
        goto LAB_140245e6;
      }
    }
    else {
      if (uVar13 != 0) {
        uVar21 = FUN_14024964(param_1 + 6,param_2[0x3e],*(undefined1 *)((int)param_2 + 0x10f));
        piVar8 = (int *)((ulonglong)uVar21 >> 0x20);
        iVar11 = (int)uVar21;
        if (iVar11 != 0) goto LAB_14024192;
        param_1[0xb1] = param_1[10] / (uint)(byte)param_1[299];
        param_1[0xb6] = (uint)param_2[0x3e] / (uint)(byte)param_1[299];
      }
LAB_140243ee:
      if ((param_3 & 1) != 0) {
LAB_140245e6:
        iVar11 = 0;
        *param_4 = '\x01';
        goto LAB_14024192;
      }
    }
    if (*param_4 != '\0') {
      iVar11 = 0;
      puVar14 = param_1 + 199;
      do {
        uVar13 = FUN_14024a34(iVar11);
        puVar14 = puVar14 + 1;
        *puVar14 = uVar13;
        if (uVar13 == 0) goto LAB_140245f0;
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)uVar15);
      iVar11 = 0;
      pbVar18 = (byte *)((int)param_1 + 0x127);
      do {
        pbVar1 = pbVar18 + 1;
        bVar4 = *pbVar1;
        iVar9 = (int)(char)bVar4;
        if ((bVar4 < 0x13) && ((1 << (uint)bVar4 & DAT_14024730) != 0)) {
          switch(iVar9) {
          case 0:
          case 3:
          case 0x10:
          case 0x12:
            iVar20 = 1;
            break;
          case 1:
            iVar20 = 2;
            break;
          default:
            iVar20 = 0;
            break;
          case 0x11:
            if (pbVar18[0x331] == 1) {
              iVar20 = 1;
            }
            else {
              iVar20 = 2;
            }
          }
          uVar13 = param_1[iVar11 + 200];
          uVar6 = FUN_14024984(1,4);
          *(undefined4 *)(uVar13 + 200) = uVar6;
          uVar13 = param_1[iVar11 + 200];
          if (*(int *)(uVar13 + 200) == 0) goto LAB_140245f0;
          if (iVar11 == 0) {
            uVar6 = FUN_14024ab4(0x13b4,8);
            *(undefined4 *)(uVar13 + 0xc4) = uVar6;
            puVar17 = *(undefined4 **)(param_1[200] + 200);
            uVar6 = FUN_140249b4(0);
            *puVar17 = uVar6;
          }
          else {
            uVar6 = FUN_14024ab4(0x13b4,8);
            *(undefined4 *)(uVar13 + 0xc4) = uVar6;
            **(undefined4 **)(param_1[iVar11 + 200] + 200) = **(undefined4 **)(param_1[200] + 200);
          }
          uVar13 = param_1[iVar11 + 200];
          if ((*(int *)(uVar13 + 0xc4) == 0) || (**(int **)(uVar13 + 200) == 0)) goto LAB_140245f0;
          *(int *)(uVar13 + 0xc0) = *(int *)(uVar13 + 0xc4);
          piVar8 = (int *)param_1[iVar11 + 200];
          piVar8[0x25] = param_1[0xd8] + iVar11 * 0x1000;
          if (iVar20 == 2) {
            if (6 < iVar11) goto switchD_140241dc_caseD_8;
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
          iVar9 = (int)(char)*pbVar1;
          iVar11 = iVar11 + iVar20;
        }
      } while ((iVar9 != 7) && (pbVar18 = pbVar1, pbVar1 != (byte *)((int)param_1 + 0x137)));
      uVar13 = 0;
      puVar14 = param_1 + 0xcf;
      do {
        puVar17 = (undefined4 *)FUN_14024a64(uVar13);
        puVar2 = puVar14 + 1;
        *puVar2 = (uint)puVar17;
        if (puVar17 == (undefined4 *)0x0) goto LAB_140245f0;
        uVar6 = FUN_14024b04(uVar13);
        *puVar17 = uVar6;
        piVar8 = (int *)*puVar2;
        if (*piVar8 == 0) goto LAB_140245f0;
        if ((param_1[0xc] & 0x300) == 0) {
          FUN_140249c4(puVar14[-7],piVar8 + 0xd,*(int *)(puVar14[-7] + 0xc4) + 0x1170);
          piVar8 = extraout_r1_01;
        }
        uVar13 = uVar13 + 1;
        puVar14 = puVar2;
      } while ((int)uVar13 < (int)uVar15);
      if (*param_1 != uVar15) {
        *param_1 = uVar13;
      }
      param_1[1] = uVar15;
      iVar11 = 0;
      param_1[0x126] = 0;
      puVar14 = param_1 + 199;
      if (*param_4 != '\0') {
        do {
          if (((short)param_1[0xb3] == 0x17) || ((short)param_1[0xb3] == 0x27)) {
            *(uint *)(puVar14[1] + 0xb8) = param_1[0xb6];
          }
          else {
            uVar15 = param_1[0xb6];
            if ((int)uVar15 < 0) {
              uVar15 = uVar15 + 7;
            }
            *(int *)(puVar14[1] + 0xb8) = (int)uVar15 >> 3;
          }
          *(undefined1 *)(puVar14[1] + 0xbd) = uVar16;
          iVar11 = iVar11 + 1;
          FUN_14021108((undefined4 *)puVar14[9] + 1,*(undefined4 *)puVar14[9],0x300);
          piVar8 = extraout_r1_02;
          puVar14 = puVar14 + 1;
        } while (iVar11 < (int)param_1[1]);
      }
    }
    iVar11 = 0;
    param_1[0xbb] = param_1[0xc];
    goto LAB_14024192;
  }
switchD_140241dc_caseD_8:
  iVar11 = 0x2007;
LAB_14024192:
  if ((*DAT_140243bc ^ local_2c) != 0) {
    iVar11 = FUN_14024a44(iVar11,piVar8,*DAT_140243bc ^ local_2c,0);
    func_0x13f4aa28(iVar11,0,0xd1);
    *(undefined1 *)(iVar11 + 2) = 0xf;
    return;
  }
  return;
}


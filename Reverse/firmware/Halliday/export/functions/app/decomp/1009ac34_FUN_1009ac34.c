/* FUN_1009ac34 @ 0x1009ac34 */

int * FUN_1009ac34(int *param_1,int *param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  byte bVar9;
  int *piVar10;
  code *pcVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  code *pcVar17;
  int iVar18;
  undefined4 uVar19;
  code *local_58;
  int *local_54;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  iVar2 = DAT_1009ac88;
  if ((((*(byte *)(DAT_1009ac88 + 1) & 4) != 0) && (iVar18 = FUN_1012c73e(), iVar18 == 1)) ||
     (((int)((uint)*(byte *)(iVar2 + 1) << 0x1e) < 0 &&
      (iVar2 = FUN_1009b694(param_1,param_2,param_3,param_4), iVar2 == 1)))) {
    return (int *)0x1;
  }
  piVar1 = (int *)FUN_1008bbb4();
  if ((*(byte *)(*piVar1 + 0x1c) & 0x40) != 0) {
    return (int *)0x0;
  }
  piVar6 = (int *)(*(byte *)(param_2 + 4) & 0xf);
  if ((*(byte *)(param_2 + 4) & 0xf) != 0) {
    return (int *)(*(byte *)(*piVar1 + 0x1c) & 0x40);
  }
  if (*param_2 != 0x1000000) {
    piVar1 = (int *)param_4[2];
    iVar2 = FUN_1008cb9c(param_1[2]);
    if (iVar2 != 0) {
      return piVar6;
    }
    uVar15 = *param_4;
    bVar9 = *(byte *)((int)param_2 + 0xf);
    if (((byte)uVar15 & 0x1f) == 0xe) {
      if (0xfc < bVar9) {
        bVar9 = 0xff;
      }
      uVar3 = FUN_1012c664((short)param_2[3]);
      piVar10 = (int *)(uVar3 & 0xffffff | (uint)bVar9 << 0x18);
    }
    else {
      piVar10 = piVar6;
      if (bVar9 < 0xfd) {
        return piVar6;
      }
    }
    uVar3 = *param_4;
    iVar2 = FUN_1008c0b0((byte)uVar15 & 0x1f);
    bVar9 = (byte)*param_4 & 0x1f;
    local_54 = piVar1;
    if (bVar9 == 5) {
      pcVar11 = (code *)0x0;
      local_58 = (code *)0x0;
      pcVar17 = DAT_1009bfa4;
    }
    else if (bVar9 == 0x1c) {
      pcVar11 = (code *)0x0;
      local_58 = (code *)0x0;
      pcVar17 = DAT_1009bfa8;
    }
    else if (bVar9 == 0x16) {
      pcVar11 = (code *)0x0;
      local_58 = (code *)0x0;
      pcVar17 = DAT_1009bfac;
    }
    else if (bVar9 == 0xe) {
      pcVar11 = (code *)0x0;
      local_58 = DAT_1009bfa0;
      pcVar17 = pcVar11;
    }
    else if (bVar9 == 4) {
      pcVar11 = (code *)0x0;
      local_58 = (code *)0x0;
      pcVar17 = DAT_1009bfb0;
    }
    else if (bVar9 == 0x1b) {
      pcVar11 = (code *)0x0;
      local_58 = (code *)0x0;
      pcVar17 = DAT_1009bfb4;
    }
    else if (bVar9 == 0x1d) {
      pcVar11 = (code *)0x0;
      local_58 = (code *)0x0;
      pcVar17 = DAT_1009bfb8;
    }
    else {
      pcVar11 = DAT_1009bf98;
      if (bVar9 == 0x1a) {
        iVar7 = *piVar1;
        if (0xff < iVar7 - 1U) {
          uVar5 = 0x11f;
          uVar8 = DAT_1009bf90;
          uVar19 = DAT_1009bf8c;
LAB_1009bca4:
          FUN_10094174(3,DAT_1009bf94,uVar5,uVar8,uVar19,iVar7);
          return piVar6;
        }
        iVar18 = (iVar7 + 1) * 4;
        local_54 = piVar1 + 1;
      }
      else if (bVar9 == 10) {
        iVar18 = 0x400;
      }
      else {
        if (bVar9 != 9) {
          return piVar6;
        }
        iVar18 = 0x40;
        pcVar11 = DAT_1009bf9c;
      }
      piVar1 = (int *)((int)piVar1 + iVar18);
      local_58 = (code *)0x0;
      pcVar17 = (code *)0x0;
    }
    piVar6 = (int *)param_1[1];
    iVar18 = ((int *)param_1[2])[1] - piVar6[1];
    iVar18 = *param_1 +
             ((piVar6[2] - *piVar6) * iVar18 + iVar18 + (*(int *)param_1[2] - *piVar6)) * 2;
    FUN_100669b8(0,0,(int)(short)param_2[1],(int)(short)param_2[2],(short)*param_2,
                 *(undefined2 *)((int)param_2 + 2),*(undefined2 *)((int)param_2 + 2),8,&local_48);
    FUN_1009af58(param_1,0,param_1[2]);
    uVar15 = (int)(((uVar3 & 0x1fffff) >> 10) * iVar2 + 7) >> 3 & 0xffff;
    piVar6 = (int *)param_1[1];
    if (pcVar17 == (code *)0x0) {
      piVar4 = (int *)param_1[2];
      if (pcVar11 != (code *)0x0) {
        piVar10 = local_54;
        local_58 = pcVar11;
      }
      (*local_58)(iVar18,piVar1,piVar10,((piVar6[2] + 1) - *piVar6) * 2 & 0xffff,uVar15,
                  (*param_4 & 0x1fffff) >> 10,*(ushort *)((int)param_4 + 2) >> 5,
                  (int)(short)((short)*piVar4 - (short)*param_3),
                  (int)(short)((short)piVar4[1] - (short)param_3[1]),
                  (piVar4[2] + 1) - *piVar4 & 0xffff,(piVar4[3] + 1) - piVar4[1] & 0xffff,&local_48)
      ;
    }
    else {
      piVar10 = (int *)param_1[2];
      (*pcVar17)(iVar18,piVar1,((piVar6[2] + 1) - *piVar6) * 2 & 0xffff,uVar15,
                 (*param_4 & 0x1fffff) >> 10,*(ushort *)((int)param_4 + 2) >> 5,
                 (int)(short)((short)*piVar10 - (short)*param_3),
                 (int)(short)((short)piVar10[1] - (short)param_3[1]),
                 (piVar10[2] + 1) - *piVar10 & 0xffff,(piVar10[3] + 1) - piVar10[1] & 0xffff,
                 &local_48);
    }
    piVar1 = (int *)param_1[2];
    goto LAB_1009bdb8;
  }
  iVar2 = FUN_1012a896(&local_48,param_3);
  if (iVar2 == 0) {
    return (int *)0x1;
  }
  iVar2 = FUN_1008cb9c(&local_48);
  if (iVar2 != 0) {
    return piVar6;
  }
  bVar9 = *(byte *)((int)param_2 + 0xf);
  bVar12 = (byte)*param_4 & 0x1f;
  if ((bVar12 + 0x15 & 0x1f) < 4) {
    if (0xfc < bVar9) {
      bVar9 = 0xff;
    }
    uVar15 = FUN_1012c664((short)param_2[3]);
    piVar1 = (int *)(uVar15 & 0xffffff | (uint)bVar9 << 0x18);
  }
  else {
    piVar1 = piVar6;
    if (bVar9 < 0xfd) {
      return piVar6;
    }
  }
  iVar2 = FUN_1008c0b0(bVar12);
  uVar15 = iVar2 * (local_48 - *param_3);
  uVar16 = (int)(iVar2 * ((*param_4 & 0x1fffff) >> 10) + 7) >> 3;
  piVar10 = (int *)param_1[1];
  iVar18 = uVar16 * (local_44 - param_3[1]) + (uVar15 >> 3) + param_4[2];
  uVar14 = ((piVar10[2] + 1) - *piVar10) * 2;
  uVar3 = (local_40 + 1) - local_48;
  iVar2 = *param_1 + uVar14 * (local_44 - piVar10[1]) + (local_48 - *piVar10) * 2;
  uVar13 = (local_3c + 1) - local_44;
  FUN_1009af58(param_1,0,&local_48);
  bVar9 = (byte)*param_4 & 0x1f;
  if (bVar9 == 4) {
    for (iVar7 = (int)(short)uVar13; 0 < iVar7; iVar7 = iVar7 + -1) {
      FUN_1011ea40(iVar2,iVar18,(int)(short)((short)uVar3 * 2));
      iVar18 = iVar18 + uVar16;
      iVar2 = iVar2 + uVar14;
    }
  }
  else if (bVar9 == 5) {
    FUN_1011e21e(iVar2,iVar18,uVar14 & 0xffff,uVar16 & 0xffff,uVar3 & 0xffff,uVar13 & 0xffff);
  }
  else if (bVar9 == 0x1c) {
    FUN_1011e2a6(iVar2,iVar18,uVar14 & 0xffff,uVar16 & 0xffff,uVar3 & 0xffff,uVar13 & 0xffff);
  }
  else if (bVar9 == 0x16) {
    FUN_1011e238(iVar2,iVar18,uVar14 & 0xffff,uVar16 & 0xffff,uVar3 & 0xffff,uVar13 & 0xffff);
  }
  else if (bVar9 == 0x17) {
    FUN_1011e252(iVar2,iVar18,uVar14 & 0xffff,uVar16 & 0xffff,uVar3 & 0xffff,uVar13 & 0xffff);
  }
  else if (bVar9 == 0xe) {
    FUN_1006626c(iVar2,iVar18,piVar1,uVar14 & 0xffff,uVar16 & 0xffff,uVar3 & 0xffff,uVar13 & 0xffff)
    ;
  }
  else {
    uVar15 = uVar15 & 7;
    if (bVar9 == 0xd) {
      FUN_10066350(iVar2,iVar18,piVar1,uVar14 & 0xffff,uVar16 & 0xffff,uVar15,uVar3 & 0xffff,
                   uVar13 & 0xffff);
    }
    else if (bVar9 == 0xc) {
      FUN_10066460(iVar2,iVar18,piVar1,uVar14 & 0xffff,uVar16 & 0xffff,uVar15,uVar3 & 0xffff,
                   uVar13 & 0xffff);
    }
    else if (bVar9 == 0xb) {
      FUN_10066578(iVar2,iVar18,piVar1,uVar14 & 0xffff,uVar16 & 0xffff,uVar15,uVar3 & 0xffff,
                   uVar13 & 0xffff);
    }
    else {
      if (bVar9 == 0x1a) {
        iVar7 = *(int *)param_4[2];
        if (0xff < iVar7 - 1U) {
          uVar5 = 0xb5;
          uVar8 = DAT_1009c118;
          uVar19 = DAT_1009c114;
          goto LAB_1009bca4;
        }
        piVar1 = (int *)param_4[2] + 1;
        iVar7 = (iVar7 + 1) * 4;
      }
      else {
        if (bVar9 != 10) {
          if (bVar9 != 9) {
            return piVar6;
          }
          FUN_1011e1f6(iVar2,iVar18 + 0x40,param_4[2],uVar14 & 0xffff,uVar16 & 0xffff,uVar15,
                       uVar3 & 0xffff,uVar13 & 0xffff);
          goto LAB_1009bf52;
        }
        piVar1 = (int *)param_4[2];
        iVar7 = 0x400;
      }
      FUN_10066658(iVar2,iVar18 + iVar7,piVar1,uVar14 & 0xffff,uVar16 & 0xffff,uVar3 & 0xffff,
                   uVar13 & 0xffff);
    }
  }
LAB_1009bf52:
  piVar1 = &local_48;
LAB_1009bdb8:
  FUN_1009b254(param_1,piVar1);
  return (int *)0x1;
}


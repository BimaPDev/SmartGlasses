/* FUN_10090ff0 @ 0x10090ff0 */

int FUN_10090ff0(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined4 extraout_r2;
  undefined4 uVar6;
  int iVar7;
  undefined4 extraout_r3;
  code *pcVar8;
  undefined8 uVar9;
  code *local_38;
  int local_2c [2];
  
  iVar3 = FUN_1012691c(param_1,0,1);
  iVar4 = FUN_1012691c(param_1,0,4);
  if ((int)((uint)*(byte *)(param_2 + 3) << 0x1e) < 0) {
    if ((*(byte *)(param_2 + 3) & 1) == 0) {
      if (iVar4 == DAT_1009125c) goto LAB_10091028;
      goto LAB_10091044;
    }
    if (iVar3 == DAT_1009125c) {
LAB_10091028:
      *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) & 0xfd;
      goto LAB_10091030;
    }
  }
  else {
LAB_10091030:
    if (-1 < (int)((uint)*(byte *)(param_2 + 3) << 0x1f)) {
LAB_10091044:
      local_38 = DAT_10091264;
      pcVar8 = DAT_10091260;
      goto LAB_1009104c;
    }
  }
  local_38 = DAT_10091260;
  pcVar8 = DAT_10091264;
LAB_1009104c:
  param_6[1] = 0;
  param_6[2] = 0;
  param_6[3] = 0;
  param_6[4] = 0;
  param_6[5] = 0;
  *param_6 = 0;
  local_2c[0] = param_3;
  do {
    iVar3 = FUN_10126fb4(param_1,local_2c[0]);
    if ((iVar3 == 0) ||
       ((param_3 != local_2c[0] && (iVar4 = FUN_10124cb8(iVar3,0x800000), iVar4 != 0)))) break;
    iVar4 = FUN_10124cc6(iVar3,DAT_10091268);
    if (iVar4 == 0) {
      bVar2 = FUN_1012691c(iVar3,0,*DAT_1009126c);
      if (bVar2 == 0) {
        iVar4 = (*local_38)(iVar3);
        if (((*(byte *)(param_2 + 3) & 2) != 0) && (param_4 < iVar4 + param_6[2])) break;
        param_6[2] = iVar4 + param_6[2] + param_5;
      }
      else {
        iVar4 = param_6[5];
        param_6[2] = param_6[2] + param_5;
        param_6[5] = iVar4 + 1;
        if ((int)((uint)*(byte *)(param_6 + 6) << 0x1f) < 0) {
          iVar4 = FUN_100942d8((iVar4 + 1) * 0x18);
          if (iVar4 == 0) {
            uVar9 = FUN_10094174(3,DAT_1009127c,0x15f,DAT_10091280,DAT_10091278,DAT_10091274,
                                 DAT_10091270);
            FUN_10119dc2(DAT_10091288,DAT_10091284,DAT_1009127c,0x15f,uVar9);
            FUN_10119dc2(DAT_1009128c);
            FUN_1011a1f0(DAT_1009127c,0x15f,extraout_r2,extraout_r3);
            return local_2c[0];
          }
          if (param_6[4] != 0) {
            FUN_1011ea40(iVar4,param_6[4],param_6[5] * 0x18 + -0x18);
            FUN_10094444(param_6[4]);
          }
          bVar1 = *(byte *)(param_2 + 3);
          *(int *)(param_6[5] * 0x18 + iVar4 + -0x18) = iVar3;
          bVar5 = bVar1 & 1;
          if ((bVar1 & 1) == 0) {
            uVar6 = 5;
          }
          else {
            uVar6 = 2;
            bVar5 = 0;
          }
          uVar6 = FUN_1012691c(iVar3,bVar5,uVar6);
          bVar1 = *(byte *)(param_2 + 3);
          *(undefined4 *)(param_6[5] * 0x18 + iVar4 + -0x14) = uVar6;
          bVar5 = bVar1 & 1;
          if ((bVar1 & 1) == 0) {
            uVar6 = 6;
          }
          else {
            uVar6 = 3;
            bVar5 = 0;
          }
          uVar6 = FUN_1012691c(iVar3,bVar5,uVar6);
          iVar7 = param_6[5] * 0x18 + iVar4;
          *(undefined4 *)(iVar7 + -0x10) = uVar6;
          *(uint *)(iVar7 + -8) = (uint)bVar2;
          *(byte *)(iVar7 + -4) = *(byte *)(iVar7 + -4) & 0xfe;
          param_6[4] = iVar4;
        }
      }
      iVar4 = (*pcVar8)(iVar3);
      iVar7 = *param_6;
      if (iVar7 < iVar4) {
        iVar7 = (*pcVar8)(iVar3);
      }
      *param_6 = iVar7;
      param_6[3] = param_6[3] + 1;
    }
    if ((*(byte *)(param_2 + 3) & 4) == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = -1;
    }
    local_2c[0] = iVar4 + local_2c[0];
  } while (-1 < local_2c[0]);
  if (0 < param_6[2]) {
    param_6[2] = param_6[2] - param_5;
  }
  if (param_6[5] == 0) {
    param_4 = param_6[2];
  }
  param_6[1] = param_4;
  if ((iVar3 != 0) && (param_3 == local_2c[0])) {
    iVar3 = *(int *)(**(int **)(param_1 + 8) + param_3 * 4);
    FUN_1012a43c((undefined4 *)(param_1 + 8),(*(byte *)(param_2 + 3) & 7) >> 2,local_2c);
    if (iVar3 != 0) {
      iVar4 = (*pcVar8)(iVar3);
      *param_6 = iVar4;
      iVar3 = (*local_38)(iVar3);
      param_6[1] = iVar3;
      param_6[3] = 1;
    }
  }
  return local_2c[0];
}


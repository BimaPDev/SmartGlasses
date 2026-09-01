/* FUN_10096f64 @ 0x10096f64 */

void FUN_10096f64(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  int iVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  int local_60;
  char local_45;
  char *local_44;
  int local_40 [2];
  int local_38;
  
  if (param_3 == (int *)0x0) {
    uVar14 = FUN_10094174(3,DAT_100971c0,0x121,DAT_100971c4,DAT_100971bc,DAT_100971b8,DAT_100971b4);
    FUN_10119dc2(DAT_100971cc,DAT_100971c8,DAT_100971c0,0x121,uVar14);
    FUN_10119dc2(DAT_100971d0);
    FUN_1011a1f0(DAT_100971c0,0x121,extraout_r2,extraout_r3);
  }
  pcVar10 = *(char **)(param_1 + 0x2c);
  iVar1 = FUN_10126d52(param_1,0,pcVar10);
  if (*pcVar10 == '\0') {
    param_3[1] = 0;
    if (iVar1 == 2) {
      iVar1 = FUN_1012579a(param_1);
      iVar1 = iVar1 / 2;
    }
    else {
      if (iVar1 != 3) {
        if (iVar1 != 1) {
          return;
        }
        *param_3 = 0;
        return;
      }
      iVar1 = FUN_1012579a(param_1);
    }
    *param_3 = iVar1;
  }
  else {
    FUN_101257f6(param_1,local_40);
    iVar8 = (local_38 + 1) - local_40[0];
    iVar2 = FUN_1012bea2(param_1);
    iVar3 = FUN_1012be8a(param_1);
    iVar4 = FUN_1012be96(param_1);
    iVar9 = *(int *)(iVar2 + 8);
    uVar13 = (*(byte *)(param_1 + 0x54) & 0x1f) >> 4;
    if ((int)((uint)*(byte *)(param_1 + 0x54) << 0x1a) < 0) {
      uVar13 = uVar13 | 2;
    }
    iVar5 = FUN_1012beae(param_1);
    if ((iVar5 == DAT_100971d4) && (-1 < (int)((uint)*(byte *)(param_1 + 0x2b) << 0x1c))) {
      uVar13 = uVar13 | 4;
    }
    uVar6 = (*(code *)*DAT_100971d8)(pcVar10,param_2);
    local_60 = 0;
    uVar11 = 0;
    while (uVar12 = uVar11, pcVar10[uVar11] != '\0') {
      iVar5 = FUN_10094d74(pcVar10 + uVar11,iVar2,iVar4,iVar8,0,uVar13);
      uVar12 = uVar11 + iVar5;
      if ((uVar6 < uVar12) || (pcVar10[uVar12] == '\0')) break;
      local_60 = local_60 + iVar3 + iVar9;
      uVar11 = uVar12;
    }
    if ((uVar6 != 0) &&
       (((pcVar10[uVar6 - 1] == '\n' || (pcVar10[uVar6 - 1] == '\r')) && (pcVar10[uVar6] == '\0'))))
    {
      local_60 = local_60 + iVar3 + iVar9;
      uVar11 = uVar6;
    }
    iVar3 = FUN_1012be7c(param_1);
    if (iVar3 == 2) {
      iVar3 = FUN_100938a8(pcVar10);
    }
    iVar8 = 0;
    local_44 = (char *)0x0;
    pcVar10 = pcVar10 + uVar11;
    if (uVar12 == uVar6) {
      if (iVar3 != 1) {
        iVar8 = uVar12 - uVar11;
      }
    }
    else {
      uVar7 = (*(code *)*DAT_100971dc)(pcVar10,uVar6 - uVar11);
      iVar3 = FUN_1012ae5e(pcVar10,&local_44,uVar12 - uVar11 & 0xffff,iVar3,uVar7,&local_45);
      pcVar10 = local_44;
      if (local_45 != '\0') {
        iVar3 = iVar3 + 1;
      }
      iVar8 = (*(code *)*DAT_100971d8)(local_44,iVar3);
    }
    iVar3 = FUN_1012b53a(pcVar10,iVar8,iVar2,iVar4,uVar13);
    if (uVar11 != param_2) {
      iVar3 = iVar3 + iVar4;
    }
    if (iVar1 == 2) {
      iVar1 = FUN_1012b53a(pcVar10,uVar12 - uVar11,iVar2,iVar4,uVar13);
      iVar3 = (iVar3 + ((local_38 + 1) - local_40[0]) / 2) - iVar1 / 2;
    }
    else if (iVar1 == 3) {
      iVar1 = FUN_1012b53a(pcVar10,uVar12 - uVar11,iVar2,iVar4,uVar13);
      iVar3 = (iVar3 + ((local_38 + 1) - local_40[0])) - iVar1;
    }
    *param_3 = iVar3;
    param_3[1] = local_60;
    if (local_44 != (char *)0x0) {
      FUN_10094444();
    }
  }
  return;
}


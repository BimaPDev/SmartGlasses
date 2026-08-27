/* FUN_2c637370 @ 0x2c637370 */

void FUN_2c637370(int param_1,uint param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  uint local_54;
  short local_34 [2];
  short local_30;
  int local_2c;
  
  pcVar10 = *(char **)(param_1 + 0x24);
  local_2c = *DAT_2c637590;
  iVar5 = FUN_2c604148(param_1,0,pcVar10,0);
  if (*pcVar10 == '\0') {
    param_3[1] = 0;
    if (iVar5 == 2) {
      iVar5 = FUN_2c607404(param_1);
      if (iVar5 < 0) {
        iVar5 = iVar5 + 1;
      }
      *param_3 = (short)(iVar5 >> 1);
    }
    else if (iVar5 == 3) {
      sVar4 = FUN_2c607404(param_1);
      *param_3 = sVar4;
    }
    else if (iVar5 == 1) {
      *param_3 = 0;
    }
  }
  else {
    FUN_2c60747c(param_1,local_34);
    iVar13 = (int)(short)((local_30 + 1) - local_34[0]);
    iVar6 = FUN_2c6033b4(param_1,0,0x57);
    sVar1 = FUN_2c6033b4(param_1,0,0x59);
    sVar2 = FUN_2c6033b4(param_1,0,0x58);
    sVar4 = *(short *)(iVar6 + 8);
    iVar12 = (int)sVar2;
    local_54 = (*(byte *)(param_1 + 0x52) & 0x1f) >> 4;
    if ((int)((uint)*(byte *)(param_1 + 0x52) << 0x1a) < 0) {
      local_54 = local_54 | 2;
    }
    sVar3 = FUN_2c6033b4(param_1,0,1);
    if ((sVar3 == 0x27d1) && (-1 < (int)((uint)*(byte *)(param_1 + 0x23) << 0x1d))) {
      local_54 = local_54 | 4;
    }
    uVar7 = (*(code *)*DAT_2c637594)(pcVar10,param_2);
    if (*pcVar10 == '\0') {
      uVar9 = 0;
      sVar3 = 0;
      uVar11 = 0;
    }
    else {
      sVar3 = 0;
      pcVar14 = pcVar10;
      uVar11 = 0;
      while( true ) {
        iVar8 = FUN_2c62b834(pcVar14,iVar6,iVar12,iVar13,0,local_54,iVar13);
        uVar9 = iVar8 + uVar11;
        if ((uVar7 < uVar9) || (pcVar14 = pcVar10 + uVar9, pcVar10[uVar9] == '\0')) break;
        sVar3 = sVar3 + sVar4 + sVar1;
        uVar11 = uVar9;
      }
    }
    if (uVar7 == 0) {
      pcVar14 = pcVar10 + uVar11;
      iVar13 = -uVar11;
      uVar7 = uVar11;
    }
    else {
      pcVar14 = pcVar10 + uVar7;
      if (((pcVar14[-1] == '\n') || (pcVar14[-1] == '\r')) && (pcVar10[uVar7] == '\0')) {
        sVar3 = sVar3 + sVar4 + sVar1;
        iVar13 = 0;
      }
      else {
        pcVar14 = pcVar10 + uVar11;
        iVar13 = uVar7 - uVar11;
        uVar7 = uVar11;
      }
    }
    sVar4 = FUN_2c62b85c(pcVar14,iVar13,iVar6,iVar12,local_54);
    if (uVar7 != param_2) {
      sVar4 = sVar4 + sVar2;
    }
    if (iVar5 == 2) {
      iVar5 = FUN_2c62b85c(pcVar14,uVar9 - uVar7,iVar6,iVar12,local_54);
      iVar6 = (int)(short)((local_30 + 1) - local_34[0]);
      if (iVar6 < 0) {
        iVar6 = iVar6 + 1;
      }
      if (iVar5 < 0) {
        iVar5 = iVar5 + 1;
      }
      sVar4 = sVar4 + ((short)(iVar6 >> 1) - (short)((uint)(iVar5 << 0xf) >> 0x10));
    }
    else if (iVar5 == 3) {
      sVar1 = FUN_2c62b85c(pcVar14,uVar9 - uVar7,iVar6,iVar12,local_54);
      sVar4 = sVar4 + (((local_30 + 1) - local_34[0]) - sVar1);
    }
    *param_3 = sVar4;
    param_3[1] = sVar3;
  }
  if (*DAT_2c637590 != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}


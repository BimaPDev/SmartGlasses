/* FUN_2c608808 @ 0x2c608808 */

void FUN_2c608808(int param_1,int param_2,int param_3,short param_4,short param_5)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  char *pcVar5;
  char cVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_30;
  int local_2c;
  
  pcVar5 = DAT_2c608b08;
  local_2c = *DAT_2c608b04;
  if (*DAT_2c608b08 == '\0') {
    *DAT_2c608b08 = '\x01';
    iVar14 = FUN_2c604178();
    bVar1 = *(byte *)(iVar14 + 0x22);
    while ((int)((uint)bVar1 << 0x1e) < 0) {
      *(byte *)(iVar14 + 0x22) = *(byte *)(iVar14 + 0x22) & 0xfd;
      FUN_2c608744(iVar14);
      bVar1 = *(byte *)(iVar14 + 0x22);
    }
    *pcVar5 = '\0';
  }
  if (param_2 == 0) {
    param_2 = FUN_2c6041d4(param_1);
  }
  iVar14 = FUN_2c6041d4(param_1);
  sVar7 = FUN_2c6033b4(iVar14,0,0x32);
  sVar8 = FUN_2c6033b4(iVar14,0,0x12);
  sVar9 = FUN_2c6033b4(iVar14,0,0x10);
  sVar10 = FUN_2c6033b4(param_2,0,0x32);
  sVar11 = FUN_2c6033b4(param_2,0,0x12);
  sVar11 = sVar11 + sVar10;
  sVar12 = FUN_2c6033b4(param_2,0,0x10);
  sVar10 = sVar10 + sVar12;
  if (param_3 == 0) {
    cVar6 = FUN_2c6033b4(param_2,0,0x16);
    if (cVar6 == '\x01') goto switchD_2c6088a0_caseD_3;
    goto switchD_2c6088a0_caseD_1;
  }
  switch(param_3) {
  case 1:
    break;
  case 2:
    iVar15 = FUN_2c607404(param_2);
    iVar16 = (int)(short)((*(short *)(param_1 + 0x18) + 1) - *(short *)(param_1 + 0x14));
    if (iVar16 < 0) {
      iVar16 = iVar16 + 1;
    }
    if (iVar15 < 0) {
      iVar15 = iVar15 + 1;
    }
    sVar11 = (sVar11 - (short)(iVar16 >> 1)) + (short)(iVar15 >> 1);
    break;
  case 3:
switchD_2c6088a0_caseD_3:
    sVar12 = FUN_2c607404(param_2);
    sVar11 = ((sVar11 + -1 + *(short *)(param_1 + 0x14)) - *(short *)(param_1 + 0x18)) + sVar12;
    break;
  case 4:
    goto switchD_2c6088a0_caseD_4;
  case 5:
    iVar15 = FUN_2c607404(param_2);
    iVar16 = (int)(short)((*(short *)(param_1 + 0x18) + 1) - *(short *)(param_1 + 0x14));
    if (iVar16 < 0) {
      iVar16 = iVar16 + 1;
    }
    if (iVar15 < 0) {
      iVar15 = iVar15 + 1;
    }
    sVar11 = (sVar11 - (short)(iVar16 >> 1)) + (short)(iVar15 >> 1);
    goto switchD_2c6088a0_caseD_4;
  case 6:
    sVar12 = FUN_2c607404(param_2);
    sVar11 = sVar12 + ((sVar11 + -1 + *(short *)(param_1 + 0x14)) - *(short *)(param_1 + 0x18));
switchD_2c6088a0_caseD_4:
    sVar12 = FUN_2c607440(param_2);
    sVar10 = sVar12 + ((sVar10 + -1 + *(short *)(param_1 + 0x16)) - *(short *)(param_1 + 0x1a));
    break;
  case 7:
    goto switchD_2c6088a0_caseD_7;
  case 8:
    sVar12 = FUN_2c607404(param_2);
    sVar11 = sVar12 + ((sVar11 + -1 + *(short *)(param_1 + 0x14)) - *(short *)(param_1 + 0x18));
    goto switchD_2c6088a0_caseD_7;
  case 9:
    iVar15 = FUN_2c607404(param_2);
    iVar16 = (int)(short)((*(short *)(param_1 + 0x18) + 1) - *(short *)(param_1 + 0x14));
    if (iVar16 < 0) {
      iVar16 = iVar16 + 1;
    }
    if (iVar15 < 0) {
      iVar15 = iVar15 + 1;
    }
    sVar11 = (sVar11 - (short)(iVar16 >> 1)) + (short)(iVar15 >> 1);
switchD_2c6088a0_caseD_7:
    iVar15 = FUN_2c607440(param_2);
    iVar16 = (int)(short)((*(short *)(param_1 + 0x1a) + 1) - *(short *)(param_1 + 0x16));
    if (iVar16 < 0) {
      iVar16 = iVar16 + 1;
    }
    if (iVar15 < 0) {
      iVar15 = iVar15 + 1;
    }
    sVar10 = (sVar10 - (short)(iVar16 >> 1)) + (short)(iVar15 >> 1);
    break;
  case 10:
    sVar11 = 0;
    sVar10 = (*(short *)(param_1 + 0x16) + -1) - *(short *)(param_1 + 0x1a);
    break;
  case 0xb:
    iVar15 = (int)(short)((*(short *)(param_2 + 0x18) + 1) - *(short *)(param_2 + 0x14));
    if (iVar15 < 0) {
      iVar15 = iVar15 + 1;
    }
    iVar16 = (int)(short)((*(short *)(param_1 + 0x18) + 1) - *(short *)(param_1 + 0x14));
    if (iVar16 < 0) {
      iVar16 = iVar16 + 1;
    }
    sVar11 = (short)(iVar15 >> 1) - (short)(iVar16 >> 1);
    sVar10 = (*(short *)(param_1 + 0x16) + -1) - *(short *)(param_1 + 0x1a);
    break;
  case 0xc:
    sVar11 = ((*(short *)(param_1 + 0x14) - *(short *)(param_1 + 0x18)) + *(short *)(param_2 + 0x18)
             ) - *(short *)(param_2 + 0x14);
    sVar10 = (*(short *)(param_1 + 0x16) + -1) - *(short *)(param_1 + 0x1a);
    break;
  case 0xd:
    sVar11 = 0;
    sVar10 = (*(short *)(param_2 + 0x1a) + 1) - *(short *)(param_2 + 0x16);
    break;
  case 0xe:
    iVar15 = (int)(short)((*(short *)(param_2 + 0x18) + 1) - *(short *)(param_2 + 0x14));
    if (iVar15 < 0) {
      iVar15 = iVar15 + 1;
    }
    iVar16 = (int)(short)((*(short *)(param_1 + 0x18) + 1) - *(short *)(param_1 + 0x14));
    if (iVar16 < 0) {
      iVar16 = iVar16 + 1;
    }
    sVar11 = (short)(iVar15 >> 1) - (short)(iVar16 >> 1);
    sVar10 = (*(short *)(param_2 + 0x1a) + 1) - *(short *)(param_2 + 0x16);
    break;
  case 0xf:
    sVar10 = *(short *)(param_2 + 0x1a) + 1;
    sVar11 = (*(short *)(param_1 + 0x14) - *(short *)(param_1 + 0x18)) + *(short *)(param_2 + 0x18);
    goto LAB_2c608ab8;
  case 0x10:
    sVar10 = 0;
    sVar11 = (*(short *)(param_1 + 0x14) + -1) - *(short *)(param_1 + 0x18);
    break;
  case 0x11:
    sVar10 = (*(short *)(param_2 + 0x1a) + 1) - *(short *)(param_2 + 0x16);
    sVar11 = (*(short *)(param_1 + 0x14) + -1) - *(short *)(param_1 + 0x18);
    goto joined_r0x2c608c50;
  case 0x12:
    sVar11 = *(short *)(param_1 + 0x14) + -1;
    sVar10 = (*(short *)(param_1 + 0x16) - *(short *)(param_1 + 0x1a)) + *(short *)(param_2 + 0x1a);
    sVar12 = *(short *)(param_1 + 0x18);
    goto LAB_2c608aba;
  case 0x13:
    sVar10 = 0;
    sVar11 = (*(short *)(param_2 + 0x18) + 1) - *(short *)(param_2 + 0x14);
    break;
  case 0x14:
    sVar10 = (*(short *)(param_2 + 0x1a) + 1) - *(short *)(param_2 + 0x16);
    sVar11 = (*(short *)(param_2 + 0x18) + 1) - *(short *)(param_2 + 0x14);
joined_r0x2c608c50:
    iVar15 = (int)sVar10;
    if (iVar15 < 0) {
      iVar15 = iVar15 + 1;
    }
    iVar16 = (int)(short)((*(short *)(param_1 + 0x1a) + 1) - *(short *)(param_1 + 0x16));
    if (iVar16 < 0) {
      iVar16 = iVar16 + 1;
    }
    sVar10 = (short)(iVar15 >> 1) - (short)(iVar16 >> 1);
    break;
  case 0x15:
    sVar11 = *(short *)(param_2 + 0x18) + 1;
    sVar10 = (*(short *)(param_1 + 0x16) - *(short *)(param_1 + 0x1a)) + *(short *)(param_2 + 0x1a);
LAB_2c608ab8:
    sVar12 = *(short *)(param_2 + 0x14);
LAB_2c608aba:
    sVar11 = sVar11 - sVar12;
    sVar10 = sVar10 - *(short *)(param_2 + 0x16);
    break;
  default:
    sVar11 = 0;
    sVar10 = sVar11;
  }
switchD_2c6088a0_caseD_1:
  cVar6 = FUN_2c6033b4(iVar14,0,0x16);
  sVar12 = *(short *)(param_2 + 0x14);
  sVar2 = *(short *)(iVar14 + 0x14);
  if (cVar6 == '\x01') {
    sVar13 = FUN_2c605090(iVar14);
  }
  else {
    sVar13 = FUN_2c605068();
  }
  sVar3 = *(short *)(param_2 + 0x16);
  sVar4 = *(short *)(iVar14 + 0x16);
  iVar15 = (int)(short)(sVar11 + ((sVar13 + ((param_4 + sVar12) - sVar2)) - (sVar8 + sVar7)));
  sVar11 = FUN_2c604a44(iVar14);
  FUN_2c606cdc(param_1,1,0);
  iVar14 = FUN_2c603c78(param_1,7,&local_30,0);
  iVar16 = (int)(short)(((sVar11 + ((param_5 + sVar3) - sVar4)) - (sVar9 + sVar7)) + sVar10);
  if (iVar14 == 1) {
    if (local_30 != iVar15) goto LAB_2c608946;
  }
  else if (iVar14 == 0) {
LAB_2c608946:
    FUN_2c606cc4(param_1,iVar15,0);
  }
  iVar14 = FUN_2c603c78(param_1,8,&local_30,0);
  if (iVar14 == 1) {
    if (local_30 == iVar16) goto LAB_2c60896c;
  }
  else if (iVar14 != 0) goto LAB_2c60896c;
  FUN_2c606cd0(param_1,iVar16,0);
LAB_2c60896c:
  if (*DAT_2c608b04 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


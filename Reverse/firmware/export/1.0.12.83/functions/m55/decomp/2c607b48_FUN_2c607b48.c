/* FUN_2c607b48 @ 0x2c607b48 */

void FUN_2c607b48(int param_1)

{
  short sVar1;
  short sVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  short local_28;
  short local_26;
  
  iVar14 = FUN_2c6041d4();
  uVar6 = FUN_2c6033b4(param_1,0,7);
  uVar19 = (uint)(short)uVar6;
  uVar7 = FUN_2c6033b4(param_1,0,8);
  uVar18 = (uint)(short)uVar7;
  if (iVar14 == 0) goto switchD_2c607c28_default;
  local_3c = FUN_2c607404(iVar14);
  local_38 = FUN_2c607440(iVar14);
  if (((uVar6 & 0x6000) == 0x2000) && (uVar19 = uVar19 & 0xffff9fff, (int)uVar19 < 0x7d1)) {
    if (1000 < (int)uVar19) {
      uVar19 = 1000 - uVar19;
    }
    uVar6 = (short)(int)((longlong)DAT_2c607dec * (longlong)(int)(local_3c * uVar19) >> 0x25) -
            (short)((int)(local_3c * uVar19) >> 0x1f);
  }
  if (((uVar7 & 0x6000) == 0x2000) && (uVar18 = uVar18 & 0xffff9fff, (int)uVar18 < 0x7d1)) {
    if (1000 < (int)uVar18) {
      uVar18 = 1000 - uVar18;
    }
    uVar7 = (short)(int)((longlong)DAT_2c607dec * (longlong)(int)(local_38 * uVar18) >> 0x25) -
            (short)((int)(local_38 * uVar18) >> 0x1f);
  }
  uVar8 = FUN_2c6033b4(param_1,0,0x6a);
  uVar9 = FUN_2c6033b4(param_1,0,0x6b);
  sVar4 = *(short *)(param_1 + 0x18) + 1;
  sVar16 = *(short *)(param_1 + 0x14);
  sVar15 = *(short *)(param_1 + 0x1a) + 1;
  sVar5 = *(short *)(param_1 + 0x16);
  local_30 = (int)(short)(sVar4 - sVar16);
  local_2c = (int)(short)(sVar15 - sVar5);
  if (((uVar8 & 0x6000) == 0x2000) && (uVar19 = (int)(short)uVar8 & 0xffff9fff, (int)uVar19 < 0x7d1)
     ) {
    if (1000 < (int)uVar19) {
      uVar19 = 1000 - uVar19;
    }
    uVar8 = (short)(int)((longlong)DAT_2c607dec * (longlong)(int)(local_30 * uVar19) >> 0x25) -
            (short)((int)(local_30 * uVar19) >> 0x1f);
  }
  if (((uVar9 & 0x6000) == 0x2000) && (uVar19 = (int)(short)uVar9 & 0xffff9fff, (int)uVar19 < 0x7d1)
     ) {
    if (1000 < (int)uVar19) {
      uVar19 = 1000 - uVar19;
    }
    uVar9 = (short)(int)((longlong)DAT_2c607dec * (longlong)(int)(local_2c * uVar19) >> 0x25) -
            (short)((int)(local_2c * uVar19) >> 0x1f);
  }
  sVar2 = uVar7 + uVar9;
  local_34 = (uint)(ushort)(uVar8 + uVar6);
  cVar3 = FUN_2c6033b4(param_1,0,9);
  uVar19 = (uint)(short)(uVar8 + uVar6);
  uVar18 = (uint)sVar2;
  if (cVar3 == '\0') {
    cVar3 = FUN_2c6033b4(iVar14,0,0x16);
    if (cVar3 != '\x01') goto switchD_2c607c28_default;
switchD_2c607c28_caseD_3:
    uVar19 = (uint)(short)((short)local_34 + (sVar16 - sVar4) + (short)local_3c);
    goto switchD_2c607c28_default;
  }
  sVar1 = (short)local_34;
  switch(cVar3) {
  case '\x02':
    iVar14 = local_3c;
    if (local_3c < 0) {
      iVar14 = local_3c + 1;
    }
    iVar17 = local_30;
    if (local_30 < 0) {
      iVar17 = local_30 + 1;
    }
    uVar19 = (uint)(short)(sVar1 + ((short)(iVar14 >> 1) - (short)(iVar17 >> 1)));
    break;
  case '\x03':
    goto switchD_2c607c28_caseD_3;
  case '\x04':
    uVar18 = (uint)(short)((sVar5 - sVar15) + (short)local_38 + sVar2);
    break;
  case '\x05':
    iVar14 = local_3c;
    if (local_3c < 0) {
      iVar14 = local_3c + 1;
    }
    iVar17 = local_30;
    if (local_30 < 0) {
      iVar17 = local_30 + 1;
    }
    sVar16 = (short)(iVar14 >> 1) - (short)(iVar17 >> 1);
    goto LAB_2c607d48;
  case '\x06':
    sVar16 = (sVar16 - sVar4) + (short)local_3c;
LAB_2c607d48:
    uVar18 = (uint)(short)((sVar5 - sVar15) + (short)local_38 + sVar2);
    uVar19 = (uint)(short)(sVar1 + sVar16);
    break;
  case '\b':
    uVar19 = (uint)(short)(sVar1 + (sVar16 - sVar4) + (short)local_3c);
  case '\a':
    iVar14 = local_38;
    if (local_38 < 0) {
      iVar14 = local_38 + 1;
    }
    iVar17 = local_2c;
    if (local_2c < 0) {
      iVar17 = local_2c + 1;
    }
    uVar18 = (uint)(short)(((short)(iVar14 >> 1) - (short)(iVar17 >> 1)) + sVar2);
    break;
  case '\t':
    iVar14 = local_3c;
    if (local_3c < 0) {
      iVar14 = local_3c + 1;
    }
    iVar17 = local_30;
    if (local_30 < 0) {
      iVar17 = local_30 + 1;
    }
    uVar19 = (uint)(short)(sVar1 + ((short)(iVar14 >> 1) - (short)(iVar17 >> 1)));
    iVar14 = local_38;
    if (local_38 < 0) {
      iVar14 = local_38 + 1;
    }
    iVar17 = local_2c;
    if (local_2c < 0) {
      iVar17 = local_2c + 1;
    }
    uVar18 = (uint)(short)(((short)(iVar14 >> 1) - (short)(iVar17 >> 1)) + sVar2);
  }
switchD_2c607c28_default:
  iVar17 = *(int *)(param_1 + 4);
  iVar14 = *DAT_2c607b44;
  if (iVar17 != 0) {
    iVar10 = FUN_2c6033b4(iVar17,0,0x12,0);
    iVar11 = FUN_2c6033b4(iVar17,0,0x10);
    iVar12 = FUN_2c606b94(param_1,0x40000);
    if (iVar12 == 0) {
      sVar5 = *(short *)(iVar17 + 0x14);
      iVar12 = FUN_2c604a2c(iVar17);
      sVar16 = *(short *)(iVar17 + 0x16);
      iVar13 = FUN_2c604a38(iVar17);
      uVar19 = uVar19 + (((int)(short)iVar10 + (int)sVar5) - iVar12);
      uVar18 = uVar18 + (((int)(short)iVar11 + (int)sVar16) - iVar13);
    }
    else {
      uVar18 = uVar18 + iVar11 + (uint)*(ushort *)(iVar17 + 0x16);
      uVar19 = uVar19 + iVar10 + (uint)*(ushort *)(iVar17 + 0x14);
    }
    uVar7 = FUN_2c6033b4(iVar17,0,0x32);
    uVar19 = (uint)uVar7 + (uVar19 & 0xffff);
    uVar18 = (uint)uVar7 + (uVar18 & 0xffff);
  }
  uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(param_1 + 0x14);
  uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(param_1 + 0x16);
  sVar5 = (short)uVar19;
  sVar16 = (short)uVar18;
  if ((uVar19 & 0xffff) != 0 || (uVar18 & 0xffff) != 0) {
    sVar4 = FUN_2c600c2c(param_1);
    local_28 = *(short *)(param_1 + 0x18) + sVar4;
    local_26 = *(short *)(param_1 + 0x1a) + sVar4;
    local_2c = CONCAT22(*(short *)(param_1 + 0x16) - sVar4,*(short *)(param_1 + 0x14) - sVar4);
    FUN_2c6078f0(param_1,&local_2c);
    sVar4 = *(short *)(param_1 + 0x14);
    sVar15 = *(short *)(param_1 + 0x16);
    local_3c = *(int *)(param_1 + 0x14);
    sVar2 = *(short *)(param_1 + 0x18);
    sVar1 = *(short *)(param_1 + 0x1a);
    local_38 = *(int *)(param_1 + 0x18);
    if (iVar17 == 0) {
      iVar10 = 0;
    }
    else {
      FUN_2c60747c(iVar17,&local_34);
      iVar10 = FUN_2c62a998(&local_3c,&local_34,0);
      if (iVar10 == 0) {
        FUN_2c605b10(iVar17);
      }
      sVar4 = *(short *)(param_1 + 0x14);
      sVar15 = *(short *)(param_1 + 0x16);
      sVar2 = *(short *)(param_1 + 0x18);
      sVar1 = *(short *)(param_1 + 0x1a);
    }
    *(short *)(param_1 + 0x14) = sVar4 + sVar5;
    *(short *)(param_1 + 0x16) = sVar15 + sVar16;
    *(short *)(param_1 + 0x18) = sVar5 + sVar2;
    *(short *)(param_1 + 0x1a) = sVar16 + sVar1;
    FUN_2c6075e8(param_1,(int)sVar5,(int)sVar16,0);
    if (iVar17 != 0) {
      FUN_2c602340(iVar17,0x22,param_1);
    }
    sVar5 = FUN_2c600c2c(param_1);
    local_28 = *(short *)(param_1 + 0x18) + sVar5;
    local_26 = *(short *)(param_1 + 0x1a) + sVar5;
    local_2c = CONCAT22(*(short *)(param_1 + 0x16) - sVar5,*(short *)(param_1 + 0x14) - sVar5);
    FUN_2c6078f0(param_1,&local_2c);
    if ((iVar17 != 0) &&
       ((iVar11 = FUN_2c62a998(param_1 + 0x14,&local_34,0), iVar10 != 0 || (iVar11 != 0)))) {
      FUN_2c605b10(iVar17);
    }
  }
  if (*DAT_2c607b44 != iVar14) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}


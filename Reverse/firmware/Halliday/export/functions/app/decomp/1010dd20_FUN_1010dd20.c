/* FUN_1010dd20 @ 0x1010dd20 */

int FUN_1010dd20(uint *param_1,uint *param_2,uint *param_3,int param_4,ushort param_5,
                undefined4 param_6,short param_7)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint extraout_r2;
  uint uVar14;
  uint uVar15;
  uint extraout_r2_00;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint extraout_r3;
  byte bVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  uint in_fpscr;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_a8;
  uint local_94;
  uint local_90;
  float local_8c;
  float local_88;
  undefined1 local_84 [4];
  float local_80;
  float local_7c;
  undefined1 local_78 [4];
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  
  uVar16 = (uint)*(ushort *)((int)param_2 + 0xe);
  uVar23 = (uint)param_5;
  if (uVar16 - 0x800 < 3) {
    if (*(char *)((int)param_2 + 0xad) != '\0') {
      return 7;
    }
  }
  else {
    if (uVar16 - 0x410 < 5) {
      return 7;
    }
    if (uVar16 == 0x431) {
      return 7;
    }
    if (uVar16 - 0x40e < 2) {
      return 7;
    }
  }
  if ((((((uVar16 - 0x415 & 0xffff) < 0x1e) &&
        ((int)((DAT_1010ded0 >> (uVar16 - 0x415 & 0xff)) << 0x1f) < 0)) ||
       ((char)param_2[0x2b] != '\0')) || (((short)param_2[0x15] == 0x1f02 || (uVar23 - 7 < 2)))) ||
     ((uVar23 != 0 &&
      ((uVar16 = *(ushort *)((int)param_1 + 0xe) - 0x40c, (uVar16 & 0xffff) < 0xd &&
       ((int)((0x120bU >> (uVar16 & 0xff)) << 0x1f) < 0)))))) {
    return 7;
  }
  iVar8 = FUN_1010b9ec(param_2);
  if (iVar8 != 0) {
    return iVar8;
  }
  if (uVar23 - 0xc < 3) {
    if (param_2[0x2d] == 0) {
      uVar16 = FUN_100f0524(0xbc);
      param_2[0x2d] = uVar16;
      FUN_1011ea40(uVar16,param_2,0xbc);
      *(undefined4 *)(param_2[0x2d] + 0xb4) = 0;
      FUN_1010c4b4(param_2[0x2d]);
    }
    FUN_1010cac8();
    FUN_1010ed48(param_1,param_2,param_2[0x2d],uVar23);
    bVar5 = true;
    uVar23 = 1;
  }
  else {
    bVar5 = false;
  }
  if (param_4 == 0) {
    param_4 = DAT_1010ded4;
  }
  in_fpscr = in_fpscr & 0xfffffff;
  uVar16 = in_fpscr | (uint)(*(float *)(param_4 + 4) == 0.0) << 0x1e;
  if (*(char *)((int)param_2 + 0x56) == '\x01') {
    local_c8 = 0x8000;
  }
  else {
    local_c8 = 0;
  }
  *(short *)(DAT_1010ded8 + 0x7d4) = param_7;
  if (((((byte)(uVar16 >> 0x1e) == 0) ||
       (uVar16 = in_fpscr | (uint)(*(float *)(param_4 + 0xc) == 0.0) << 0x1e,
       (byte)(uVar16 >> 0x1e) == 0)) ||
      (uVar16 = in_fpscr | (uint)(*(float *)(param_4 + 0x18) == 0.0) << 0x1e,
      (byte)(uVar16 >> 0x1e) == 0)) ||
     ((uVar16 = in_fpscr | (uint)(*(float *)(param_4 + 0x1c) == 0.0) << 0x1e,
      (byte)(uVar16 >> 0x1e) == 0 ||
      (uVar16 = in_fpscr | (uint)(*(float *)(param_4 + 0x20) == 1.0) << 0x1e,
      (byte)(uVar16 >> 0x1e) == 0)))) {
    if (uVar23 == 0) {
      local_c8 = 0x8000;
    }
    else if (uVar23 - 3 < 2) {
      local_c8 = 0x8000;
    }
  }
  if (*(short *)((int)param_1 + 0xe) == 0x40b) {
    if ((ushort)(*(short *)((int)param_2 + 0xe) - 0x40aU) < 2) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0x80000000;
    }
  }
  else {
    uVar17 = 0;
  }
  uVar18 = *param_2;
  if (param_3 == (uint *)0x0) {
    local_d4 = param_2[1];
    local_dc = 0;
    local_d0 = 0;
    local_d8 = uVar18;
  }
  else {
    local_d0 = *param_3 & ~((int)*param_3 >> 0x1f);
    if (uVar18 < local_d0) {
      return 1;
    }
    local_dc = param_3[1] & ~((int)param_3[1] >> 0x1f);
    uVar13 = param_2[1];
    if (uVar13 < local_dc) {
      return 1;
    }
    local_d8 = param_3[2];
    if (local_d8 == 0) {
      return 1;
    }
    local_d4 = param_3[3];
    if (local_d4 == 0) {
      return 1;
    }
    if (uVar18 < local_d0 + local_d8) {
      local_d8 = uVar18 - local_d0;
    }
    if (uVar13 < local_dc + local_d4) {
      local_d4 = uVar13 - local_dc;
    }
  }
  uVar31 = FUN_1010c378(DAT_1010dedc,&local_94,param_4);
  uVar18 = local_90;
  fVar6 = DAT_1010dedc;
  if ((int)uVar31 == 0) {
    return 1;
  }
  fVar29 = (float)VectorUnsignedToFloat(local_d4,(byte)(uVar16 >> 0x16) & 3);
  iVar8 = FUN_1010c378(DAT_1010dedc,fVar29,&local_94,(int)((ulonglong)uVar31 >> 0x20),local_94);
  uVar19 = local_90;
  uVar13 = local_94;
  if (iVar8 == 0) {
    return 1;
  }
  fVar30 = (float)VectorUnsignedToFloat(local_d8,(byte)(uVar16 >> 0x16) & 3);
  iVar8 = FUN_1010c378(fVar30,fVar29,&local_94);
  uVar15 = local_90;
  uVar16 = local_94;
  if (iVar8 == 0) {
    return 1;
  }
  iVar9 = FUN_1010c378(fVar30,fVar6,&local_94);
  iVar8 = DAT_1010e328;
  if (iVar9 == 0) {
    return 1;
  }
  uVar14 = extraout_r2;
  if ((int)uVar13 <= (int)extraout_r2) {
    uVar14 = uVar13;
  }
  if ((int)uVar16 <= (int)uVar14) {
    uVar14 = uVar16;
  }
  if ((int)local_94 <= (int)uVar14) {
    uVar14 = local_94;
  }
  uVar10 = extraout_r2;
  if ((int)extraout_r2 < (int)uVar13) {
    uVar10 = uVar13;
  }
  if ((int)uVar10 < (int)uVar16) {
    uVar10 = uVar16;
  }
  if ((int)uVar10 < (int)local_94) {
    uVar10 = local_94;
  }
  uVar16 = *param_1;
  uVar13 = param_1[1];
  if ((*(int *)(DAT_1010e328 + 0x730) == 0) || (*(char *)((int)param_1 + 0xb1) != '\0')) {
    uVar11 = 0;
    uVar24 = uVar11;
  }
  else {
    uVar11 = *(uint *)(DAT_1010e328 + 0x73c) & ~((int)*(uint *)(DAT_1010e328 + 0x73c) >> 0x1f);
    if ((int)*(uint *)(DAT_1010e328 + 0x744) <= (int)uVar16) {
      uVar16 = *(uint *)(DAT_1010e328 + 0x744);
    }
    if ((int)*(uint *)(DAT_1010e328 + 0x748) <= (int)uVar13) {
      uVar13 = *(uint *)(DAT_1010e328 + 0x748);
    }
    uVar24 = *(uint *)(DAT_1010e328 + 0x740) & ~((int)*(uint *)(DAT_1010e328 + 0x740) >> 0x1f);
  }
  if ((int)uVar14 < (int)uVar11) {
    uVar14 = uVar11;
  }
  if ((int)uVar16 <= (int)uVar10) {
    uVar10 = uVar16;
  }
  if ((int)uVar10 <= (int)uVar14) {
    return 0;
  }
  uVar16 = uVar18;
  if ((int)uVar19 <= (int)uVar18) {
    uVar16 = uVar19;
  }
  if ((int)uVar15 <= (int)uVar16) {
    uVar16 = uVar15;
  }
  if ((int)local_90 <= (int)uVar16) {
    uVar16 = local_90;
  }
  if ((int)uVar16 < (int)uVar24) {
    uVar16 = uVar24;
  }
  if ((int)uVar19 < (int)uVar18) {
    uVar19 = uVar18;
  }
  if ((int)uVar15 < (int)uVar19) {
    uVar15 = uVar19;
  }
  if ((int)uVar15 < (int)local_90) {
    uVar15 = local_90;
  }
  if ((int)uVar13 <= (int)uVar15) {
    uVar15 = uVar13;
  }
  if ((int)uVar15 <= (int)uVar16) {
    return 0;
  }
  piVar1 = (int *)(DAT_1010e328 + 0x7c4);
  piVar2 = (int *)(DAT_1010e328 + 0x7c0);
  *(short *)(DAT_1010e328 + 0x760) = (short)uVar23;
  if ((*piVar1 == *piVar2) &&
     (((*(int *)(iVar8 + 0x7cc) == 0 && *(int *)(iVar8 + 0x798) == 0) &&
      *(int *)(iVar8 + 0x758) == 0) && *(int *)(iVar8 + 0x750) == 0)) {
    bVar25 = false;
    if (((short)param_2[0x15] != 0x1f00) && (bVar25 = false, (short)param_2[0x15] != 0)) {
      bVar25 = true;
    }
  }
  else {
    bVar25 = true;
  }
  if (uVar23 - 0x2000 < 10) {
    bVar26 = true;
  }
  else {
    bVar26 = (short)param_2[0x15] == 0x1f02;
  }
  cVar3 = *(char *)((int)param_2 + 0xb2);
  cVar4 = *(char *)((int)param_1 + 0xb2);
  if (cVar3 == '\0') {
    local_cc = 0x1000100;
    if (cVar4 != '\0') goto LAB_1010e226;
    if (bVar26 == false) {
      uVar18 = 0x10000000;
    }
    else {
      uVar18 = 0;
    }
  }
  else {
    if (cVar3 == '\x01') {
      if (cVar4 == '\0') {
        if (bVar25) {
          local_cc = 0x100;
          uVar18 = 0;
        }
        else {
          local_cc = 0x1000100;
          uVar18 = 0x10000000;
        }
        goto LAB_1010e0f6;
      }
      if (cVar4 == '\x01') {
        local_cc = 0x100;
      }
      else {
        local_cc = 0x1000100;
      }
    }
    else {
      local_cc = 0x1000100;
    }
LAB_1010e226:
    uVar18 = 0;
  }
LAB_1010e0f6:
  if ((ushort)(*(short *)((int)param_2 + 0xe) - 0x409U) < 2) {
    if (uVar23 != 0) {
      if (10 < uVar23) goto LAB_1010e10c;
      uVar18 = 0;
    }
  }
  else {
LAB_1010e10c:
    if (uVar23 == 0xb) {
      uVar18 = 0;
    }
  }
  bVar22 = 0;
  if (cVar3 == cVar4) {
    bVar22 = bVar26 ^ 1;
  }
  *(byte *)((int)param_1 + 0xb3) = bVar22;
  if (uVar23 == 0xb) {
    uVar18 = 0;
  }
  iVar8 = FUN_1010cba0(param_1);
  if (iVar8 != 0) {
    return iVar8;
  }
  iVar9 = FUN_1010c228(&local_68,param_4);
  iVar8 = DAT_1010e69c;
  if (iVar9 == 0) {
    return 1;
  }
  fVar27 = (local_5c + local_58) * 0.5;
  fVar28 = local_50 + local_4c;
  local_74 = (local_68 + local_64) * 0.5;
  local_6c = local_48 + fVar28 * 0.5;
  if (param_7 == 0x1000) {
    local_68 = local_68 - local_50 * 0.5;
    local_64 = local_64 - local_4c * 0.5;
    local_74 = ((local_74 - fVar28 * 0.25) + local_60) - local_48 * 0.5;
LAB_1010e1ce:
    fVar27 = fVar27 + local_54;
  }
  else {
    if (param_7 != 0x2000) {
      local_74 = local_74 + local_60;
      goto LAB_1010e1ce;
    }
    local_68 = local_68 - local_50 * 0.5;
    local_5c = local_5c - local_50 * 0.5;
    local_64 = local_64 - local_4c * 0.5;
    local_58 = local_58 - local_4c * 0.5;
    local_74 = ((local_74 - fVar28 * 0.25) + local_60) - local_48 * 0.5;
    fVar27 = ((fVar27 - fVar28 * 0.25) + local_54) - local_48 * 0.5;
  }
  local_74 = local_74 / fVar30;
  local_7c = local_58 / fVar29;
  local_80 = local_64 / fVar30;
  local_88 = local_5c / fVar29;
  local_8c = local_68 / fVar30;
  local_74 = local_74 + fVar6;
  local_70 = fVar27 / fVar29 + fVar6;
  if ((ushort)param_2[0x15] == 0) {
switchD_1010e2ea_caseD_0:
    uVar13 = 0x1000;
    goto LAB_1010e330;
  }
  uVar13 = (ushort)param_2[0x15] - 0x1f00;
  if ((uVar13 & 0xffff) < 5) {
    switch(uVar13) {
    case 0:
      goto switchD_1010e2ea_caseD_0;
    case 1:
      uVar13 = 0x2000;
      break;
    case 2:
      uVar13 = 0x3000;
      break;
    default:
      goto switchD_1010e2ea_caseD_3;
    case 4:
      uVar13 = 0x6000;
    }
  }
  else {
switchD_1010e2ea_caseD_3:
    uVar13 = 0;
  }
LAB_1010e330:
  if (param_7 == 0x2000) {
    uVar19 = 0x20000;
  }
  else if (param_7 == 0x3000) {
    uVar19 = 0x30000;
  }
  else if (param_7 == 0x1000) {
    uVar19 = 0x10000;
  }
  else {
    uVar19 = 0;
  }
  uVar24 = (uint)*(ushort *)((int)param_2 + 0xae);
  if ((uVar24 + 0xe4ff & 0xffff) < 3) {
    uVar11 = uVar24 << 0x18;
  }
  else {
    uVar11 = 0;
  }
  if ((char)param_2[3] == '\0') {
    uVar20 = 0;
  }
  else {
    uVar20 = 0x10000000;
  }
  uVar21 = (uint)(byte)param_1[3];
  bVar25 = uVar21 == 1;
  if (bVar25) {
    uVar21 = 0x40;
  }
  else {
    uVar24 = 0;
  }
  if (bVar25) {
    local_a8 = uVar21;
  }
  uVar21 = param_2[0x2b];
  uVar7 = uVar24;
  if (bVar25) {
    uVar24 = 0x20000000;
    uVar7 = local_a8;
  }
  local_a8 = uVar7;
  iVar9 = FUN_1013b1e8(DAT_1010e69c,0xad1,
                       *(uint *)(DAT_1010e69c + 0x758) | *(uint *)(DAT_1010e69c + 0x75c) |
                       *(uint *)(DAT_1010e69c + 0x750) | *(uint *)(DAT_1010e69c + 0x754));
  if (iVar9 != 0) {
    return iVar9;
  }
  uVar31 = FUN_1013b082(uVar23,*(undefined4 *)(iVar8 + 0x734),
                        *(uint *)(iVar8 + 0x794) | *(uint *)(iVar8 + 0x7cc));
  iVar9 = FUN_1013b1e8(iVar8,0xa00,
                       extraout_r2_00 | (uint)uVar31 | *(uint *)(iVar8 + 0x798) |
                       (uint)((ulonglong)uVar31 >> 0x20) | local_c8 | uVar18 | uVar13 | uVar11 |
                       local_a8 | uVar24 | 1);
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_1013b1e8(iVar8,0xa02,param_6);
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_1013b26c(iVar8,0xa18,&local_74);
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_1013b26c(iVar8,0xa19,&local_70);
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_1013b26c(iVar8,0xa1a,&local_6c);
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_1013b26c(iVar8,0xa1c,&local_8c);
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_1013b26c(iVar8,0xa1d,&local_88);
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_1013b26c(iVar8,0xa1e,local_84);
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_1013b1e8(iVar8,0xa1f,1);
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_1013b26c(iVar8,0xa20,&local_80);
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_1013b26c(iVar8,0xa21,&local_7c);
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar8 = FUN_1013b26c(iVar8,0xa22,local_78);
  if (iVar8 != 0) {
    return iVar8;
  }
  uVar23 = (uint)*(ushort *)((int)param_2 + 0xe);
  if ((uVar23 - 0x40d < 3) || (uVar23 - 0x415 < 4)) {
    if (*(char *)((int)param_2 + 0x21) == '\x01') {
      uVar12 = 0x8000;
    }
    else {
      uVar12 = 0;
    }
    uVar31 = FUN_1013b106((char)param_2[8],uVar12);
    uVar23 = extraout_r3;
  }
  else {
    uVar31 = 0;
  }
  uVar32 = FUN_1010bce0(uVar23,(int)((ulonglong)uVar31 >> 0x20));
  iVar8 = DAT_1010e69c;
  iVar9 = FUN_1013b1e8(DAT_1010e69c,0xa25,
                       (uint)uVar31 |
                       uVar17 | (uint)(byte)uVar21 << 0x19 | local_cc | uVar19 |
                       (uint)((ulonglong)uVar32 >> 0x20) | (uint)uVar32);
  if (iVar9 != 0) {
    return iVar9;
  }
  if ((param_2[9] != 0) && (iVar9 = FUN_1013b1e8(iVar8,0xa51), iVar9 != 0)) {
    return iVar9;
  }
  if ((param_2[10] != 0) && (iVar9 = FUN_1013b1e8(DAT_1010e69c,0xa53), iVar9 != 0)) {
    return iVar9;
  }
  if ((param_2[0xb] != 0) && (iVar9 = FUN_1013b1e8(DAT_1010e69c,0xa53), iVar9 != 0)) {
    return iVar9;
  }
  iVar9 = FUN_1013b1e8(DAT_1010e69c,0xa27,param_1[0x2e]);
  if (iVar9 != 0) {
    return iVar9;
  }
  if (bVar5) {
    uVar23 = *(uint *)(param_2[0x2d] + 0x18);
  }
  else {
    uVar23 = param_2[6];
  }
  iVar9 = FUN_1013b1e8(DAT_1010e69c,0xa29,uVar23);
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_1013b1e8(DAT_1010e69c,0xa34,0);
  if (iVar9 != 0) {
    return iVar9;
  }
  uVar23 = param_2[2];
  if ((ushort)(*(short *)((int)param_2 + 0xe) - 0x427U) < 6) {
    uVar23 = (int)uVar23 / 3 << 2;
  }
  iVar9 = FUN_1013b1e8(DAT_1010e69c,0xa2b,uVar20 | uVar23);
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_1013b1e8(DAT_1010e69c,0xa2d,local_d0 | local_dc << 0x10);
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_1013b1e8(DAT_1010e69c,0xa2f,local_d8 | local_d4 << 0x10);
  if (iVar9 == 0) {
    iVar9 = FUN_1010b738(uVar14,uVar16,uVar10 - uVar14,uVar15 - uVar16);
    if (iVar9 != 0) {
      return iVar9;
    }
    if (*(int *)(iVar8 + 0x76c) == 0) {
      iVar8 = FUN_1010c204();
      return iVar8;
    }
    return 0;
  }
  return iVar9;
}


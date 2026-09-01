/* FUN_1010d404 @ 0x1010d404 */

int FUN_1010d404(uint *param_1,uint *param_2,int param_3,uint param_4,undefined4 param_5,
                short param_6)

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
  uint uVar12;
  uint extraout_r2;
  uint uVar13;
  uint extraout_r2_00;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint extraout_r3;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  uint in_fpscr;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
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
  
  uVar14 = (uint)*(ushort *)((int)param_2 + 0xe);
  if (uVar14 - 0x800 < 3) {
    if (*(char *)((int)param_2 + 0xad) != '\0') {
      return 7;
    }
  }
  else {
    if (uVar14 - 0x410 < 5) {
      return 7;
    }
    if (uVar14 == 0x431) {
      return 7;
    }
    if (uVar14 - 0x40e < 2) {
      return 7;
    }
  }
  if ((((((uVar14 - 0x415 & 0xffff) < 0x1e) &&
        ((int)((DAT_1010d5ac >> (uVar14 - 0x415 & 0xff)) << 0x1f) < 0)) ||
       ((char)param_2[0x2b] != '\0')) || (((short)param_2[0x15] == 0x1f02 || (param_4 - 7 < 2)))) ||
     ((param_4 != 0 &&
      ((uVar14 = *(ushort *)((int)param_1 + 0xe) - 0x40c, (uVar14 & 0xffff) < 0xd &&
       ((int)((0x120bU >> (uVar14 & 0xff)) << 0x1f) < 0)))))) {
    return 7;
  }
  iVar8 = FUN_1010b9ec(param_2);
  if (iVar8 != 0) {
    return iVar8;
  }
  if (param_4 - 0xc < 3) {
    if (param_2[0x2d] == 0) {
      uVar14 = FUN_100f0524(0xbc);
      param_2[0x2d] = uVar14;
      FUN_1011ea40(uVar14,param_2,0xbc);
      *(undefined4 *)(param_2[0x2d] + 0xb4) = 0;
      FUN_1010c4b4(param_2[0x2d]);
    }
    FUN_1010cac8();
    FUN_1010ed48(param_1,param_2,param_2[0x2d],param_4);
    bVar5 = true;
    param_4 = 1;
  }
  else {
    bVar5 = false;
  }
  if (param_3 == 0) {
    param_3 = DAT_1010d5b0;
  }
  in_fpscr = in_fpscr & 0xfffffff;
  uVar14 = in_fpscr | (uint)(*(float *)(param_3 + 4) == 0.0) << 0x1e;
  if (*(char *)((int)param_2 + 0x56) == '\x01') {
    local_c8 = 0x8000;
  }
  else {
    local_c8 = 0;
  }
  *(short *)(DAT_1010d5b4 + 0x7d4) = param_6;
  if (((((byte)(uVar14 >> 0x1e) == 0) ||
       (uVar14 = in_fpscr | (uint)(*(float *)(param_3 + 0xc) == 0.0) << 0x1e,
       (byte)(uVar14 >> 0x1e) == 0)) ||
      (uVar14 = in_fpscr | (uint)(*(float *)(param_3 + 0x18) == 0.0) << 0x1e,
      (byte)(uVar14 >> 0x1e) == 0)) ||
     ((uVar14 = in_fpscr | (uint)(*(float *)(param_3 + 0x1c) == 0.0) << 0x1e,
      (byte)(uVar14 >> 0x1e) == 0 ||
      (uVar14 = in_fpscr | (uint)(*(float *)(param_3 + 0x20) == 1.0) << 0x1e,
      (byte)(uVar14 >> 0x1e) == 0)))) {
    if (param_4 == 0) {
      local_c8 = 0x8000;
    }
    else if (param_4 - 3 < 2) {
      local_c8 = 0x8000;
    }
  }
  if (*(short *)((int)param_1 + 0xe) == 0x40b) {
    if ((ushort)(*(short *)((int)param_2 + 0xe) - 0x40aU) < 2) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0x80000000;
    }
  }
  else {
    uVar15 = 0;
  }
  iVar8 = FUN_1010c378(DAT_1010d5b8,&local_94,param_3);
  uVar13 = local_90;
  uVar11 = local_94;
  fVar6 = DAT_1010d5b8;
  if (iVar8 == 0) {
    return 1;
  }
  uVar25 = VectorSignedToFloat(param_2[1],(byte)(uVar14 >> 0x16) & 3);
  iVar8 = FUN_1010c378(DAT_1010d5b8,uVar25,&local_94);
  uVar21 = local_90;
  uVar12 = local_94;
  if (iVar8 == 0) {
    return 1;
  }
  uVar26 = VectorSignedToFloat(param_2[1],(byte)(uVar14 >> 0x16) & 3);
  uVar25 = VectorSignedToFloat(*param_2,(byte)(uVar14 >> 0x16) & 3);
  uVar30 = FUN_1010c378(uVar25,uVar26,&local_94);
  uVar16 = local_94;
  if ((int)uVar30 == 0) {
    return 1;
  }
  uVar25 = VectorSignedToFloat(*param_2,(byte)(uVar14 >> 0x16) & 3);
  iVar9 = FUN_1010c378(uVar25,fVar6,&local_94,(int)((ulonglong)uVar30 >> 0x20),local_90);
  iVar8 = DAT_1010d9a4;
  if (iVar9 == 0) {
    return 1;
  }
  uVar10 = uVar12;
  if ((int)uVar11 <= (int)uVar12) {
    uVar10 = uVar11;
  }
  if ((int)uVar16 <= (int)uVar10) {
    uVar10 = uVar16;
  }
  if ((int)local_94 <= (int)uVar10) {
    uVar10 = local_94;
  }
  uVar20 = *param_1;
  uVar22 = param_1[1];
  if ((int)uVar12 < (int)uVar11) {
    uVar12 = uVar11;
  }
  if ((int)uVar12 < (int)uVar16) {
    uVar12 = uVar16;
  }
  if ((int)uVar12 < (int)local_94) {
    uVar12 = local_94;
  }
  if ((*(int *)(DAT_1010d9a4 + 0x730) == 0) || (*(char *)((int)param_1 + 0xb1) != '\0')) {
    uVar16 = 0;
    uVar11 = uVar16;
  }
  else {
    if ((int)*(uint *)(DAT_1010d9a4 + 0x744) <= (int)uVar20) {
      uVar20 = *(uint *)(DAT_1010d9a4 + 0x744);
    }
    if ((int)*(uint *)(DAT_1010d9a4 + 0x748) <= (int)uVar22) {
      uVar22 = *(uint *)(DAT_1010d9a4 + 0x748);
    }
    uVar16 = *(uint *)(DAT_1010d9a4 + 0x740) & ~((int)*(uint *)(DAT_1010d9a4 + 0x740) >> 0x1f);
    uVar11 = *(uint *)(DAT_1010d9a4 + 0x73c) & ~((int)*(uint *)(DAT_1010d9a4 + 0x73c) >> 0x1f);
  }
  if ((int)uVar10 < (int)uVar11) {
    uVar10 = uVar11;
  }
  if ((int)uVar20 <= (int)uVar12) {
    uVar12 = uVar20;
  }
  if ((int)uVar12 <= (int)uVar10) {
    return 0;
  }
  uVar11 = uVar21;
  if ((int)uVar13 <= (int)uVar21) {
    uVar11 = uVar13;
  }
  if ((int)extraout_r2 <= (int)uVar11) {
    uVar11 = extraout_r2;
  }
  if ((int)local_90 <= (int)uVar11) {
    uVar11 = local_90;
  }
  if ((int)uVar11 < (int)uVar16) {
    uVar11 = uVar16;
  }
  if ((int)uVar21 < (int)uVar13) {
    uVar21 = uVar13;
  }
  uVar13 = extraout_r2;
  if ((int)extraout_r2 < (int)uVar21) {
    uVar13 = uVar21;
  }
  if ((int)uVar13 < (int)local_90) {
    uVar13 = local_90;
  }
  if ((int)uVar22 <= (int)uVar13) {
    uVar13 = uVar22;
  }
  if ((int)uVar13 <= (int)uVar11) {
    return 0;
  }
  piVar1 = (int *)(DAT_1010d9a4 + 0x7c4);
  piVar2 = (int *)(DAT_1010d9a4 + 0x7c0);
  *(short *)(DAT_1010d9a4 + 0x760) = (short)param_4;
  if ((*piVar1 == *piVar2) &&
     (((*(int *)(iVar8 + 0x7cc) == 0 && *(int *)(iVar8 + 0x798) == 0) &&
      *(int *)(iVar8 + 0x758) == 0) && *(int *)(iVar8 + 0x750) == 0)) {
    bVar23 = false;
    if (((short)param_2[0x15] != 0x1f00) && (bVar23 = false, (short)param_2[0x15] != 0)) {
      bVar23 = true;
    }
  }
  else {
    bVar23 = true;
  }
  if (param_4 - 0x2000 < 10) {
    bVar24 = true;
  }
  else {
    bVar24 = (short)param_2[0x15] == 0x1f02;
  }
  cVar3 = *(char *)((int)param_2 + 0xb2);
  cVar4 = *(char *)((int)param_1 + 0xb2);
  if (cVar3 == '\0') {
    local_cc = 0x1000100;
    if (cVar4 != '\0') goto LAB_1010d8a2;
    if (bVar24 == false) {
      uVar21 = 0x10000000;
    }
    else {
      uVar21 = 0;
    }
  }
  else {
    if (cVar3 == '\x01') {
      if (cVar4 == '\0') {
        if (bVar23) {
          local_cc = 0x100;
          uVar21 = 0;
        }
        else {
          local_cc = 0x1000100;
          uVar21 = 0x10000000;
        }
        goto LAB_1010d772;
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
LAB_1010d8a2:
    uVar21 = 0;
  }
LAB_1010d772:
  if ((ushort)(*(short *)((int)param_2 + 0xe) - 0x409U) < 2) {
    if (param_4 != 0) {
      if (10 < param_4) goto LAB_1010d788;
      uVar21 = 0;
    }
  }
  else {
LAB_1010d788:
    if (param_4 == 0xb) {
      uVar21 = 0;
    }
  }
  bVar19 = 0;
  if (cVar3 == cVar4) {
    bVar19 = bVar24 ^ 1;
  }
  *(byte *)((int)param_1 + 0xb3) = bVar19;
  if (param_4 == 0xb) {
    uVar21 = 0;
  }
  iVar8 = FUN_1010cba0(param_1);
  if (iVar8 != 0) {
    return iVar8;
  }
  iVar9 = FUN_1010c228(&local_68,param_3);
  iVar8 = DAT_1010dd14;
  if (iVar9 == 0) {
    return 1;
  }
  local_8c = (float)VectorSignedToFloat(*param_2,(byte)(uVar14 >> 0x16) & 3);
  fVar28 = (float)VectorSignedToFloat(param_2[1],(byte)(uVar14 >> 0x16) & 3);
  fVar27 = (local_5c + local_58) * 0.5;
  fVar29 = local_50 + local_4c;
  local_74 = (local_64 + local_68) * 0.5;
  local_6c = local_48 + fVar29 * 0.5;
  if (param_6 == 0x1000) {
    local_68 = local_68 - local_50 * 0.5;
    local_64 = local_64 - local_4c * 0.5;
    local_74 = ((local_74 - fVar29 * 0.25) + local_60) - local_48 * 0.5;
LAB_1010d85a:
    fVar27 = fVar27 + local_54;
  }
  else {
    if (param_6 != 0x2000) {
      local_74 = local_74 + local_60;
      goto LAB_1010d85a;
    }
    local_68 = local_68 - local_50 * 0.5;
    local_5c = local_5c - local_50 * 0.5;
    local_64 = local_64 - local_4c * 0.5;
    local_58 = local_58 - local_4c * 0.5;
    local_74 = ((local_74 - fVar29 * 0.25) + local_60) - local_48 * 0.5;
    fVar27 = ((fVar27 - fVar29 * 0.25) + local_54) - local_48 * 0.5;
  }
  local_74 = local_74 / local_8c;
  local_7c = local_58 / fVar28;
  local_80 = local_64 / local_8c;
  local_88 = local_5c / fVar28;
  local_8c = local_68 / local_8c;
  local_74 = local_74 + fVar6;
  local_70 = fVar27 / fVar28 + fVar6;
  if ((ushort)param_2[0x15] == 0) {
switchD_1010d966_caseD_0:
    uVar14 = 0x1000;
    goto LAB_1010d9ac;
  }
  uVar14 = (ushort)param_2[0x15] - 0x1f00;
  if ((uVar14 & 0xffff) < 5) {
    switch(uVar14) {
    case 0:
      goto switchD_1010d966_caseD_0;
    case 1:
      uVar14 = 0x2000;
      break;
    case 2:
      uVar14 = 0x3000;
      break;
    default:
      goto switchD_1010d966_caseD_3;
    case 4:
      uVar14 = 0x6000;
    }
  }
  else {
switchD_1010d966_caseD_3:
    uVar14 = 0;
  }
LAB_1010d9ac:
  if (param_6 == 0x2000) {
    uVar16 = 0x20000;
  }
  else if (param_6 == 0x3000) {
    uVar16 = 0x30000;
  }
  else if (param_6 == 0x1000) {
    uVar16 = 0x10000;
  }
  else {
    uVar16 = 0;
  }
  uVar20 = (uint)*(ushort *)((int)param_2 + 0xae);
  if ((uVar20 + 0xe4ff & 0xffff) < 3) {
    uVar22 = uVar20 << 0x18;
  }
  else {
    uVar22 = 0;
  }
  if ((char)param_2[3] == '\0') {
    uVar17 = 0;
  }
  else {
    uVar17 = 0x10000000;
  }
  uVar18 = (uint)(byte)param_1[3];
  bVar23 = uVar18 == 1;
  if (bVar23) {
    uVar18 = 0x40;
  }
  else {
    uVar20 = 0;
  }
  if (bVar23) {
    local_a8 = uVar18;
  }
  uVar18 = param_2[0x2b];
  uVar7 = uVar20;
  if (bVar23) {
    uVar20 = 0x20000000;
    uVar7 = local_a8;
  }
  local_a8 = uVar7;
  iVar9 = FUN_1013b1e8(DAT_1010dd14,0xad1,
                       *(uint *)(DAT_1010dd14 + 0x758) | *(uint *)(DAT_1010dd14 + 0x75c) |
                       *(uint *)(DAT_1010dd14 + 0x750) | *(uint *)(DAT_1010dd14 + 0x754));
  if (iVar9 != 0) {
    return iVar9;
  }
  uVar30 = FUN_1013b082(param_4,*(undefined4 *)(iVar8 + 0x734),
                        *(uint *)(iVar8 + 0x794) | *(uint *)(iVar8 + 0x7cc));
  iVar9 = FUN_1013b1e8(iVar8,0xa00,
                       extraout_r2_00 | (uint)uVar30 | *(uint *)(iVar8 + 0x798) |
                       (uint)((ulonglong)uVar30 >> 0x20) | local_c8 | uVar21 | uVar14 | uVar22 |
                       local_a8 | uVar20 | 1);
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_1013b1e8(iVar8,0xa02,param_5);
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
  uVar14 = (uint)*(ushort *)((int)param_2 + 0xe);
  if ((uVar14 - 0x40d < 3) || (uVar14 - 0x415 < 4)) {
    if (*(char *)((int)param_2 + 0x21) == '\x01') {
      uVar25 = 0x8000;
    }
    else {
      uVar25 = 0;
    }
    uVar30 = FUN_1013b106((char)param_2[8],uVar25);
    uVar14 = extraout_r3;
  }
  else {
    uVar30 = 0;
  }
  uVar31 = FUN_1010bce0(uVar14,(int)((ulonglong)uVar30 >> 0x20));
  iVar8 = DAT_1010dd14;
  iVar9 = FUN_1013b1e8(DAT_1010dd14,0xa25,
                       (uint)uVar30 |
                       uVar15 | (uint)(byte)uVar18 << 0x19 | local_cc | uVar16 |
                       (uint)((ulonglong)uVar31 >> 0x20) | (uint)uVar31);
  if (iVar9 != 0) {
    return iVar9;
  }
  if ((param_2[9] != 0) && (iVar9 = FUN_1013b1e8(iVar8,0xa51), iVar9 != 0)) {
    return iVar9;
  }
  if ((param_2[10] != 0) && (iVar9 = FUN_1013b1e8(DAT_1010dd14,0xa53), iVar9 != 0)) {
    return iVar9;
  }
  if ((param_2[0xb] != 0) && (iVar9 = FUN_1013b1e8(DAT_1010dd14,0xa53), iVar9 != 0)) {
    return iVar9;
  }
  iVar9 = FUN_1013b1e8(DAT_1010dd14,0xa27,param_1[0x2e]);
  if (iVar9 != 0) {
    return iVar9;
  }
  if (bVar5) {
    uVar14 = *(uint *)(param_2[0x2d] + 0x18);
  }
  else {
    uVar14 = param_2[6];
  }
  iVar9 = FUN_1013b1e8(DAT_1010dd14,0xa29,uVar14);
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_1013b1e8(DAT_1010dd14,0xa34,0);
  if (iVar9 != 0) {
    return iVar9;
  }
  uVar14 = param_2[2];
  if ((ushort)(*(short *)((int)param_2 + 0xe) - 0x427U) < 6) {
    uVar14 = (int)uVar14 / 3 << 2;
  }
  iVar9 = FUN_1013b1e8(DAT_1010dd14,0xa2b,uVar17 | uVar14);
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_1013b1e8(DAT_1010dd14,0xa2d,0);
  if (iVar9 != 0) {
    return iVar9;
  }
  iVar9 = FUN_1013b1e8(DAT_1010dd14,0xa2f,*param_2 | param_2[1] << 0x10);
  if (iVar9 == 0) {
    iVar9 = FUN_1010b738(uVar10,uVar11,uVar12 - uVar10,uVar13 - uVar11);
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


/* FUN_1010f628 @ 0x1010f628 */

int FUN_1010f628(uint *param_1,undefined4 *param_2,int param_3,float *param_4,uint *param_5,
                float *param_6,ushort param_7,short param_8,uint param_9,undefined4 param_10,
                short param_11)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  byte bVar20;
  uint uVar21;
  undefined4 *puVar22;
  bool bVar23;
  uint in_fpscr;
  uint local_12c;
  uint local_128;
  uint local_124;
  int local_f0;
  uint local_ec;
  uint local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  int local_a8 [4];
  undefined4 local_98;
  uint *local_94;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  local_ec = 0;
  local_e8 = 0;
  uVar21 = (uint)param_7;
  if (*(char *)(param_2 + 4) == '\x01') {
    return 7;
  }
  uVar12 = (uint)*(ushort *)((int)param_5 + 0xe);
  if (uVar12 - 0x800 < 3) {
    if (*(char *)((int)param_5 + 0xad) != '\0') {
      return 7;
    }
  }
  else {
    if (uVar12 - 0x410 < 5) {
      return 7;
    }
    if (uVar12 == 0x431) {
      return 7;
    }
    if (uVar12 - 0x40e < 2) {
      return 7;
    }
  }
  if (((uVar12 - 0x415 & 0xffff) < 0x1e) &&
     ((int)((DAT_1010f800 >> (uVar12 - 0x415 & 0xff)) << 0x1f) < 0)) {
    return 7;
  }
  if ((short)param_5[0x15] == 0x1f02) {
    return 7;
  }
  if (uVar21 - 7 < 2) {
    return 7;
  }
  if (param_2[0xb] == 0) {
    return 1;
  }
  iVar7 = FUN_1010b9ec(param_5);
  if (iVar7 != 0) {
    return iVar7;
  }
  iVar7 = FUN_1013b07e(*(undefined2 *)((int)param_5 + 0xe),(char)param_5[0x2b],(char)param_5[3],
                       *param_5,param_5[1]);
  if (iVar7 != 0) {
    return iVar7;
  }
  if (uVar21 - 0xc < 3) {
    if (param_5[0x2d] == 0) {
      uVar12 = FUN_100f0524(0xbc);
      param_5[0x2d] = uVar12;
      FUN_1011ea40(uVar12,param_5,0xbc);
      *(undefined4 *)(param_5[0x2d] + 0xb4) = 0;
      FUN_1010c4b4(param_5[0x2d]);
    }
    FUN_1010cac8();
    FUN_1010ed48(param_1,param_5,param_5[0x2d],uVar21);
    bVar6 = true;
    uVar21 = 1;
  }
  else {
    bVar6 = false;
  }
  if (param_2[10] == 0) {
    return 0;
  }
  if (param_6 == (float *)0x0) {
    param_6 = DAT_1010f804;
  }
  if (param_4 == (float *)0x0) {
    param_4 = DAT_1010f804;
  }
  local_58 = *param_6;
  local_54 = param_6[1];
  local_50 = param_6[2];
  local_4c = param_6[3];
  local_48 = param_6[4];
  local_44 = param_6[5];
  local_40 = param_6[6];
  local_3c = param_6[7];
  local_38 = param_6[8];
  fStack_34 = param_6[9];
  fStack_30 = param_6[10];
  fStack_2c = param_6[0xb];
  if (*(short *)((int)param_5 + 0xae) == 0x1b03) {
    local_40 = 0.0;
    local_3c = 0.0;
    local_38 = 1.0;
    *(undefined2 *)(param_5 + 0x15) = 0x1f03;
  }
  iVar7 = DAT_1010f808;
  piVar1 = (int *)(DAT_1010f808 + 0x7c4);
  piVar2 = (int *)(DAT_1010f808 + 0x7c0);
  *(short *)(DAT_1010f808 + 0x760) = (short)uVar21;
  if ((*piVar1 == *piVar2) &&
     (((*(int *)(iVar7 + 0x7cc) == 0 && *(int *)(iVar7 + 0x798) == 0) &&
      *(int *)(iVar7 + 0x758) == 0) && *(int *)(iVar7 + 0x750) == 0)) {
    bVar5 = false;
    if (((short)param_5[0x15] != 0x1f00) && (bVar5 = false, (short)param_5[0x15] != 0)) {
      bVar5 = true;
    }
  }
  else {
    bVar5 = true;
  }
  if ((uVar21 + 0xdfff & 0xffff) < 9) {
    bVar23 = true;
  }
  else {
    bVar23 = (short)param_5[0x15] == 0x1f02;
  }
  cVar3 = *(char *)((int)param_5 + 0xb2);
  cVar4 = *(char *)((int)param_1 + 0xb2);
  if (cVar3 == '\0') {
    if (cVar4 == '\0') {
      if (bVar23 == false) {
        local_128 = 0x10000000;
      }
      else {
        local_128 = 0;
      }
    }
    else {
      local_128 = 0;
    }
LAB_1010f9f8:
    uVar12 = 0x1000100;
  }
  else {
    if (cVar3 != '\x01') {
      local_128 = 0;
      goto LAB_1010f9f8;
    }
    if (cVar4 == '\0') {
      if (bVar5) {
        local_128 = 0;
        uVar12 = 0x100;
      }
      else {
        local_128 = 0x10000000;
        uVar12 = 0x1000100;
      }
    }
    else {
      if (cVar4 == '\x01') {
        uVar12 = 0x100;
      }
      else {
        uVar12 = 0x1000100;
      }
      local_128 = 0;
    }
  }
  if ((ushort)(*(short *)((int)param_5 + 0xe) - 0x409U) < 2) {
    if (uVar21 != 0) {
      if (10 < uVar21) goto LAB_1010f842;
      local_128 = 0;
    }
  }
  else {
LAB_1010f842:
    if (uVar21 == 0xb) {
      local_128 = 0;
    }
  }
  bVar20 = 0;
  if (cVar3 == cVar4) {
    bVar20 = bVar23 ^ 1;
  }
  if (uVar21 == 0xb) {
    local_128 = 0;
  }
  *(byte *)((int)param_1 + 0xb3) = bVar20;
  iVar7 = FUN_1010cba0(param_1);
  uVar11 = DAT_1010fa18;
  if (iVar7 != 0) {
    return iVar7;
  }
  uVar13 = *(ushort *)((int)param_1 + 0xe) - 0x40c;
  if ((((uVar13 & 0xffff) < 0xd) && ((int)((0x120bU >> (uVar13 & 0xff)) << 0x1f) < 0)) &&
     (*(char *)(param_2 + 4) != '\x03')) {
    *(undefined1 *)(param_2 + 4) = 3;
    FUN_101188d0(uVar11);
  }
  if (*(char *)((int)param_5 + 0x56) == '\x01') {
    uVar13 = 0x8000;
  }
  else {
    uVar13 = 0;
  }
  local_124 = *param_1;
  local_12c = param_1[1];
  uVar14 = local_124;
  uVar15 = local_12c;
  if (*(int *)(DAT_1010fa1c + 0x730) != 0) {
    uVar14 = *(int *)(DAT_1010fa1c + 0x744) - *(int *)(DAT_1010fa1c + 0x73c);
    uVar15 = *(int *)(DAT_1010fa1c + 0x748) - *(int *)(DAT_1010fa1c + 0x740);
  }
  if ((uVar14 == 0) || (uVar15 == 0)) {
    return 3;
  }
  if ((((int)uVar14 < (int)local_124) || ((int)uVar15 < (int)local_12c)) ||
     (*(int *)(DAT_1010fa1c + 0x730) != 0)) {
    local_12c = 0;
    local_124 = 0;
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (*(short *)((int)param_1 + 0xe) == 0x40b) {
    if ((ushort)(*(short *)((int)param_5 + 0xe) - 0x40aU) < 2) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0x80000000;
    }
  }
  else {
    uVar14 = 0;
  }
  iVar7 = FUN_1010c228(&local_88,&local_58);
  if (iVar7 == 0) {
    return 1;
  }
  local_cc = (float)VectorSignedToFloat(*param_5,(byte)(in_fpscr >> 0x16) & 3);
  local_e4 = local_88 / local_cc;
  local_d8 = local_84 / local_cc;
  local_c8 = (float)VectorSignedToFloat(param_5[1],(byte)(in_fpscr >> 0x16) & 3);
  local_d4 = local_78 / local_c8;
  local_e0 = local_7c / local_c8;
  local_cc = (local_80 + (local_88 + local_84) * 0.5) / local_cc;
  local_c8 = (local_74 + (local_7c + local_78) * 0.5) / local_c8;
  local_dc = local_70;
  local_c4 = local_68 + (local_70 + local_6c) * 0.5;
  local_d0 = local_6c;
  if ((ushort)param_5[0x15] == 0) {
switchD_1010f9d6_caseD_0:
    uVar15 = 0x1000;
    goto LAB_1010fa24;
  }
  uVar15 = (ushort)param_5[0x15] - 0x1f00;
  if ((uVar15 & 0xffff) < 5) {
    switch(uVar15) {
    case 0:
      goto switchD_1010f9d6_caseD_0;
    case 1:
      uVar15 = 0x2000;
      break;
    case 2:
      uVar15 = 0x3000;
      break;
    default:
      goto switchD_1010f9d6_caseD_3;
    case 4:
      uVar15 = 0x6000;
    }
  }
  else {
switchD_1010f9d6_caseD_3:
    uVar15 = 0;
  }
LAB_1010fa24:
  if (param_11 == 0x2000) {
    uVar16 = 0x20000;
  }
  else if (param_11 == 0x3000) {
    uVar16 = 0x30000;
  }
  else if (param_11 == 0x1000) {
    uVar16 = 0x10000;
  }
  else {
    uVar16 = 0;
  }
  if ((char)param_5[3] == '\0') {
    uVar17 = 0;
  }
  else {
    uVar17 = 0x10000000;
  }
  if (param_8 == 0x1d00) {
    param_9 = param_9 & 0xff000000 | (param_9 & 0xff) << 0x10 | (param_9 & 0xffffff) >> 0x10 |
              param_9 & 0xff00;
    uVar18 = 0;
  }
  else {
    if (param_8 != 0x1d01) {
      return 1;
    }
    uVar18 = 0x1000;
  }
  uVar19 = param_5[0x2b];
  if (*(short *)((int)param_5 + 0xae) == 0x1b03) {
    iVar7 = FUN_1013b26c(DAT_10110230,0xa04,&local_cc);
    if (iVar7 != 0) {
      return iVar7;
    }
    iVar7 = FUN_1013b26c(DAT_10110230,0xa05,&local_c8);
    if (iVar7 != 0) {
      return iVar7;
    }
    iVar7 = FUN_1013b26c(DAT_10110230,0xa06,&local_e4);
    if (iVar7 != 0) {
      return iVar7;
    }
    iVar7 = FUN_1013b26c(DAT_10110230,0xa07,&local_e0);
    if (iVar7 != 0) {
      return iVar7;
    }
    iVar7 = FUN_1013b26c(DAT_10110230,0xa08,&local_d8);
    if (iVar7 != 0) {
      return iVar7;
    }
    iVar7 = FUN_1013b26c(DAT_10110230,0xa09,&local_d4);
    if (iVar7 != 0) {
      return iVar7;
    }
  }
  iVar7 = FUN_1013b26c(DAT_1010fdd8,0xa18,&local_cc);
  if (iVar7 != 0) {
    return iVar7;
  }
  iVar7 = FUN_1013b26c(DAT_1010fdd8,0xa19,&local_c8);
  if (iVar7 != 0) {
    return iVar7;
  }
  iVar7 = FUN_1013b26c(DAT_1010fdd8,0xa1a,&local_c4);
  if (iVar7 != 0) {
    return iVar7;
  }
  iVar7 = FUN_1013b26c(DAT_1010fdd8,0xa1c,&local_e4);
  if (iVar7 != 0) {
    return iVar7;
  }
  iVar7 = FUN_1013b26c(DAT_1010fdd8,0xa1d,&local_e0);
  if (iVar7 != 0) {
    return iVar7;
  }
  iVar7 = FUN_1013b26c(DAT_1010fdd8,0xa1e,&local_dc);
  if (iVar7 != 0) {
    return iVar7;
  }
  iVar7 = FUN_1013b1e8(DAT_1010fdd8,0xa1f,1);
  if (iVar7 != 0) {
    return iVar7;
  }
  iVar7 = FUN_1013b26c(DAT_1010fdd8,0xa20,&local_d8);
  if (iVar7 != 0) {
    return iVar7;
  }
  iVar7 = FUN_1013b26c(DAT_1010fdd8,0xa21,&local_d4);
  if (iVar7 != 0) {
    return iVar7;
  }
  iVar7 = FUN_1013b26c(DAT_1010fdd8,0xa22,&local_d0);
  if (iVar7 != 0) {
    return iVar7;
  }
  if ((*(ushort *)((int)param_5 + 0xe) - 0x40d < 3) || (*(ushort *)((int)param_5 + 0xe) - 0x415 < 4)
     ) {
    uVar8 = FUN_1013b116(*(undefined1 *)((int)param_5 + 0x21));
    uVar9 = FUN_1013b106((char)param_5[8]);
  }
  else {
    uVar9 = 0;
    uVar8 = 0;
  }
  uVar21 = FUN_1013b082(uVar21);
  uVar9 = uVar12 | (uint)(byte)uVar19 << 0x19 | uVar14 | uVar16 | uVar18 | uVar8 | uVar9;
  if (*(short *)((int)param_5 + 0xae) == 0x1b03) {
    uVar12 = FUN_1010bce0(*(undefined2 *)((int)param_5 + 0xe));
    iVar7 = FUN_1013b1e8(DAT_1010fdd8,0xa24,uVar12 | uVar9);
    if (iVar7 != 0) {
      return iVar7;
    }
    if ((param_5[9] != 0) && (iVar7 = FUN_1013b1e8(DAT_10110230,0xa50), iVar7 != 0)) {
      return iVar7;
    }
    if ((param_5[10] != 0) && (iVar7 = FUN_1013b1e8(DAT_10110230,0xa52), iVar7 != 0)) {
      return iVar7;
    }
    iVar7 = FUN_1013b1e8(DAT_1010fdd8,0xa26,param_9);
    if (iVar7 != 0) {
      return iVar7;
    }
    iVar7 = FUN_1013b1e8(DAT_1010fdd8,0xa28,param_5[6]);
    if (iVar7 != 0) {
      return iVar7;
    }
    uVar12 = param_5[2];
    if ((ushort)(*(short *)((int)param_5 + 0xe) - 0x427U) < 6) {
      uVar12 = (int)uVar12 / 3 << 2;
    }
    iVar7 = FUN_1013b1e8(DAT_1010fdd8,0xa2a,uVar17 | uVar12);
    if (iVar7 != 0) {
      return iVar7;
    }
    iVar7 = FUN_1013b1e8(DAT_1010fdd8,0xa2c,0);
    if (iVar7 != 0) {
      return iVar7;
    }
    uVar11 = 0xa2e;
    uVar12 = *param_5 | param_5[1] << 0x10;
  }
  else {
    uVar12 = FUN_1010bce0(*(undefined2 *)((int)param_5 + 0xe));
    iVar7 = FUN_1013b1e8(DAT_10110230,0xa25,uVar12 | uVar9);
    if (iVar7 != 0) {
      return iVar7;
    }
    if ((param_5[9] != 0) && (iVar7 = FUN_1013b1e8(DAT_10110230,0xa51), iVar7 != 0)) {
      return iVar7;
    }
    if ((param_5[10] != 0) && (iVar7 = FUN_1013b1e8(DAT_10110230,0xa53), iVar7 != 0)) {
      return iVar7;
    }
    iVar7 = FUN_1013b1e8(DAT_10110230,0xa27,param_9);
    if (iVar7 != 0) {
      return iVar7;
    }
    if (bVar6) {
      uVar12 = *(uint *)(param_5[0x2d] + 0x18);
    }
    else {
      uVar12 = param_5[6];
    }
    iVar7 = FUN_1013b1e8(DAT_10110230,0xa29,uVar12);
    if (iVar7 != 0) {
      return iVar7;
    }
    uVar12 = param_5[2];
    if ((ushort)(*(short *)((int)param_5 + 0xe) - 0x427U) < 6) {
      uVar12 = (int)uVar12 / 3 << 2;
    }
    iVar7 = FUN_1013b1e8(DAT_10110230,0xa2b,uVar12 | uVar17);
    if (iVar7 != 0) {
      return iVar7;
    }
    iVar7 = FUN_1013b1e8(DAT_10110230,0xa2d,0);
    if (iVar7 != 0) {
      return iVar7;
    }
    uVar11 = 0xa2f;
    uVar12 = *param_5 | param_5[1] << 0x10;
  }
  iVar7 = FUN_1013b1e8(DAT_1010fdd8,uVar11,uVar12);
  if (iVar7 != 0) {
    return iVar7;
  }
  local_58 = *param_4;
  local_54 = param_4[1];
  local_50 = param_4[2];
  local_4c = param_4[3];
  local_48 = param_4[4];
  local_44 = param_4[5];
  local_40 = param_4[6];
  local_3c = param_4[7];
  local_38 = param_4[8];
  fStack_34 = param_4[9];
  fStack_30 = param_4[10];
  fStack_2c = param_4[0xb];
  if (bVar5) {
    uVar14 = 0;
    uVar12 = 0;
  }
  else {
    FUN_1010c378(*param_2,param_2[1],&local_ec,&local_58);
    local_12c = local_e8;
    local_124 = local_ec;
    FUN_1010c378(param_2[2],param_2[1],&local_ec,&local_58);
    uVar12 = local_ec;
    if ((int)local_124 <= (int)local_ec) {
      uVar12 = local_124;
    }
    uVar14 = local_e8;
    if ((int)local_12c <= (int)local_e8) {
      uVar14 = local_12c;
    }
    if ((int)local_124 < (int)local_ec) {
      local_124 = local_ec;
    }
    if ((int)local_12c < (int)local_e8) {
      local_12c = local_e8;
    }
    FUN_1010c378(param_2[2],param_2[3],&local_ec,&local_58);
    if ((int)local_ec <= (int)uVar12) {
      uVar12 = local_ec;
    }
    if ((int)local_e8 <= (int)uVar14) {
      uVar14 = local_e8;
    }
    if ((int)local_124 < (int)local_ec) {
      local_124 = local_ec;
    }
    if ((int)local_12c < (int)local_e8) {
      local_12c = local_e8;
    }
    FUN_1010c378(*param_2,param_2[3],&local_ec,&local_58);
    if ((int)local_ec <= (int)uVar12) {
      uVar12 = local_ec;
    }
    if ((int)local_e8 <= (int)uVar14) {
      uVar14 = local_e8;
    }
    if ((int)local_124 < (int)local_ec) {
      local_124 = local_ec;
    }
    uVar12 = uVar12 & ~((int)uVar12 >> 0x1f);
    if ((int)*param_1 <= (int)local_124) {
      local_124 = *param_1;
    }
    if ((int)local_12c < (int)local_e8) {
      local_12c = local_e8;
    }
    uVar14 = uVar14 & ~((int)uVar14 >> 0x1f);
    if ((int)param_1[1] <= (int)local_12c) {
      local_12c = param_1[1];
    }
    if (*(int *)(DAT_10110230 + 0x730) != 0) {
      if ((int)uVar12 < (int)*(uint *)(DAT_10110230 + 0x73c)) {
        uVar12 = *(uint *)(DAT_10110230 + 0x73c);
      }
      if ((int)uVar14 < (int)*(uint *)(DAT_10110230 + 0x740)) {
        uVar14 = *(uint *)(DAT_10110230 + 0x740);
      }
      if ((int)*(uint *)(DAT_10110230 + 0x744) <= (int)local_124) {
        local_124 = *(uint *)(DAT_10110230 + 0x744);
      }
      if ((int)*(uint *)(DAT_10110230 + 0x748) <= (int)local_12c) {
        local_12c = *(uint *)(DAT_10110230 + 0x748);
      }
    }
  }
  iVar7 = DAT_1010fdd8;
  local_c0 = local_58;
  local_bc = local_54;
  local_b8 = local_50 + (local_58 + local_54) * DAT_1010fddc;
  if (*(byte *)((int)param_2 + 0x11) - 1 < 3) {
    uVar16 = (uint)*(byte *)((int)param_2 + 0x11) << 0x14;
  }
  else {
    uVar16 = 0;
  }
  if (*(byte *)(param_2 + 4) < 3) {
    uVar17 = 3 - *(byte *)(param_2 + 4);
  }
  else {
    uVar17 = 0;
  }
  if ((*(byte *)(DAT_1010fdd8 + 0x6cc) & 3) == 2) {
    uVar18 = 0x2000000;
  }
  else {
    uVar18 = 0;
  }
  local_b4 = local_4c;
  local_b0 = local_48;
  local_ac = local_44 + (local_4c + local_48) * DAT_1010fddc;
  if (param_3 == 0x1900) {
    uVar19 = 0x10;
  }
  else {
    uVar19 = 0;
  }
  if (*(short *)((int)param_5 + 0xae) == 0x1b03) {
    uVar8 = 0x3000000;
  }
  else {
    uVar8 = 0;
  }
  uVar9 = *(uint *)(DAT_1010fdd8 + 0x6f4);
  iVar10 = FUN_1013b1e8(DAT_1010fdd8,0xad1,
                        *(uint *)(DAT_1010fdd8 + 0x758) | *(uint *)(DAT_1010fdd8 + 0x75c) |
                        *(uint *)(DAT_1010fdd8 + 0x750) | *(uint *)(DAT_1010fdd8 + 0x754));
  if (iVar10 != 0) {
    return iVar10;
  }
  iVar10 = FUN_1013b1e8(iVar7,0xa00,
                        *(uint *)(iVar7 + 0x794) | *(uint *)(iVar7 + 0x734) | uVar8 |
                        *(uint *)(iVar7 + 0x7cc) | *(uint *)(iVar7 + 0x798) |
                        *(byte *)(iVar7 + 0x6cc) & 3 | local_128 | uVar13 | uVar15 | uVar21 | 2);
  if (iVar10 != 0) {
    return iVar10;
  }
  iVar10 = FUN_1013b1e8(iVar7,0xa34,uVar19 | uVar16 | uVar17 | uVar18 | 0x1000000);
  if (iVar10 != 0) {
    return iVar10;
  }
  iVar10 = FUN_1013b1e8(iVar7,0xa3b,0x3f800000);
  if (iVar10 != 0) {
    return iVar10;
  }
  iVar10 = FUN_1013b1e8(iVar7,0xa3c,0);
  if (iVar10 != 0) {
    return iVar10;
  }
  iVar10 = FUN_1013b1e8(iVar7,0xa02,param_10);
  if (iVar10 != 0) {
    return iVar10;
  }
  iVar10 = FUN_1013b26c(iVar7,0xa40,&local_c0);
  if (iVar10 != 0) {
    return iVar10;
  }
  iVar10 = FUN_1013b26c(iVar7,0xa41,&local_bc);
  if (iVar10 != 0) {
    return iVar10;
  }
  iVar10 = FUN_1013b26c(iVar7,0xa42,&local_b8);
  if (iVar10 != 0) {
    return iVar10;
  }
  iVar10 = FUN_1013b26c(iVar7,0xa43,&local_b4);
  if (iVar10 != 0) {
    return iVar10;
  }
  iVar10 = FUN_1013b26c(iVar7,0xa44,&local_b0);
  if (iVar10 != 0) {
    return iVar10;
  }
  iVar10 = FUN_1013b26c(iVar7,0xa45,&local_ac);
  if (iVar10 != 0) {
    return iVar10;
  }
  iVar10 = FUN_1013b26c(iVar7,0xacd,&local_50);
  if (iVar10 != 0) {
    return iVar10;
  }
  iVar7 = FUN_1013b26c(iVar7,0xace,&local_44);
  if (iVar7 != 0) {
    return iVar7;
  }
  if (((int)(param_2[9] << 0x1f) < 0) && (*(char *)(param_2 + 0xc) != '\0')) {
    if (param_2[5] != 0) {
      local_f0 = param_2[5];
      FUN_10062a28(3,&local_f0);
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[5] = 0;
    }
    uVar21 = param_2[10] + 7 & 0xfffffff8;
    local_a8[0] = uVar21 + 0x10;
    local_a8[1] = 1;
    iVar7 = FUN_10062a28(2,local_a8);
    uVar21 = uVar21 + 8;
    if (iVar7 != 0) {
      return iVar7;
    }
    iVar7 = param_2[10];
    puVar22 = (undefined4 *)((iVar7 + 7U & 0xfffffff8) + (int)local_94);
    *puVar22 = 0;
    puVar22[1] = 0;
    *local_94 = iVar7 + 7U >> 3 | 0x40000000;
    local_94[1] = 0;
    FUN_1011ea40(local_94 + 2,param_2[0xb],param_2[10]);
    *(undefined4 *)((int)local_94 + uVar21) = 0x70000000;
    local_94[(uVar21 >> 2) + 1] = 0;
    param_2[5] = local_98;
    param_2[6] = local_94;
    *(undefined1 *)(param_2 + 0xc) = 0;
    param_2[7] = local_8c;
    param_2[8] = local_a8[0];
  }
  iVar7 = DAT_10110230;
  if ((int)*param_1 < (int)local_124) {
    local_124 = *param_1 - uVar12;
  }
  else {
    local_124 = local_124 - uVar12;
  }
  *(uint *)(DAT_10110230 + 0x6fc) = local_124 | (local_12c - uVar14) * 0x10000;
  iVar10 = FUN_1013b1e8(iVar7,0xa1b,0x11000);
  if (iVar10 != 0) {
    return iVar10;
  }
  iVar10 = FUN_1013b1e8(iVar7,0xa3d,uVar9 >> 6);
  if (iVar10 != 0) {
    return iVar10;
  }
  iVar10 = FUN_1013b1e8(iVar7,0xa39,uVar12 | uVar14 << 0x10);
  if (iVar10 != 0) {
    return iVar10;
  }
  iVar10 = FUN_1013b1e8(iVar7,0xa3a,*(undefined4 *)(iVar7 + 0x6fc));
  if (iVar10 != 0) {
    return iVar10;
  }
  if (-1 < (int)(param_2[9] << 0x1f)) {
    if (((*(byte *)((int)param_2 + 0x32) & 0xfd) == 0) &&
       (iVar7 = FUN_1010c09c(iVar7,param_2[10],param_2[0xb]), iVar7 != 0)) {
      return iVar7;
    }
    if ((*(byte *)((int)param_2 + 0x32) & 0xfd) != 1) {
      return 0;
    }
    iVar7 = FUN_1013b1e8(DAT_101102a4,0xa34,uVar18 | uVar17 | 0x1300200);
    if (iVar7 == 0) {
      iVar7 = FUN_1013b1e8(DAT_101102a4,0xa02,param_2[0x10]);
      if (iVar7 == 0) {
        iVar7 = FUN_1010c09c(DAT_101102a4,param_2[0xf],param_2[0xe]);
        return iVar7;
      }
      return iVar7;
    }
    return iVar7;
  }
  iVar7 = FUN_1010c174(iVar7,param_2[7],param_2[8]);
  return iVar7;
}


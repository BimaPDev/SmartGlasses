/* FUN_1009c984 @ 0x1009c984 */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_1009c984(int *param_1,int param_2,int param_3,int param_4,undefined4 *param_5,ushort *param_6)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint in_fpscr;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 local_2b8;
  int local_2b4;
  float local_2b0;
  float local_2ac;
  undefined1 auStack_2a8 [48];
  undefined1 auStack_278 [48];
  undefined1 auStack_248 [72];
  float local_200 [2];
  int local_1f8;
  int local_1f4;
  
  bVar1 = *(byte *)((int)param_6 + 1);
  uVar2 = *param_6;
  uVar3 = *param_6;
  uVar4 = FUN_1009dbd4();
  iVar5 = 0;
  if (*(int *)(param_6 + 6) != 0) {
    local_200[0] = (float)FUN_101277b8(*(int *)(param_6 + 6));
    if (local_200[0] != 0.0) {
      return 0;
    }
    puVar11 = *(uint **)(param_6 + 6);
    local_1f8 = ((*puVar11 & 0x1fffff) >> 10) - 1;
    local_1f4 = (*(ushort *)((int)puVar11 + 2) >> 5) - 1;
    local_200[1] = local_200[0];
    iVar5 = FUN_1009dc20(puVar11[2],(byte)*puVar11 & 0x1f,local_200);
    if (iVar5 != 1) {
      return 0;
    }
    iVar5 = FUN_1009dbe4();
  }
  iVar8 = (param_4 - param_3) % 0x168;
  FUN_1011ea48(local_200,0,0x1c0);
  fVar6 = DAT_1009cd90;
  iVar9 = *(int *)(param_6 + 2);
  if (param_2 <= *(int *)(param_6 + 2)) {
    iVar9 = param_2;
  }
  fVar16 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  local_2b4 = 0;
  local_2ac = DAT_1009cd90;
  local_2b0 = fVar16;
  FUN_1009c304(param_3,&local_2b0,&local_2ac);
  fVar12 = (float)VectorSignedToFloat(*param_1,(byte)(in_fpscr >> 0x16) & 3);
  local_200[local_2b4] = 2.8026e-45;
  local_200[local_2b4 + 1] = local_2b0 + fVar12;
  fVar12 = (float)VectorSignedToFloat(param_1[1],(byte)(in_fpscr >> 0x16) & 3);
  local_200[local_2b4 + 2] = fVar12 + local_2ac;
  local_2b4 = local_2b4 + 3;
  FUN_1009c4f0(fVar16,local_200,&local_2b4,param_3,param_4,1);
  fVar12 = (float)VectorSignedToFloat(param_2 - iVar9,(byte)(in_fpscr >> 0x16) & 3);
  if (iVar8 == 0) {
    local_2ac = fVar6;
    local_2b0 = fVar16;
    FUN_1009c304(param_3,&local_2b0,&local_2ac);
    fVar15 = (float)VectorSignedToFloat(*param_1,(byte)(in_fpscr >> 0x16) & 3);
    local_200[local_2b4] = 5.60519e-45;
    local_200[local_2b4 + 1] = fVar15 + local_2b0;
    fVar15 = (float)VectorSignedToFloat(param_1[1],(byte)(in_fpscr >> 0x16) & 3);
    local_200[local_2b4 + 2] = fVar15 + local_2ac;
    local_2ac = fVar6;
    local_2b4 = local_2b4 + 3;
    local_2b0 = fVar12;
    FUN_1009c304(param_3,&local_2b0,&local_2ac);
    fVar6 = 2.8026e-45;
    pfVar7 = local_200 + local_2b4;
  }
  else {
    if ((int)((uint)*(byte *)((int)param_6 + 0x11) << 0x1d) < 0) {
      fVar17 = (float)VectorSignedFixedToFloat(iVar9,0x20,1);
      local_2b0 = fVar16 - fVar17;
      local_2ac = fVar6;
      FUN_1009c304(param_4,&local_2b0,&local_2ac);
      fVar6 = (float)VectorSignedToFloat(param_1[1],(byte)(in_fpscr >> 0x16) & 3);
      fVar15 = (float)VectorSignedToFloat(*param_1,(byte)(in_fpscr >> 0x16) & 3);
      FUN_1009c4f0(fVar17,fVar15 + local_2b0,fVar6 + local_2ac,local_200,&local_2b4,param_4,
                   param_4 + 0xb4,1);
      goto LAB_1009cc04;
    }
    local_2ac = fVar6;
    local_2b0 = fVar12;
    FUN_1009c304(param_4,&local_2b0,&local_2ac);
    fVar6 = 5.60519e-45;
    pfVar7 = local_200 + local_2b4;
  }
  *pfVar7 = fVar6;
  fVar6 = (float)VectorSignedToFloat(*param_1,(byte)(in_fpscr >> 0x16) & 3);
  local_200[local_2b4 + 1] = fVar6 + local_2b0;
  fVar6 = (float)VectorSignedToFloat(param_1[1],(byte)(in_fpscr >> 0x16) & 3);
  local_200[local_2b4 + 2] = fVar6 + local_2ac;
  local_2b4 = local_2b4 + 3;
LAB_1009cc04:
  uVar14 = VectorSignedToFloat(param_1[1],(byte)(in_fpscr >> 0x16) & 3);
  uVar13 = VectorSignedToFloat(*param_1,(byte)(in_fpscr >> 0x16) & 3);
  FUN_1009c4f0(fVar12,uVar13,uVar14,local_200,&local_2b4,param_3,param_4,0);
  local_2b0 = fVar12;
  if ((iVar8 == 0) || (local_2b0 = fVar16, (*(byte *)((int)param_6 + 0x11) & 4) == 0)) {
    local_2ac = 0.0;
    FUN_1009c304(param_3,&local_2b0,&local_2ac);
    local_200[local_2b4] = 5.60519e-45;
    fVar6 = (float)VectorSignedToFloat(*param_1,(byte)(in_fpscr >> 0x16) & 3);
    local_200[local_2b4 + 1] = fVar6 + local_2b0;
    fVar6 = (float)VectorSignedToFloat(param_1[1],(byte)(in_fpscr >> 0x16) & 3);
    local_200[local_2b4 + 2] = fVar6 + local_2ac;
    local_2b4 = local_2b4 + 3;
  }
  else {
    fVar15 = (float)VectorSignedFixedToFloat(iVar9,0x20,1);
    local_2b0 = fVar16 - fVar15;
    local_2ac = 0.0;
    FUN_1009c304(param_3,&local_2b0,&local_2ac);
    fVar6 = (float)VectorSignedToFloat(param_1[1],(byte)(in_fpscr >> 0x16) & 3);
    fVar12 = (float)VectorSignedToFloat(*param_1,(byte)(in_fpscr >> 0x16) & 3);
    FUN_1009c4f0(fVar15,fVar12 + local_2b0,fVar6 + local_2ac,local_200,&local_2b4,param_3 + 0xb4,
                 param_3 + 0x168,1);
  }
  fVar6 = (float)VectorSignedToFloat(param_5[3],(byte)(in_fpscr >> 0x16) & 3);
  fVar12 = (float)VectorSignedToFloat(param_5[2],(byte)(in_fpscr >> 0x16) & 3);
  local_200[local_2b4] = 0.0;
  uVar14 = VectorSignedToFloat(param_5[1],(byte)(in_fpscr >> 0x16) & 3);
  iVar9 = local_2b4 * 4;
  uVar13 = VectorSignedToFloat(*param_5,(byte)(in_fpscr >> 0x16) & 3);
  local_2b4 = local_2b4 + 1;
  iVar9 = FUN_1010ef00(uVar13,uVar14,fVar12 + 1.0,fVar6 + 1.0,auStack_248,3,0,iVar9 + 4,local_200);
  if (iVar9 == 0) {
    iVar9 = FUN_1012cf1a(&local_2b8,
                         ((int)((uint)(bVar1 >> 3) * 0x107 + 7) >> 5 & 0xffU) << 0x10 |
                         ((int)(((uVar2 & 0x7ff) >> 5) * 0x103 + 3) >> 6 & 0xffU) << 8 |
                         (int)(((byte)uVar3 & 0x1f) * 0x107 + 7) >> 5 & 0xffU | 0xff000000,
                         (byte)param_6[8],0x400);
    if (iVar9 != 1) {
      return 0;
    }
    FUN_1013b700(auStack_2a8);
    bVar1 = *(byte *)((int)param_6 + 0x11);
    if (((byte)param_6[8] < 0xfd) || (uVar10 = bVar1 & 3, (bVar1 & 3) != 0)) {
      uVar10 = FUN_1012cf78(bVar1 & 3);
    }
    FUN_1010e930(*param_5,param_5[1],param_5[2] + 1,param_5[3] + 1);
    if (iVar5 == 0) {
      iVar9 = FUN_1010efdc(uVar4,auStack_248,0x1901,auStack_2a8,uVar10,local_2b8);
    }
    else {
      FUN_1013b700(auStack_278);
      uVar14 = VectorSignedToFloat(param_1[1] - param_2,(byte)(in_fpscr >> 0x16) & 3);
      uVar13 = VectorSignedToFloat(*param_1 - param_2,(byte)(in_fpscr >> 0x16) & 3);
      FUN_1013b722(uVar13,uVar14,auStack_278);
      iVar9 = FUN_1010f628(uVar4,auStack_248,0x1901,auStack_2a8,iVar5,auStack_278,uVar10,0x1d00,
                           local_2b8,0,0x2000);
    }
    if (iVar9 == 0) {
      iVar5 = FUN_1009dc5c(param_5);
      if (iVar5 != 1) {
        return 0;
      }
      FUN_1010e930(0,0,0x7fffffff);
      iVar5 = FUN_1013b79e(auStack_248);
      if (iVar5 != 0) {
        FUN_10094174(3,DAT_1009ce90,0xff,DAT_1009ce88,DAT_1009ce8c,iVar5);
        return 0;
      }
      return 1;
    }
    uVar14 = 0xf7;
    uVar4 = DAT_1009ce88;
    uVar13 = DAT_1009ce84;
  }
  else {
    uVar14 = 0xdb;
    uVar4 = DAT_1009cd98;
    uVar13 = DAT_1009cd94;
  }
  FUN_10094174(3,DAT_1009cd9c,uVar14,uVar4,uVar13,iVar9);
  return 0;
}


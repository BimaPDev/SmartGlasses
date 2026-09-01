/* FUN_1008dee0 @ 0x1008dee0 */

void FUN_1008dee0(int param_1,undefined2 *param_2,int *param_3,uint param_4,ushort param_5,
                 ushort param_6)

{
  short sVar1;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  int local_1cc;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  undefined1 auStack_174 [36];
  undefined1 auStack_150 [36];
  undefined1 auStack_12c [12];
  undefined4 local_120;
  undefined4 local_108;
  byte local_104;
  undefined1 local_103;
  undefined2 local_102;
  int local_f4;
  undefined1 local_ea;
  undefined1 auStack_bc [144];
  short sVar2;
  
  uVar13 = (uint)param_5;
  uVar12 = (uint)param_6;
  if (*(byte *)(param_2 + 8) < 3) {
    return;
  }
  uVar15 = *(uint *)(param_2 + 2);
  if (uVar15 == 0) {
    return;
  }
  if (uVar13 == uVar12) {
    return;
  }
  FUN_1008d20c(&local_108);
  local_104 = (byte)(((uint)*(byte *)((int)param_2 + 0x11) << 0x1e) >> 0x1e);
  if (*(int *)(param_2 + 6) == 0) {
    local_102 = *param_2;
    local_103 = *(undefined1 *)(param_2 + 8);
  }
  else {
    local_103 = 0;
    local_f4 = *(int *)(param_2 + 6);
    local_ea = *(undefined1 *)(param_2 + 8);
  }
  local_1b4 = *param_3 - param_4;
  local_198 = *(int *)(param_2 + 2);
  local_1ac = *param_3 + -1 + param_4;
  local_19c = local_1ac - local_198;
  local_1b0 = param_3[1] - param_4;
  local_1a4 = local_1b4 + local_198;
  local_1a8 = param_3[1] + -1 + param_4;
  local_1a0 = local_1b0 + local_198;
  local_198 = local_1a8 - local_198;
  if (((local_19c + 1) - local_1a4 < 1) || ((local_198 + 1) - local_1a0 < 1)) {
    local_1cc = -1;
    bVar3 = false;
  }
  else {
    FUN_1008cd8c(auStack_174,&local_1a4,0x7fff,1);
    local_1cc = FUN_1008ca4c(auStack_174,0);
    bVar3 = true;
  }
  FUN_1008cd8c(auStack_150,&local_1b4,0x7fff,0);
  uVar5 = FUN_1008ca4c(auStack_150,0);
  if ((uVar13 + 0x168 == uVar12) || (uVar13 == uVar12 + 0x168)) {
    local_108 = 0x7fff;
    FUN_10128076(param_1,&local_108,&local_1b4);
    FUN_1008cadc(uVar5);
    if (local_1cc != -1) {
      FUN_1008cadc(local_1cc);
    }
    FUN_1008cb2c(auStack_150);
    if (!bVar3) {
      return;
    }
    FUN_1008cb2c(auStack_174);
    return;
  }
  for (; 0x167 < uVar13; uVar13 = uVar13 - 0x168 & 0xffff) {
  }
  for (; 0x167 < uVar12; uVar12 = uVar12 - 0x168 & 0xffff) {
  }
  FUN_1008ccfc(auStack_bc,*param_3,param_3[1],uVar13,uVar12);
  uVar6 = FUN_1008ca4c(auStack_bc,0);
  if (uVar13 < uVar12) {
    iVar10 = (uVar13 + 0x168) - uVar12;
  }
  else {
    iVar10 = uVar13 - uVar12;
  }
  if ((int)param_4 <= (int)uVar15) {
    uVar15 = param_4;
  }
  uVar14 = *(undefined4 *)(param_1 + 8);
  sVar1 = (short)uVar13;
  sVar2 = (short)uVar12;
  if ((iVar10 < 0x3d) || (param_4 < 0xb)) {
    FUN_10128076(param_1,&local_108,&local_1b4);
    goto LAB_1008e2ec;
  }
  uVar8 = uVar13 / 0x5a;
  uVar11 = uVar12 / 0x5a;
  local_120 = CONCAT22((short)uVar11,(short)uVar8);
  uVar4 = local_120;
  if ((local_120 == 0) && (uVar13 < uVar12)) {
    iVar7 = param_3[1];
    iVar10 = FUN_1013d980((int)sVar1);
    local_180 = iVar7 + ((int)((param_4 - uVar15) * iVar10) >> 0xf);
    iVar7 = *param_3;
    iVar10 = FUN_1013d980((int)(short)(sVar1 + 0x5a));
    iVar9 = param_3[1];
    local_17c = iVar7 + ((int)(param_4 * iVar10) >> 0xf);
    iVar10 = FUN_1013d980((int)sVar2);
    local_178 = iVar9 + ((int)(param_4 * iVar10) >> 0xf);
    iVar7 = *param_3;
    iVar10 = FUN_1013d980((int)(short)(sVar2 + 0x5a));
    local_184 = iVar7 + ((int)((param_4 - uVar15) * iVar10) >> 0xf);
LAB_1008e0fe:
    iVar10 = FUN_1012a896(&local_184,&local_184,uVar14);
    if (iVar10 != 0) {
      *(int **)(param_1 + 8) = &local_184;
      FUN_10128076(param_1,&local_108,&local_1b4);
    }
  }
  else if (uVar13 < 0x5a) {
    iVar7 = param_3[1];
    local_184 = *param_3;
    local_178 = param_4 + iVar7;
    iVar10 = FUN_1013d980((int)sVar1);
    local_180 = iVar7 + ((int)(iVar10 * (param_4 - uVar15)) >> 0xf);
    iVar7 = *param_3;
    iVar10 = FUN_1013d980((int)(short)(sVar1 + 0x5a));
    local_17c = iVar7 + ((int)(param_4 * iVar10) >> 0xf);
    iVar10 = FUN_1012a896(&local_184,&local_184,uVar14);
    if (iVar10 != 0) {
      *(int **)(param_1 + 8) = &local_184;
      FUN_10128076(param_1,&local_108,&local_1b4);
    }
    if (uVar12 < 0x5a) goto LAB_1008e412;
  }
  else {
    if (uVar12 < 0x5a) {
LAB_1008e412:
      iVar7 = param_3[1];
      local_17c = *param_3 + param_4;
      local_180 = iVar7;
      iVar10 = FUN_1013d980((int)sVar2);
      local_178 = iVar7 + ((int)(param_4 * iVar10) >> 0xf);
      iVar7 = *param_3;
      iVar10 = FUN_1013d980((int)(short)(sVar2 + 0x5a));
      local_184 = iVar7 + ((int)((param_4 - uVar15) * iVar10) >> 0xf);
      goto LAB_1008e0fe;
    }
    if ((((uVar8 == uVar11) && (uVar12 < uVar13)) || (local_120 - 0x10002 < 2)) ||
       (local_120 == DAT_1008e788)) {
      local_184 = *param_3;
      local_180 = param_3[1];
      local_17c = local_184 + param_4;
      local_178 = local_180 + param_4;
      goto LAB_1008e0fe;
    }
  }
  *(undefined4 *)(param_1 + 8) = uVar14;
  if ((uVar4 == 0x10001) && (uVar13 < uVar12)) {
    iVar7 = param_3[1];
    iVar10 = FUN_1013d980((int)sVar1);
    local_178 = iVar7 + ((int)(param_4 * iVar10) >> 0xf);
    iVar7 = *param_3;
    iVar10 = FUN_1013d980((int)(short)(sVar1 + 0x5a));
    local_17c = iVar7 + ((int)((param_4 - uVar15) * iVar10) >> 0xf);
    iVar7 = param_3[1];
    iVar10 = FUN_1013d980((int)sVar2);
    local_180 = iVar7 + ((int)((param_4 - uVar15) * iVar10) >> 0xf);
LAB_1008e17e:
    iVar7 = *param_3;
    iVar10 = FUN_1013d980((int)(short)(sVar2 + 0x5a));
    local_184 = iVar7 + ((int)(param_4 * iVar10) >> 0xf);
LAB_1008e198:
    iVar10 = FUN_1012a896(&local_184,&local_184,uVar14);
    if (iVar10 != 0) {
      *(int **)(param_1 + 8) = &local_184;
      FUN_10128076(param_1,&local_108,&local_1b4);
    }
  }
  else {
    if (uVar8 != 1) {
      if (uVar11 == 1) goto LAB_1008e4f4;
      if (((uVar8 != uVar11) || (uVar13 <= uVar12)) &&
         (((uVar4 & 0xfffeffff) != 0x20000 && (uVar4 != DAT_1008e788)))) goto LAB_1008e1b4;
      local_184 = *param_3 - param_4;
      local_180 = param_3[1];
      local_17c = *param_3 + -1;
      local_178 = local_180 + param_4;
      goto LAB_1008e198;
    }
    iVar7 = param_3[1];
    local_184 = *param_3 - param_4;
    local_180 = iVar7;
    iVar10 = FUN_1013d980((int)sVar1);
    local_178 = iVar7 + ((int)(param_4 * iVar10) >> 0xf);
    iVar7 = *param_3;
    iVar10 = FUN_1013d980((int)(short)(sVar1 + 0x5a));
    local_17c = iVar7 + ((int)((param_4 - uVar15) * iVar10) >> 0xf);
    iVar10 = FUN_1012a896(&local_184,&local_184,uVar14);
    if (iVar10 != 0) {
      *(int **)(param_1 + 8) = &local_184;
      FUN_10128076(param_1,&local_108,&local_1b4);
    }
    if (uVar11 == 1) {
LAB_1008e4f4:
      iVar7 = param_3[1];
      local_17c = *param_3 + -1;
      local_178 = param_4 + iVar7;
      iVar10 = FUN_1013d980((int)sVar2);
      local_180 = iVar7 + ((int)((param_4 - uVar15) * iVar10) >> 0xf);
      goto LAB_1008e17e;
    }
  }
LAB_1008e1b4:
  *(undefined4 *)(param_1 + 8) = uVar14;
  if ((uVar4 == 0x20002) && (uVar13 < uVar12)) {
    iVar9 = *param_3;
    iVar10 = FUN_1013d980((int)(short)(sVar1 + 0x5a));
    iVar7 = param_3[1];
    local_184 = iVar9 + ((int)(param_4 * iVar10) >> 0xf);
    iVar10 = FUN_1013d980((int)sVar1);
    local_178 = iVar7 + ((int)((param_4 - uVar15) * iVar10) >> 0xf);
    iVar7 = param_3[1];
    iVar10 = FUN_1013d980((int)sVar2);
    local_180 = iVar7 + ((int)(param_4 * iVar10) >> 0xf);
    iVar7 = *param_3;
    iVar10 = FUN_1013d980((int)(short)(sVar2 + 0x5a));
    local_17c = iVar7 + ((int)((param_4 - uVar15) * iVar10) >> 0xf);
LAB_1008e232:
    iVar10 = FUN_1012a896(&local_184,&local_184,uVar14);
    if (iVar10 != 0) {
      *(int **)(param_1 + 8) = &local_184;
      FUN_10128076(param_1,&local_108,&local_1b4);
    }
  }
  else if (uVar8 == 2) {
    iVar7 = *param_3;
    local_17c = iVar7 + -1;
    local_180 = param_3[1] - param_4;
    iVar10 = FUN_1013d980((int)(short)(sVar1 + 0x5a));
    local_184 = iVar7 + ((int)(param_4 * iVar10) >> 0xf);
    iVar7 = param_3[1];
    iVar10 = FUN_1013d980((int)sVar1);
    local_178 = iVar7 + ((int)((param_4 - uVar15) * iVar10) >> 0xf);
    iVar10 = FUN_1012a896(&local_184,&local_184,uVar14);
    if (iVar10 != 0) {
      *(int **)(param_1 + 8) = &local_184;
      FUN_10128076(param_1,&local_108,&local_1b4);
    }
    if (uVar11 == 2) goto LAB_1008e5be;
  }
  else {
    if (uVar11 == 2) {
LAB_1008e5be:
      iVar7 = *param_3;
      local_184 = iVar7 - param_4;
      local_178 = param_3[1] + -1;
      iVar10 = FUN_1013d980((int)(short)(sVar2 + 0x5a));
      local_17c = iVar7 + ((int)((param_4 - uVar15) * iVar10) >> 0xf);
      iVar7 = param_3[1];
      iVar10 = FUN_1013d980((int)sVar2);
      local_180 = iVar7 + ((int)(param_4 * iVar10) >> 0xf);
      goto LAB_1008e232;
    }
    if ((((uVar8 == uVar11) && (uVar12 < uVar13)) || (uVar4 - 0x30000 < 2)) || (uVar4 == 1)) {
      local_184 = *param_3 - param_4;
      local_17c = *param_3 + -1;
      local_180 = param_3[1] - param_4;
      local_178 = param_3[1] + -1;
      goto LAB_1008e232;
    }
  }
  *(undefined4 *)(param_1 + 8) = uVar14;
  if ((uVar4 == 0x30003) && (uVar13 < uVar12)) {
    iVar7 = *param_3;
    iVar10 = FUN_1013d980((int)(short)(sVar1 + 0x5a));
    local_184 = iVar7 + ((int)((param_4 - uVar15) * iVar10) >> 0xf);
    iVar7 = param_3[1];
    iVar10 = FUN_1013d980((int)sVar1);
    local_180 = iVar7 + ((int)(param_4 * iVar10) >> 0xf);
    iVar7 = *param_3;
    iVar10 = FUN_1013d980((int)(short)(sVar2 + 0x5a));
    local_17c = iVar7 + ((int)(param_4 * iVar10) >> 0xf);
    iVar7 = param_3[1];
    iVar10 = FUN_1013d980((int)sVar2);
    local_178 = iVar7 + ((int)((param_4 - uVar15) * iVar10) >> 0xf);
LAB_1008e2cc:
    iVar10 = FUN_1012a896(&local_184,&local_184,uVar14);
    if (iVar10 != 0) {
      *(int **)(param_1 + 8) = &local_184;
      FUN_10128076(param_1,&local_108,&local_1b4);
    }
  }
  else if (uVar8 == 3) {
    iVar7 = *param_3;
    local_17c = param_4 + iVar7;
    local_178 = param_3[1] + -1;
    iVar10 = FUN_1013d980((int)(short)(sVar1 + 0x5a));
    local_184 = iVar7 + ((int)((param_4 - uVar15) * iVar10) >> 0xf);
    iVar7 = param_3[1];
    iVar10 = FUN_1013d980((int)sVar1);
    local_180 = iVar7 + ((int)(param_4 * iVar10) >> 0xf);
    iVar10 = FUN_1012a896(&local_184,&local_184,uVar14);
    if (iVar10 != 0) {
      *(int **)(param_1 + 8) = &local_184;
      FUN_10128076(param_1,&local_108,&local_1b4);
    }
    if (uVar11 == 3) {
LAB_1008e6a4:
      iVar7 = *param_3;
      local_180 = param_3[1] - param_4;
      local_184 = iVar7;
      iVar10 = FUN_1013d980((int)(short)(sVar2 + 0x5a));
      local_17c = iVar7 + ((int)(param_4 * iVar10) >> 0xf);
      iVar7 = param_3[1];
      iVar10 = FUN_1013d980((int)sVar2);
      local_178 = iVar7 + ((int)((param_4 - uVar15) * iVar10) >> 0xf);
      goto LAB_1008e2cc;
    }
  }
  else {
    if (uVar11 == 3) goto LAB_1008e6a4;
    if (((uVar8 == uVar11) && (uVar12 < uVar13)) || ((uVar4 - 1 < 2 || (uVar4 == DAT_1008e78c)))) {
      local_184 = *param_3;
      local_180 = param_3[1] - param_4;
      local_17c = local_184 + param_4;
      local_178 = param_3[1] + -1;
      goto LAB_1008e2cc;
    }
  }
  *(undefined4 *)(param_1 + 8) = uVar14;
LAB_1008e2ec:
  FUN_1008cb2c(auStack_bc);
  FUN_1008cb2c(auStack_150);
  if (bVar3) {
    FUN_1008cb2c(auStack_174);
  }
  FUN_1008cadc(uVar6);
  FUN_1008cadc(uVar5);
  if (local_1cc != -1) {
    FUN_1008cadc(local_1cc);
  }
  if ((int)((uint)*(byte *)((int)param_2 + 0x11) << 0x1d) < 0) {
    FUN_1012820e((int)sVar1,param_4,uVar15 & 0xff,&local_194);
    local_194 = local_194 + *param_3;
    local_18c = local_18c + *param_3;
    local_190 = local_190 + param_3[1];
    local_188 = local_188 + param_3[1];
    iVar10 = FUN_1012a896(&local_184,uVar14,&local_194);
    if (iVar10 != 0) {
      FUN_1008cd8c(auStack_12c,&local_194,0x7fff,0);
      uVar5 = FUN_1008ca4c(auStack_12c,0);
      *(int **)(param_1 + 8) = &local_184;
      FUN_10128076(param_1,&local_108,&local_1b4);
      FUN_1008cadc(uVar5);
      FUN_1008cb2c(auStack_12c);
    }
    FUN_1012820e((int)sVar2,param_4,uVar15 & 0xff,&local_194);
    local_194 = local_194 + *param_3;
    local_18c = local_18c + *param_3;
    local_190 = local_190 + param_3[1];
    local_188 = local_188 + param_3[1];
    iVar10 = FUN_1012a896(&local_184,uVar14,&local_194);
    if (iVar10 != 0) {
      FUN_1008cd8c(auStack_12c,&local_194,0x7fff,0);
      uVar5 = FUN_1008ca4c(auStack_12c,0);
      *(int **)(param_1 + 8) = &local_184;
      FUN_10128076(param_1,&local_108,&local_1b4);
      FUN_1008cadc(uVar5);
      FUN_1008cb2c(auStack_12c);
    }
    *(undefined4 *)(param_1 + 8) = uVar14;
  }
  return;
}


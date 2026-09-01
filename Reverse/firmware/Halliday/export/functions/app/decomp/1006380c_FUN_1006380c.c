/* FUN_1006380c @ 0x1006380c */

void FUN_1006380c(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint local_98;
  uint local_94;
  int *local_6c;
  uint local_68 [17];
  
  iVar15 = 0;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar6 = param_1[4];
  uVar7 = param_1[5];
  uVar8 = param_1[6];
  uVar9 = param_1[7];
  uVar13 = uVar6;
  uVar11 = uVar2;
  uVar16 = uVar9;
  piVar17 = DAT_100639d4;
  uVar19 = uVar8;
  uVar20 = uVar7;
  uVar22 = uVar5;
  local_98 = uVar3;
  local_94 = uVar4;
  while( true ) {
    uVar12 = uVar11;
    uVar1 = uVar13;
    uVar14 = local_94;
    uVar13 = *(uint *)(param_2 + iVar15);
    uVar13 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
             uVar13 >> 0x18;
    *(uint *)((int)local_68 + iVar15) = uVar13;
    iVar15 = iVar15 + 4;
    iVar10 = (uVar19 & ~uVar1 ^ uVar1 & uVar20) +
             ((uVar1 >> 0xb | uVar1 << 0x15) ^ (uVar1 >> 6 | uVar1 << 0x1a) ^
             (uVar1 >> 0x19 | uVar1 << 7)) + uVar13 + *piVar17 + uVar16;
    uVar13 = iVar10 + uVar22;
    uVar11 = iVar10 + ((uVar12 >> 0xd | uVar12 << 0x13) ^ (uVar12 >> 2 | uVar12 << 0x1e) ^
                      (uVar12 >> 0x16 | uVar12 << 10)) +
                      ((local_94 ^ local_98) & uVar12 ^ local_98 & local_94);
    if (iVar15 == 0x40) break;
    local_94 = local_98;
    uVar16 = uVar19;
    piVar17 = piVar17 + 1;
    uVar19 = uVar20;
    uVar20 = uVar1;
    uVar22 = uVar14;
    local_98 = uVar12;
  }
  local_6c = DAT_100639d0;
  uVar16 = 0x10;
  uVar22 = local_98;
  do {
    local_98 = uVar22;
    uVar21 = uVar20;
    uVar14 = uVar13;
    uVar22 = uVar12;
    uVar12 = uVar11;
    uVar20 = uVar1;
    uVar18 = uVar16 + 1;
    uVar13 = local_68[uVar18 & 0xf];
    uVar11 = local_68[uVar16 + 0xe & 0xf];
    uVar13 = local_68[uVar16 + 9 & 0xf] + local_68[uVar16 & 0xf] +
             ((uVar13 >> 0x12 | uVar13 << 0xe) ^ (uVar13 >> 7 | uVar13 << 0x19) ^ uVar13 >> 3) +
             ((uVar11 >> 0x13 | uVar11 << 0xd) ^ (uVar11 >> 0x11 | uVar11 << 0xf) ^ uVar11 >> 10);
    local_68[uVar16 & 0xf] = uVar13;
    iVar15 = uVar13 + (uVar21 & ~uVar14 ^ uVar14 & uVar20) +
                      ((uVar14 >> 0xb | uVar14 << 0x15) ^ (uVar14 >> 6 | uVar14 << 0x1a) ^
                      (uVar14 >> 0x19 | uVar14 << 7)) + *local_6c + uVar19;
    uVar13 = local_94 + iVar15;
    local_94 = local_98;
    uVar11 = iVar15 + ((uVar12 >> 0xd | uVar12 << 0x13) ^ (uVar12 >> 2 | uVar12 << 0x1e) ^
                      (uVar12 >> 0x16 | uVar12 << 10)) +
                      ((uVar22 ^ local_98) & uVar12 ^ uVar22 & local_98);
    uVar1 = uVar14;
    uVar16 = uVar18;
    uVar19 = uVar21;
    local_6c = local_6c + 1;
  } while (uVar18 != 0x40);
  *param_1 = uVar2 + uVar11;
  param_1[1] = uVar3 + uVar12;
  param_1[2] = uVar4 + uVar22;
  param_1[3] = uVar5 + local_98;
  param_1[4] = uVar6 + uVar13;
  param_1[5] = uVar7 + uVar14;
  param_1[6] = uVar8 + uVar20;
  param_1[7] = uVar9 + uVar21;
  return;
}


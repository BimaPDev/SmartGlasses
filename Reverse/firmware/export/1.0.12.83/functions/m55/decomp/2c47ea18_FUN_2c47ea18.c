/* FUN_2c47ea18 @ 0x2c47ea18 */

void FUN_2c47ea18(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int *local_15c;
  uint uStack_130;
  uint local_12c [64];
  int local_2c;
  
  puVar9 = &uStack_130;
  local_2c = *DAT_2c47eb74;
  puVar4 = (uint *)(param_1 + 0x10);
  puVar5 = puVar9;
  do {
    uVar6 = *puVar4;
    puVar5 = puVar5 + 1;
    *puVar5 = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
              uVar6 >> 0x18;
    puVar4 = puVar4 + 1;
  } while (local_12c + 0xf != puVar5);
  puVar5 = local_12c;
  do {
    uVar6 = puVar5[1];
    uVar10 = puVar5[0xe];
    puVar4 = puVar5 + 1;
    puVar5[0x10] = ((uVar6 >> 0x12 | uVar6 << 0xe) ^ (uVar6 >> 7 | uVar6 << 0x19) ^ uVar6 >> 3) +
                   *puVar5 + puVar5[9] +
                   ((uVar10 >> 0x13 | uVar10 << 0xd) ^ (uVar10 >> 0x11 | uVar10 << 0xf) ^
                   uVar10 >> 10);
    puVar5 = puVar4;
  } while (local_12c + 0x30 != puVar4);
  local_15c = DAT_2c47eb78;
  uVar6 = *(uint *)(param_1 + 0x60);
  uVar10 = *(uint *)(param_1 + 0x58);
  uVar8 = *(uint *)(param_1 + 0x54);
  uVar2 = *(uint *)(param_1 + 0x68);
  uVar12 = *(uint *)(param_1 + 100);
  uVar13 = *(uint *)(param_1 + 0x5c);
  uVar14 = *(uint *)(param_1 + 0x6c);
  iVar15 = DAT_2c47eb7c;
  uVar17 = *(uint *)(param_1 + 0x50);
  while( true ) {
    uVar11 = uVar2;
    uVar7 = uVar10;
    uVar3 = uVar6;
    puVar9 = puVar9 + 1;
    iVar15 = iVar15 + *puVar9 + (uVar11 & ~uVar3 ^ uVar3 & uVar12) +
                                ((uVar3 >> 0xb | uVar3 << 0x15) ^ (uVar3 >> 6 | uVar3 << 0x1a) ^
                                (uVar3 >> 0x19 | uVar3 << 7)) + uVar14;
    uVar6 = iVar15 + uVar13;
    uVar16 = iVar15 + ((uVar17 >> 0xd | uVar17 << 0x13) ^ (uVar17 >> 2 | uVar17 << 0x1e) ^
                      (uVar17 >> 0x16 | uVar17 << 10)) + ((uVar8 ^ uVar7) & uVar17 ^ uVar8 & uVar7);
    if (local_12c + 0x3f == puVar9) break;
    local_15c = local_15c + 1;
    iVar15 = *local_15c;
    uVar10 = uVar8;
    uVar8 = uVar17;
    uVar2 = uVar12;
    uVar12 = uVar3;
    uVar13 = uVar7;
    uVar14 = uVar11;
    uVar17 = uVar16;
  }
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) + uVar16;
  *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) + uVar17;
  piVar1 = DAT_2c47eb74;
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) + uVar8;
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) + uVar7;
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) + uVar6;
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) + uVar3;
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) + uVar12;
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) + uVar11;
  if (*piVar1 == local_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


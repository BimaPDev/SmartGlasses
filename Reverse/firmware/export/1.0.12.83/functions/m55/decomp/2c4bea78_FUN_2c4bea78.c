/* FUN_2c4bea78 @ 0x2c4bea78 */

byte * FUN_2c4bea78(undefined4 *param_1,byte *param_2,int *param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 unaff_lr;
  int iVar15;
  int local_2c;
  
  bVar2 = *param_2;
  uVar13 = (uint)bVar2;
  uVar8 = (uint)(bVar2 >> 4);
  if (0x1f < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4bed84,uVar8);
  }
  pbVar11 = (byte *)(uVar13 & 8);
  uVar9 = uVar13 & 0xf;
  if ((bVar2 & 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4bed88,uVar8,uVar9);
  }
  bVar2 = param_2[8];
  uVar10 = bVar2 & 0x3f;
  if (((bVar2 & 0x3e) == 0) || (uVar10 == 5)) {
    uVar12 = 0;
  }
  else {
    bVar1 = param_2[9];
    pbVar5 = DAT_2c4bed64;
    pbVar7 = pbVar11;
    do {
      pbVar5 = pbVar5 + 1;
      if (*pbVar5 == bVar1) {
        uVar6 = 0;
        goto LAB_2c4bebdc;
      }
      pbVar7 = pbVar7 + 1;
    } while (pbVar7 != &MemManage);
    pbVar5 = (byte *)(DAT_2c4bed70 + -1);
    while( true ) {
      pbVar7 = pbVar5 + (1 - DAT_2c4bed70);
      pbVar5 = pbVar5 + 1;
      if (*pbVar5 == bVar1) break;
      if ((byte *)(DAT_2c4bed70 + 0xf) == pbVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(DAT_2c4bed74,bVar1);
      }
    }
    uVar6 = 1;
LAB_2c4bebdc:
    uVar12 = (uint)pbVar7 & 0xff;
    if (uVar6 != uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4bed68,uVar13,bVar1);
    }
  }
  if (((bVar2 & 0x3d) == 0) || (uVar10 == 6)) {
    uVar10 = 0;
  }
  else {
    bVar1 = param_2[10];
    pbVar7 = (byte *)0x0;
    pbVar5 = DAT_2c4bed64;
    do {
      pbVar5 = pbVar5 + 1;
      if (*pbVar5 == bVar1) {
        uVar6 = 0;
        goto LAB_2c4bec06;
      }
      pbVar7 = pbVar7 + 1;
    } while (pbVar7 != &MemManage);
    pbVar5 = (byte *)(DAT_2c4bed70 + -1);
    while( true ) {
      pbVar7 = pbVar5 + (1 - DAT_2c4bed70);
      pbVar5 = pbVar5 + 1;
      if (*pbVar5 == bVar1) break;
      if (pbVar5 == (byte *)(DAT_2c4bed70 + 0xf)) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(DAT_2c4bed78,bVar1);
      }
    }
    uVar6 = 1;
LAB_2c4bec06:
    uVar10 = (uint)pbVar7 & 0xff;
    if (uVar6 != uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4bed6c,uVar13,bVar1);
    }
  }
  if (*(char *)(DAT_2c4bed5c + uVar8 * 8 + uVar9) != '\0') {
    iVar14 = *(int *)(DAT_2c4bed60 + uVar8 * 4);
    if ((*(uint *)(iVar14 + 0x1c) & 1 << uVar9 & 0xff) == 0) {
      if (param_3 == (int *)0x0) {
        iVar15 = iVar14 + uVar9 * 0x20;
        *(uint *)(iVar15 + 0x210) = *(uint *)(iVar15 + 0x210) & 0xfffffffe;
      }
      else {
        if (0x1fffff < *param_3 + 0x100000U) {
          return (byte *)0x1;
        }
        if (0x7ff < (uint)param_3[1]) {
          return (byte *)0x1;
        }
        if (0x1fffff < param_3[2] + 0x100000U) {
          return (byte *)0x1;
        }
        if (0x7ff < (uint)param_3[3]) {
          return (byte *)0x1;
        }
        iVar15 = iVar14 + uVar9 * 0x20;
        *(int *)(iVar15 + 0x200) = param_3[1] | *param_3 << 0xb;
        *(uint *)(iVar15 + 0x204) = param_3[3] & 0x7ffU | param_3[2] << 0xb;
        *(uint *)(iVar15 + 0x210) = *(uint *)(iVar15 + 0x210) | 1;
      }
      local_2c = uVar9 * 0x20;
      if (param_4 == (int *)0x0) {
        *(uint *)(iVar14 + local_2c + 0x210) = *(uint *)(iVar14 + local_2c + 0x210) & 0xfffffffd;
      }
      else {
        if (0x1fffff < *param_4 + 0x100000U) {
          return (byte *)0x1;
        }
        if (0x7ff < (uint)param_4[1]) {
          return (byte *)0x1;
        }
        if (0x1fffff < param_4[2] + 0x100000U) {
          return (byte *)0x1;
        }
        if (0x7ff < (uint)param_4[3]) {
          return (byte *)0x1;
        }
        iVar15 = iVar14 + local_2c;
        *(int *)(iVar15 + 0x208) = param_4[1] | *param_4 << 0xb;
        *(uint *)(iVar15 + 0x20c) = param_4[3] & 0x7ffU | param_4[2] << 0xb;
        *(uint *)(iVar15 + 0x210) = *(uint *)(iVar15 + 0x210) | 2;
      }
      uVar13 = 0;
      if (*(int *)(param_2 + 0x14) != 0) {
        *(int *)(DAT_2c4bed7c + (uVar8 * 8 + uVar9) * 4) = *(int *)(param_2 + 0x14);
        uVar13 = 0xc000;
      }
      uVar6 = 1 << uVar9 & 0xff;
      iVar15 = iVar14 + uVar9 * 0x20;
      bVar1 = param_2[1];
      *(uint *)(iVar14 + 8) = uVar6;
      *(uint *)(iVar14 + 0x10) = uVar6;
      iVar14 = iVar14 + local_2c;
      uVar9 = 0;
      if (bVar1 != 0) {
        uVar9 = 0x80000;
      }
      *(undefined4 *)(iVar15 + 0x100) = *param_1;
      *(undefined4 *)(iVar15 + 0x104) = param_1[1];
      *(undefined4 *)(iVar14 + 0x108) = param_1[2];
      *(undefined4 *)(iVar14 + 0x10c) = param_1[3];
      *(uint *)(iVar14 + 0x110) =
           uVar13 | (uVar12 & 0x1f) << 1 | (bVar2 & 7) << 0xb | (uVar10 & 0x1f) << 6 | uVar9;
      puVar4 = DAT_2c4bed80;
      iVar14 = 0;
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        iVar14 = getBasePriority();
      }
      if (iVar14 != 0x40) {
        *DAT_2c4bed80 = 0x2c4bed10;
        puVar4[1] = unaff_lr;
      }
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        setBasePriority(0x40);
      }
      if (*(code **)(param_2 + 0x18) != (code *)0x0) {
        (**(code **)(param_2 + 0x18))(*param_2);
      }
      local_2c = local_2c + *(int *)(DAT_2c4bed60 + uVar8 * 4);
      *(uint *)(local_2c + 0x110) = *(uint *)(local_2c + 0x110) | 1;
      if (iVar14 == 0) {
        *DAT_2c4bed80 = 0xffffffff;
      }
      bVar3 = (bool)isCurrentModePrivileged();
      if (bVar3) {
        setBasePriority(iVar14);
        return pbVar11;
      }
      return pbVar11;
    }
  }
  return (byte *)0x1;
}


/* FUN_2c615f78 @ 0x2c615f78 */

void FUN_2c615f78(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  short local_e4;
  int local_e0;
  int local_d8;
  short local_cc;
  short local_ca;
  short local_c8;
  short local_c6;
  short local_c4;
  short local_c2;
  short local_c0;
  short local_be;
  short local_bc;
  short local_ba;
  undefined1 auStack_b8 [4];
  short local_b4;
  undefined2 local_b2;
  undefined2 local_b0;
  int local_ac [6];
  short local_94;
  short local_92;
  undefined1 auStack_84 [4];
  undefined4 local_80;
  undefined4 local_7c;
  int *local_70;
  undefined1 *local_6c;
  short *local_60;
  short *psStack_5c;
  undefined1 *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint local_44;
  undefined1 auStack_3c [16];
  int local_2c;
  
  local_2c = *DAT_2c6161f0;
  if (param_3 == 2) {
    piVar12 = (int *)(param_1 + 0x48);
  }
  else if (param_3 == 4) {
    piVar12 = (int *)(param_1 + 0x60);
  }
  else {
    piVar12 = (int *)0x0;
  }
  if ((1 < (*(ushort *)(piVar12 + 2) & 0x7fff)) &&
     ((*(char *)((int)piVar12 + 9) < '\0' || (*piVar12 != 0)))) {
    sVar2 = FUN_2c6033b4(param_1,0,0x12);
    sVar3 = FUN_2c6033b4(param_1,0,0x32);
    iVar6 = FUN_2c607404(param_1);
    uVar1 = *(ushort *)(param_1 + 0x84);
    FUN_2c6129e4(local_ac);
    FUN_2c6007ec(param_1,0x60000,local_ac);
    sVar5 = *(short *)(param_1 + 0x14);
    local_e4 = FUN_2c605068(param_1);
    if (param_3 == 2) {
      if (*(char *)((int)piVar12 + 9) < '\0') {
        sVar4 = FUN_2c6033b4(param_1,0x60000,0x11);
        local_d8 = (int)sVar4;
      }
      else {
        local_d8 = 0;
      }
      iVar11 = (int)*(short *)(param_1 + 0x1a);
      if ((*(short *)(*(int *)(param_2 + 8) + 6) < iVar11) ||
         ((int)*(short *)(local_ac[0] + 8) + iVar11 + local_d8 + (int)(short)*piVar12 <
          (int)*(short *)(*(int *)(param_2 + 8) + 2))) goto LAB_2c6161d6;
    }
    else {
      if (*(char *)((int)piVar12 + 9) < '\0') {
        sVar4 = FUN_2c6033b4(param_1,0x60000,0x10);
        local_d8 = (int)sVar4;
      }
      else {
        local_d8 = 0;
      }
      iVar11 = (int)*(short *)(param_1 + 0x16);
    }
    iVar6 = (uint)uVar1 * iVar6;
    local_e4 = (sVar5 + sVar2 + sVar3) - local_e4;
    local_e0 = iVar6 * 0x100 >> 0x10;
    FUN_2c6120a0(auStack_b8);
    FUN_2c600968(param_1,0x60000,auStack_b8);
    local_b0 = 0;
    local_b2 = 0;
    FUN_2c600b9c(auStack_84,param_2);
    local_70 = local_ac;
    local_6c = auStack_b8;
    local_80 = DAT_2c6161f4;
    local_7c = 6;
    local_50 = 0x60000;
    uStack_4c = 2;
    bVar8 = *(byte *)(param_1 + 0x88) & 7;
    if (bVar8 == 2) {
      sVar5 = FUN_2c6033b4(param_1,0,0x15);
      iVar7 = (int)sVar5 * (uint)*(ushort *)(param_1 + 0x84);
      iVar9 = iVar7 >> 8;
      sVar5 = (short)((local_e0 + iVar9) / (int)(uint)*(ushort *)(param_1 + 0x82));
      iVar9 = sVar5 - iVar9;
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1;
      }
      local_e4 = local_e4 + (short)(iVar9 >> 1);
      bVar8 = *(byte *)(param_1 + 0x88) & 7;
      local_e0 = (int)(short)(((short)((uint)iVar6 >> 8) + (short)((uint)iVar7 >> 8)) - sVar5);
    }
    iVar6 = param_1 + (uint)(param_3 != 2) * 2;
    uVar14 = 0;
    uVar13 = *(ushort *)((int)piVar12 + 6) & 0x7fff;
    local_ca = (short)iVar11;
    uVar15 = uVar13 * ((*(ushort *)(piVar12 + 2) & 0x7fff) - 1);
    while( true ) {
      local_cc = (short)((uVar14 * (local_e0 - local_b4)) / uVar15) + local_e4;
      uVar10 = uVar14 / uVar13;
      uVar13 = uVar13 * uVar10;
      if (param_3 == 2) {
        if (uVar14 == uVar13) {
          local_c6 = (short)*piVar12;
        }
        else {
          local_c6 = *(short *)((int)piVar12 + 2);
        }
      }
      else {
        if (uVar14 == uVar13) {
          local_c6 = (short)*piVar12;
        }
        else {
          local_c6 = *(short *)((int)piVar12 + 2);
        }
        local_c6 = -local_c6;
      }
      local_c6 = (short)iVar11 + local_c6;
      local_60 = &local_cc;
      local_c8 = local_cc;
      psStack_5c = &local_c8;
      if (bVar8 == 3) {
        local_60 = &local_cc;
        uVar10 = FUN_2c62e4a8(uVar14,0,uVar15,(int)*(short *)(iVar6 + 0x74),
                              (int)*(short *)(iVar6 + 0x78));
      }
      local_44 = uVar10;
      if ((uVar14 == uVar13) && (*(char *)((int)piVar12 + 9) < '\0')) {
        FUN_2c62dbd4(auStack_3c,0x10,DAT_2c616350);
        local_70 = local_ac;
        local_54 = 0x10;
        local_58 = auStack_3c;
        FUN_2c602340(param_1,0x1a,auStack_84);
        FUN_2c62b954(&local_c4,local_58,local_ac[0],(int)local_92,(int)local_94,0x1fff,0);
        iVar11 = (int)local_c4;
        if (iVar11 < 0) {
          iVar11 = iVar11 + 1;
        }
        local_bc = (short)((uint)(iVar11 << 0xf) >> 0x10);
        local_c0 = local_c8 - local_bc;
        local_bc = local_c8 + local_bc;
        if (param_3 == 2) {
          local_be = local_c6 + (short)local_d8;
          local_ba = local_be + local_c2;
        }
        else {
          local_ba = local_c6 - (short)local_d8;
          local_be = local_ba - local_c2;
        }
        iVar11 = (int)*(short *)(param_1 + 0x14);
        if ((iVar11 <= local_bc) && (local_c0 <= *(short *)(param_1 + 0x18))) {
          FUN_2c612a20(param_2,local_ac,&local_c0,local_58,0);
          iVar11 = (int)*(short *)(param_1 + 0x14);
        }
      }
      else {
        local_70 = (int *)0x0;
        local_58 = (undefined1 *)0x0;
        local_54 = 0;
        FUN_2c602340(param_1,0x1a,auStack_84);
        iVar11 = (int)*(short *)(param_1 + 0x14);
      }
      iVar9 = (int)local_b4;
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1;
      }
      if ((iVar11 <= (int)local_cc + (iVar9 >> 1)) &&
         ((int)local_c8 - (iVar9 >> 1) <= (int)*(short *)(param_1 + 0x18))) {
        FUN_2c6120f4(param_2,auStack_b8,&local_cc,&local_c8);
      }
      uVar14 = uVar14 + 1;
      FUN_2c602340(param_1,0x1b,auStack_84);
      if (uVar15 < uVar14) break;
      uVar13 = *(ushort *)((int)piVar12 + 6) & 0x7fff;
      iVar11 = (int)local_ca;
      bVar8 = *(byte *)(param_1 + 0x88) & 7;
    }
  }
LAB_2c6161d6:
  if (*DAT_2c6161f0 != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}


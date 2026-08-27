/* FUN_2c615c44 @ 0x2c615c44 */

void FUN_2c615c44(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  short sVar17;
  int iVar18;
  short local_d4;
  short local_d2;
  short local_d0;
  short local_ce;
  short local_cc;
  short local_ca;
  short local_c8;
  short local_c6;
  short local_c4;
  short local_c2;
  undefined1 auStack_c0 [4];
  short local_bc;
  undefined4 local_b4 [6];
  short local_9c;
  short local_9a;
  undefined1 auStack_8c [4];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 *local_78;
  undefined1 *local_74;
  short *local_68;
  short *psStack_64;
  undefined1 *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_4c;
  undefined1 auStack_44 [16];
  int local_34;
  
  if (param_3 == 1) {
    piVar16 = (int *)(param_1 + 0x54);
  }
  else {
    piVar16 = (int *)(param_1 + 0x3c);
  }
  local_34 = *DAT_2c615f6c;
  if ((1 < (*(ushort *)(piVar16 + 2) & 0x7fff)) &&
     ((*(char *)((int)piVar16 + 9) < '\0' || (*piVar16 != 0)))) {
    sVar4 = FUN_2c6033b4(param_1,0,0x32);
    sVar5 = FUN_2c6033b4(param_1,0,0x10);
    iVar8 = FUN_2c607440(param_1);
    uVar2 = *(ushort *)(param_1 + 0x86);
    sVar1 = *(short *)(param_1 + 0x16);
    sVar6 = FUN_2c604a44(param_1);
    if (param_3 == 0) {
      sVar7 = FUN_2c6033b4(param_1,0x60000,0x12);
      sVar9 = *(short *)(param_1 + 0x14);
      sVar17 = (short)*piVar16;
      sVar13 = *(short *)((int)piVar16 + 2);
    }
    else {
      sVar7 = FUN_2c6033b4(param_1,0x60000,0x13);
      sVar17 = -(short)*piVar16;
      sVar9 = *(short *)(param_1 + 0x18);
      sVar13 = -*(short *)((int)piVar16 + 2);
    }
    FUN_2c6120a0(auStack_c0);
    FUN_2c600968(param_1,0x60000,auStack_c0);
    FUN_2c6129e4(local_b4);
    FUN_2c6007ec(param_1,0x60000,local_b4);
    uVar14 = 0;
    FUN_2c600b9c(auStack_8c,param_2);
    local_74 = auStack_c0;
    local_78 = local_b4;
    sVar3 = -1;
    if (param_3 != 0) {
      sVar3 = 1;
    }
    sVar9 = sVar9 + sVar3;
    uVar10 = *(ushort *)((int)piVar16 + 6) & 0x7fff;
    iVar18 = param_1 + param_3 * 2;
    uVar15 = uVar10 * ((*(ushort *)(piVar16 + 2) & 0x7fff) - 1);
    local_88 = DAT_2c615f70;
    local_84 = 6;
    local_58 = 0x60000;
    local_54 = param_3;
    do {
      local_d2 = (short)((uVar14 * (((int)((uint)uVar2 * iVar8 * 0x100) >> 0x10) - (int)local_bc)) /
                        uVar15) + ((sVar5 + sVar4 + sVar1) - sVar6);
      local_d4 = sVar9;
      local_ce = local_d2;
      local_68 = &local_d4;
      psStack_64 = &local_d0;
      if (uVar14 == uVar10 * (uVar14 / uVar10)) {
        local_d0 = sVar9 - sVar17;
        local_4c = FUN_2c62e4a8(uVar15 - uVar14,0,uVar15,(int)*(short *)(iVar18 + 0x6c),
                                (int)*(short *)(iVar18 + 0x70));
        if (-1 < *(char *)((int)piVar16 + 9)) goto LAB_2c615dac;
        FUN_2c62dbd4(auStack_44,0x10,DAT_2c615f74,local_4c);
        local_60 = auStack_44;
        local_78 = local_b4;
        local_5c = 0x10;
        FUN_2c602340(param_1,0x1a,auStack_8c);
        FUN_2c62b954(&local_cc,local_60,local_b4[0],(int)local_9a,(int)local_9c,0x1fff,0);
        iVar11 = (int)local_ca;
        if (iVar11 < 0) {
          iVar11 = iVar11 + 1;
        }
        local_c2 = (short)((uint)(iVar11 << 0xf) >> 0x10);
        local_c6 = local_ce - local_c2;
        local_c2 = local_ce + local_c2;
        if (param_3 == 0) {
          local_c4 = local_d0 - sVar7;
          local_c8 = (local_d0 - local_cc) - sVar7;
        }
        else {
          local_c8 = local_d0 + sVar7;
          local_c4 = sVar7 + local_d0 + local_cc;
        }
        iVar11 = (int)*(short *)(param_1 + 0x16);
        if ((iVar11 <= local_c2) && (local_c6 <= *(short *)(param_1 + 0x1a))) {
          FUN_2c612a20(param_2,local_b4,&local_c8,local_60,0);
          iVar11 = (int)*(short *)(param_1 + 0x16);
        }
      }
      else {
        local_d0 = sVar9 - sVar13;
        local_4c = FUN_2c62e4a8(uVar15 - uVar14,0,uVar15,(int)*(short *)(iVar18 + 0x6c),
                                (int)*(short *)(iVar18 + 0x70));
LAB_2c615dac:
        local_78 = (undefined4 *)0x0;
        local_60 = (undefined1 *)0x0;
        local_5c = 0;
        FUN_2c602340(param_1,0x1a,auStack_8c);
        iVar11 = (int)*(short *)(param_1 + 0x16);
      }
      iVar12 = (int)local_bc;
      if (iVar12 < 0) {
        iVar12 = iVar12 + 1;
      }
      if ((iVar11 <= (int)local_d2 + (iVar12 >> 1)) &&
         ((int)local_ce - (iVar12 >> 1) <= (int)*(short *)(param_1 + 0x1a))) {
        FUN_2c6120f4(param_2,auStack_c0,&local_d4,&local_d0);
      }
      uVar14 = uVar14 + 1;
      FUN_2c602340(param_1,0x1b,auStack_8c);
      if (uVar15 < uVar14) break;
      uVar10 = *(ushort *)((int)piVar16 + 6) & 0x7fff;
    } while( true );
  }
  if (*DAT_2c615f6c != local_34) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}


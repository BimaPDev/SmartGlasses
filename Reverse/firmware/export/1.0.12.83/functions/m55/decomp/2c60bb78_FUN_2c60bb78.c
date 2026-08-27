/* FUN_2c60bb78 @ 0x2c60bb78 */

void FUN_2c60bb78(int param_1,short *param_2,short *param_3,int param_4,short param_5,
                 undefined4 param_6,undefined1 param_7,undefined1 param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int local_c0;
  int local_b8;
  short local_90;
  short local_8e;
  short local_8c;
  short local_8a;
  short local_88;
  short local_86;
  short local_84;
  short local_82;
  undefined1 auStack_80 [24];
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  short *local_50 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  short *local_3c;
  undefined1 local_38;
  undefined1 local_37;
  int local_34;
  
  local_34 = *DAT_2c60be70;
  uVar14 = FUN_2c613fa8(param_2,param_2,param_3,0);
  if ((param_4 == 0 && param_5 == 0) && (((uVar14 ^ 1) & 0xff) != 0)) {
    FUN_2c62c3b0(local_50,0x1c);
    sVar9 = param_3[1];
    local_48 = param_6;
    local_50[0] = &local_68;
    sVar10 = param_2[1];
    sVar11 = *param_2;
    sVar12 = param_2[2];
    local_62 = sVar9 + -1;
    local_38 = param_7;
    sVar5 = *param_3;
    sVar6 = param_2[3];
    sVar7 = param_3[3];
    sVar8 = param_3[2];
    local_66 = sVar7;
    local_68 = sVar11;
    local_64 = sVar12;
    sVar13 = sVar6;
    if (sVar10 <= sVar9) {
      local_66 = sVar10;
      FUN_2c60d588(param_1,local_50);
      local_66 = param_3[3];
      sVar13 = param_2[3];
    }
    local_62 = sVar13;
    local_66 = local_66 + 1;
    if (sVar7 <= sVar6) {
      FUN_2c60d588(param_1,local_50);
    }
    local_64 = *param_3 + -1;
    local_68 = *param_2;
    if (sVar9 < sVar10) {
      local_66 = param_2[1];
    }
    else {
      local_66 = param_3[1];
    }
    if (sVar6 < sVar7) {
      local_62 = param_2[3];
    }
    else {
      local_62 = param_3[3];
    }
    if (sVar11 <= sVar5) {
      FUN_2c60d588(param_1,local_50);
    }
    local_64 = param_2[2];
    local_68 = param_3[2] + 1;
    if (sVar8 <= sVar12) {
      FUN_2c60d588(param_1,local_50);
    }
    goto LAB_2c60bbcc;
  }
  local_c0 = FUN_2c62a6b4(&local_90,param_2,*(undefined4 *)(param_1 + 8));
  if (local_c0 == 0) goto LAB_2c60bbcc;
  iVar20 = (int)(short)((local_8c + 1) - local_90);
  FUN_2c62c3b0(local_50,0x1c);
  local_44 = FUN_2c62bf1c(iVar20);
  if (param_4 < 1) {
    local_b8 = -1;
  }
  else {
    FUN_2c6144a0(auStack_80,param_2,param_4,0);
    local_b8 = FUN_2c613e5c(auStack_80,0);
  }
  FUN_2c6144a0(&local_68,param_3,(int)param_5,1);
  uVar15 = FUN_2c613e5c(&local_68,0);
  local_38 = param_7;
  iVar26 = (int)param_2[1];
  iVar25 = (int)param_3[1];
  local_48 = param_6;
  local_37 = param_8;
  iVar27 = (int)param_2[3];
  iVar18 = (int)param_3[3];
  iVar22 = iVar26 + param_4;
  if (iVar26 + param_4 < iVar25) {
    iVar22 = iVar25;
  }
  sVar9 = (short)iVar22;
  iVar21 = (int)sVar9;
  iVar22 = iVar27 - param_4;
  if (iVar18 <= iVar27 - param_4) {
    iVar22 = iVar18;
  }
  local_50[0] = &local_88;
  sVar10 = (short)iVar22;
  iVar22 = (int)sVar10;
  local_3c = local_50[0];
  if (uVar14 == 0) {
    iVar19 = (int)*param_2;
    iVar17 = (int)param_2[2];
    iVar23 = (int)*param_3;
    iVar16 = (int)param_3[2];
    iVar24 = iVar19 + param_4;
    if (iVar19 + param_4 < iVar23) {
      iVar24 = iVar23;
    }
    sVar11 = (short)iVar24;
    iVar24 = iVar17 - param_4;
    if (iVar16 <= iVar17 - param_4) {
      iVar24 = iVar16;
    }
    bVar1 = iVar19 <= iVar23;
    bVar2 = iVar26 <= iVar25;
    sVar12 = (short)iVar24;
    bVar3 = iVar18 <= iVar27;
    bVar4 = iVar16 <= iVar17;
    if ((((bVar1) && (bVar4)) && (bVar2)) && (bVar3)) {
      if (0x31 < (short)((sVar12 + 1) - sVar11)) {
LAB_2c60c06c:
        local_40 = 1;
        local_82 = param_3[1] + -1;
        local_88 = sVar11;
        local_86 = param_2[1];
        local_84 = sVar12;
        FUN_2c60d588(param_1,local_50);
        goto LAB_2c60be54;
      }
      local_40 = 1;
      local_c0 = 0;
LAB_2c60bd2e:
      local_84 = *param_3 + -1;
      local_88 = *param_2;
      local_86 = sVar9;
      local_82 = sVar10;
      FUN_2c60d588(param_1,local_50);
    }
    else {
      local_40 = 1;
      if (iVar26 <= iVar25) goto LAB_2c60c06c;
LAB_2c60be54:
      if (iVar18 <= iVar27) {
        local_86 = param_3[3] + 1;
        local_82 = param_2[3];
        local_88 = sVar11;
        local_84 = sVar12;
        FUN_2c60d588(param_1,local_50);
      }
      if (iVar19 <= iVar23) goto LAB_2c60bd2e;
    }
    if (iVar16 <= iVar17) {
      local_88 = param_3[2] + 1;
      local_84 = param_2[2];
      local_86 = sVar9;
      local_82 = sVar10;
      FUN_2c60d588(param_1,local_50);
    }
    if (local_c0 == 0) {
      iVar22 = (int)param_2[1];
      if (param_4 < iVar22 - param_3[1]) {
        param_4 = iVar22 - param_3[1];
      }
      local_88 = local_90;
      local_84 = local_8c;
      if (0 < (short)param_4) {
        iVar18 = 0;
        while( true ) {
          sVar9 = (short)iVar22 + (short)iVar18;
          sVar10 = param_2[3] - (short)iVar18;
          iVar22 = (int)sVar9;
          if ((local_8e <= iVar22) || (sVar10 <= local_8a)) {
            FUN_2c62c484(local_44,iVar20);
            local_40 = FUN_2c613e90(local_44,(int)local_88,iVar22,iVar20);
            if (local_8e <= iVar22) {
              local_86 = sVar9;
              local_82 = sVar9;
              FUN_2c60d588(param_1,local_50);
            }
            if (sVar10 <= local_8a) {
              local_86 = sVar10;
              local_82 = sVar10;
              FUN_2c60d588(param_1,local_50);
            }
          }
          if (iVar18 + 1 == (int)(short)param_4) break;
          iVar18 = iVar18 + 1;
          iVar22 = (int)param_2[1];
        }
      }
    }
    else {
      local_88 = local_90;
      iVar20 = sVar11 + -1;
      if ((int)local_8c <= sVar11 + -1) {
        iVar20 = (int)local_8c;
      }
      local_84 = (short)iVar20;
      iVar20 = (int)(short)(local_84 + (1 - local_90));
      if (0 < iVar20) {
        if (((bVar2) || (bVar1)) && (iVar18 = (int)local_8e, iVar18 < iVar21)) {
          do {
            local_86 = (short)iVar18;
            iVar25 = (int)local_86;
            iVar18 = iVar18 + 1;
            local_82 = local_86;
            FUN_2c62c484(local_44,iVar20);
            local_40 = FUN_2c613e90(local_44,(int)local_88,iVar25,iVar20);
            FUN_2c60d588(param_1,local_50);
          } while (iVar18 != iVar21);
        }
        if (((bVar3) || (bVar1)) && (iVar18 = iVar22 + 1, iVar18 <= local_8a)) {
          sVar9 = (short)iVar18;
          do {
            local_86 = ((sVar10 + 1) - sVar9) + (short)iVar18;
            iVar18 = iVar18 + 1;
            iVar25 = (int)local_86;
            local_82 = local_86;
            FUN_2c62c484(local_44,iVar20);
            local_40 = FUN_2c613e90(local_44,(int)local_88,iVar25,iVar20);
            FUN_2c60d588(param_1,local_50);
          } while (iVar18 <= local_8a);
        }
      }
      iVar20 = (int)local_90;
      if ((int)local_90 < sVar12 + 1) {
        iVar20 = sVar12 + 1;
      }
      local_88 = (short)iVar20;
      iVar20 = (int)(short)((local_8c + 1) - local_88);
      local_84 = local_8c;
      if (0 < iVar20) {
        if (((bVar2) || (bVar4)) && (iVar18 = (int)local_8e, iVar18 < iVar21)) {
          do {
            local_86 = (short)iVar18;
            iVar25 = (int)local_86;
            iVar18 = iVar18 + 1;
            local_82 = local_86;
            FUN_2c62c484(local_44,iVar20);
            local_40 = FUN_2c613e90(local_44,(int)local_88,iVar25,iVar20);
            FUN_2c60d588(param_1,local_50);
          } while (iVar18 != iVar21);
        }
        if (((bVar3) || (bVar4)) && (iVar22 = iVar22 + 1, iVar22 <= local_8a)) {
          sVar9 = (short)iVar22;
          do {
            local_86 = ((sVar10 + 1) - sVar9) + (short)iVar22;
            iVar22 = iVar22 + 1;
            iVar18 = (int)local_86;
            local_82 = local_86;
            FUN_2c62c484(local_44,iVar20);
            local_40 = FUN_2c613e90(local_44,(int)local_88,iVar18,iVar20);
            FUN_2c60d588(param_1,local_50);
          } while (iVar22 <= local_8a);
        }
      }
    }
    FUN_2c613f44(&local_68);
    FUN_2c613ee4(uVar15);
LAB_2c60be34:
    FUN_2c613f44(auStack_80);
    FUN_2c613ee4(local_b8);
  }
  else {
    iVar16 = (int)local_8e;
    local_88 = local_90;
    local_84 = local_8c;
    iVar24 = (int)local_8a;
    if (iVar16 <= iVar24) {
      do {
        if ((iVar26 <= iVar25) || (iVar21 <= iVar16)) {
          if ((iVar27 < iVar18) && (iVar22 < iVar16)) break;
          local_86 = (short)iVar16;
          iVar24 = (int)local_86;
          local_82 = local_86;
          FUN_2c62c484(local_44,iVar20);
          local_40 = FUN_2c613e90(local_44,(int)local_90,iVar24,iVar20);
          FUN_2c60d588(param_1,local_50);
          iVar24 = (int)local_8a;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 <= iVar24);
    }
    FUN_2c613f44(&local_68);
    FUN_2c613ee4(uVar15);
    if (local_b8 != -1) goto LAB_2c60be34;
  }
  FUN_2c62c040(local_44);
LAB_2c60bbcc:
  if (*DAT_2c60be70 == local_34) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


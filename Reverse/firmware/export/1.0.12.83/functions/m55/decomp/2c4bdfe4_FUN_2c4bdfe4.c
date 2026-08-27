/* FUN_2c4bdfe4 @ 0x2c4bdfe4 */

undefined4 FUN_2c4bdfe4(uint param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  uint uVar6;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  undefined4 uVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  undefined4 unaff_lr;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  ushort local_28;
  ushort local_26;
  int local_24;
  
  pbVar1 = DAT_2c4be240;
  local_24 = *DAT_2c4be23c;
  uVar6 = param_3;
  if (*DAT_2c4be240 == 0) {
    bVar3 = FUN_2c6742d8();
    *pbVar1 = bVar3;
    uVar6 = extraout_r2;
    if (6 < bVar3 - 10) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4be260,(uint)bVar3);
    }
  }
  iVar5 = param_2 + 1;
  bVar13 = 0x7c < param_2;
  bVar11 = param_2 != 0x7d;
  if (bVar11) {
    bVar13 = iVar5 != 0;
  }
  bVar12 = iVar5 != 1;
  if (bVar13 && (bVar11 && bVar12)) {
    iVar5 = 1;
  }
  if (!bVar13 || (!bVar11 || !bVar12)) {
    iVar5 = 0;
  }
  if (bVar13 && (bVar11 && bVar12)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4be264,param_2);
  }
  if ((7 < param_1) || (((int)(uint)*DAT_2c4be244 >> (param_1 & 0xff) & 1U) != 0)) {
    uVar7 = 0xffffffff;
    goto LAB_2c4be126;
  }
  if (param_1 != 7) {
    *(uint *)(DAT_2c4be248 + param_1 * 4) = param_3;
    *(uint *)(DAT_2c4be24c + param_1 * 4) = param_2;
    puVar2 = DAT_2c4be250;
    if (param_1 == 1) {
      iVar9 = 0;
      bVar13 = (bool)isCurrentModePrivileged();
      if (bVar13) {
        iVar9 = getBasePriority();
      }
      if (iVar9 != 0x40) {
        *DAT_2c4be250 = 0x2c4be04c;
        puVar2[1] = unaff_lr;
      }
      bVar13 = (bool)isCurrentModePrivileged();
      if (bVar13) {
        setBasePriority(0x40);
      }
      uVar6 = (uint)*DAT_2c4be254;
      if (uVar6 == 0) {
        iVar5 = 1;
        *DAT_2c4be254 = 1;
        iVar4 = FUN_2c673f18(1,1);
        if (iVar4 == 0) {
          iVar5 = 1;
          uVar6 = extraout_r2_00;
        }
        else {
          FUN_2c673e88(2,&local_26);
          local_26 = local_26 | 0x8000;
          FUN_2c673d68(2);
          uVar6 = extraout_r2_01;
        }
      }
      if (iVar9 == 0) {
        uVar6 = 0xffffffff;
        *DAT_2c4be250 = 0xffffffff;
      }
      bVar13 = (bool)isCurrentModePrivileged();
      if (bVar13) {
        setBasePriority(iVar9);
      }
      bVar13 = iVar5 != 0;
      iVar5 = 0;
      if (bVar13) {
        FUN_2c673b08(0x14);
        iVar5 = extraout_r1;
        uVar6 = extraout_r2_02;
      }
    }
  }
  puVar2 = DAT_2c4be250;
  iVar9 = 0;
  bVar13 = (bool)isCurrentModePrivileged();
  if (bVar13) {
    iVar9 = getBasePriority();
  }
  if (iVar9 != 0x40) {
    uVar6 = 0x2c4be082;
    *DAT_2c4be250 = 0x2c4be082;
    puVar2[1] = unaff_lr;
  }
  bVar13 = (bool)isCurrentModePrivileged();
  if (bVar13) {
    setBasePriority(0x40);
  }
  if (param_1 == 7) {
    FUN_2c673f18(7,1);
LAB_2c4be098:
    uVar10 = 1 << (param_1 & 0xff);
    FUN_2c673e88(0x26,&local_28);
    uVar8 = (ushort)uVar10;
    uVar10 = uVar10 & 0xffff;
    local_28 = local_28 | uVar8;
    FUN_2c673d68(0x26);
    *DAT_2c4be258 = local_28;
    *DAT_2c4be25c = 1;
    FUN_2c4bd830();
    FUN_2c673e88(0x27,&local_28);
    local_28 = uVar8 | local_28;
    FUN_2c673d68(0x27);
    iVar5 = FUN_2c674018(uVar10);
    if (iVar5 != 0) {
LAB_2c4be1b0:
      FUN_2c673d68(0x52,uVar10);
    }
    if (param_1 != 7) goto LAB_2c4be17a;
    uVar8 = 0x10;
  }
  else {
    FUN_2c673be8(0,iVar5,uVar6,0x40);
    if (param_1 != 1) {
      FUN_2c673f18(param_1,1);
    }
    if (*(int *)(DAT_2c4be248 + param_1 * 4) != 0) goto LAB_2c4be098;
    uVar6 = 1 << (param_1 & 0xff);
    FUN_2c673e88(0x27,&local_28);
    uVar10 = uVar6 & 0xffff;
    local_28 = local_28 | (ushort)uVar6;
    FUN_2c673d68(0x27);
    iVar5 = FUN_2c674018(uVar10);
    if (iVar5 != 0) goto LAB_2c4be1b0;
LAB_2c4be17a:
    FUN_2c673e88(0x1f,&local_26);
    uVar8 = 0x20;
    local_26 = local_26 | 0x1000;
    FUN_2c673d68(0x1f);
    local_26 = 0x7a;
    FUN_2c673d68(0x23);
  }
  FUN_2c4bd788(param_1,1);
  FUN_2c673e88(0x4f,&local_28);
  local_28 = local_28 | uVar8;
  FUN_2c673d68(0x4f);
  if (iVar9 == 0) {
    *DAT_2c4be250 = 0xffffffff;
  }
  bVar13 = (bool)isCurrentModePrivileged();
  uVar7 = 0;
  if (bVar13) {
    setBasePriority(iVar9);
  }
LAB_2c4be126:
  if (*DAT_2c4be23c == local_24) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


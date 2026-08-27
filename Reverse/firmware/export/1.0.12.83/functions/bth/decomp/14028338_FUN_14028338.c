/* FUN_14028338 @ 0x14028338 */

uint FUN_14028338(undefined4 *param_1,byte *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 unaff_lr;
  uint uVar15;
  
  bVar7 = *param_2;
  if (bVar7 >> 4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_14028640,bVar7 >> 4);
  }
  uVar15 = bVar7 & 0xf;
  uVar5 = bVar7 & 8;
  if ((bVar7 & 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_1402863c,0,uVar15);
  }
  bVar7 = param_2[8];
  uVar12 = (uint)bVar7;
  uVar14 = uVar12 & 0x3e;
  if ((bVar7 & 0x3e) == 0) {
LAB_14028394:
    uVar13 = uVar12 & 0x3d;
    if ((bVar7 & 0x3d) != 0) {
      if ((uVar12 & 0x3f) != 6) goto LAB_140285a2;
      uVar13 = 0;
    }
  }
  else {
    uVar14 = uVar5;
    if ((uVar12 & 0x3f) != 5) {
      bVar6 = 0x32;
      pbVar10 = DAT_14028610;
      while (param_2[9] != bVar6) {
        uVar14 = uVar14 + 1;
        if (uVar14 == 0x10) {
                    /* WARNING: Subroutine does not return */
          FUN_1402b0f8(DAT_14028614,param_2[9]);
        }
        pbVar10 = pbVar10 + 1;
        bVar6 = *pbVar10;
      }
      uVar14 = uVar14 & 0xff;
      goto LAB_14028394;
    }
LAB_140285a2:
    uVar13 = 0;
    bVar7 = 0x32;
    pbVar10 = DAT_14028610;
    while (param_2[10] != bVar7) {
      uVar13 = uVar13 + 1;
      if (uVar13 == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_14028638,param_2[10]);
      }
      pbVar10 = pbVar10 + 1;
      bVar7 = *pbVar10;
    }
    uVar13 = uVar13 & 0xff;
  }
  if ((*(char *)(DAT_14028618 + uVar15) == '\0') ||
     ((*(uint *)(DAT_1402861c + 0x1c) & 1 << uVar15 & 0xff) != 0)) {
LAB_14028586:
    uVar5 = 1;
  }
  else {
    if (param_3 == (int *)0x0) {
      iVar11 = DAT_1402861c + uVar15 * 0x20;
      *(uint *)(iVar11 + 0x210) = *(uint *)(iVar11 + 0x210) & 0xfffffffe;
    }
    else {
      if ((((0x1fffff < *param_3 + 0x100000U) || (0x7ff < (uint)param_3[1])) ||
          (0x1fffff < param_3[2] + 0x100000U)) || (0x7ff < (uint)param_3[3])) goto LAB_14028586;
      iVar11 = DAT_1402861c + uVar15 * 0x20;
      *(int *)(uVar15 * 0x20 + 0x40130200) = param_3[1] | *param_3 << 0xb;
      *(uint *)(uVar15 * 0x20 + 0x40130204) = param_3[3] & 0x7ffU | param_3[2] << 0xb;
      *(uint *)(iVar11 + 0x210) = *(uint *)(iVar11 + 0x210) | 1;
    }
    iVar11 = uVar15 * 0x20;
    if (param_4 == (int *)0x0) {
      *(uint *)(iVar11 + 0x40130210) = *(uint *)(iVar11 + 0x40130210) & 0xfffffffd;
    }
    else {
      if (((0x1fffff < *param_4 + 0x100000U) || (0x7ff < (uint)param_4[1])) ||
         ((0x1fffff < param_4[2] + 0x100000U || (0x7ff < (uint)param_4[3])))) goto LAB_14028586;
      *(int *)(iVar11 + 0x40130208) = param_4[1] | *param_4 << 0xb;
      *(uint *)(iVar11 + 0x4013020c) = param_4[3] & 0x7ffU | param_4[2] << 0xb;
      *(uint *)(iVar11 + 0x40130210) = *(uint *)(iVar11 + 0x40130210) | 2;
    }
    uVar4 = 0;
    if (*(int *)(param_2 + 0x14) != 0) {
      *(int *)(DAT_14028620 + uVar15 * 4) = *(int *)(param_2 + 0x14);
      uVar4 = 0xc000;
    }
    iVar9 = DAT_1402861c;
    uVar3 = 0;
    if (param_2[1] != 0) {
      uVar3 = 0x80000;
    }
    uVar8 = 1 << uVar15 & 0xff;
    *(uint *)(DAT_1402861c + 8) = uVar8;
    *(uint *)(iVar9 + 0x10) = uVar8;
    iVar9 = iVar9 + iVar11;
    *(undefined4 *)(uVar15 * 0x20 + 0x40130100) = *param_1;
    *(undefined4 *)(uVar15 * 0x20 + 0x40130104) = param_1[1];
    *(undefined4 *)(iVar9 + 0x108) = param_1[2];
    *(undefined4 *)(iVar9 + 0x10c) = param_1[3];
    *(uint *)(iVar9 + 0x110) = uVar13 << 6 | uVar14 << 1 | (uVar12 & 7) << 0xb | uVar4 | uVar3;
    pbVar10 = DAT_14028644;
    uVar15 = DAT_14028628;
    puVar2 = DAT_14028624;
    iVar9 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar9 = getBasePriority();
    }
    if (iVar9 != 0x40) {
      bVar7 = *DAT_14028644;
      *DAT_14028624 = 0x1402850e;
      puVar2[1] = unaff_lr;
      uVar14 = bVar7 + 1;
      *pbVar10 = (char)uVar14 + (char)(uint)((ulonglong)uVar15 * (ulonglong)uVar14 >> 0x23) * -10;
      *(undefined4 *)(DAT_1402862c + (uint)bVar7 * 4) = unaff_lr;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    if (*(code **)(param_2 + 0x18) != (code *)0x0) {
      (**(code **)(param_2 + 0x18))(*param_2);
    }
    *(uint *)(&DAT_40130110 + iVar11) = *(uint *)(&DAT_40130110 + iVar11) | 1;
    if (iVar9 == 0) {
      *DAT_14028624 = 0xffffffff;
    }
    bVar7 = *DAT_14028630;
    uVar15 = bVar7 + 1;
    *DAT_14028630 =
         (char)uVar15 + (char)(uint)((ulonglong)DAT_14028628 * (ulonglong)uVar15 >> 0x23) * -10;
    *(undefined4 *)(DAT_14028634 + (uint)bVar7 * 4) = unaff_lr;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(iVar9);
    }
  }
  return uVar5;
}


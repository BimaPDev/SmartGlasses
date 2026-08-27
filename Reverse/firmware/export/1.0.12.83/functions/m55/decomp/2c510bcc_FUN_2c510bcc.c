/* FUN_2c510bcc @ 0x2c510bcc */

/* WARNING: Removing unreachable block (ram,0x2c511062) */
/* WARNING: Removing unreachable block (ram,0x2c51118a) */

void FUN_2c510bcc(int *param_1,char *param_2,int param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int local_34;
  int local_30;
  int local_2c;
  
  local_2c = *DAT_2c510e6c;
  bVar3 = FUN_2c50f968();
  bVar3 = bVar3 ^ 1;
  if (param_2 == (char *)0x0) {
    bVar3 = bVar3 | 1;
  }
  if (bVar3 != 0) goto LAB_2c510bfc;
  iVar14 = *param_1;
  FUN_2c62e838(iVar14,DAT_2c510e70);
  local_34 = param_1[0xb11];
  bVar1 = false;
  if (*param_2 == '\0') {
    if (local_34 == 0) goto LAB_2c510bfc;
  }
  else if (local_34 == 0) {
    if (*(byte *)(iVar14 + 0x145) == (*(char *)(iVar14 + 0x144) + 1U & 0x3f)) {
      FUN_2c50f11c(iVar14 + 0x40,&local_34);
      FUN_2c50fd0c(iVar14 + 0x1dc,local_34);
    }
    if (*(byte *)(iVar14 + 0x270) == 0) {
      local_34 = lv_mem_alloc(300);
      if (local_34 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,DAT_2c5111d4,0x287,DAT_2c5111dc,DAT_2c5111d8,DAT_2c5111e0);
      }
    }
    else {
      iVar11 = *(byte *)(iVar14 + 0x270) - 1;
      local_34 = *(int *)(iVar14 + iVar11 * 4 + 0x1dc);
      if (local_34 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(3,DAT_2c5111d4,0x505,DAT_2c5111e8,DAT_2c5111d8,DAT_2c5111e4);
      }
      *(undefined4 *)(iVar11 * 4 + iVar14 + 0x1dc) = 0;
      *(char *)(iVar14 + 0x270) = (char)iVar11;
    }
    iVar11 = 0;
    do {
      iVar15 = local_34 + iVar11;
      uVar4 = *(undefined4 *)(iVar14 + 0x26c);
      puVar9 = (undefined4 *)(iVar15 + -4);
      do {
        puVar9 = puVar9 + 1;
        *puVar9 = 0;
      } while ((undefined4 *)(iVar15 + 0x54) != puVar9);
      *(undefined4 *)(iVar15 + 0x58) = uVar4;
      FUN_2c6129e4(iVar15 + 0x5c);
      iVar11 = iVar11 + 0x94;
      *(undefined1 *)(iVar15 + 0x7c) = 0xff;
      *(undefined4 *)(iVar15 + 0x68) = 0xff00ff00;
      FUN_2c62a624(iVar15 + 0x84,0,0,0,0);
      iVar8 = local_34;
      *(undefined4 *)(iVar15 + 0x8c) = 0;
      *(undefined1 *)(iVar15 + 0x90) = 0;
      *(undefined1 *)(iVar15 + 0x92) = 1;
    } while (iVar11 != 0x128);
    *(undefined4 *)(local_34 + 0x128) = 0;
    uVar7 = *(byte *)(iVar14 + 0x144) + 1 & 0x3f;
    if (*(byte *)(iVar14 + 0x145) != uVar7) {
      *(int *)(iVar14 + (uint)*(byte *)(iVar14 + 0x144) * 4 + 0x40) = local_34;
      *(char *)(iVar14 + 0x144) = (char)uVar7;
      *(char *)(iVar14 + 0x146) = *(char *)(iVar14 + 0x146) + '\x01';
    }
    param_1[0xb11] = local_34;
    *(int **)(local_34 + 0x128) = param_1;
    *(undefined1 *)(local_34 + 0x91) = *(undefined1 *)((int)param_1 + 0x2c32);
    *(undefined1 *)(local_34 + 0x92) = *(undefined1 *)((int)param_1 + 0x2c33);
    uVar4 = FUN_2c6033b4(*param_1,0,0x57);
    iVar11 = local_34;
    *(undefined4 *)(iVar8 + 0x5c) = uVar4;
    *(char *)(iVar8 + 0x7c) = (char)param_1[0xb0c];
    *(undefined1 *)(local_34 + 0x125) = *(undefined1 *)((int)param_1 + 0x2c3e);
    *(undefined1 *)(local_34 + 0x126) = *(undefined1 *)((int)param_1 + 0x2c3f);
    uVar4 = FUN_2c6033b4(*param_1,0,0x57);
    *(undefined4 *)(iVar11 + 0xf0) = uVar4;
    *(char *)(iVar11 + 0x110) = (char)param_1[0xb0f];
    bVar1 = true;
  }
  iVar11 = local_34;
  puVar9 = DAT_2c510e88;
  if (*(char *)(param_4 * 0x94 + local_34 + 0x92) == '\0') goto LAB_2c510bfc;
  piVar6 = param_1 + param_4 * 0x585 + 1;
  if (((char)param_1[param_4 * 3 + 0xb0d] == '\x01') && (param_3 == 0)) {
    iVar8 = 0;
    local_30 = 0;
    puVar13 = DAT_2c510e74;
    do {
      if (param_2[local_30] == '\0') {
        iVar15 = iVar8 + 3;
        goto LAB_2c510eae;
      }
      iVar8 = iVar8 + 1;
      uVar4 = (*(code *)*puVar9)(param_2,&local_30);
      *puVar13 = uVar4;
      puVar13 = puVar13 + 1;
    } while (iVar8 != 0x57d);
    iVar15 = 0x580;
LAB_2c510eae:
    uVar7 = param_1[param_4 * 0x585 + 0x584];
    if (uVar7 < (uint)param_1[param_4 * 0x585 + 0x583]) {
LAB_2c510e2c:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c510e7c,0x2b7,DAT_2c510e84,DAT_2c510e80,DAT_2c510e78);
    }
    uVar5 = uVar7 - param_1[param_4 * 0x585 + 0x583];
    param_1[param_4 * 0x585 + 0x582] = uVar5;
    piVar2 = DAT_2c5111cc;
    if (uVar5 + iVar15 < 0x581) {
      FUN_2c674668(piVar6 + uVar5,DAT_2c5111c4,iVar8 << 2);
      iVar10 = DAT_2c5111c8 + param_1[param_4 * 0x585 + 0x582] + iVar15;
      iVar8 = piVar2[1];
      iVar12 = piVar2[2];
      piVar6[iVar10] = *piVar2;
      piVar6[iVar10 + 1] = iVar8;
      piVar6[iVar10 + 2] = iVar12;
LAB_2c51109c:
      param_1[param_4 * 0x585 + 0x582] = param_1[param_4 * 0x585 + 0x582] + iVar15;
    }
    else {
      uVar16 = (uVar5 + iVar15) - 0x580;
      if (uVar16 < uVar5) {
        FUN_2c673eb8(piVar6,piVar6 + uVar16,(uVar5 - uVar16) * 4);
        FUN_2c674668(piVar6 + (param_1[param_4 * 0x585 + 0x582] - uVar16),DAT_2c5111c4,
                     (iVar15 + -3) * 4);
        iVar10 = (DAT_2c5111c8 + param_1[param_4 * 0x585 + 0x582] + iVar15) - uVar16;
        iVar8 = DAT_2c5111cc[1];
        iVar12 = DAT_2c5111cc[2];
        piVar6[iVar10] = *DAT_2c5111cc;
        piVar6[iVar10 + 1] = iVar8;
        piVar6[iVar10 + 2] = iVar12;
LAB_2c510f3c:
        param_1[param_4 * 0x585 + 0x582] = (param_1[param_4 * 0x585 + 0x582] + iVar15) - uVar16;
        param_1[param_4 * 0x585 + 0x583] = param_1[param_4 * 0x585 + 0x583] + uVar16;
      }
      else {
        param_1[param_4 * 0x585 + 0x583] = uVar7;
        param_1[param_4 * 0x585 + 0x582] = iVar15;
        iVar12 = DAT_2c5111c8;
        FUN_2c674668(piVar6,DAT_2c5111c4,iVar8 << 2);
        iVar12 = iVar12 + iVar15;
        iVar15 = DAT_2c5111cc[1];
        iVar8 = DAT_2c5111cc[2];
        piVar6[iVar12] = *DAT_2c5111cc;
        piVar6[iVar12 + 1] = iVar15;
        piVar6[iVar12 + 2] = iVar8;
      }
    }
  }
  else {
    iVar15 = 0;
    local_30 = 0;
    puVar13 = DAT_2c510e74;
    do {
      if (param_2[local_30] == '\0') {
        uVar7 = param_1[param_4 * 0x585 + 0x584];
        if (uVar7 < (uint)param_1[param_4 * 0x585 + 0x583]) goto LAB_2c510e2c;
        uVar5 = uVar7 - param_1[param_4 * 0x585 + 0x583];
        param_1[param_4 * 0x585 + 0x582] = uVar5;
        if (iVar15 == 0) goto LAB_2c510cd4;
        if (uVar5 + iVar15 < 0x581) goto LAB_2c5110ea;
        uVar16 = (uVar5 + iVar15) - 0x580;
        if (uVar5 <= uVar16) {
          param_1[param_4 * 0x585 + 0x582] = iVar15;
          param_1[param_4 * 0x585 + 0x583] = uVar7;
          goto LAB_2c511048;
        }
        FUN_2c673eb8(piVar6,piVar6 + uVar16,(uVar5 - uVar16) * 4);
        FUN_2c674668(piVar6 + (param_1[param_4 * 0x585 + 0x582] - uVar16),DAT_2c5111c4,iVar15 << 2);
        goto LAB_2c510f3c;
      }
      iVar15 = iVar15 + 1;
      uVar4 = (*(code *)*puVar9)(param_2,&local_30);
      *puVar13 = uVar4;
      puVar13 = puVar13 + 1;
    } while (iVar15 != 0x580);
    uVar7 = param_1[param_4 * 0x585 + 0x584];
    if (uVar7 < (uint)param_1[param_4 * 0x585 + 0x583]) goto LAB_2c510e2c;
    uVar5 = uVar7 - param_1[param_4 * 0x585 + 0x583];
    param_1[param_4 * 0x585 + 0x582] = uVar5;
    if (uVar5 + 0x580 < 0x581) {
LAB_2c5110ea:
      FUN_2c674668(piVar6 + uVar5,DAT_2c5111c4,iVar15 << 2);
      goto LAB_2c51109c;
    }
    param_1[param_4 * 0x585 + 0x583] = uVar7;
    param_1[param_4 * 0x585 + 0x582] = 0x580;
LAB_2c511048:
    FUN_2c674668(piVar6,DAT_2c5111c4,iVar15 << 2);
  }
LAB_2c510cd4:
  if ((uint)param_1[param_4 * 0x585 + 0x584] < (uint)param_1[param_4 * 0x585 + 0x583]) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5111d4,0x2e7,DAT_2c5111dc,DAT_2c5111d8,DAT_2c5111d0);
  }
  iVar11 = param_4 * 0x94 + iVar11;
  FUN_2c51035c(param_1,piVar6,iVar11);
  if (*(int *)(iVar14 + 0x414) != 0) {
    *(int *)(iVar14 + 0x410) = iVar11;
  }
  if (param_3 != 0) {
    param_1[param_4 * 0x585 + 0x584] =
         param_1[param_4 * 0x585 + 0x583] + param_1[param_4 * 0x585 + 0x582];
  }
  FUN_2c50f9b8(iVar14);
  if (bVar1) {
    *(undefined2 *)(iVar14 + 0x414) = 0x14;
  }
  if (*(int *)(iVar14 + 0x27c) != 0) {
    *(undefined2 *)(iVar14 + 0x414) = 0;
  }
  if (*(int *)(iVar14 + 0x414) != 0) {
    FUN_2c62e8ec(iVar14 + 0x418);
  }
  *(char *)(param_1 + param_4 * 0x585 + 0x585) = (char)param_3;
  if ((param_3 != 0) && ((char)param_1[0xb12] != '\0')) {
    FUN_2c510b40(param_1);
  }
  iVar14 = *param_1;
  FUN_2c607df0();
  FUN_2c607588(iVar14);
LAB_2c510bfc:
  if (*DAT_2c510e6c != local_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}


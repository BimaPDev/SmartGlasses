/* FUN_2c47fc18 @ 0x2c47fc18 */

void FUN_2c47fc18(uint param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  uint *local_dc;
  uint local_b4 [2];
  uint local_ac [6];
  uint auStack_94 [2];
  uint local_8c [8];
  uint local_6c [8];
  uint auStack_4c [8];
  int local_2c;
  
  local_2c = *DAT_2c47fea8;
  if (param_4 < 1) {
    bVar2 = (char)param_4 - 1;
    local_6c[0] = 1;
  }
  else {
    puVar6 = (uint *)(param_2 + -4);
    bVar2 = (byte)(param_4 - 1U);
    uVar14 = param_4 - 1U & 0xff;
    puVar3 = local_ac;
    do {
      puVar6 = puVar6 + 1;
      *puVar3 = *puVar6;
      puVar3 = puVar3 + 1;
    } while (puVar6 != (uint *)(param_2 + uVar14 * 4));
    puVar6 = (uint *)(param_3 + -4);
    puVar3 = local_8c;
    do {
      puVar6 = puVar6 + 1;
      *puVar3 = *puVar6;
      puVar3 = puVar3 + 1;
    } while (puVar6 != (uint *)(param_3 + uVar14 * 4));
    puVar6 = local_6c;
    do {
      puVar3 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar3;
    } while (puVar3 != local_6c + uVar14 + 1);
    local_6c[0] = 1;
    puVar6 = auStack_4c;
    do {
      puVar3 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar3;
    } while (puVar3 != auStack_4c + uVar14 + 1);
  }
  local_dc = local_8c;
  local_6c[0] = 1;
  puVar4 = local_ac + param_4;
  iVar18 = (int)(char)bVar2;
  puVar10 = local_dc + param_4;
  iVar7 = iVar18 + 1;
  puVar11 = local_dc + iVar7;
  puVar17 = (uint *)((int)puVar10 + (-8 - (~(uint)local_dc + (int)puVar10 & 0xfffffffc)));
  puVar15 = (uint *)((int)puVar4 + (-8 - (~(uint)local_ac + (int)puVar4 & 0xfffffffc)));
  puVar12 = auStack_4c + iVar7;
  puVar5 = local_ac + iVar7;
  puVar13 = local_6c + iVar7;
  iVar7 = iVar18;
  puVar6 = puVar11;
  puVar3 = puVar5;
  iVar1 = iVar18;
  local_b4[0] = param_1;
joined_r0x2c47fcec:
  do {
    if (iVar1 < 0) {
      if (0 < param_4) {
        puVar6 = (uint *)(local_b4[0] - 4);
        puVar3 = local_6c;
        do {
          puVar6 = puVar6 + 1;
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
        } while ((uint *)(local_b4[0] + (uint)bVar2 * 4) != puVar6);
      }
      if (*DAT_2c47fea8 == local_2c) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    uVar16 = puVar3[-1];
    uVar14 = puVar6[-1];
    if (uVar14 < uVar16) {
      iVar7 = 1;
    }
    else {
      if (uVar14 <= uVar16) {
        iVar7 = iVar7 + -1;
        puVar6 = puVar6 + -1;
        puVar3 = puVar3 + -1;
        iVar1 = iVar7 * 0x1000000;
        goto joined_r0x2c47fcec;
      }
      iVar7 = -1;
    }
    if ((local_ac[0] & 1) == 0) {
      uVar14 = local_ac[0] & 1;
      puVar6 = local_b4 + param_4 + 1;
      if (local_ac < puVar4) {
        do {
          uVar16 = *puVar6;
          puVar3 = puVar6 + -1;
          *puVar6 = uVar14 | uVar16 >> 1;
          uVar14 = uVar16 << 0x1f;
          puVar6 = puVar3;
        } while (puVar3 != puVar15);
      }
LAB_2c47fd7a:
      FUN_2c47fb4c(local_6c,param_3,param_4);
      iVar7 = iVar18;
      puVar6 = puVar11;
      puVar3 = puVar5;
      iVar1 = iVar18;
    }
    else if ((local_8c[0] & 1) == 0) {
      if (local_dc < puVar10) {
        uVar14 = 0;
        puVar6 = auStack_94 + param_4 + 1;
        do {
          uVar16 = *puVar6;
          puVar3 = puVar6 + -1;
          *puVar6 = uVar14 | uVar16 >> 1;
          uVar14 = uVar16 << 0x1f;
          puVar6 = puVar3;
        } while (puVar3 != puVar17);
      }
      FUN_2c47fb4c(auStack_4c,param_3,param_4);
      iVar7 = iVar18;
      puVar6 = puVar11;
      puVar3 = puVar5;
      iVar1 = iVar18;
    }
    else {
      if (iVar7 == 1) {
        FUN_2c47f470(local_ac,local_ac,local_dc,param_4);
        puVar6 = puVar12;
        puVar3 = puVar13;
        iVar7 = iVar18;
        if (local_ac < puVar4) {
          uVar14 = 0;
          puVar9 = local_b4 + param_4 + 1;
          do {
            uVar16 = *puVar9;
            puVar8 = puVar9 + -1;
            *puVar9 = uVar14 | uVar16 >> 1;
            uVar14 = uVar16 << 0x1f;
            puVar9 = puVar8;
          } while (puVar8 != puVar15);
        }
        do {
          uVar16 = puVar3[-1];
          uVar14 = puVar6[-1];
          if (uVar14 < uVar16) break;
          if (uVar16 < uVar14) {
            FUN_2c47f410(local_6c,local_6c,param_3,param_4);
            break;
          }
          iVar7 = iVar7 + -1;
          puVar6 = puVar6 + -1;
          puVar3 = puVar3 + -1;
        } while (-1 < iVar7 * 0x1000000);
        FUN_2c47f470(local_6c,local_6c,auStack_4c,param_4);
        goto LAB_2c47fd7a;
      }
      FUN_2c47f470(local_dc,local_dc,local_ac,param_4);
      puVar6 = puVar13;
      puVar3 = puVar12;
      iVar7 = iVar18;
      if (local_dc < puVar10) {
        uVar14 = 0;
        puVar9 = auStack_94 + param_4 + 1;
        do {
          uVar16 = *puVar9;
          puVar8 = puVar9 + -1;
          *puVar9 = uVar14 | uVar16 >> 1;
          uVar14 = uVar16 << 0x1f;
          puVar9 = puVar8;
        } while (puVar8 != puVar17);
      }
      do {
        uVar16 = puVar3[-1];
        uVar14 = puVar6[-1];
        if (uVar14 < uVar16) break;
        if (uVar16 < uVar14) {
          FUN_2c47f410(auStack_4c,auStack_4c,param_3,param_4);
          break;
        }
        iVar7 = iVar7 + -1;
        puVar6 = puVar6 + -1;
        puVar3 = puVar3 + -1;
      } while (-1 < iVar7 * 0x1000000);
      FUN_2c47f470(auStack_4c,auStack_4c,local_6c,param_4);
      FUN_2c47fb4c(auStack_4c,param_3,param_4);
      iVar7 = iVar18;
      puVar6 = puVar11;
      puVar3 = puVar5;
      iVar1 = iVar18;
    }
  } while( true );
}


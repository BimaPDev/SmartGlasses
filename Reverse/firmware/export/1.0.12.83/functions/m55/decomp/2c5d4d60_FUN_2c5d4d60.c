/* FUN_2c5d4d60 @ 0x2c5d4d60 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_2c5d4d60(int param_1,int *param_2)

{
  uint3 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined4 *local_c4;
  uint *local_c0;
  uint *local_b8;
  uint local_b0;
  int iStack_ac;
  undefined4 local_a8;
  uint *local_a4;
  uint local_a0;
  uint local_9c [4];
  uint *local_8c;
  uint local_88;
  uint local_84 [4];
  uint *local_74;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint *local_5c;
  uint local_58;
  uint local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint *local_44;
  uint local_40;
  uint local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  local_2c = *DAT_2c5d2640;
  if (param_2[1] == *param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5d2a04,0x39c,DAT_2c5d2a00,DAT_2c5d29fc);
  }
  if (*(char *)(param_1 + 0x7b) == '\0') goto LAB_2c5d23ca;
  puVar9 = (undefined1 *)*DAT_2c5d265c;
  local_a4 = local_9c;
  if (puVar9 == (undefined1 *)0x0) goto LAB_2c5d29dc;
  uVar3 = FUN_2c66c4ec(puVar9);
  local_b0 = uVar3;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      local_9c[0] = CONCAT31(local_9c[0]._1_3_,*puVar9);
      puVar4 = local_9c;
    }
    else {
      if (uVar3 != 0) {
        puVar4 = local_9c;
        goto LAB_2c5d2768;
      }
      puVar4 = local_9c;
    }
  }
  else {
    puVar4 = (uint *)FUN_2c5d0388(&local_b0,0);
    local_9c[0] = local_b0;
    local_a4 = puVar4;
LAB_2c5d2768:
    FUN_2c674668(puVar4,puVar9,uVar3);
    puVar4 = local_a4;
  }
  puVar5 = local_a4;
  uVar3 = local_b0;
  *(undefined1 *)((int)puVar4 + local_b0) = 0;
  local_c4 = (undefined4 *)*param_2;
  puVar7 = (undefined4 *)param_2[1];
  local_8c = local_84;
  local_a0 = local_b0;
  if (((undefined1 *)((int)local_a4 + local_b0) != (undefined1 *)0x0) && (local_a4 == (uint *)0x0))
  goto LAB_2c5d29dc;
  if (local_b0 < 0x10) {
    if (local_b0 == 1) {
      local_84[0] = CONCAT31(local_84[0]._1_3_,(char)*local_a4);
    }
    else if (local_b0 != 0) goto LAB_2c5d27dc;
  }
  else {
    local_8c = (uint *)FUN_2c5d0388(&local_b0,0);
    local_84[0] = local_b0;
LAB_2c5d27dc:
    FUN_2c674668(local_8c,puVar5,uVar3);
  }
  puVar4 = local_8c;
  uVar3 = local_b0;
  local_88 = local_b0;
  *(undefined1 *)((int)local_8c + local_b0) = 0;
  local_74 = &local_6c;
  if (((undefined1 *)((int)local_8c + local_b0) != (undefined1 *)0x0) && (local_8c == (uint *)0x0))
  goto LAB_2c5d29dc;
  if (local_b0 < 0x10) {
    if (local_b0 == 1) {
      local_6c = CONCAT31(local_6c._1_3_,(char)*local_8c);
    }
    else if (local_b0 != 0) goto LAB_2c5d27ac;
  }
  else {
    local_74 = (uint *)FUN_2c5d0388(&local_b0,0);
    local_6c = local_b0;
LAB_2c5d27ac:
    FUN_2c674668(local_74,puVar4,uVar3);
  }
  puVar4 = local_74;
  uVar3 = local_b0;
  *(undefined1 *)((int)local_74 + local_b0) = 0;
  local_3c = local_6c;
  uVar1 = local_6c._1_3_;
  if (local_74 == &local_6c) {
    local_5c = &local_54;
    local_70 = 0;
    local_6c = (uint)local_6c._1_3_ << 8;
    uStack_38 = uStack_68;
    uStack_34 = uStack_64;
    uStack_30 = uStack_60;
LAB_2c5d286a:
    local_b8 = &local_54;
    local_c0 = &local_3c;
    local_58 = local_b0;
    uStack_50 = uStack_38;
    uStack_4c = uStack_34;
    uStack_48 = uStack_30;
    local_44 = local_c0;
    local_5c = local_b8;
  }
  else {
    local_5c = &local_54;
    bVar12 = local_74 == &local_3c;
    local_74 = &local_6c;
    local_6c = (uint)local_6c._1_3_ << 8;
    local_70 = 0;
    local_40 = local_b0;
    if (bVar12) goto LAB_2c5d286a;
    local_54 = local_3c;
    local_5c = puVar4;
    local_58 = local_b0;
    local_44 = &local_3c;
    if (((undefined1 *)((int)puVar4 + local_b0) != (undefined1 *)0x0) && (puVar4 == (uint *)0x0)) {
LAB_2c5d29dc:
                    /* WARNING: Subroutine does not return */
      FUN_2c658674(DAT_2c5d2a10);
    }
  }
  puVar4 = local_5c;
  local_54 = local_3c;
  local_b8 = &local_54;
  local_c0 = &local_3c;
  local_70 = 0;
  local_3c = local_54;
  local_58 = local_b0;
  if (local_b0 < 0x10) {
    puVar5 = local_c0;
    if (local_b0 == 1) {
      local_3c = CONCAT31(uVar1,(char)*local_5c);
    }
    else if (local_b0 != 0) goto LAB_2c5d27fc;
  }
  else {
    local_44 = (uint *)FUN_2c5d0388(&local_b0,0);
    local_3c = local_b0;
    puVar5 = local_44;
LAB_2c5d27fc:
    FUN_2c674668(puVar5,puVar4,uVar3);
    puVar5 = local_44;
  }
  puVar4 = local_44;
  uVar3 = local_b0;
  iVar8 = DAT_2c5d2660 * ((int)puVar7 - (int)local_c4 >> 3);
  *(undefined1 *)((int)puVar5 + local_b0) = 0;
  local_40 = local_b0;
  if (0 < iVar8 >> 2) {
    puVar11 = local_c4 + (iVar8 >> 2) * 0x18;
    do {
      uVar10 = local_c4[1];
      uVar6 = uVar10;
      if (uVar3 <= uVar10) {
        uVar6 = uVar3;
      }
      if (((uVar6 == 0) || (iVar8 = FUN_2c66960c(*local_c4,puVar4), iVar8 == 0)) &&
         (puVar2 = local_c4, uVar10 == uVar3)) goto LAB_2c5d26e0;
      uVar10 = local_c4[7];
      uVar6 = uVar3;
      if (uVar10 <= uVar3) {
        uVar6 = uVar10;
      }
      if (((uVar6 == 0) || (iVar8 = FUN_2c66960c(local_c4[6],puVar4), iVar8 == 0)) &&
         (uVar3 == uVar10)) {
        puVar2 = local_c4 + 6;
        goto LAB_2c5d26e0;
      }
      uVar10 = local_c4[0xd];
      uVar6 = uVar3;
      if (uVar10 <= uVar3) {
        uVar6 = uVar10;
      }
      if (((uVar6 == 0) || (iVar8 = FUN_2c66960c(local_c4[0xc],puVar4), iVar8 == 0)) &&
         (uVar3 == uVar10)) {
        puVar2 = local_c4 + 0xc;
        goto LAB_2c5d26e0;
      }
      uVar10 = local_c4[0x13];
      uVar6 = uVar3;
      if (uVar10 <= uVar3) {
        uVar6 = uVar10;
      }
      if (((uVar6 == 0) || (iVar8 = FUN_2c66960c(local_c4[0x12],puVar4), iVar8 == 0)) &&
         (uVar3 == uVar10)) {
        puVar2 = local_c4 + 0x12;
        goto LAB_2c5d26e0;
      }
      local_c4 = local_c4 + 0x18;
    } while (puVar11 != local_c4);
    iVar8 = DAT_2c5d2a08 * ((int)puVar7 - (int)local_c4 >> 3);
  }
  uVar3 = local_40;
  if (iVar8 == 2) {
LAB_2c5d2930:
    uVar10 = local_c4[1];
    uVar6 = uVar10;
    if (uVar3 <= uVar10) {
      uVar6 = uVar3;
    }
    if (((uVar6 != 0) && (iVar8 = FUN_2c66960c(*local_c4,puVar4), iVar8 != 0)) ||
       (puVar2 = local_c4, uVar10 != uVar3)) {
      local_c4 = local_c4 + 6;
LAB_2c5d28e2:
      uVar10 = local_c4[1];
      uVar6 = uVar10;
      if (uVar3 <= uVar10) {
        uVar6 = uVar3;
      }
      if (((uVar6 == 0) || (iVar8 = FUN_2c66960c(*local_c4,puVar4), puVar2 = puVar7, iVar8 == 0)) &&
         (puVar2 = local_c4, uVar10 != uVar3)) {
        puVar2 = puVar7;
      }
    }
  }
  else if (iVar8 == 3) {
    uVar10 = local_c4[1];
    uVar6 = uVar10;
    if (local_40 <= uVar10) {
      uVar6 = local_40;
    }
    if (((uVar6 != 0) && (iVar8 = FUN_2c66960c(*local_c4,puVar4), iVar8 != 0)) ||
       (puVar2 = local_c4, uVar10 != uVar3)) {
      local_c4 = local_c4 + 6;
      goto LAB_2c5d2930;
    }
  }
  else {
    puVar2 = puVar7;
    if (iVar8 == 1) goto LAB_2c5d28e2;
  }
LAB_2c5d26e0:
  local_c4 = puVar2;
  if (puVar4 != local_c0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar4);
  }
  if (local_5c != local_b8) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_74 != &local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_8c != local_84) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)param_2[1] == local_c4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5d2a04,0x3a6,DAT_2c5d2a00,DAT_2c5d2a0c);
  }
  if (local_a4 != local_9c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
LAB_2c5d23ca:
  local_a8 = 0;
  local_b0 = 0;
  iStack_ac = 0;
  FUN_2c5d1cbc(param_1 + 8,param_2,&local_b0);
  if (0x3c < iStack_ac - local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c5d264c,0x3b0,DAT_2c5d2648,DAT_2c5d2658);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5d264c,0x3b5,DAT_2c5d2648,DAT_2c5d2644,1,*(undefined1 *)(param_1 + 0x78));
}


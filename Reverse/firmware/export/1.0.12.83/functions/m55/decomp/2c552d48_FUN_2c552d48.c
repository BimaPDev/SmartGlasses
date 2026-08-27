/* FUN_2c552d48 @ 0x2c552d48 */

undefined4 FUN_2c552d48(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  bool bVar14;
  uint local_120;
  uint *local_11c;
  uint local_118;
  uint local_114 [4];
  uint *local_104;
  uint local_100;
  uint local_fc [4];
  uint *local_ec;
  uint local_e8;
  uint local_e4 [4];
  uint *local_d4;
  uint local_d0;
  uint local_cc [4];
  uint *local_bc;
  uint local_b8;
  uint local_b4 [4];
  uint *local_a4;
  uint local_a0;
  uint local_9c [4];
  uint *local_8c;
  uint local_88;
  uint local_84 [4];
  uint *local_74;
  uint local_70;
  uint local_6c [4];
  uint *local_5c;
  uint local_58;
  uint local_54 [4];
  uint *local_44;
  uint local_40;
  uint local_3c [4];
  int local_2c;
  
  local_2c = *DAT_2c553038;
  puVar13 = *(undefined1 **)(param_1 + 4);
  uVar10 = *(uint *)(param_1 + 8);
  local_11c = local_114;
  if ((puVar13 + uVar10 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0)) goto LAB_2c553216;
  local_120 = uVar10;
  if (uVar10 < 0x10) {
    if (uVar10 == 1) {
      local_114[0] = CONCAT31(local_114[0]._1_3_,*puVar13);
    }
    else if (uVar10 != 0) goto LAB_2c552e78;
  }
  else {
    local_11c = (uint *)FUN_2c54f538(&local_120,0,param_3,0);
    local_114[0] = local_120;
LAB_2c552e78:
    FUN_2c674668(local_11c,puVar13,uVar10);
  }
  *(undefined1 *)((int)local_11c + local_120) = 0;
  local_118 = local_120;
  FUN_2c5392f4(&local_11c,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  puVar13 = *(undefined1 **)(param_2 + 4);
  uVar10 = *(uint *)(param_2 + 8);
  local_104 = local_fc;
  if (puVar13 != (undefined1 *)-uVar10 && puVar13 == (undefined1 *)0x0) goto LAB_2c553216;
  local_120 = uVar10;
  if (uVar10 < 0x10) {
    if (uVar10 == 1) {
      local_fc[0] = CONCAT31(local_fc[0]._1_3_,*puVar13);
    }
    else if (uVar10 != 0) goto LAB_2c552e5c;
  }
  else {
    local_104 = (uint *)FUN_2c54f538(&local_120,0);
    local_fc[0] = local_120;
LAB_2c552e5c:
    FUN_2c674668(local_104,puVar13,uVar10);
  }
  *(undefined1 *)((int)local_104 + local_120) = 0;
  local_100 = local_120;
  FUN_2c5392f4(&local_104,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
  uVar3 = local_100;
  puVar2 = local_104;
  uVar10 = local_118;
  puVar1 = local_11c;
  uVar7 = local_118;
  if (local_100 <= local_118) {
    uVar7 = local_100;
  }
  if ((uVar7 == 0) || (iVar4 = FUN_2c66960c(local_11c), iVar4 == 0)) {
    iVar4 = uVar10 - uVar3;
  }
  if (puVar2 != local_fc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puVar1 != local_114) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar1);
  }
  uVar8 = 0;
  if (iVar4 != 0) goto LAB_2c552e22;
  puVar11 = *(undefined4 **)(param_1 + 0x34);
  puVar9 = *(undefined4 **)(param_1 + 0x38);
  iVar4 = DAT_2c55303c * ((int)puVar9 - (int)puVar11 >> 3);
  if (0 < iVar4 >> 2) {
    puVar6 = puVar11 + (iVar4 >> 2) * 0x18;
    do {
      puVar13 = (undefined1 *)*puVar11;
      uVar10 = puVar11[1];
      local_ec = local_e4;
      if ((puVar13 + uVar10 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0))
      goto LAB_2c553216;
      local_120 = uVar10;
      if (uVar10 < 0x10) {
        if (uVar10 == 1) {
          local_e4[0] = CONCAT31(local_e4[0]._1_3_,*puVar13);
        }
        else if (uVar10 != 0) goto LAB_2c553020;
      }
      else {
        local_ec = (uint *)FUN_2c54f538(&local_120,0);
        local_e4[0] = local_120;
LAB_2c553020:
        FUN_2c674668(local_ec,puVar13,uVar10);
      }
      *(undefined1 *)((int)local_ec + local_120) = 0;
      local_e8 = local_120;
      iVar4 = FUN_2c54fe64(*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),&local_ec
                          );
      if (local_ec != local_e4) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (*(int *)(param_2 + 0x38) != iVar4) goto LAB_2c5530b4;
      puVar13 = (undefined1 *)puVar11[6];
      uVar10 = puVar11[7];
      local_d4 = local_cc;
      if ((puVar13 + uVar10 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0))
      goto LAB_2c553216;
      local_120 = uVar10;
      if (uVar10 < 0x10) {
        if (uVar10 == 1) {
          local_cc[0] = CONCAT31(local_cc[0]._1_3_,*puVar13);
        }
        else if (uVar10 != 0) goto LAB_2c553052;
      }
      else {
        local_d4 = (uint *)FUN_2c54f538(&local_120,0);
        local_cc[0] = local_120;
LAB_2c553052:
        FUN_2c674668(local_d4,puVar13,uVar10);
      }
      *(undefined1 *)((int)local_d4 + local_120) = 0;
      local_d0 = local_120;
      iVar4 = FUN_2c54fe64(*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),&local_d4
                          );
      if (local_d4 != local_cc) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (*(int *)(param_2 + 0x38) != iVar4) {
        puVar11 = puVar11 + 6;
        goto LAB_2c5530b4;
      }
      puVar13 = (undefined1 *)puVar11[0xc];
      uVar10 = puVar11[0xd];
      local_bc = local_b4;
      if ((puVar13 + uVar10 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0))
      goto LAB_2c553216;
      local_120 = uVar10;
      if (uVar10 < 0x10) {
        if (uVar10 == 1) {
          local_b4[0] = CONCAT31(local_b4[0]._1_3_,*puVar13);
        }
        else if (uVar10 != 0) goto LAB_2c55307a;
      }
      else {
        local_bc = (uint *)FUN_2c54f538(&local_120,0);
        local_b4[0] = local_120;
LAB_2c55307a:
        FUN_2c674668(local_bc,puVar13,uVar10);
      }
      *(undefined1 *)((int)local_bc + local_120) = 0;
      local_b8 = local_120;
      iVar4 = FUN_2c54fe64(*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),&local_bc
                          );
      if (local_bc != local_b4) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (*(int *)(param_2 + 0x38) != iVar4) {
        puVar11 = puVar11 + 0xc;
        goto LAB_2c5530b4;
      }
      puVar13 = (undefined1 *)puVar11[0x12];
      uVar10 = puVar11[0x13];
      local_a4 = local_9c;
      if ((puVar13 + uVar10 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0))
      goto LAB_2c553216;
      local_120 = uVar10;
      if (uVar10 < 0x10) {
        if (uVar10 == 1) {
          local_9c[0] = CONCAT31(local_9c[0]._1_3_,*puVar13);
        }
        else if (uVar10 != 0) goto LAB_2c5530a6;
      }
      else {
        local_a4 = (uint *)FUN_2c54f538(&local_120,0);
        local_9c[0] = local_120;
LAB_2c5530a6:
        FUN_2c674668(local_a4,puVar13,uVar10);
      }
      *(undefined1 *)((int)local_a4 + local_120) = 0;
      local_a0 = local_120;
      iVar4 = FUN_2c54fe64(*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),&local_a4
                          );
      if (local_a4 != local_9c) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (*(int *)(param_2 + 0x38) != iVar4) {
        puVar11 = puVar11 + 0x12;
        goto LAB_2c5530b4;
      }
      puVar11 = puVar11 + 0x18;
    } while (puVar11 != puVar6);
    iVar4 = DAT_2c5533c0 * ((int)puVar9 - (int)puVar11 >> 3);
  }
  puVar6 = puVar9;
  if (iVar4 == 2) {
LAB_2c55327e:
    puVar13 = (undefined1 *)*puVar11;
    uVar10 = puVar11[1];
    local_74 = local_6c;
    if ((puVar13 + uVar10 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0))
    goto LAB_2c553216;
    local_120 = uVar10;
    if (uVar10 < 0x10) {
      if (uVar10 == 1) {
        local_6c[0] = CONCAT31(local_6c[0]._1_3_,*puVar13);
      }
      else if (uVar10 != 0) goto LAB_2c553362;
    }
    else {
      local_74 = (uint *)FUN_2c54f538(&local_120,0);
      local_6c[0] = local_120;
LAB_2c553362:
      FUN_2c674668(local_74,puVar13,uVar10);
    }
    *(undefined1 *)((int)local_74 + local_120) = 0;
    local_70 = local_120;
    iVar4 = FUN_2c54fe64(*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),&local_74);
    if (local_74 != local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (iVar4 == *(int *)(param_2 + 0x38)) {
      puVar11 = puVar11 + 6;
LAB_2c5532d4:
      puVar13 = (undefined1 *)*puVar11;
      uVar10 = puVar11[1];
      local_5c = local_54;
      if ((puVar13 + uVar10 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0)) {
LAB_2c553216:
                    /* WARNING: Subroutine does not return */
        FUN_2c658674(DAT_2c5533c4);
      }
      local_120 = uVar10;
      if (uVar10 < 0x10) {
        if (uVar10 == 1) {
          local_54[0] = CONCAT31(local_54[0]._1_3_,*puVar13);
        }
        else if (uVar10 != 0) goto LAB_2c553340;
      }
      else {
        local_5c = (uint *)FUN_2c54f538(&local_120,0);
        local_54[0] = local_120;
LAB_2c553340:
        FUN_2c674668(local_5c,puVar13,uVar10);
      }
      *(undefined1 *)((int)local_5c + local_120) = 0;
      local_58 = local_120;
      iVar4 = FUN_2c54fe64(*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),&local_5c
                          );
      if (local_5c != local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (iVar4 == *(int *)(param_2 + 0x38)) goto LAB_2c553194;
    }
LAB_2c5530b4:
    puVar6 = puVar11;
    if ((puVar9 != puVar11) && (puVar9 != puVar11 + 6)) {
      puVar12 = puVar11 + 0xc;
LAB_2c55310c:
      do {
        puVar13 = (undefined1 *)puVar12[-6];
        uVar10 = puVar12[-5];
        local_44 = local_3c;
        if ((puVar13 + uVar10 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0))
        goto LAB_2c553216;
        local_120 = uVar10;
        if (uVar10 < 0x10) {
          if (uVar10 == 1) {
            local_3c[0] = CONCAT31(local_3c[0]._1_3_,*puVar13);
          }
          else if (uVar10 != 0) goto LAB_2c553146;
        }
        else {
          local_44 = (uint *)FUN_2c54f538(&local_120,0);
          local_3c[0] = local_120;
LAB_2c553146:
          FUN_2c674668(local_44,puVar13,uVar10);
        }
        *(undefined1 *)((int)local_44 + local_120) = 0;
        local_40 = local_120;
        iVar4 = FUN_2c54fe64(*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),
                             &local_44);
        if (local_44 != local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        if (iVar4 != *(int *)(param_2 + 0x38)) {
          bVar14 = puVar9 == puVar12;
          puVar6 = puVar11;
          puVar12 = puVar12 + 6;
          if (bVar14) break;
          goto LAB_2c55310c;
        }
        puVar6 = puVar12 + -4;
        puVar5 = (undefined4 *)*puVar11;
        if (puVar6 == (undefined4 *)puVar12[-6]) {
          iVar4 = 0;
          if (puVar12[-5] != 0) {
            if (puVar12[-5] == 1) {
              *(undefined1 *)puVar5 = *(undefined1 *)(puVar12 + -4);
              iVar4 = puVar12[-5];
              puVar5 = (undefined4 *)*puVar11;
            }
            else {
              FUN_2c674668();
              iVar4 = puVar12[-5];
              puVar5 = (undefined4 *)*puVar11;
            }
          }
          puVar11[1] = iVar4;
          *(undefined1 *)((int)puVar5 + iVar4) = 0;
          puVar6 = (undefined4 *)puVar12[-6];
        }
        else {
          *puVar11 = (undefined4 *)puVar12[-6];
          puVar11[1] = puVar12[-5];
          if (puVar5 == puVar11 + 2) {
            puVar11[2] = puVar12[-4];
          }
          else {
            uVar8 = puVar11[2];
            puVar11[2] = puVar12[-4];
            if (puVar5 != (undefined4 *)0x0) {
              puVar12[-4] = uVar8;
              puVar12[-6] = puVar5;
              puVar6 = puVar5;
              goto LAB_2c553182;
            }
          }
          puVar12[-6] = puVar6;
        }
LAB_2c553182:
        puVar11 = puVar11 + 6;
        puVar12[-5] = 0;
        bVar14 = puVar9 != puVar12;
        *(undefined1 *)puVar6 = 0;
        puVar6 = puVar11;
        puVar12 = puVar12 + 6;
      } while (bVar14);
    }
  }
  else {
    if (iVar4 == 3) {
      puVar13 = (undefined1 *)*puVar11;
      uVar10 = puVar11[1];
      local_8c = local_84;
      if ((puVar13 + uVar10 != (undefined1 *)0x0) && (puVar13 == (undefined1 *)0x0))
      goto LAB_2c553216;
      local_120 = uVar10;
      if (uVar10 < 0x10) {
        if (uVar10 == 1) {
          local_84[0] = CONCAT31(local_84[0]._1_3_,*puVar13);
        }
        else if (uVar10 != 0) goto LAB_2c553384;
      }
      else {
        local_8c = (uint *)FUN_2c54f538(&local_120,0);
        local_84[0] = local_120;
LAB_2c553384:
        FUN_2c674668(local_8c,puVar13,uVar10);
      }
      *(undefined1 *)((int)local_8c + local_120) = 0;
      local_88 = local_120;
      iVar4 = FUN_2c54fe64(*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),&local_8c
                          );
      if (local_8c != local_84) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      if (*(int *)(param_2 + 0x38) == iVar4) {
        puVar11 = puVar11 + 6;
        goto LAB_2c55327e;
      }
      goto LAB_2c5530b4;
    }
    if (iVar4 == 1) goto LAB_2c5532d4;
  }
LAB_2c553194:
  if (*(undefined4 **)(param_1 + 0x38) != puVar6) {
    puVar11 = puVar6 + 2;
    puVar9 = puVar6;
    do {
      if (puVar11 != (undefined4 *)puVar11[-2]) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      puVar9 = puVar9 + 6;
      puVar11 = puVar11 + 6;
    } while (*(undefined4 **)(param_1 + 0x38) != puVar9);
    *(undefined4 **)(param_1 + 0x38) = puVar6;
  }
  uVar8 = 1;
LAB_2c552e22:
  if (*DAT_2c553038 == local_2c) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


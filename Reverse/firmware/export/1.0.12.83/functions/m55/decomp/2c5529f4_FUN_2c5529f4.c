/* FUN_2c5529f4 @ 0x2c5529f4 */

undefined4 FUN_2c5529f4(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  bool bVar16;
  uint local_60;
  uint *local_5c;
  uint local_58;
  uint local_54 [4];
  uint *local_44;
  uint local_40;
  uint local_3c [4];
  int local_2c;
  
  local_2c = *DAT_2c552ca8;
  puVar12 = *(undefined1 **)(param_1 + 4);
  uVar11 = *(uint *)(param_1 + 8);
  local_5c = local_54;
  if ((puVar12 + uVar11 != (undefined1 *)0x0) && (puVar12 == (undefined1 *)0x0)) goto LAB_2c552d36;
  local_60 = uVar11;
  if (uVar11 < 0x10) {
    if (uVar11 == 1) {
      local_54[0] = CONCAT31(local_54[0]._1_3_,*puVar12);
    }
    else if (uVar11 != 0) goto LAB_2c552c68;
  }
  else {
    local_5c = (uint *)FUN_2c54f538(&local_60,0,param_3,0);
    local_54[0] = local_60;
LAB_2c552c68:
    FUN_2c674668(local_5c,puVar12,uVar11);
  }
  *(undefined1 *)((int)local_5c + local_60) = 0;
  local_58 = local_60;
  FUN_2c5392f4(&local_5c,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  puVar12 = *(undefined1 **)(param_2 + 4);
  uVar11 = *(uint *)(param_2 + 8);
  local_44 = local_3c;
  if (puVar12 != (undefined1 *)-uVar11 && puVar12 == (undefined1 *)0x0) {
LAB_2c552d36:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c552d44);
  }
  local_60 = uVar11;
  if (uVar11 < 0x10) {
    if (uVar11 == 1) {
      local_3c[0] = CONCAT31(local_3c[0]._1_3_,*puVar12);
      goto LAB_2c552a82;
    }
    if (uVar11 == 0) goto LAB_2c552a82;
  }
  else {
    local_44 = (uint *)FUN_2c54f538(&local_60,0);
    local_3c[0] = local_60;
  }
  FUN_2c674668(local_44,puVar12,uVar11);
LAB_2c552a82:
  *(undefined1 *)((int)local_44 + local_60) = 0;
  local_40 = local_60;
  FUN_2c5392f4(&local_44,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
  uVar7 = local_40;
  puVar3 = local_44;
  uVar11 = local_58;
  puVar2 = local_5c;
  uVar14 = local_58;
  if (local_40 <= local_58) {
    uVar14 = local_40;
  }
  if ((uVar14 == 0) || (iVar4 = FUN_2c66960c(local_5c), iVar4 == 0)) {
    iVar4 = uVar11 - uVar7;
  }
  if (puVar3 != local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puVar2 != local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar2);
  }
  uVar15 = 0;
  if (iVar4 == 0) {
    puVar8 = *(undefined4 **)(param_2 + 0x34);
    puVar6 = *(undefined4 **)(param_2 + 0x38);
    if (puVar6 != puVar8) {
      puVar1 = puVar8;
      do {
        puVar10 = *(undefined4 **)(param_1 + 0x34);
        puVar9 = *(undefined4 **)(param_1 + 0x38);
        iVar4 = DAT_2c552cac * ((int)puVar9 - (int)puVar10 >> 3);
        if (0 < iVar4 >> 2) {
          uVar15 = *puVar1;
          uVar11 = puVar8[1];
          puVar13 = puVar10 + (iVar4 >> 2) * 0x18;
          do {
            uVar14 = puVar10[1];
            uVar7 = uVar14;
            if (uVar11 <= uVar14) {
              uVar7 = uVar11;
            }
            if (((uVar7 == 0) || (iVar4 = FUN_2c66960c(*puVar10,uVar15), iVar4 == 0)) &&
               (uVar14 == uVar11)) goto LAB_2c552baa;
            uVar14 = puVar10[7];
            uVar7 = uVar11;
            if (uVar14 <= uVar11) {
              uVar7 = uVar14;
            }
            if (((uVar7 == 0) || (iVar4 = FUN_2c66960c(puVar10[6],uVar15), iVar4 == 0)) &&
               (uVar11 == uVar14)) {
              puVar10 = puVar10 + 6;
              goto LAB_2c552baa;
            }
            uVar14 = puVar10[0xd];
            uVar7 = uVar11;
            if (uVar14 <= uVar11) {
              uVar7 = uVar14;
            }
            if (((uVar7 == 0) || (iVar4 = FUN_2c66960c(puVar10[0xc],uVar15), iVar4 == 0)) &&
               (uVar11 == uVar14)) {
              puVar10 = puVar10 + 0xc;
              goto LAB_2c552baa;
            }
            uVar14 = puVar10[0x13];
            uVar7 = uVar11;
            if (uVar14 <= uVar11) {
              uVar7 = uVar14;
            }
            if (((uVar7 == 0) || (iVar4 = FUN_2c66960c(puVar10[0x12],uVar15), iVar4 == 0)) &&
               (uVar11 == uVar14)) {
              puVar10 = puVar10 + 0x12;
              goto LAB_2c552baa;
            }
            puVar10 = puVar10 + 0x18;
          } while (puVar10 != puVar13);
          iVar4 = DAT_2c552cac * ((int)puVar9 - (int)puVar10 >> 3);
        }
        if (iVar4 == 2) {
          uVar15 = *puVar1;
          uVar11 = puVar8[1];
LAB_2c552cb8:
          uVar14 = puVar10[1];
          uVar7 = uVar14;
          if (uVar11 <= uVar14) {
            uVar7 = uVar11;
          }
          if (((uVar7 != 0) && (iVar4 = FUN_2c66960c(*puVar10,uVar15), iVar4 != 0)) ||
             (uVar14 != uVar11)) {
            puVar10 = puVar10 + 6;
LAB_2c552c84:
            uVar14 = puVar10[1];
            uVar7 = uVar14;
            if (uVar11 <= uVar14) {
              uVar7 = uVar11;
            }
            if (((uVar7 != 0) && (iVar4 = FUN_2c66960c(*puVar10,uVar15), iVar4 != 0)) ||
               (uVar14 != uVar11)) goto LAB_2c552be0;
          }
LAB_2c552baa:
          bVar16 = puVar9 == puVar10;
          puVar9 = puVar10;
          if (bVar16) goto LAB_2c552be0;
        }
        else {
          if (iVar4 == 3) {
            uVar14 = puVar10[1];
            uVar11 = puVar8[1];
            uVar15 = *puVar1;
            uVar7 = uVar14;
            if (uVar11 <= uVar14) {
              uVar7 = uVar11;
            }
            if (((uVar7 != 0) && (iVar4 = FUN_2c66960c(*puVar10,uVar15), iVar4 != 0)) ||
               (uVar14 != uVar11)) {
              puVar10 = puVar10 + 6;
              goto LAB_2c552cb8;
            }
            goto LAB_2c552baa;
          }
          if (iVar4 == 1) {
            uVar15 = *puVar1;
            uVar11 = puVar8[1];
            goto LAB_2c552c84;
          }
LAB_2c552be0:
          if (*(undefined4 **)(param_1 + 0x3c) == puVar9) {
            FUN_2c550fe0(param_1 + 0x34,puVar9,puVar8);
          }
          else {
            *puVar9 = puVar9 + 2;
            puVar12 = (undefined1 *)*puVar1;
            uVar11 = puVar8[1];
            if ((puVar12 + uVar11 != (undefined1 *)0x0) && (puVar12 == (undefined1 *)0x0))
            goto LAB_2c552d36;
            local_60 = uVar11;
            if (uVar11 < 0x10) {
              puVar5 = (undefined1 *)*puVar9;
              if (uVar11 == 1) {
                *puVar5 = *puVar12;
                puVar5 = (undefined1 *)*puVar9;
              }
              else if (uVar11 != 0) goto LAB_2c552d24;
            }
            else {
              puVar5 = (undefined1 *)FUN_2c54f538(&local_60,0);
              *puVar9 = puVar5;
              puVar9[2] = local_60;
LAB_2c552d24:
              FUN_2c674668(puVar5,puVar12,uVar11);
              puVar5 = (undefined1 *)*puVar9;
            }
            puVar9[1] = local_60;
            puVar5[local_60] = 0;
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0x18;
          }
        }
        puVar8 = puVar8 + 6;
        puVar1 = puVar1 + 6;
      } while (puVar6 != puVar8);
    }
    uVar15 = 1;
  }
  if (*DAT_2c552ca8 == local_2c) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


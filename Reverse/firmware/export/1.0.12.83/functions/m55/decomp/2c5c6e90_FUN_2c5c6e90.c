/* FUN_2c5c6e90 @ 0x2c5c6e90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c6e90(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  bool bVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint local_48;
  uint *local_44;
  uint local_40;
  uint local_3c [4];
  undefined4 local_2c;
  
  local_44 = local_3c;
  local_2c = *_LAB_2c5c70fc;
  local_48 = 0x27;
  puVar4 = (undefined4 *)FUN_2c5c658c(&local_48,0,0);
  uVar2 = local_48;
  puVar16 = _LAB_2c5c7114 + 8;
  local_3c[0] = local_48;
  puVar11 = puVar4;
  puVar14 = _LAB_2c5c7114;
  do {
    puVar15 = puVar14;
    puVar10 = puVar11;
    uVar5 = puVar15[1];
    uVar6 = puVar15[2];
    uVar8 = puVar15[3];
    *puVar10 = *puVar15;
    puVar10[1] = uVar5;
    puVar10[2] = uVar6;
    puVar10[3] = uVar8;
    puVar11 = puVar10 + 4;
    puVar14 = puVar15 + 4;
  } while (puVar15 + 4 != puVar16);
  uVar5 = puVar15[4];
  *(undefined2 *)(puVar10 + 5) = *(undefined2 *)(puVar15 + 5);
  uVar1 = *(undefined1 *)((int)puVar15 + 0x16);
  puVar10[4] = uVar5;
  *(undefined1 *)((int)puVar10 + 0x16) = uVar1;
  local_40 = local_48;
  *(undefined1 *)((int)puVar4 + local_48) = 0;
  puVar11 = (undefined4 *)*param_2;
  puVar14 = (undefined4 *)param_2[1];
  iVar9 = _LAB_2c5c7100 * ((int)puVar14 - (int)puVar11 >> 3);
  local_44 = puVar4;
  if (0 < iVar9 >> 2) {
    puVar16 = puVar11 + (iVar9 >> 2) * 0x18;
    do {
      uVar12 = puVar11[1];
      uVar7 = uVar12;
      if (uVar2 <= uVar12) {
        uVar7 = uVar2;
      }
      if (((uVar7 == 0) || (iVar9 = FUN_2c66960c(*puVar11,puVar4), iVar9 == 0)) && (uVar12 == uVar2)
         ) goto LAB_2c5c6f9e;
      uVar12 = puVar11[7];
      uVar7 = uVar2;
      if (uVar12 <= uVar2) {
        uVar7 = uVar12;
      }
      if (((uVar7 == 0) || (iVar9 = FUN_2c66960c(puVar11[6],puVar4), iVar9 == 0)) &&
         (uVar2 == uVar12)) {
        bVar13 = puVar14 == puVar11 + 6;
        goto LAB_2c5c6fac;
      }
      uVar12 = puVar11[0xd];
      uVar7 = uVar2;
      if (uVar12 <= uVar2) {
        uVar7 = uVar12;
      }
      if (((uVar7 == 0) || (iVar9 = FUN_2c66960c(puVar11[0xc],puVar4), iVar9 == 0)) &&
         (uVar2 == uVar12)) {
        bVar13 = puVar14 == puVar11 + 0xc;
        goto LAB_2c5c6fac;
      }
      uVar12 = puVar11[0x13];
      uVar7 = uVar2;
      if (uVar12 <= uVar2) {
        uVar7 = uVar12;
      }
      if (((uVar7 == 0) || (iVar9 = FUN_2c66960c(puVar11[0x12],puVar4), iVar9 == 0)) &&
         (uVar2 == uVar12)) {
        bVar13 = puVar14 == puVar11 + 0x12;
        goto LAB_2c5c6fac;
      }
      puVar11 = puVar11 + 0x18;
    } while (puVar11 != puVar16);
    iVar9 = _LAB_2c5c7100 * ((int)puVar14 - (int)puVar11 >> 3);
  }
  uVar2 = local_40;
  puVar3 = local_44;
  if (iVar9 == 2) {
LAB_2c5c7096:
    uVar12 = puVar11[1];
    uVar7 = uVar12;
    if (uVar2 <= uVar12) {
      uVar7 = uVar2;
    }
    if (((uVar7 != 0) && (iVar9 = FUN_2c66960c(*puVar11,puVar3), iVar9 != 0)) || (uVar12 != uVar2))
    {
      puVar11 = puVar11 + 6;
LAB_2c5c7052:
      uVar12 = puVar11[1];
      uVar7 = uVar12;
      if (uVar2 <= uVar12) {
        uVar7 = uVar2;
      }
      if (((uVar7 != 0) && (iVar9 = FUN_2c66960c(*puVar11,puVar3), iVar9 != 0)) || (uVar12 != uVar2)
         ) goto LAB_2c5c703a;
    }
  }
  else {
    if (iVar9 != 3) {
      if (iVar9 == 1) goto LAB_2c5c7052;
LAB_2c5c703a:
      bVar13 = true;
      goto LAB_2c5c6fac;
    }
    uVar12 = puVar11[1];
    uVar7 = uVar12;
    if (local_40 <= uVar12) {
      uVar7 = local_40;
    }
    if (((uVar7 != 0) && (iVar9 = FUN_2c66960c(*puVar11,local_44), iVar9 != 0)) || (uVar12 != uVar2)
       ) {
      puVar11 = puVar11 + 6;
      goto LAB_2c5c7096;
    }
  }
LAB_2c5c6f9e:
  bVar13 = puVar14 == puVar11;
LAB_2c5c6fac:
  uVar5 = _LAB_2c5c7104;
  *(bool *)(param_1 + 0x4e3) = bVar13;
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5c710c,0x2ba,_LAB_2c5c7108,uVar5,bVar13);
}


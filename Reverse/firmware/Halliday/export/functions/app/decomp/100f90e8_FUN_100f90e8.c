/* FUN_100f90e8 @ 0x100f90e8 */

undefined4 FUN_100f90e8(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  
  if (*(int *)(param_1 + 0x48) != DAT_100f933c) {
    return 1;
  }
  if (param_3 == (uint *)0x0) {
    uVar2 = 0;
    uVar4 = 0;
    uVar6 = 0;
    iVar3 = 0;
    iVar9 = 0;
    iVar11 = 0;
    iVar10 = 0;
    uVar12 = 0;
    if (param_1 == -0x6c) goto LAB_100f9258;
LAB_100f911a:
    local_38 = uVar12;
    local_30 = local_38;
    uStack_2c = uVar6;
    iVar3 = iVar9;
    iVar11 = iVar10;
    if (*(short *)(param_1 + 0x6e) == 0) goto LAB_100f912a;
    puVar7 = *(uint **)(param_1 + 0x70);
    uVar4 = *puVar7;
    uVar2 = puVar7[1];
    if (puVar7 + *(short *)(param_1 + 0x6e) * 2 <= puVar7 + 2) {
      local_38 = local_38 + (uVar4 & 0x3f);
      uVar6 = uVar6 + (uVar2 & 0x3f);
      iVar10 = iVar10 + ((int)uVar4 >> 6);
      iVar9 = iVar9 + ((int)uVar2 >> 6);
      local_30 = local_38;
      uStack_2c = uVar6;
      iVar3 = iVar9;
      iVar11 = iVar10;
      goto LAB_100f912a;
    }
    puVar8 = puVar7 + 4;
    uVar12 = uVar4;
    uVar16 = uVar2;
    do {
      uVar13 = puVar8[-2];
      uVar15 = puVar8[-1];
      if ((int)uVar13 <= (int)uVar12) {
        uVar12 = uVar13;
      }
      if ((int)uVar4 < (int)uVar13) {
        uVar4 = uVar13;
      }
      if ((int)uVar15 <= (int)uVar16) {
        uVar16 = uVar15;
      }
      puVar8 = puVar8 + 2;
      if ((int)uVar2 < (int)uVar15) {
        uVar2 = uVar15;
      }
    } while ((uint *)((int)puVar7 +
                     ((int)(puVar7 + *(short *)(param_1 + 0x6e) * 2) + (-9 - (int)puVar7) &
                     0xfffffff8U) + 0x18) != puVar8);
    local_30 = (uVar4 & 0x3f) + local_38;
    local_38 = local_38 + (uVar12 & 0x3f);
    uStack_2c = (uVar2 & 0x3f) + uVar6;
    uVar6 = uVar6 + (uVar16 & 0x3f);
    iVar11 = iVar10 + ((int)uVar4 >> 6);
    iVar3 = iVar9 + ((int)uVar2 >> 6);
    iVar10 = iVar10 + ((int)uVar12 >> 6);
    iVar9 = iVar9 + ((int)uVar16 >> 6);
    uStack_34 = uVar6;
    if (param_2 == 3) goto LAB_100f9230;
LAB_100f9136:
    uStack_34 = uVar6;
    if (param_2 == 4) {
      FUN_100f8ed8(&local_38,param_1,4);
      cVar14 = '\x06';
    }
    else {
      if (param_2 == 2) {
        iVar10 = iVar10 + ((int)(local_38 + 0x1f) >> 6);
        iVar11 = iVar11 + ((int)(local_30 + 0x20) >> 6);
        if (iVar10 == iVar11) {
          if ((int)((local_38 + 0x1f & 0x3f) + (local_30 + 0x20 & 0x3f) + -0x3f) < 0) {
            iVar10 = iVar10 + -1;
          }
          else {
            iVar11 = iVar10 + 1;
          }
        }
        iVar9 = iVar9 + ((int)(uVar6 + 0x1f) >> 6);
        iVar3 = iVar3 + ((int)(uStack_2c + 0x20) >> 6);
        if (iVar9 == iVar3) {
          if ((int)((uVar6 + 0x1f & 0x3f) + (uStack_2c + 0x20 & 0x3f) + -0x3f) < 0) {
            iVar9 = iVar9 + -1;
            iVar5 = iVar3 - iVar9;
            uVar2 = iVar11 - iVar10;
          }
          else {
            iVar5 = 1;
            iVar3 = iVar9 + 1;
            uVar2 = iVar11 - iVar10;
          }
        }
        else {
          uVar2 = iVar11 - iVar10;
          iVar5 = iVar3 - iVar9;
        }
        cVar14 = '\x01';
        uVar4 = ((int)(uVar2 + 0xf) >> 4) << 1;
        goto LAB_100f9178;
      }
      cVar14 = '\x02';
    }
  }
  else {
    iVar11 = (int)*param_3 >> 6;
    iVar3 = (int)param_3[1] >> 6;
    uVar2 = *param_3 & 0x3f;
    uVar4 = param_3[1] & 0x3f;
    uVar12 = uVar2;
    uVar6 = uVar4;
    iVar9 = iVar3;
    iVar10 = iVar11;
    if (param_1 != -0x6c) goto LAB_100f911a;
LAB_100f9258:
    iVar5 = (int)local_30 >> 6;
    iVar10 = iVar11 + ((int)local_38 >> 6);
    local_38 = uVar2 + (local_38 & 0x3f);
    iVar1 = (int)uStack_2c >> 6;
    uVar6 = uVar4 + (uStack_34 & 0x3f);
    iVar9 = iVar3 + ((int)uStack_34 >> 6);
    local_30 = (local_30 & 0x3f) + uVar2;
    uStack_2c = (uStack_2c & 0x3f) + uVar4;
    iVar3 = iVar3 + iVar1;
    iVar11 = iVar11 + iVar5;
LAB_100f912a:
    uStack_34 = uVar6;
    if (param_2 != 3) goto LAB_100f9136;
LAB_100f9230:
    FUN_100f8ed8(&local_38,param_1,param_2);
    cVar14 = '\x05';
  }
  iVar11 = iVar11 + ((int)(local_30 + 0x3f) >> 6);
  iVar3 = iVar3 + ((int)(uStack_2c + 0x3f) >> 6);
  iVar10 = iVar10 + ((int)local_38 >> 6);
  iVar9 = iVar9 + ((int)uStack_34 >> 6);
  uVar2 = iVar11 - iVar10;
  iVar5 = iVar3 - iVar9;
  if (cVar14 == '\x05') {
    uVar2 = uVar2 * 3;
    uVar4 = uVar2 + 3 & 0xfffffffc;
  }
  else {
    uVar4 = uVar2;
    if (cVar14 == '\x06') {
      iVar5 = iVar5 * 3;
    }
  }
LAB_100f9178:
  *(int *)(param_1 + 100) = iVar10;
  *(int *)(param_1 + 0x68) = iVar3;
  *(int *)(param_1 + 0x4c) = iVar5;
  *(uint *)(param_1 + 0x50) = uVar2;
  *(char *)(param_1 + 0x5e) = cVar14;
  *(uint *)(param_1 + 0x54) = uVar4;
  *(undefined2 *)(param_1 + 0x5c) = 0x100;
  if ((((-0x8001 < iVar10) && (iVar11 < 0x8000)) && (-0x8001 < iVar9)) && (iVar3 < 0x8000)) {
    return 0;
  }
  return 1;
}


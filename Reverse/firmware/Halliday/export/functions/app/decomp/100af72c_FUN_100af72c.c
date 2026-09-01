/* FUN_100af72c @ 0x100af72c */

uint FUN_100af72c(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 *local_3c;
  undefined2 *local_38;
  
  if (param_1[4] < 1) {
    uVar8 = 2;
  }
  else {
    uVar8 = param_1[4] >> 3;
  }
  if (0 < param_1[3]) {
    iVar1 = FUN_1012d654(param_2);
    puVar12 = DAT_100af878;
    if (param_3 <= iVar1) {
      iVar1 = param_3;
    }
    if (1 < param_1[2]) {
      iVar1 = iVar1 / 2;
    }
    if (uVar8 == 2) {
      uVar7 = iVar1 / 2;
    }
    else {
      uVar7 = iVar1 / (int)uVar8;
    }
    if (param_1[3] <= (int)uVar7) {
      uVar7 = param_1[3];
    }
    if (0 < (int)uVar7) {
      puVar10 = (undefined2 *)*param_1;
      if (param_1[2] == 1) {
        FUN_100a07a0(param_2,puVar10);
      }
      else {
        puVar13 = (undefined2 *)param_1[1];
        uVar9 = uVar7;
        if (uVar8 == 2) {
          do {
            uVar5 = uVar9;
            if (0x7f < (int)uVar9) {
              uVar5 = 0x80;
            }
            puVar2 = puVar10 + uVar5;
            puVar3 = puVar13;
            puVar4 = DAT_100af878;
            puVar11 = puVar10;
            do {
              puVar10 = puVar11 + 1;
              *puVar4 = *puVar11;
              puVar4[1] = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 2;
              puVar11 = puVar10;
            } while (puVar10 != puVar2);
            puVar13 = puVar13 + uVar5;
            uVar9 = uVar9 - uVar5;
            FUN_100a07a0(param_2,puVar12,uVar5 << 2);
          } while (0 < (int)uVar9);
        }
        else {
          do {
            uVar5 = 0x100 / uVar8;
            if ((int)uVar9 <= (int)(0x100 / uVar8)) {
              uVar5 = uVar9;
            }
            puVar12 = DAT_100af878;
            local_3c = puVar10;
            local_38 = puVar13;
            for (uVar6 = 0; uVar5 != uVar6; uVar6 = uVar6 + 1) {
              FUN_1011ea40(puVar12,local_3c,uVar8);
              local_3c = (undefined2 *)((int)local_3c + uVar8);
              FUN_1011ea40((int)puVar12 + uVar8,local_38,uVar8);
              puVar12 = puVar12 + uVar8;
              local_38 = (undefined2 *)((int)local_38 + uVar8);
            }
            iVar1 = uVar8 * uVar5;
            puVar10 = (undefined2 *)((int)puVar10 + iVar1);
            puVar13 = (undefined2 *)((int)puVar13 + iVar1);
            FUN_100a07a0(param_2,DAT_100af878,iVar1 * 2);
            uVar9 = uVar9 - uVar5;
          } while (0 < (int)uVar9);
        }
        param_1[1] = param_1[1] + uVar8 * uVar7;
      }
      *param_1 = *param_1 + uVar8 * uVar7;
      param_1[3] = param_1[3] - uVar7;
      return uVar7;
    }
  }
  return 0;
}


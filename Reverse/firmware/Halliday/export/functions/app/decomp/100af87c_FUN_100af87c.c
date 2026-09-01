/* FUN_100af87c @ 0x100af87c */

uint FUN_100af87c(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 *puVar9;
  int local_3c;
  int local_38;
  
  puVar9 = DAT_100af9c0;
  iVar1 = param_1[5];
  if (param_1[6] < 1) {
    uVar6 = 2;
  }
  else {
    uVar6 = param_1[6] >> 3;
  }
  if (iVar1 < param_3) {
    if (param_2[1] - *param_2 <= param_4) {
      param_4 = param_2[1] - *param_2;
    }
    if (1 < param_1[4]) {
      param_4 = param_4 / 2;
    }
    if (uVar6 == 2) {
      uVar3 = param_4 / 2;
    }
    else {
      uVar3 = param_4 / (int)uVar6;
    }
    uVar7 = param_3 - iVar1;
    if ((int)uVar3 <= param_3 - iVar1) {
      uVar7 = uVar3;
    }
    if (0 < (int)uVar7) {
      iVar8 = *param_1 + uVar6 * iVar1;
      if (param_1[4] == 1) {
        FUN_1012d2d0(param_2,iVar8,uVar6 * uVar7);
      }
      else {
        iVar1 = param_1[1] + uVar6 * iVar1;
        uVar3 = uVar7;
        if (uVar6 == 2) {
          do {
            uVar6 = uVar3;
            if (0x7f < (int)uVar3) {
              uVar6 = 0x80;
            }
            FUN_1012d2d0(param_2,puVar9,uVar6 << 2);
            uVar4 = 0;
            puVar2 = DAT_100af9c0;
            do {
              *(undefined2 *)(iVar8 + uVar4 * 2) = *puVar2;
              *(undefined2 *)(iVar1 + uVar4 * 2) = puVar2[1];
              uVar4 = uVar4 + 1;
              puVar2 = puVar2 + 2;
            } while (uVar6 != uVar4);
            uVar3 = uVar3 - uVar6;
            iVar8 = iVar8 + uVar6 * 2;
            iVar1 = iVar1 + uVar6 * 2;
          } while (0 < (int)uVar3);
        }
        else {
          do {
            uVar4 = 0x100 / uVar6;
            if ((int)uVar3 <= (int)(0x100 / uVar6)) {
              uVar4 = uVar3;
            }
            FUN_1012d2d0(param_2,DAT_100af9c0,uVar4 * uVar6 * 2);
            puVar9 = DAT_100af9c0;
            local_3c = iVar8;
            local_38 = iVar1;
            for (uVar5 = 0; uVar4 != uVar5; uVar5 = uVar5 + 1) {
              FUN_1011ea40(local_3c,puVar9,uVar6);
              local_3c = local_3c + uVar6;
              FUN_1011ea40(local_38,(int)puVar9 + uVar6,uVar6);
              puVar9 = puVar9 + uVar6;
              local_38 = local_38 + uVar6;
            }
            uVar3 = uVar3 - uVar4;
            iVar8 = iVar8 + uVar6 * uVar4;
            iVar1 = iVar1 + uVar6 * uVar4;
          } while (0 < (int)uVar3);
        }
      }
      param_1[5] = param_1[5] + uVar7;
      return uVar7;
    }
  }
  return 0;
}


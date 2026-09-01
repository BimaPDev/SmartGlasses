/* FUN_100af5dc @ 0x100af5dc */

uint FUN_100af5dc(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 *puVar9;
  int local_3c;
  int local_38;
  
  if (param_1[6] < 1) {
    uVar6 = 2;
  }
  else {
    uVar6 = param_1[6] >> 3;
  }
  if (param_1[5] < param_3) {
    iVar1 = FUN_1012d608(param_2);
    puVar9 = DAT_100af728;
    if (param_4 <= iVar1) {
      iVar1 = param_4;
    }
    if (1 < param_1[4]) {
      iVar1 = iVar1 / 2;
    }
    if (uVar6 != 2) {
      uVar2 = iVar1 / (int)uVar6;
    }
    else {
      uVar2 = iVar1 - (iVar1 >> 0x1f);
    }
    uVar7 = param_3 - param_1[5];
    if (uVar6 == 2) {
      uVar2 = (int)uVar2 >> 1;
    }
    if ((int)uVar2 <= (int)uVar7) {
      uVar7 = uVar2;
    }
    if (0 < (int)uVar7) {
      iVar1 = uVar6 * param_1[5];
      iVar8 = *param_1 + iVar1;
      if (param_1[4] == 1) {
        FUN_100a0654(param_2,iVar8,uVar6 * uVar7);
      }
      else {
        iVar1 = param_1[1] + iVar1;
        uVar2 = uVar7;
        if (uVar6 == 2) {
          do {
            uVar6 = uVar2;
            if (0x7f < (int)uVar2) {
              uVar6 = 0x80;
            }
            FUN_100a0654(param_2,puVar9,uVar6 << 2);
            uVar4 = 0;
            puVar3 = DAT_100af728;
            do {
              *(undefined2 *)(iVar8 + uVar4 * 2) = *puVar3;
              *(undefined2 *)(iVar1 + uVar4 * 2) = puVar3[1];
              uVar4 = uVar4 + 1;
              puVar3 = puVar3 + 2;
            } while (uVar6 != uVar4);
            uVar2 = uVar2 - uVar6;
            iVar8 = iVar8 + uVar6 * 2;
            iVar1 = iVar1 + uVar6 * 2;
          } while (0 < (int)uVar2);
        }
        else {
          do {
            uVar4 = 0x100 / uVar6;
            if ((int)uVar2 <= (int)(0x100 / uVar6)) {
              uVar4 = uVar2;
            }
            FUN_100a0654(param_2,DAT_100af728,uVar4 * uVar6 * 2);
            puVar9 = DAT_100af728;
            local_3c = iVar8;
            local_38 = iVar1;
            for (uVar5 = 0; uVar4 != uVar5; uVar5 = uVar5 + 1) {
              FUN_1011ea40(local_3c,puVar9,uVar6);
              local_3c = local_3c + uVar6;
              FUN_1011ea40(local_38,(int)puVar9 + uVar6,uVar6);
              puVar9 = puVar9 + uVar6;
              local_38 = local_38 + uVar6;
            }
            uVar2 = uVar2 - uVar4;
            iVar8 = iVar8 + uVar6 * uVar4;
            iVar1 = iVar1 + uVar6 * uVar4;
          } while (0 < (int)uVar2);
        }
      }
      param_1[5] = param_1[5] + uVar7;
      return uVar7;
    }
  }
  return 0;
}


/* FUN_2c66aea0 @ 0x2c66aea0 */

void FUN_2c66aea0(undefined4 *param_1,uint param_2,uint param_3,code *param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *local_7c;
  uint local_78;
  uint auStack_68 [17];
  
  if ((((uint)param_1 | param_3) & 3) == 0) {
    iVar11 = 0;
    if (param_3 != 4) {
      iVar11 = 1;
    }
  }
  else {
    iVar11 = 2;
  }
  local_78 = 0;
LAB_2c66aec2:
  do {
    while( true ) {
      local_7c = (undefined4 *)((int)param_1 + param_3);
      puVar6 = (undefined4 *)((int)param_1 + param_3 * param_2);
      if (6 < param_2) break;
      for (; puVar12 = local_7c, local_7c < puVar6;
          local_7c = (undefined4 *)((int)local_7c + param_3)) {
        while (param_1 < puVar12) {
          puVar9 = (undefined4 *)((int)puVar12 - param_3);
          iVar2 = (*param_4)(puVar9,puVar12);
          if (iVar2 < 1) break;
          if (iVar11 == 0) {
            uVar7 = *puVar12;
            *puVar12 = *puVar9;
            *puVar9 = uVar7;
            puVar12 = puVar9;
          }
          else {
            FUN_2c66ae30(puVar12,puVar9,param_3,iVar11);
            puVar12 = puVar9;
          }
        }
      }
LAB_2c66aedc:
      if (local_78 == 0) {
        return;
      }
LAB_2c66b120:
      local_78 = local_78 - 1;
      param_2 = auStack_68[local_78 * 2 + 1];
      param_1 = (undefined4 *)auStack_68[local_78 * 2];
    }
    puVar12 = (undefined4 *)(param_3 * (param_2 >> 1) + (int)param_1);
    puVar9 = (undefined4 *)((param_3 * param_2 - param_3) + (int)param_1);
    if (param_2 != 7) {
      puVar4 = puVar9;
      puVar3 = param_1;
      if (0x28 < param_2) {
        iVar2 = param_3 * (param_2 >> 3);
        puVar3 = (undefined4 *)
                 FUN_2c66ae62(param_1,(undefined4 *)((int)param_1 + iVar2),(int)param_1 + iVar2 * 2,
                              param_4);
        puVar12 = (undefined4 *)
                  FUN_2c66ae62((int)puVar12 - iVar2,puVar12,(undefined4 *)((int)puVar12 + iVar2),
                               param_4);
        puVar4 = (undefined4 *)
                 FUN_2c66ae62((int)puVar9 + iVar2 * -2,(int)puVar9 - iVar2,puVar9,param_4);
      }
      puVar12 = (undefined4 *)FUN_2c66ae62(puVar3,puVar12,puVar4,param_4);
    }
    if (iVar11 == 0) {
      uVar7 = *param_1;
      *param_1 = *puVar12;
      *puVar12 = uVar7;
    }
    else {
      FUN_2c66ae30(param_1,puVar12,param_3,iVar11);
    }
    bVar1 = false;
    puVar3 = (undefined4 *)((int)param_1 + param_3);
    puVar12 = puVar9;
    for (puVar4 = puVar3; puVar4 <= puVar9; puVar4 = (undefined4 *)((int)puVar4 + param_3)) {
      iVar2 = (*param_4)(puVar4,param_1);
      puVar10 = puVar9;
      if (iVar2 < 1) {
        if (iVar2 == 0) {
          if (iVar11 == 0) {
            uVar7 = *puVar3;
            *puVar3 = *puVar4;
            *puVar4 = uVar7;
          }
          else {
            FUN_2c66ae30(puVar3,puVar4,param_3,iVar11);
          }
          puVar3 = (undefined4 *)((int)puVar3 + param_3);
          goto LAB_2c66afc4;
        }
      }
      else {
        while( true ) {
          iVar2 = (*param_4)(puVar10,param_1);
          puVar9 = (undefined4 *)((int)puVar10 - param_3);
          if (iVar2 < 0) break;
          if (iVar2 == 0) {
            if (iVar11 == 0) {
              uVar7 = *puVar10;
              *puVar10 = *puVar12;
              *puVar12 = uVar7;
            }
            else {
              FUN_2c66ae30(puVar10,puVar12,param_3,iVar11);
            }
            puVar12 = (undefined4 *)((int)puVar12 - param_3);
            bVar1 = true;
          }
          puVar10 = puVar9;
          if (puVar9 < puVar4) goto LAB_2c66b00c;
        }
        if (iVar11 == 0) {
          uVar7 = *puVar4;
          *puVar4 = *puVar10;
          *puVar10 = uVar7;
        }
        else {
          FUN_2c66ae30(puVar4,puVar10,param_3,iVar11);
        }
LAB_2c66afc4:
        bVar1 = true;
      }
    }
LAB_2c66b00c:
    if (!bVar1) {
      for (; puVar12 = local_7c, local_7c < puVar6;
          local_7c = (undefined4 *)((int)local_7c + param_3)) {
        while (param_1 < puVar12) {
          puVar9 = (undefined4 *)((int)puVar12 - param_3);
          iVar2 = (*param_4)(puVar9,puVar12);
          if (iVar2 < 1) break;
          if (iVar11 == 0) {
            uVar7 = *puVar12;
            *puVar12 = *puVar9;
            *puVar9 = uVar7;
            puVar12 = puVar9;
          }
          else {
            FUN_2c66ae30(puVar12,puVar9,param_3,iVar11);
            puVar12 = puVar9;
          }
        }
      }
      goto LAB_2c66aedc;
    }
    uVar8 = (int)puVar4 - (int)puVar3;
    uVar5 = (int)puVar3 - (int)param_1;
    if ((int)uVar8 <= (int)puVar3 - (int)param_1) {
      uVar5 = uVar8;
    }
    if (uVar5 != 0) {
      FUN_2c66ae30(param_1,(int)puVar4 - uVar5,uVar5,iVar11);
    }
    param_2 = (int)puVar12 - (int)puVar9;
    uVar5 = (int)puVar6 + (-param_3 - (int)puVar12);
    if (param_2 <= uVar5) {
      uVar5 = param_2;
    }
    if (uVar5 != 0) {
      FUN_2c66ae30(puVar4,(int)puVar6 - uVar5,uVar5,iVar11);
    }
    puVar12 = (undefined4 *)((int)puVar6 - param_2);
    uVar5 = uVar8;
    if (uVar8 < param_2) {
      puVar12 = param_1;
      uVar5 = param_2;
      param_1 = (undefined4 *)((int)puVar6 - param_2);
      param_2 = uVar8;
    }
    if (param_2 <= param_3) {
      if (uVar5 <= param_3) goto LAB_2c66aedc;
LAB_2c66b138:
      param_2 = uVar5 / param_3;
      goto LAB_2c66aec2;
    }
    param_2 = param_2 / param_3;
    if (7 < local_78) {
      FUN_2c66aea0(puVar12,param_2,param_3,param_4);
      if (param_3 < uVar5) goto LAB_2c66b138;
      goto LAB_2c66b120;
    }
    auStack_68[local_78 * 2] = (uint)param_1;
    auStack_68[local_78 * 2 + 1] = uVar5 / param_3;
    local_78 = local_78 + 1;
    param_1 = puVar12;
  } while( true );
}


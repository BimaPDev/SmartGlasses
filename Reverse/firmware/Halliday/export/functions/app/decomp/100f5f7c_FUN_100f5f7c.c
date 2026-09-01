/* FUN_100f5f7c @ 0x100f5f7c */

void FUN_100f5f7c(uint param_1,uint param_2,uint param_3,code *param_4,int param_5,code *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint local_34;
  
  uVar3 = param_3 * (param_2 >> 1);
  if (uVar3 == 0) {
    return;
  }
  if ((param_5 == 0) && (((param_1 | param_3) & 7) != 0)) {
    if (((param_1 | param_3) & 3) == 0) {
      param_5 = 1;
    }
    else {
      param_5 = 2;
    }
  }
  local_34 = param_3 * param_2;
  uVar6 = -param_3 & param_3;
LAB_100f5fb2:
  if (uVar3 == 0) goto LAB_100f6082;
LAB_100f5fb6:
  uVar3 = uVar3 - param_3;
  uVar4 = param_3 + uVar3 * 2;
  uVar8 = param_3 + uVar4;
  bVar10 = local_34 == uVar8;
  if (local_34 <= uVar8) goto LAB_100f60a4;
  do {
    if (param_4 == (code *)0x0) {
      do {
        while( true ) {
          iVar1 = (*param_6)(param_1 + uVar4,param_1 + uVar8);
          uVar2 = param_3 + uVar4 * 2;
          if (iVar1 < 0) break;
          uVar9 = param_3 + uVar2;
          uVar5 = uVar4;
          uVar4 = uVar2;
          uVar8 = uVar9;
          if (local_34 <= uVar9) goto LAB_100f6006;
        }
        uVar2 = param_3 + uVar8 * 2;
        uVar9 = param_3 + uVar2;
        uVar5 = uVar8;
        uVar4 = uVar2;
        uVar8 = uVar9;
      } while (uVar9 < local_34);
    }
    else {
      do {
        while( true ) {
          uVar5 = uVar4;
          iVar1 = (*param_4)(param_1 + uVar5,param_1 + uVar8,param_6);
          uVar2 = param_3 + uVar5 * 2;
          if (iVar1 < 0) break;
          uVar9 = param_3 + uVar2;
          uVar4 = uVar2;
          uVar8 = uVar9;
          if (local_34 <= uVar9) goto LAB_100f6006;
        }
        uVar2 = param_3 + uVar8 * 2;
        uVar9 = param_3 + uVar2;
        uVar5 = uVar8;
        uVar4 = uVar2;
        uVar8 = uVar9;
      } while (uVar9 < local_34);
    }
LAB_100f6006:
    uVar8 = uVar3;
    if (local_34 == uVar9) {
      uVar5 = uVar2;
    }
    while( true ) {
      uVar3 = uVar5;
      if (uVar8 == uVar3) goto LAB_100f5fb2;
      if (param_4 == (code *)0x0) {
        while( true ) {
          iVar7 = param_1 + uVar3;
          iVar1 = (*param_6)(param_1 + uVar8,iVar7);
          uVar4 = (uVar3 - param_3) - (-(uVar6 & uVar3 - param_3) & param_3);
          if (iVar1 < 0) break;
          uVar3 = uVar4 >> 1;
          if (uVar8 == uVar4 >> 1) goto LAB_100f5fb2;
        }
      }
      else {
        while( true ) {
          iVar7 = param_1 + uVar3;
          iVar1 = (*param_4)(param_1 + uVar8,iVar7);
          uVar4 = (uVar3 - param_3) - (-(uVar6 & uVar3 - param_3) & param_3);
          if (iVar1 < 0) break;
          uVar3 = uVar4 >> 1;
          if (uVar8 == uVar4 >> 1) goto LAB_100f5fb2;
        }
      }
      if (uVar8 == uVar3) goto LAB_100f5fb2;
      do {
        uVar4 = (uVar3 - param_3) - (-(uVar6 & uVar3 - param_3) & param_3);
        uVar3 = uVar4 >> 1;
        FUN_100f5f04(param_1 + (uVar4 >> 1),iVar7,param_3,param_5);
      } while (uVar8 != uVar3);
      if (uVar3 != 0) goto LAB_100f5fb6;
LAB_100f6082:
      local_34 = local_34 - param_3;
      if (local_34 == 0) {
        return;
      }
      FUN_100f5f04(param_1,param_1 + local_34,param_3,param_5);
      uVar8 = param_3 * 2;
      bVar10 = local_34 == uVar8;
      uVar4 = param_3;
      if (uVar8 <= local_34 && !bVar10) break;
LAB_100f60a4:
      uVar5 = uVar4;
      uVar8 = uVar3;
      if (!bVar10) goto LAB_100f5fb2;
    }
  } while( true );
}


/* FUN_2c5da3f8 @ 0x2c5da3f8 */

void FUN_2c5da3f8(undefined4 *param_1,undefined4 *param_2,int param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *local_34;
  
  iVar3 = (int)param_2 - (int)param_1;
  if (0x40 < iVar3) {
    local_34 = param_2;
    if (param_3 != 0) {
      puVar7 = param_1 + 1;
LAB_2c5da41a:
      param_3 = param_3 + -1;
      iVar3 = (int)param_2 - (int)param_1 >> 2;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      uVar6 = param_1[iVar3];
      uVar1 = FUN_2c5d8bd8(param_1[1]);
      uVar2 = FUN_2c5d8bd8(uVar6);
      uVar6 = param_2[-1];
      local_34 = puVar7;
      puVar4 = param_2;
      if (uVar1 < uVar2) {
        uVar1 = FUN_2c5d8bd8(param_1[iVar3]);
        uVar2 = FUN_2c5d8bd8(uVar6);
        if (uVar2 <= uVar1) {
          uVar6 = param_2[-1];
          uVar1 = FUN_2c5d8bd8(param_1[1]);
          uVar2 = FUN_2c5d8bd8(uVar6);
          if (uVar1 < uVar2) {
            uVar6 = *param_1;
            *param_1 = param_2[-1];
            param_2[-1] = uVar6;
            uVar8 = *param_1;
            uVar6 = param_1[1];
            goto LAB_2c5da476;
          }
LAB_2c5da4e6:
          uVar6 = *param_1;
          uVar8 = param_1[1];
          *param_1 = uVar8;
          param_1[1] = uVar6;
          goto LAB_2c5da476;
        }
        uVar6 = *param_1;
      }
      else {
        uVar1 = FUN_2c5d8bd8(param_1[1]);
        uVar2 = FUN_2c5d8bd8(uVar6);
        if (uVar1 < uVar2) goto LAB_2c5da4e6;
        uVar6 = param_2[-1];
        uVar1 = FUN_2c5d8bd8(param_1[iVar3]);
        uVar2 = FUN_2c5d8bd8(uVar6);
        uVar6 = *param_1;
        if (uVar1 < uVar2) {
          *param_1 = param_2[-1];
          param_2[-1] = uVar6;
          uVar8 = *param_1;
          uVar6 = param_1[1];
          goto LAB_2c5da476;
        }
      }
      *param_1 = param_1[iVar3];
      param_1[iVar3] = uVar6;
      uVar8 = *param_1;
      uVar6 = param_1[1];
LAB_2c5da476:
      do {
        uVar1 = FUN_2c5d8bd8(uVar6);
        uVar2 = FUN_2c5d8bd8(uVar8);
        if (uVar2 <= uVar1) {
          do {
            puVar4 = puVar4 + -1;
            uVar6 = *puVar4;
            uVar1 = FUN_2c5d8bd8(*param_1);
            uVar2 = FUN_2c5d8bd8(uVar6);
          } while (uVar1 < uVar2);
          if (puVar4 <= local_34) goto LAB_2c5da4b6;
          uVar6 = *local_34;
          *local_34 = *puVar4;
          *puVar4 = uVar6;
        }
        uVar6 = local_34[1];
        uVar8 = *param_1;
        local_34 = local_34 + 1;
      } while( true );
    }
LAB_2c5da4f2:
    iVar5 = (iVar3 >> 2) + -2 >> 1;
    puVar7 = param_1 + iVar5 + 1;
    while( true ) {
      puVar7 = puVar7 + -1;
      FUN_2c5da2f8(param_1,iVar5,iVar3 >> 2,*puVar7,param_4);
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
    }
    do {
      local_34 = local_34 + -1;
      uVar6 = *local_34;
      *local_34 = *param_1;
      FUN_2c5da2f8(param_1,0,(int)local_34 - (int)param_1 >> 2,uVar6,param_4);
    } while (4 < (int)local_34 - (int)param_1);
  }
  return;
LAB_2c5da4b6:
  FUN_2c5da3f8(local_34,param_2,param_3,param_4);
  iVar3 = (int)local_34 - (int)param_1;
  if (iVar3 < 0x41) {
    return;
  }
  param_2 = local_34;
  if (param_3 == 0) goto LAB_2c5da4f2;
  goto LAB_2c5da41a;
}


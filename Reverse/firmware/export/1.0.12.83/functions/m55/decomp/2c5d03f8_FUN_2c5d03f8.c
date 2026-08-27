/* FUN_2c5d03f8 @ 0x2c5d03f8 */

void FUN_2c5d03f8(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  
  iVar3 = (int)param_2 - (int)param_1;
  if (0x40 < iVar3) {
    if (param_3 != 0) {
      puVar2 = param_2;
LAB_2c5d0414:
      puVar1 = (uint *)param_1[1];
      puVar11 = (uint *)puVar2[-1];
      param_3 = param_3 + -1;
      iVar3 = (int)puVar2 - (int)param_1 >> 2;
      uVar7 = *puVar1;
      uVar9 = *puVar11;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      uVar4 = *(uint *)param_1[iVar3 >> 1];
      if (uVar7 < uVar4) {
        if (uVar9 <= uVar4) {
          if (uVar7 < uVar9) {
            puVar5 = (uint *)*param_1;
            *param_1 = puVar11;
            puVar2[-1] = puVar5;
            puVar1 = (uint *)*param_1;
            puVar11 = (uint *)param_1[1];
            goto LAB_2c5d044c;
          }
LAB_2c5d04c0:
          puVar11 = (uint *)*param_1;
          *param_1 = puVar1;
          param_1[1] = puVar11;
          puVar5 = (uint *)puVar2[-1];
          goto LAB_2c5d044c;
        }
        puVar5 = (uint *)*param_1;
      }
      else {
        if (uVar7 < uVar9) goto LAB_2c5d04c0;
        puVar5 = (uint *)*param_1;
        if (uVar4 < uVar9) {
          *param_1 = puVar11;
          puVar2[-1] = puVar5;
          puVar1 = (uint *)*param_1;
          puVar11 = (uint *)param_1[1];
          goto LAB_2c5d044c;
        }
      }
      *param_1 = (uint *)param_1[iVar3 >> 1];
      param_1[iVar3 >> 1] = puVar5;
      puVar5 = (uint *)puVar2[-1];
      puVar1 = (uint *)*param_1;
      puVar11 = (uint *)param_1[1];
LAB_2c5d044c:
      uVar7 = *puVar1;
      param_2 = param_1 + 1;
      puVar10 = puVar2;
      do {
        if (uVar7 <= *puVar11) {
          puVar10 = puVar10 + -1;
          uVar9 = *puVar5;
          while (uVar7 < uVar9) {
            puVar10 = puVar10 + -1;
            puVar5 = (uint *)*puVar10;
            uVar9 = *puVar5;
          }
          if (puVar10 <= param_2) goto LAB_2c5d048a;
          *param_2 = puVar5;
          *puVar10 = puVar11;
          puVar5 = (uint *)puVar10[-1];
          uVar7 = *(uint *)*param_1;
        }
        param_2 = param_2 + 1;
        puVar11 = (uint *)*param_2;
      } while( true );
    }
LAB_2c5d04ce:
    iVar8 = (iVar3 >> 2) + -2 >> 1;
    puVar2 = param_1 + iVar8 + 1;
    while( true ) {
      puVar2 = puVar2 + -1;
      FUN_2c5d0248(param_1,iVar8,iVar3 >> 2,*puVar2);
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
    }
    do {
      param_2 = param_2 + -1;
      uVar6 = *param_2;
      *param_2 = *param_1;
      FUN_2c5d0248(param_1,0,(int)param_2 - (int)param_1 >> 2,uVar6);
    } while (4 < (int)param_2 - (int)param_1);
  }
  return;
LAB_2c5d048a:
  FUN_2c5d03f8(param_2,puVar2,param_3,param_4);
  iVar3 = (int)param_2 - (int)param_1;
  if (iVar3 < 0x41) {
    return;
  }
  puVar2 = param_2;
  if (param_3 == 0) goto LAB_2c5d04ce;
  goto LAB_2c5d0414;
}


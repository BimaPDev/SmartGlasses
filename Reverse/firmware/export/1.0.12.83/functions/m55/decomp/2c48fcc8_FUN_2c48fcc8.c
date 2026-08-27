/* FUN_2c48fcc8 @ 0x2c48fcc8 */

void FUN_2c48fcc8(int param_1,undefined2 *param_2,uint param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined2 *puVar4;
  
  iVar2 = DAT_2c48fd70;
  iVar5 = DAT_2c48fd70 + param_1 * 0x18;
  iVar6 = *(int *)(iVar5 + 0x14);
  uVar7 = *(uint *)(iVar5 + 8);
  uVar8 = iVar6 + (param_3 >> 1);
  if (uVar8 <= uVar7) {
    if (param_3 >> 2 != 0) {
      puVar9 = (undefined2 *)(iVar6 + -2 + *(int *)(iVar5 + 4));
      puVar3 = param_2;
      do {
        puVar4 = puVar3 + 2;
        puVar9 = puVar9 + 1;
        uVar1 = *puVar9;
        *puVar3 = uVar1;
        puVar3[1] = uVar1;
        puVar3 = puVar4;
      } while (puVar4 != param_2 + (param_3 >> 2) * 2);
      uVar8 = (param_3 >> 1) + *(int *)(iVar2 + param_1 * 0x18 + 0x14);
    }
    *(uint *)(iVar2 + param_1 * 0x18 + 0x14) = uVar8;
    return;
  }
  uVar8 = uVar7 - iVar6;
  if (uVar8 >> 1 != 0) {
    puVar9 = (undefined2 *)(iVar6 + -2 + *(int *)(iVar5 + 4));
    uVar7 = 0;
    do {
      puVar9 = puVar9 + 1;
      uVar1 = *puVar9;
      param_2[uVar7 * 2] = uVar1;
      param_2[uVar7 * 2 + 1] = uVar1;
      uVar7 = uVar7 + 1;
    } while (uVar8 >> 1 != uVar7);
    uVar7 = *(uint *)(iVar2 + param_1 * 0x18 + 8);
  }
  *(uint *)(iVar2 + param_1 * 0x18 + 0x14) = uVar7;
  FUN_2c674268(param_2 + uVar8,0,param_3 + uVar8 * -2);
  return;
}


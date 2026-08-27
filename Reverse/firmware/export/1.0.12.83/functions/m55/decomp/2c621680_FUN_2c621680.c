/* FUN_2c621680 @ 0x2c621680 */

void FUN_2c621680(int param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6,
                 int param_7,int param_8)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  uint *puVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  
  uVar6 = 8;
  puVar13 = (uint *)(param_2 + -1);
  puVar11 = DAT_2c62179c + 6;
  iVar4 = 0;
  puVar2 = (uint *)(param_1 + -4);
  iVar3 = 0;
  uVar1 = 8;
  puVar7 = DAT_2c62179c;
  piVar8 = DAT_2c6217a0;
  puVar9 = DAT_2c6217a8;
  piVar10 = DAT_2c6217a4;
  puVar12 = puVar2;
  while( true ) {
    uVar5 = (param_7 + -1) - iVar4;
    puVar12 = puVar12 + 1;
    *puVar12 = (((param_6 + -1) - iVar3) + uVar1) / uVar1;
    if (CARRY4(uVar5,uVar6)) {
      uVar1 = 1;
    }
    puVar13 = puVar13 + 1;
    *puVar13 = (uVar5 + uVar6) / uVar6;
    if (!CARRY4(uVar5,uVar6)) {
      uVar1 = 0;
    }
    uVar6 = *puVar12;
    if (uVar6 == 0) {
      *puVar13 = 0;
      *puVar12 = 0;
    }
    else {
      if (uVar1 != 0) {
        uVar6 = 0;
      }
      *puVar12 = uVar6;
    }
    if (puVar7 == puVar11) break;
    uVar1 = *puVar7;
    iVar3 = *piVar10;
    uVar6 = *puVar9;
    iVar4 = *piVar8;
    puVar7 = puVar7 + 1;
    piVar8 = piVar8 + 1;
    puVar9 = puVar9 + 1;
    piVar10 = piVar10 + 1;
  }
  iVar3 = 0;
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  while( true ) {
    puVar2 = puVar2 + 1;
    if (*puVar2 != 0) {
      iVar4 = *param_2;
      if (iVar4 != 0) {
        iVar3 = iVar3 + (param_8 * *puVar2 + 7 >> 3) * iVar4 + iVar4;
      }
    }
    param_3[1] = iVar3;
    iVar3 = *param_4;
    param_4 = param_4 + 1;
    *param_4 = *param_2 * (param_8 * *puVar2 + 7 >> 3) + iVar3;
    iVar3 = *param_5;
    param_5 = param_5 + 1;
    *param_5 = iVar3 + (*param_2 * param_8 * *puVar2 + 7 >> 3);
    if ((uint *)(param_1 + 0x18) == puVar2) break;
    param_3 = param_3 + 1;
    iVar3 = *param_3;
    param_2 = param_2 + 1;
  }
  return;
}


/* FUN_2c4c6710 @ 0x2c4c6710 */

void FUN_2c4c6710(int *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = *(ushort *)((int)param_2 + 6);
  if (uVar1 != 0) {
    uVar7 = 0;
    piVar3 = param_2;
    piVar5 = param_1;
    do {
      uVar7 = uVar7 + 1;
      *piVar5 = -piVar3[6];
      piVar5[1] = -piVar3[7];
      piVar5[4] = piVar3[2];
      piVar5[2] = piVar3[3];
      piVar5[3] = piVar3[4];
      piVar3 = piVar3 + 6;
      piVar5 = piVar5 + 5;
    } while (uVar7 != uVar1);
    iVar6 = *param_2;
    iVar4 = param_2[3];
    iVar2 = param_2[4];
    param_1[4] = iVar6 * param_2[2];
    param_1[2] = iVar6 * iVar4;
    param_1[3] = iVar6 * iVar2;
  }
  return;
}


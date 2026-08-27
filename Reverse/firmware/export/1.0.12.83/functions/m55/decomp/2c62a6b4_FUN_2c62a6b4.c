/* FUN_2c62a6b4 @ 0x2c62a6b4 */

bool FUN_2c62a6b4(undefined2 *param_1,short *param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  iVar3 = (int)*param_3;
  if ((int)*param_3 < (int)*param_2) {
    iVar3 = (int)*param_2;
  }
  *param_1 = (short)iVar3;
  iVar4 = (int)param_3[1];
  if ((int)param_3[1] < (int)param_2[1]) {
    iVar4 = (int)param_2[1];
  }
  param_1[1] = (short)iVar4;
  iVar5 = (int)param_3[2];
  if ((int)param_2[2] <= (int)param_3[2]) {
    iVar5 = (int)param_2[2];
  }
  param_1[2] = (short)iVar5;
  iVar2 = (int)param_3[3];
  if ((int)param_2[3] <= (int)param_3[3]) {
    iVar2 = (int)param_2[3];
  }
  bVar7 = SBORROW4(iVar4,iVar2);
  iVar1 = iVar4 - iVar2;
  bVar6 = iVar4 == iVar2;
  if (iVar4 <= iVar2) {
    bVar7 = SBORROW4(iVar3,iVar5);
    iVar1 = iVar3 - iVar5;
    bVar6 = iVar3 == iVar5;
  }
  param_1[3] = (short)iVar2;
  return bVar6 || iVar1 < 0 != bVar7;
}


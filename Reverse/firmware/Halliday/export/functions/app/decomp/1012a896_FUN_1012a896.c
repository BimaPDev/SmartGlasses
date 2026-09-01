/* FUN_1012a896 @ 0x1012a896 */

undefined4 FUN_1012a896(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_3;
  if (*param_3 < *param_2) {
    iVar5 = *param_2;
  }
  iVar3 = param_3[1];
  if (param_3[1] < param_2[1]) {
    iVar3 = param_2[1];
  }
  iVar4 = param_3[2];
  if (param_2[2] <= param_3[2]) {
    iVar4 = param_2[2];
  }
  iVar2 = param_3[3];
  if (param_2[3] <= param_3[3]) {
    iVar2 = param_2[3];
  }
  *param_1 = iVar5;
  param_1[1] = iVar3;
  param_1[2] = iVar4;
  param_1[3] = iVar2;
  if (iVar4 < iVar5) {
    uVar1 = 0;
  }
  else if (iVar2 < iVar3) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


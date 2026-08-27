/* FUN_2c65e7ba @ 0x2c65e7ba */

int FUN_2c65e7ba(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
LAB_2c65e7c6:
  if (param_3 <= iVar4) {
    return iVar4;
  }
  iVar1 = param_1[2];
  piVar3 = param_2;
  if (param_1[3] != iVar1) goto code_r0x2c65e7d2;
  goto LAB_2c65e7fc;
code_r0x2c65e7d2:
  iVar2 = param_1[3] - iVar1 >> 2;
  if (param_3 - iVar4 <= iVar2) {
    iVar2 = param_3 - iVar4;
  }
  if (iVar2 != 0) {
    FUN_2c66ed1c(param_2,iVar1,iVar2);
  }
  iVar4 = iVar4 + iVar2;
  param_2 = param_2 + iVar2;
  param_1[2] = param_1[2] + iVar2 * 4;
  piVar3 = param_2;
  if (iVar4 < param_3) {
LAB_2c65e7fc:
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar1 == -1) {
      return iVar4;
    }
    iVar4 = iVar4 + 1;
    param_2 = piVar3 + 1;
    *piVar3 = iVar1;
  }
  goto LAB_2c65e7c6;
}


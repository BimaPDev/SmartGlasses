/* FUN_2c65e816 @ 0x2c65e816 */

int FUN_2c65e816(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
LAB_2c65e822:
  if (param_3 <= iVar3) {
    return iVar3;
  }
  iVar1 = param_1[5];
  if (param_1[6] != iVar1) goto code_r0x2c65e82e;
  goto LAB_2c65e858;
code_r0x2c65e82e:
  iVar2 = param_1[6] - iVar1 >> 2;
  if (param_3 - iVar3 <= iVar2) {
    iVar2 = param_3 - iVar3;
  }
  if (iVar2 != 0) {
    FUN_2c66ed1c(iVar1,param_2,iVar2);
  }
  iVar3 = iVar3 + iVar2;
  param_2 = param_2 + iVar2;
  param_1[5] = param_1[5] + iVar2 * 4;
  if (iVar3 < param_3) {
LAB_2c65e858:
    iVar1 = (**(code **)(*param_1 + 0x34))(param_1,*param_2);
    if (iVar1 == -1) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    param_2 = param_2 + 1;
  }
  goto LAB_2c65e822;
}


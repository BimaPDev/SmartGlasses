/* FUN_2c65e872 @ 0x2c65e872 */

int FUN_2c65e872(int *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
LAB_2c65e87e:
  if (param_3 <= iVar2) {
    return iVar2;
  }
  iVar1 = param_1[6] - param_1[5];
  if (iVar1 != 0) goto code_r0x2c65e88a;
  goto LAB_2c65e8aa;
code_r0x2c65e88a:
  iVar3 = param_3 - iVar2;
  if (iVar1 <= param_3 - iVar2) {
    iVar3 = iVar1;
  }
  iVar2 = iVar2 + iVar3;
  FUN_2c674668(param_1[5],param_2,iVar3);
  param_2 = param_2 + iVar3;
  param_1[5] = param_1[5] + iVar3;
  if (iVar2 < param_3) {
LAB_2c65e8aa:
    iVar1 = (**(code **)(*param_1 + 0x34))(param_1,*param_2);
    if (iVar1 == -1) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 1;
  }
  goto LAB_2c65e87e;
}


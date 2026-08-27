/* FUN_2c65e768 @ 0x2c65e768 */

int FUN_2c65e768(int *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
LAB_2c65e774:
  if (param_3 <= iVar3) {
    return iVar3;
  }
  iVar1 = param_1[3] - param_1[2];
  puVar2 = param_2;
  if (iVar1 != 0) goto code_r0x2c65e780;
  goto LAB_2c65e7a0;
code_r0x2c65e780:
  iVar4 = param_3 - iVar3;
  if (iVar1 <= param_3 - iVar3) {
    iVar4 = iVar1;
  }
  iVar3 = iVar3 + iVar4;
  FUN_2c674668(param_2,param_1[2],iVar4);
  param_2 = param_2 + iVar4;
  param_1[2] = param_1[2] + iVar4;
  puVar2 = param_2;
  if (iVar3 < param_3) {
LAB_2c65e7a0:
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar1 == -1) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    param_2 = puVar2 + 1;
    *puVar2 = (char)iVar1;
  }
  goto LAB_2c65e774;
}


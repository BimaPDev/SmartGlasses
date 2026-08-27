/* FUN_140d179e @ 0x140d179e */

int FUN_140d179e(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
LAB_140d17aa:
  if (param_3 <= iVar3) {
    return iVar3;
  }
  iVar1 = param_1[5];
  if (param_1[6] != iVar1) goto code_r0x140d17b6;
  goto LAB_140d17e0;
code_r0x140d17b6:
  iVar2 = param_1[6] - iVar1 >> 2;
  if (param_3 - iVar3 <= iVar2) {
    iVar2 = param_3 - iVar3;
  }
  if (iVar2 != 0) {
    FUN_140df878(iVar1,param_2,iVar2);
  }
  iVar3 = iVar3 + iVar2;
  param_2 = param_2 + iVar2;
  param_1[5] = param_1[5] + iVar2 * 4;
  if (iVar3 < param_3) {
LAB_140d17e0:
    iVar1 = (**(code **)(*param_1 + 0x34))(param_1,*param_2);
    if (iVar1 == -1) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    param_2 = param_2 + 1;
  }
  goto LAB_140d17aa;
}


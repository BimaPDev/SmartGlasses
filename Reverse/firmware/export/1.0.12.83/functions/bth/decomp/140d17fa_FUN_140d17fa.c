/* FUN_140d17fa @ 0x140d17fa */

int FUN_140d17fa(int *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
LAB_140d1806:
  if (param_3 <= iVar2) {
    return iVar2;
  }
  iVar1 = param_1[6] - param_1[5];
  if (iVar1 != 0) goto code_r0x140d1812;
  goto LAB_140d1832;
code_r0x140d1812:
  iVar3 = param_3 - iVar2;
  if (iVar1 <= param_3 - iVar2) {
    iVar3 = iVar1;
  }
  iVar2 = iVar2 + iVar3;
  FUN_140e5278(param_1[5],param_2,iVar3);
  param_2 = param_2 + iVar3;
  param_1[5] = param_1[5] + iVar3;
  if (iVar2 < param_3) {
LAB_140d1832:
    iVar1 = (**(code **)(*param_1 + 0x34))(param_1,*param_2);
    if (iVar1 == -1) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 1;
  }
  goto LAB_140d1806;
}


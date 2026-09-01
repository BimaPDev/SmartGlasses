/* FUN_1012a7fc @ 0x1012a7fc */

bool FUN_1012a7fc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_1[2] - *param_1) / 2;
  iVar2 = (param_2[1] - param_1[1]) - iVar1;
  iVar3 = (*param_2 - *param_1) - iVar1;
  return (uint)(iVar3 * iVar3 + iVar2 * iVar2) <= (uint)(iVar1 * iVar1);
}


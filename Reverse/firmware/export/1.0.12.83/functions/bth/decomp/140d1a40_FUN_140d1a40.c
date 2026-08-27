/* FUN_140d1a40 @ 0x140d1a40 */

void FUN_140d1a40(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1] - (param_2 + param_3);
  if ((iVar1 != 0) && (param_3 != 0)) {
    iVar2 = *param_1;
    FUN_140d1948(param_2 + iVar2,param_2 + param_3 + iVar2,iVar1,iVar2,param_4);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 - param_3;
  *(undefined1 *)(*param_1 + (iVar1 - param_3)) = 0;
  return;
}


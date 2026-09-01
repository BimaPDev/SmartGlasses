/* FUN_1012b018 @ 0x1012b018 */

void FUN_1012b018(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (param_2 == param_1[1]) {
      iVar1 = *(int *)(param_2 + iVar1 + 4);
      param_1[1] = iVar1;
      if (iVar1 != 0) {
        iVar2 = 0;
LAB_1012b034:
        FUN_1012aff6(param_1,iVar1,iVar2);
        return;
      }
      param_1[2] = 0;
    }
    else {
      iVar2 = *(int *)(param_2 + iVar1);
      if (param_2 != param_1[2]) {
        iVar1 = *(int *)(param_2 + iVar1 + 4);
        param_1 = (int *)FUN_1012affe(param_1,iVar2,iVar1);
        goto LAB_1012b034;
      }
      param_1[2] = iVar2;
      if (iVar2 != 0) {
        FUN_1012affe(param_1,iVar2,0);
        return;
      }
      param_1[1] = 0;
    }
  }
  return;
}


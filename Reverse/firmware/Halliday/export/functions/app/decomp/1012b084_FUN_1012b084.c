/* FUN_1012b084 @ 0x1012b084 */

int FUN_1012b084(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    for (iVar2 = param_1[1]; iVar2 != 0; iVar2 = *(int *)(iVar2 + *param_1 + 4)) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


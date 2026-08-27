/* FUN_2c64e410 @ 0x2c64e410 */

void FUN_2c64e410(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(iVar2 + 0xc);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = param_1;
  }
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(iVar2 + 4) = iVar1;
  if (*param_2 == param_1) {
    *param_2 = iVar2;
  }
  else if (*(int *)(iVar1 + 0xc) == param_1) {
    *(int *)(iVar1 + 0xc) = iVar2;
  }
  else {
    *(int *)(iVar1 + 8) = iVar2;
  }
  *(int *)(iVar2 + 0xc) = param_1;
  *(int *)(param_1 + 4) = iVar2;
  return;
}


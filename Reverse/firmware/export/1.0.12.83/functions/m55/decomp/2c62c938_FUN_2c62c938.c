/* FUN_2c62c938 @ 0x2c62c938 */

void FUN_2c62c938(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = lv_mem_alloc(*param_1 + 8);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + *param_1) = 0;
    iVar2 = param_1[1];
    *(int *)(*param_1 + iVar1 + 4) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + *param_1) = iVar1;
    }
    param_1[1] = iVar1;
    if (param_1[2] == 0) {
      param_1[2] = iVar1;
      return;
    }
  }
  return;
}


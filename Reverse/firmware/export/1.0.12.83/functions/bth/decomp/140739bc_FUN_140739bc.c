/* FUN_140739bc @ 0x140739bc */

void FUN_140739bc(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = param_2;
  if (param_4 != 1) {
    iVar2 = 0;
    puVar1 = param_2;
    do {
      iVar2 = iVar2 + 1;
      *puVar1 = (undefined4 *)((int)puVar1 + param_3);
      puVar1 = (undefined4 *)((int)puVar1 + param_3);
    } while (iVar2 != param_4 + -1);
    param_2 = (undefined4 *)(iVar2 * param_3 + (int)param_2);
    *param_2 = 0;
    param_1[1] = param_2;
    return;
  }
  *param_2 = 0;
  param_1[1] = param_2;
  return;
}


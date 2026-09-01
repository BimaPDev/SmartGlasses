/* FUN_100fb5d4 @ 0x100fb5d4 */

void FUN_100fb5d4(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    for (iVar1 = *param_1; (iVar1 != 0 && (*(int *)(iVar1 + 8) != param_2));
        iVar1 = *(int *)(iVar1 + 4)) {
    }
  }
  return;
}


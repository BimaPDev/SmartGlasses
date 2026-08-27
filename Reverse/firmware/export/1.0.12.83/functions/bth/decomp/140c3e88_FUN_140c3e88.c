/* FUN_140c3e88 @ 0x140c3e88 */

void FUN_140c3e88(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (*(int *)(iVar2 + -4) < 0) {
    *(undefined4 *)(iVar2 + -4) = 0;
  }
  iVar1 = *param_2;
  if (*(int *)(iVar1 + -4) < 0) {
    *(undefined4 *)(iVar1 + -4) = 0;
  }
  *param_1 = iVar1;
  *param_2 = iVar2;
  return;
}


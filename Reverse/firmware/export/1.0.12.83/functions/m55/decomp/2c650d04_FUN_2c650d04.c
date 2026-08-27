/* FUN_2c650d04 @ 0x2c650d04 */

void FUN_2c650d04(int *param_1,int *param_2)

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


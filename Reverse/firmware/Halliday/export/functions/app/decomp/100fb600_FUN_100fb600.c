/* FUN_100fb600 @ 0x100fb600 */

void FUN_100fb600(int *param_1,code *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_3 != 0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      if (param_2 == (code *)0x0) {
        do {
          iVar2 = *(int *)(iVar1 + 4);
          (**(code **)(param_3 + 8))(param_3,iVar1);
          iVar1 = iVar2;
        } while (iVar2 != 0);
      }
      else {
        do {
          iVar2 = *(int *)(iVar1 + 4);
          (*param_2)(param_3,*(undefined4 *)(iVar1 + 8),param_4);
          (**(code **)(param_3 + 8))(param_3,iVar1);
          iVar1 = iVar2;
        } while (iVar2 != 0);
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


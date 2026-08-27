/* FUN_2c645b24 @ 0x2c645b24 */

void FUN_2c645b24(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == 0) {
      *(undefined4 *)(param_2 + 8) = 0;
      *(int *)(param_2 + 0xc) = param_1;
      *(int *)(param_1 + 8) = param_2;
      return;
    }
    if (*(char *)(iVar1 + 0x20) < *(char *)(param_2 + 0x20)) break;
    iVar2 = *(int *)(iVar1 + 8);
    param_1 = iVar1;
  }
  *(int *)(param_2 + 8) = iVar1;
  *(int *)(param_2 + 0xc) = param_1;
  *(int *)(param_1 + 8) = param_2;
  *(int *)(iVar1 + 0xc) = param_2;
  return;
}


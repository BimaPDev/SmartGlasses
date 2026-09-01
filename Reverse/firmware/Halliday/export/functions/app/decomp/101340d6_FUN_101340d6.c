/* FUN_101340d6 @ 0x101340d6 */

void FUN_101340d6(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int local_1c;
  undefined4 uStack_18;
  
  iVar3 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  while( true ) {
    iVar1 = *(int *)(param_1 + -4);
    if (iVar1 == 0) {
      iVar1 = FUN_100c1b58(param_1 + -0x20,param_2,0,0,iVar3);
    }
    else {
      *(undefined4 *)(param_1 + -4) = 0;
    }
    if (iVar1 == 0) break;
    local_1c = iVar1;
    uVar2 = FUN_10134054(param_1 + -0x88,&local_1c,*(undefined2 *)(iVar1 + 0x14));
    param_2 = (int)((ulonglong)uVar2 >> 0x20);
    if ((int)uVar2 < 0) {
      if ((int)uVar2 == -0xb) {
        *(int *)(param_1 + -4) = local_1c;
      }
      return;
    }
  }
  return;
}


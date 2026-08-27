/* FUN_140d8db0 @ 0x140d8db0 */

void FUN_140d8db0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_140db60c(0);
  iVar2 = FUN_140dd3a4();
  uVar3 = thunk_FUN_140bff34(iVar2 + 1);
  FUN_140e5278(uVar3,uVar1,iVar2 + 1);
  FUN_140db60c(0,*(undefined4 *)(param_1 + 0x10));
  iVar2 = thunk_FUN_140debc0(param_2,param_3,param_4,param_5);
  FUN_140db60c(0,uVar3);
  thunk_FUN_140db700(uVar3);
  if (iVar2 == 0) {
    *param_2 = 0;
  }
  return;
}


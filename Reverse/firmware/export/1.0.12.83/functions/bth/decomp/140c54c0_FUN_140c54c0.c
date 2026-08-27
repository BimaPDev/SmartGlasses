/* FUN_140c54c0 @ 0x140c54c0 */

undefined4 FUN_140c54c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_140db60c(4,0,param_3,param_4,param_1,param_2,param_3,param_4);
  iVar2 = FUN_140dc518(uVar1,DAT_140c552c);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar2 = FUN_140dd3a4(uVar1);
    iVar2 = iVar2 + 1;
    iVar3 = thunk_FUN_140bff34(iVar2);
    FUN_140e5278(iVar3,uVar1,iVar2);
    FUN_140db60c(4,DAT_140c552c);
  }
  uVar1 = FUN_140de9d8(param_2,param_3,param_4);
  if (iVar3 != 0) {
    FUN_140db60c(4,iVar3);
    thunk_FUN_140db700(iVar3);
  }
  return uVar1;
}


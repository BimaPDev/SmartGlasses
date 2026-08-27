/* FUN_140d862c @ 0x140d862c */

void FUN_140d862c(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_140db60c(0);
  iVar2 = FUN_140dd3a4();
  uVar3 = thunk_FUN_140bff34(iVar2 + 1);
  FUN_140e5278(uVar3,uVar1,iVar2 + 1);
  FUN_140db60c(0,DAT_140d86c4);
  iVar2 = FUN_140dc3ec(param_1,DAT_140d86c8,param_2);
  if (iVar2 + 1U < 2) {
    uVar1 = 0;
    uVar4 = 0;
  }
  else {
    uVar1 = *param_2;
    uVar4 = param_2[1];
    iVar2 = FUN_140e3cd0(uVar1,uVar4,0,DAT_140d86cc);
    if (iVar2 == 0) {
      iVar2 = FUN_140e3cd0(uVar1,uVar4,0,DAT_140d86d0);
      if (iVar2 == 0) goto LAB_140d867c;
      uVar1 = 0xffffffff;
      uVar4 = 0xffefffff;
    }
    else {
      uVar1 = 0xffffffff;
      uVar4 = DAT_140d86d4;
    }
  }
  *param_2 = uVar1;
  param_2[1] = uVar4;
  *param_3 = 4;
LAB_140d867c:
  FUN_140db60c(0,uVar3);
  thunk_FUN_140db700(uVar3);
  return;
}


/* FUN_1011c9b6 @ 0x1011c9b6 */

void FUN_1011c9b6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (int)param_5;
  uVar3 = param_1;
  iVar1 = FUN_1011c726();
  if (iVar1 == 0) {
    iVar1 = FUN_1011c930(param_4,param_1,iVar2,iVar2,uVar3,iVar2,param_3);
    if (iVar1 == 1) {
      return;
    }
  }
  FUN_1011c984(param_1,param_1,param_4,iVar2);
  return;
}


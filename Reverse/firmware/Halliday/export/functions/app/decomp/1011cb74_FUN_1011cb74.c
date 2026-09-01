/* FUN_1011cb74 @ 0x1011cb74 */

void FUN_1011cb74(int *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  iVar2 = (int)*param_4;
  iVar1 = FUN_1011c8a4(param_3,iVar2);
  if (iVar1 == 0) {
    FUN_1011cb6c(auStack_60,param_2,param_4);
    FUN_1011cb4c(auStack_40,param_1,auStack_60,param_4);
    FUN_1011cb6c(auStack_60,auStack_60,param_4);
    FUN_1011cb4c(param_2,param_2,param_3,param_4);
    pcVar3 = param_4 + 4;
    FUN_1011cb6c(param_3,param_3,param_4);
    FUN_1011c9b6(param_1,param_1,param_3,pcVar3,iVar2);
    FUN_1011c9b6(param_3,param_3,param_3,pcVar3,iVar2);
    FUN_1011c9ee(param_3,param_1,param_3,pcVar3,iVar2);
    FUN_1011cb4c(param_1,param_1,param_3,param_4);
    FUN_1011c9b6(param_3,param_1,param_1,pcVar3,iVar2);
    FUN_1011c9b6(param_1,param_1,param_3,pcVar3,iVar2);
    if (*param_1 << 0x1f < 0) {
      iVar1 = FUN_1011c726(param_1,param_1,pcVar3,iVar2);
      FUN_1011c756(param_1,iVar2);
      param_1[iVar2 + 0x3fffffff] = param_1[iVar2 + 0x3fffffff] | iVar1 << 0x1f;
    }
    else {
      FUN_1011c756(param_1,iVar2);
    }
    FUN_1011cb6c(param_3,param_1,param_4);
    FUN_1011c9ee(param_3,param_3,auStack_40,pcVar3,iVar2);
    FUN_1011c9ee(param_3,param_3,auStack_40,pcVar3,iVar2);
    FUN_1011c9ee(auStack_40,auStack_40,param_3,pcVar3,iVar2);
    FUN_1011cb4c(param_1,param_1,auStack_40,param_4);
    FUN_1011c9ee(auStack_60,param_1,auStack_60,pcVar3,iVar2);
    FUN_1011c918(param_1,param_3,iVar2);
    FUN_1011c918(param_3,param_2);
    FUN_1011c918(param_2,auStack_60);
  }
  return;
}


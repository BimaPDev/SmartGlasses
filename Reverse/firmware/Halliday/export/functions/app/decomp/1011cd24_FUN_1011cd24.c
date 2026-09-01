/* FUN_1011cd24 @ 0x1011cd24 */

void FUN_1011cd24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char *param_5)

{
  char *pcVar1;
  int iVar2;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [32];
  
  pcVar1 = param_5 + 4;
  iVar2 = (int)*param_5;
  FUN_1011c9ee(auStack_80,param_3,param_1,pcVar1,iVar2);
  FUN_1011cb6c(auStack_80,auStack_80,param_5);
  FUN_1011cb4c(param_1,param_1,auStack_80,param_5);
  FUN_1011cb4c(param_3,param_3,auStack_80,param_5);
  FUN_1011c9b6(auStack_80,param_4,param_2,pcVar1,iVar2);
  FUN_1011c9ee(param_4,param_4,param_2,pcVar1,iVar2);
  FUN_1011c9ee(auStack_60,param_3,param_1,pcVar1,iVar2);
  FUN_1011cb4c(param_2,param_2,auStack_60,param_5);
  FUN_1011c9b6(auStack_60,param_1,param_3,pcVar1,iVar2);
  FUN_1011cb6c(param_3,param_4,param_5);
  FUN_1011c9ee(param_3,param_3,auStack_60,pcVar1,iVar2);
  FUN_1011c9ee(auStack_40,param_1,param_3,pcVar1,iVar2);
  FUN_1011cb4c(param_4,param_4,auStack_40,param_5);
  FUN_1011c9ee(param_4,param_4,param_2,pcVar1,iVar2);
  FUN_1011cb6c(auStack_40,auStack_80,param_5);
  FUN_1011c9ee(auStack_40,auStack_40,auStack_60,pcVar1,iVar2);
  FUN_1011c9ee(auStack_60,auStack_40,param_1,pcVar1,iVar2);
  FUN_1011cb4c(auStack_60,auStack_60,auStack_80,param_5);
  FUN_1011c9ee(param_2,auStack_60,param_2,pcVar1,iVar2);
  FUN_1011c918(param_1,auStack_40,iVar2);
  return;
}


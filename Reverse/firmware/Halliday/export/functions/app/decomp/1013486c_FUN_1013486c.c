/* FUN_1013486c @ 0x1013486c */

void FUN_1013486c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  pcVar1 = *(char **)(param_2 + 0xc);
  if (*pcVar1 == '\0') {
    uVar3 = 2;
    pcVar2 = &stack0xfffffff6;
    uVar4 = CONCAT22(*(undefined2 *)(pcVar1 + 2),(short)param_4);
  }
  else {
    pcVar2 = pcVar1 + 1;
    uVar3 = 0x10;
    uVar4 = param_4;
  }
  FUN_10134816(param_3,param_4,param_5,pcVar2,uVar3,param_2,param_3,uVar4);
  return;
}


/* FUN_2c5f93c8 @ 0x2c5f93c8 */

int FUN_2c5f93c8(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (*(code *)*param_1)(1,0x10,param_3,(code *)*param_1,param_4);
  FUN_2c5f6a2c(param_1,iVar2,param_3 + 1);
  FUN_2c5f6b40(iVar2,param_2,param_3);
  FUN_2c5f6b1c(iVar2,0);
  if (param_3 < 1) {
    FUN_2c5f6bcc(iVar2,0);
    return iVar2;
  }
  iVar3 = 0;
  iVar5 = 0;
  do {
    while( true ) {
      iVar4 = *(int *)(iVar2 + 4);
      pcVar1 = (char *)(iVar4 + iVar3);
      if ((*pcVar1 != '\\') || (*(char *)(iVar4 + iVar3 + 1) != '|')) break;
      iVar3 = iVar3 + 2;
      *(undefined1 *)(iVar4 + iVar5) = 0x7c;
      iVar5 = iVar5 + 1;
      if (param_3 <= iVar3) goto LAB_2c5f9436;
    }
    iVar3 = iVar3 + 1;
    *(char *)(iVar4 + iVar5) = *pcVar1;
    iVar5 = iVar5 + 1;
  } while (iVar3 < param_3);
LAB_2c5f9436:
  FUN_2c5f6bcc(iVar2);
  return iVar2;
}


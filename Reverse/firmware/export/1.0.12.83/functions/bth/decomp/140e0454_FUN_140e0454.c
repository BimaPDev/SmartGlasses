/* FUN_140e0454 @ 0x140e0454 */

int FUN_140e0454(undefined4 param_1,char *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  piVar2 = DAT_140e04c8;
  FUN_140e1b80();
  piVar5 = (int *)*piVar2;
  pcVar4 = param_2;
  if (piVar5 != (int *)0x0) {
    do {
      cVar1 = *pcVar4;
      if (cVar1 == '\0') {
        iVar7 = (int)pcVar4 - (int)param_2;
        while( true ) {
          piVar6 = piVar5;
          if (*piVar6 == 0) break;
          iVar3 = FUN_140dd3b4(*piVar6,param_2,iVar7);
          piVar5 = piVar6 + 1;
          if ((iVar3 == 0) && (iVar3 = *piVar6, *(char *)(iVar3 + iVar7) == '=')) {
            *param_3 = (int)piVar6 - *piVar2 >> 2;
            FUN_140e1b8c(param_1);
            return iVar3 + iVar7 + 1;
          }
        }
        break;
      }
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '=');
  }
  FUN_140e1b8c(param_1);
  return 0;
}


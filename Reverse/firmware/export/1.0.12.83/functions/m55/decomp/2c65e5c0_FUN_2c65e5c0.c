/* FUN_2c65e5c0 @ 0x2c65e5c0 */

int FUN_2c65e5c0(char *param_1,int param_2,char *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int *extraout_r3;
  char *pcVar5;
  char *pcVar6;
  
  pcVar6 = param_1 + param_2 + -1;
  pcVar5 = param_1;
LAB_2c65e5d0:
  while( true ) {
    if (*param_3 == '\0') {
      *pcVar5 = '\0';
      return (int)pcVar5 - (int)param_1;
    }
    if (pcVar5 < pcVar6) break;
LAB_2c65e62e:
    FUN_2c65e51c(param_1,pcVar5);
    param_4 = extraout_r3;
LAB_2c65e636:
    param_3 = param_3 + 2;
  }
  pcVar3 = param_3;
  if (*param_3 == '%') {
    cVar1 = param_3[1];
    if (cVar1 == 's') {
      piVar4 = param_4 + 1;
      pcVar3 = (char *)(*param_4 + -1);
      while( true ) {
        pcVar3 = pcVar3 + 1;
        param_4 = piVar4;
        if (*pcVar3 == '\0') break;
        if (pcVar5 == pcVar6) goto LAB_2c65e62e;
        *pcVar5 = *pcVar3;
        pcVar5 = pcVar5 + 1;
      }
      goto LAB_2c65e636;
    }
    if (cVar1 == 'z') {
      if (param_3[2] == 'u') {
        iVar2 = FUN_2c65e568(pcVar5,(int)pcVar6 - (int)pcVar5,*param_4);
        if (iVar2 < 1) goto LAB_2c65e62e;
        pcVar5 = pcVar5 + iVar2;
        param_3 = param_3 + 3;
        param_4 = param_4 + 1;
        goto LAB_2c65e5d0;
      }
    }
    else if (cVar1 == '%') {
      pcVar3 = param_3 + 1;
    }
  }
  param_3 = pcVar3 + 1;
  *pcVar5 = *pcVar3;
  pcVar5 = pcVar5 + 1;
  goto LAB_2c65e5d0;
}


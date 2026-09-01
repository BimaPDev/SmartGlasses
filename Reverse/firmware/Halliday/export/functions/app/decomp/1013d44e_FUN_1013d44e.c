/* FUN_1013d44e @ 0x1013d44e */

char * FUN_1013d44e(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (*param_2 != '\0') {
    while( true ) {
      pcVar2 = param_1;
      if (*pcVar2 == '\0') break;
      pcVar3 = pcVar2;
      param_1 = pcVar2 + 1;
      pcVar4 = param_2;
      if (*param_2 == *pcVar2) {
        do {
          cVar1 = pcVar4[1];
          if (cVar1 == '\0') {
            return pcVar2;
          }
          pcVar3 = pcVar3 + 1;
          pcVar4 = pcVar4 + 1;
        } while (*pcVar3 == cVar1);
      }
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}


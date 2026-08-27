/* FUN_2c66c5b6 @ 0x2c66c5b6 */

char * FUN_2c66c5b6(undefined4 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar5;
  char *pcVar4;
  
  pcVar2 = (char *)*param_1;
  if ((pcVar2 != (char *)0x0) || (pcVar2 = (char *)*param_1, pcVar2 != (char *)0x0)) {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      if (cVar1 == '\0') {
        pcVar3 = pcVar2 + 1;
        if (*pcVar2 == '\0') {
          *param_1 = 0;
          return (char *)0x0;
        }
        do {
          pcVar4 = pcVar3;
          pcVar3 = pcVar4 + 1;
          pcVar5 = param_2;
          do {
            cVar1 = *pcVar5;
            if (*pcVar4 == cVar1) {
              if (*pcVar4 == '\0') {
                pcVar3 = (char *)0x0;
              }
              else {
                *pcVar4 = '\0';
              }
              *param_1 = pcVar3;
              return pcVar2;
            }
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
        } while( true );
      }
      pcVar3 = pcVar3 + 1;
    } while (*pcVar2 != cVar1);
    *param_1 = pcVar2 + 1;
    *pcVar2 = '\0';
  }
  return pcVar2;
}


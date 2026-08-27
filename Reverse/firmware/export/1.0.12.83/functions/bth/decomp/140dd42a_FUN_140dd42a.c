/* FUN_140dd42a @ 0x140dd42a */

char * FUN_140dd42a(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (*param_2 != '\0') {
    for (; *param_1 != '\0'; param_1 = param_1 + 1) {
      pcVar2 = param_2;
      pcVar3 = param_1;
      if (*param_2 == *param_1) {
        do {
          cVar1 = pcVar2[1];
          if (cVar1 == '\0') {
            return param_1;
          }
          pcVar3 = pcVar3 + 1;
          pcVar2 = pcVar2 + 1;
        } while (*pcVar3 == cVar1);
      }
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}


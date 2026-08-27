/* FUN_2c4e0400 @ 0x2c4e0400 */

char * FUN_2c4e0400(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  if (param_1 != (char *)0x0) {
    while( true ) {
      pcVar2 = pcVar3 + 1;
      cVar1 = *pcVar3;
      if (cVar1 == '\0') break;
      pcVar3 = pcVar2;
      if ((cVar1 == '/') || (cVar1 == '\\')) {
        param_1 = pcVar2;
      }
    }
  }
  return param_1;
}


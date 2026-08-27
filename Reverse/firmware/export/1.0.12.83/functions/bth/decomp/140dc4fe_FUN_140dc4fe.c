/* FUN_140dc4fe @ 0x140dc4fe */

char * FUN_140dc4fe(char *param_1,char param_2)

{
  char *pcVar1;
  
  do {
    pcVar1 = param_1;
    if (*pcVar1 == '\0') {
      if (param_2 == '\0') {
        return pcVar1;
      }
      return (char *)0x0;
    }
    param_1 = pcVar1 + 1;
  } while (*pcVar1 != param_2);
  return pcVar1;
}


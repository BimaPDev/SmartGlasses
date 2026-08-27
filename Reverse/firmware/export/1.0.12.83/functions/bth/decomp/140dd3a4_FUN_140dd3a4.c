/* FUN_140dd3a4 @ 0x140dd3a4 */

char * FUN_140dd3a4(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  do {
    pcVar2 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar2;
  } while (cVar1 != '\0');
  return pcVar2 + (-1 - (int)param_1);
}


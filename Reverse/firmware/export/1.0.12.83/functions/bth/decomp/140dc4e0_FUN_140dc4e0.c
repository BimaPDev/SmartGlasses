/* FUN_140dc4e0 @ 0x140dc4e0 */

void FUN_140dc4e0(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  do {
    pcVar2 = param_1;
    param_1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  pcVar2 = pcVar2 + -1;
  do {
    cVar1 = *param_2;
    pcVar2 = pcVar2 + 1;
    *pcVar2 = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return;
}


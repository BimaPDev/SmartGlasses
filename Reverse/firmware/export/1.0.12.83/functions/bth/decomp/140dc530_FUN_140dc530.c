/* FUN_140dc530 @ 0x140dc530 */

int FUN_140dc530(char *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar1 = param_1;
  while( true ) {
    pcVar3 = pcVar1;
    if (*pcVar3 == '\0') break;
    pcVar2 = (char *)(param_2 + -1);
    while( true ) {
      pcVar2 = pcVar2 + 1;
      pcVar1 = pcVar3 + 1;
      if (*pcVar2 == '\0') break;
      if (*pcVar2 == *pcVar3) goto LAB_140dc54e;
    }
  }
LAB_140dc54e:
  return (int)pcVar3 - (int)param_1;
}


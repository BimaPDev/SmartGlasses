/* FUN_2c66c568 @ 0x2c66c568 */

void FUN_2c66c568(char *param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = (char *)(param_2 + -1);
  do {
    pcVar3 = param_1;
    if (param_3 == 0) break;
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
    param_3 = param_3 + -1;
    pcVar3 = param_1 + 1;
    *param_1 = cVar1;
    param_1 = pcVar3;
  } while (cVar1 != '\0');
  pcVar2 = pcVar3 + param_3;
  for (; pcVar3 != pcVar2; pcVar3 = pcVar3 + 1) {
    *pcVar3 = '\0';
  }
  return;
}


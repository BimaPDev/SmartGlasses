/* FUN_2c66c5c0 @ 0x2c66c5c0 */

int FUN_2c66c5c0(char *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar1 = param_1;
  while( true ) {
    pcVar3 = pcVar1;
    if (*pcVar3 == '\0') break;
    pcVar2 = (char *)(param_2 + -1);
    do {
      pcVar2 = pcVar2 + 1;
      if (*pcVar2 == '\0') goto LAB_2c66c5dc;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar2 != *pcVar3);
  }
LAB_2c66c5dc:
  return (int)pcVar3 - (int)param_1;
}


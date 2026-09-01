/* FUN_10132824 @ 0x10132824 */

int FUN_10132824(char *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  pcVar2 = param_1;
  if (param_1 == (char *)0x0) {
    iVar4 = 0;
  }
  else {
    do {
      pcVar3 = pcVar2;
      iVar4 = (int)pcVar3 - (int)param_1;
      cVar1 = *pcVar3;
      if (cVar1 == '\0') {
        return iVar4;
      }
      if (cVar1 == '=') {
        return iVar4;
      }
      pcVar2 = pcVar3 + 1;
    } while (cVar1 != '_');
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = pcVar3 + 1;
    }
  }
  return iVar4;
}


/* FUN_2c64e496 @ 0x2c64e496 */

void FUN_2c64e496(int param_1,char *param_2,int param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_4 + 4;
  *(int *)(param_2 + 4) = param_3;
  *param_2 = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  iVar6 = param_4;
  if (param_1 == 0) {
    *(char **)(param_3 + 0xc) = param_2;
    if (*(int *)(param_4 + 0xc) != param_3) goto LAB_2c64e4be;
  }
  else {
    *(char **)(param_3 + 8) = param_2;
    if (param_4 != param_3) {
      if (*(int *)(param_4 + 8) == param_3) {
        *(char **)(param_4 + 8) = param_2;
      }
      goto LAB_2c64e4be;
    }
    *(char **)(param_4 + 4) = param_2;
  }
  *(char **)(param_4 + 0xc) = param_2;
LAB_2c64e4be:
  do {
    while( true ) {
      if ((*(char **)(param_4 + 4) == param_2) ||
         (pcVar1 = *(char **)(param_2 + 4), *pcVar1 != '\0')) {
        **(char **)(param_4 + 4) = '\x01';
        return;
      }
      pcVar4 = *(char **)(pcVar1 + 4);
      pcVar3 = *(char **)(pcVar4 + 8);
      if (pcVar1 != pcVar3) break;
      pcVar3 = *(char **)(pcVar4 + 0xc);
      if ((pcVar3 == (char *)0x0) || (*pcVar3 != '\0')) {
        if (*(char **)(pcVar1 + 0xc) == param_2) {
          FUN_2c64e3e6(pcVar1,iVar5);
          param_2 = pcVar1;
        }
        **(undefined1 **)(param_2 + 4) = 1;
        *pcVar4 = '\0';
        FUN_2c64e410(pcVar4,iVar5);
      }
      else {
LAB_2c64e4dc:
        *pcVar1 = '\x01';
        *pcVar3 = '\x01';
        *pcVar4 = '\0';
        param_2 = pcVar4;
      }
    }
    cVar2 = '\0';
    if ((pcVar3 != (char *)0x0) && (cVar2 = *pcVar3, cVar2 == '\0')) goto LAB_2c64e4dc;
    if (*(char **)(pcVar1 + 8) == param_2) {
      FUN_2c64e410(pcVar1,iVar5,cVar2,*(char **)(pcVar1 + 8),iVar6);
      param_2 = pcVar1;
    }
    **(undefined1 **)(param_2 + 4) = 1;
    *pcVar4 = '\0';
    FUN_2c64e3e6(pcVar4,iVar5);
  } while( true );
}


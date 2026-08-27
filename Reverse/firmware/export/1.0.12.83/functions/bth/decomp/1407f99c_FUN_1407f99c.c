/* FUN_1407f99c @ 0x1407f99c */

undefined4 FUN_1407f99c(int *param_1,int param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  iVar5 = *param_1;
  pcVar2 = (char *)param_1[1];
  iVar4 = (int)pcVar2[iVar5];
  pcVar6 = pcVar2 + iVar5;
  if (iVar4 == 0x20) {
    do {
      pcVar2 = pcVar6 + (1 - iVar5);
      param_1[1] = (int)pcVar2;
      pcVar6 = pcVar6 + 1;
      iVar4 = (int)*pcVar6;
    } while (iVar4 == 0x20);
  }
  if ((iVar4 != 0x22) && (1 < (iVar4 - 0x28U & 0xff))) {
    cVar3 = pcVar2[iVar5];
    pcVar6 = pcVar2 + iVar5;
    iVar4 = 0;
    if (cVar3 != '\0') {
      iVar4 = 0;
      pcVar1 = (char *)(param_2 + -1);
      do {
        if ((cVar3 == ',') || (cVar3 == ')')) break;
        if (param_3 == iVar4) {
          return 0;
        }
        pcVar1 = pcVar1 + 1;
        *pcVar1 = cVar3;
        pcVar6 = pcVar6 + 1;
        cVar3 = *pcVar6;
        iVar4 = iVar4 + 1;
        pcVar2 = pcVar2 + 1;
      } while (cVar3 != '\0');
    }
    if (param_3 != iVar4) {
      *(undefined1 *)(param_2 + iVar4) = 0;
      param_1[1] = (int)pcVar2;
      if (pcVar2[*param_1] == ',') {
        param_1[1] = (int)(pcVar2 + 1);
      }
      return 1;
    }
  }
  return 0;
}


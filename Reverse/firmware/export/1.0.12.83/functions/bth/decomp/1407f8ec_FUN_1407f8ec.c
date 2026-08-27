/* FUN_1407f8ec @ 0x1407f8ec */

undefined4 FUN_1407f8ec(int *param_1,int param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char cVar8;
  char *pcVar9;
  
  iVar6 = *param_1;
  pcVar4 = (char *)param_1[1];
  cVar8 = pcVar4[iVar6];
  pcVar2 = pcVar4 + iVar6;
  if (cVar8 == ' ') {
    do {
      pcVar4 = pcVar2 + (1 - iVar6);
      param_1[1] = (int)pcVar4;
      pcVar2 = pcVar2 + 1;
      cVar8 = *pcVar2;
    } while (cVar8 == ' ');
  }
  if (cVar8 == '\"') {
    pcVar2 = pcVar4 + 1;
    cVar8 = pcVar2[iVar6];
    pcVar7 = pcVar2 + iVar6;
    if (cVar8 == '\0') {
      iVar3 = 0;
      pcVar4 = pcVar7;
    }
    else {
      iVar3 = 0;
      pcVar9 = (char *)(param_2 + -1);
      pcVar1 = pcVar4 + iVar6 + 2;
      do {
        pcVar5 = pcVar1;
        pcVar4 = pcVar7 + iVar3;
        if (cVar8 == '\"') break;
        if (param_3 == iVar3) {
          return 0;
        }
        pcVar9 = pcVar9 + 1;
        *pcVar9 = cVar8;
        cVar8 = *pcVar5;
        iVar3 = iVar3 + 1;
        pcVar2 = pcVar2 + 1;
        pcVar1 = pcVar5 + 1;
        pcVar4 = pcVar5;
      } while (cVar8 != '\0');
    }
    if ((param_3 != iVar3) && (*(undefined1 *)(param_2 + iVar3) = 0, *pcVar4 == '\"')) {
      pcVar2 = pcVar2 + 1;
      iVar6 = *param_1;
      param_1[1] = (int)pcVar2;
      cVar8 = pcVar2[iVar6];
      pcVar4 = pcVar2 + iVar6;
      if (cVar8 == ' ') {
        do {
          pcVar2 = pcVar4 + (1 - iVar6);
          param_1[1] = (int)pcVar2;
          pcVar4 = pcVar4 + 1;
          cVar8 = *pcVar4;
        } while (cVar8 == ' ');
      }
      if (cVar8 == ',') {
        param_1[1] = (int)(pcVar2 + 1);
      }
      return 1;
    }
  }
  return 0;
}


/* FUN_1407f854 @ 0x1407f854 */

undefined4 FUN_1407f854(int *param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar2 = *param_1;
  pcVar7 = (char *)param_1[1];
  iVar4 = (int)pcVar7[iVar2];
  pcVar5 = pcVar7 + iVar2;
  if (iVar4 == 0x20) {
    do {
      pcVar7 = pcVar5 + (1 - iVar2);
      param_1[1] = (int)pcVar7;
      pcVar5 = pcVar5 + 1;
      iVar4 = (int)*pcVar5;
    } while (iVar4 == 0x20);
  }
  if ((iVar4 - 0x30U & 0xff) < 10) {
    iVar6 = 0;
    pcVar5 = pcVar7;
    pcVar1 = pcVar7 + iVar2 + 1;
    do {
      pcVar8 = pcVar1;
      iVar6 = iVar4 + iVar6 * 10;
      iVar4 = (int)*pcVar8;
      pcVar5 = pcVar5 + 1;
      iVar6 = iVar6 + -0x30;
      pcVar1 = pcVar8 + 1;
    } while ((iVar4 - 0x30U & 0xff) < 10);
    if (pcVar5 != pcVar7) {
      if (param_2 != (int *)0x0) {
        *param_2 = iVar6;
        iVar2 = *param_1;
        pcVar8 = pcVar5 + iVar2;
      }
      param_1[1] = (int)pcVar5;
      cVar3 = *pcVar8;
      if (cVar3 == ' ') {
        pcVar7 = pcVar5 + iVar2;
        do {
          pcVar5 = pcVar7 + (1 - iVar2);
          param_1[1] = (int)pcVar5;
          pcVar7 = pcVar7 + 1;
          cVar3 = *pcVar7;
        } while (cVar3 == ' ');
      }
      if (cVar3 != ',') {
        return 1;
      }
      param_1[1] = (int)(pcVar5 + 1);
      return 1;
    }
  }
  return 0;
}


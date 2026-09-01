/* FUN_10104468 @ 0x10104468 */

void FUN_10104468(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  
  uVar3 = param_4 >> 9;
  if (*(int *)(param_1 + 0x50) << 0x1e < 0) {
    cVar6 = (char)uVar3;
    if ((int)(uVar3 << 0x17) < 0) {
      cVar6 = -1 - cVar6;
    }
    iVar1 = *(int *)(param_1 + 0xa0);
  }
  else {
    if ((int)uVar3 < (int)~uVar3) {
      uVar3 = ~uVar3;
    }
    if (0xfe < (int)uVar3) {
      uVar3 = 0xff;
    }
    cVar6 = (char)uVar3;
    iVar1 = *(int *)(param_1 + 0xa0);
  }
  if (-1 < iVar1) {
    *(int *)(param_1 + 0xa0) = iVar1 + 1;
    iVar2 = param_1 + 100 + iVar1 * 6;
    *(short *)(param_1 + 100 + iVar1 * 6) = (short)param_2;
    *(char *)(iVar2 + 4) = cVar6;
    iVar1 = *(int *)(param_1 + 0xa0);
    *(short *)(iVar2 + 2) = (short)param_5;
    if (iVar1 != 10) {
switchD_101044dc_caseD_0:
      return;
    }
    (**(code **)(param_1 + 0x5c))();
    *(undefined4 *)(param_1 + 0xa0) = 0;
    return;
  }
  param_2 = param_2 - *(int *)(param_1 + 0x58) * param_3;
  pcVar4 = (char *)(*(int *)(param_1 + 0x54) + param_2);
  pcVar5 = pcVar4;
  switch(param_5) {
  case 0:
    goto switchD_101044dc_caseD_0;
  case 7:
    *(char *)(*(int *)(param_1 + 0x54) + param_2) = cVar6;
    pcVar5 = pcVar4 + 1;
  case 6:
    pcVar4 = pcVar5 + 1;
    *pcVar5 = cVar6;
  case 5:
    pcVar5 = pcVar4 + 1;
    *pcVar4 = cVar6;
  case 4:
    pcVar4 = pcVar5 + 1;
    *pcVar5 = cVar6;
  case 3:
    pcVar5 = pcVar4 + 1;
    *pcVar4 = cVar6;
  case 2:
    pcVar4 = pcVar5 + 1;
    *pcVar5 = cVar6;
  case 1:
    *pcVar4 = cVar6;
    return;
  default:
    FUN_1011ea48(pcVar4,cVar6,param_5,param_4);
    return;
  }
}


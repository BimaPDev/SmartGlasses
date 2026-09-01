/* FUN_100b9ec4 @ 0x100b9ec4 */

uint FUN_100b9ec4(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    pcVar4 = DAT_100b9f28;
    while( true ) {
      cVar1 = *(char *)(param_1 + iVar6);
      *pcVar4 = cVar1;
      if ((cVar1 == '\0') || (iVar6 == 0x3a)) break;
      iVar6 = iVar6 + 1;
      pcVar4 = pcVar4 + 1;
    }
  }
  uVar2 = DAT_100b9f2c;
  pcVar4 = DAT_100b9f28;
  for (iVar7 = 0; uVar3 = DAT_100b9f2c, iVar7 < (int)param_3; iVar7 = iVar7 + 1) {
    iVar5 = iVar6 + 1;
    pcVar4[iVar6] = *(char *)(param_2 + iVar7);
    if (0x3e < iVar5) {
      pcVar4[iVar5] = '\0';
      FUN_10119dc2(uVar2,pcVar4,iVar5,iVar6,param_4);
      iVar5 = 0;
    }
    iVar6 = iVar5;
  }
  if (iVar6 != 0) {
    DAT_100b9f28[iVar6] = '\0';
    FUN_10119dc2(uVar3);
  }
  return param_3 & ~((int)param_3 >> 0x1f);
}


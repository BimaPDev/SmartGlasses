/* FUN_2c4b37de @ 0x2c4b37de */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4b37de(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    iVar5 = 4;
  }
  else {
    iVar5 = *(int *)(_DAT_2c4b3830 + param_3 * 4);
  }
  if (param_2 != 0) {
    pbVar4 = (byte *)(param_1 + -1);
    pbVar3 = (byte *)(param_2 + param_1 + -1);
    iVar2 = 0;
    do {
      while( true ) {
        pbVar4 = pbVar4 + 1;
        iVar6 = iVar2 + 1;
        if ((0x11 < *pbVar4) ||
           (iVar1 = *(int *)(_DAT_2c4b3834 + (uint)*pbVar4 * 4),
           iVar2 = iVar1 * iVar5 + (iVar5 + iVar2 & -iVar5), iVar1 < 1)) break;
        if (pbVar4 == pbVar3) {
          return iVar2;
        }
      }
      iVar2 = iVar6;
    } while (pbVar4 != pbVar3);
    return iVar6;
  }
  return 0;
}


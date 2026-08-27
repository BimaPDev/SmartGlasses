/* FUN_2c5c2fea @ 0x2c5c2fea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5c2fea(char *param_1,int param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  bool in_ZR;
  bool in_CY;
  
  uVar4 = _LAB_2c5c3048;
  iVar3 = _LAB_2c5c3044;
  if (in_CY && !in_ZR) {
    pcVar5 = param_1 + param_2;
    uVar6 = param_3;
    do {
      param_3 = (uint)((ulonglong)uVar4 * (ulonglong)uVar6 >> 0x25);
      iVar7 = uVar6 + param_3 * -100;
      cVar2 = *(char *)(iVar3 + iVar7 * 2);
      pcVar5[-1] = *(char *)(iVar3 + iVar7 * 2 + 1);
      pcVar5 = pcVar5 + -2;
      *pcVar5 = cVar2;
      bVar1 = 9999 < uVar6;
      uVar6 = param_3;
    } while (bVar1);
  }
  if (9 < param_3) {
    cVar2 = *(char *)(_LAB_2c5c3044 + param_3 * 2 + 1);
    *param_1 = *(char *)(_LAB_2c5c3044 + param_3 * 2);
    param_1[1] = cVar2;
    return;
  }
  *param_1 = (char)param_3 + '0';
  return;
}


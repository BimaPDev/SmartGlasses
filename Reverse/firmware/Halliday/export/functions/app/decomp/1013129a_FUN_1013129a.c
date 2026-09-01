/* FUN_1013129a @ 0x1013129a */

/* WARNING: Removing unreachable block (ram,0x100b9e72) */

uint FUN_1013129a(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  undefined4 uVar12;
  
  uVar12 = 0;
  if (param_1 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    pcVar6 = DAT_100b9ebc;
    while( true ) {
      cVar5 = *(char *)(param_1 + iVar8);
      *pcVar6 = cVar5;
      if ((cVar5 == '\0') || (iVar8 == 0x3a)) break;
      iVar8 = iVar8 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  uVar2 = DAT_100b9ec0;
  pcVar6 = DAT_100b9ebc;
  iVar10 = 0;
  while (uVar3 = DAT_100b9ec0, iVar10 < (int)param_3) {
    bVar1 = *(byte *)(param_2 + iVar10) >> 4;
    bVar11 = *(byte *)(param_2 + iVar10) & 0xf;
    if (bVar1 < 10) {
      cVar5 = bVar1 + 0x30;
    }
    else {
      cVar5 = bVar1 + 0x57;
    }
    if (bVar11 < 10) {
      cVar4 = bVar11 + 0x30;
    }
    else {
      cVar4 = bVar11 + 0x57;
    }
    iVar10 = iVar10 + 1;
    pcVar6[iVar8] = cVar5;
    pcVar6[iVar8 + 1] = cVar4;
    iVar7 = iVar8 + 2;
    if ((iVar10 * 0x10000000 == 0) || (iVar9 = iVar8 + 8, iVar8 = iVar7, 0x3f < iVar9)) {
      pcVar6[iVar7] = '\0';
      FUN_10119dc2(uVar2,pcVar6,iVar10 * 0x10000000,iVar7,uVar12);
      iVar8 = 0;
    }
  }
  if (0 < iVar8) {
    DAT_100b9ebc[iVar8] = '\0';
    FUN_10119dc2(uVar3);
  }
  return param_3 & ~((int)param_3 >> 0x1f);
}


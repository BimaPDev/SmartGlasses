/* FUN_100e0d7c @ 0x100e0d7c */

int FUN_100e0d7c(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar3 = 0;
  iVar1 = *DAT_100e0dc0;
  bVar2 = 0;
  iVar4 = 0;
  pbVar5 = (byte *)(iVar1 + 0xc0);
  do {
    iVar6 = iVar4 * 0x18;
    if (*(char *)(iVar1 + 6 + iVar6) == '\0') goto LAB_100e0da0;
    if (bVar2 < *pbVar5) {
      iVar3 = iVar4;
      bVar2 = *pbVar5;
    }
    iVar4 = iVar4 + 1;
    pbVar5 = pbVar5 + 1;
  } while (iVar4 != 8);
  iVar6 = iVar3 * 0x18;
LAB_100e0da0:
  return iVar1 + iVar6;
}


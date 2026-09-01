/* FUN_100e725c @ 0x100e725c */

void FUN_100e725c(void)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  
  iVar2 = DAT_100e72a8;
  pbVar1 = DAT_100e72a4;
  iVar4 = 0;
  pbVar3 = DAT_100e72a4;
  do {
    if ((*pbVar3 != 0) && (-1 < (int)((uint)pbVar1[iVar4 * 0x70 + 1] << 0x1b))) {
      FUN_100dfd90(pbVar3 + 0x18);
      FUN_100c3fac((*pbVar3 & 0xffffff7f) * 0x14 + iVar2);
    }
    iVar4 = iVar4 + 1;
    pbVar3 = pbVar3 + 0x70;
  } while (iVar4 != 4);
  return;
}


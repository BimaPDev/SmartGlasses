/* FUN_100e0dc4 @ 0x100e0dc4 */

void FUN_100e0dc4(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar4;
  int iVar5;
  byte *pbVar3;
  
  iVar4 = *DAT_100e0e04;
  iVar5 = 0;
  do {
    if (param_1 == iVar5 * 0x18 + iVar4) goto LAB_100e0dde;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 8);
  iVar5 = 0;
LAB_100e0dde:
  bVar1 = *(byte *)(iVar5 + iVar4 + 0xc0);
  pbVar3 = (byte *)(iVar4 + 0xc0);
  do {
    pbVar2 = pbVar3 + 1;
    if (*pbVar3 <= bVar1) {
      *pbVar3 = *pbVar3 + 1;
    }
    pbVar3 = pbVar2;
  } while (pbVar2 != (byte *)(iVar4 + 200));
  *(undefined1 *)(iVar5 + iVar4 + 0xc0) = 0;
  return;
}


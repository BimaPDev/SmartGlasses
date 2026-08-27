/* FUN_14029a48 @ 0x14029a48 */

void FUN_14029a48(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = DAT_14029a80;
  pbVar2 = DAT_14029a7c;
  bVar1 = *DAT_14029a7c;
  *(undefined1 *)(DAT_14029a80 + 9) = 0;
  if (((bVar1 - 1 < 2) && (FUN_1402c8ec(*DAT_14029a84,1), *(char *)(iVar3 + 9) == '\0')) &&
     (*pbVar2 - 1 < 2)) {
    FUN_140297f4();
    return;
  }
  return;
}


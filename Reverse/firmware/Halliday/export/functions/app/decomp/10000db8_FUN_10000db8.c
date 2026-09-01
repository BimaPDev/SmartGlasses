/* FUN_10000db8 @ 0x10000db8 */

void FUN_10000db8(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = DAT_10000df0;
  if (*(int *)(DAT_10000df0 + 0x2f4) != 0) {
    *DAT_10000df4 = *(int *)(DAT_10000df0 + 0x2f4);
  }
  iVar3 = *(int *)(iVar1 + 0x2f8);
  if (iVar3 != 0) {
    *DAT_10000df8 = iVar3;
  }
  iVar3 = FUN_100007b0();
  if ((iVar3 != 0) && (uVar2 = *(uint *)(iVar1 + 0x2fc), uVar2 != 0)) {
    *DAT_10000dfc = *DAT_10000dfc & 0xff007fff | uVar2;
  }
  return;
}


/* FUN_1009e630 @ 0x1009e630 */

int FUN_1009e630(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_r3;
  uint uVar5;
  
  uVar2 = DAT_1009e670;
  puVar1 = DAT_1009e66c;
  *DAT_1009e66c = 0;
  puVar1[1] = 0;
  iVar3 = FUN_1009e000(uVar2);
  iVar4 = 0;
  if ((iVar3 != 0) && (iVar4 = FUN_1009e038(iVar3,0), iVar4 == 0)) {
    uVar5 = (DAT_1009e678 - DAT_1009e674) * 0x20 & 0xff00;
    FUN_100a5b78(DAT_1009e67c | uVar5,DAT_1009e684,DAT_1009e680,uVar5,in_r3);
  }
  return iVar4;
}


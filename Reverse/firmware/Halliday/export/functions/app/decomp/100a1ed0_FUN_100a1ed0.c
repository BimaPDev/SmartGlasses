/* FUN_100a1ed0 @ 0x100a1ed0 */

undefined4 FUN_100a1ed0(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = DAT_100a1f44;
  iVar6 = *DAT_100a1f44;
  *(undefined1 *)(iVar6 + 8) = 0;
  uVar3 = FUN_1012d932();
  uVar2 = DAT_100a1f48;
  *(undefined4 *)(iVar6 + 0xc) = uVar3;
  FUN_10084080(0x1e,uVar2);
  FUN_1009ea24(0,6);
  if (*(int *)(*piVar1 + 0x14) != 0) {
    FUN_1009e570(*(int *)(*piVar1 + 0x14),6);
  }
  FUN_1005c180();
  iVar4 = FUN_1009e224();
  iVar6 = DAT_100a1f4c;
  if ((iVar4 == 0) || (iVar5 = FUN_1011ea18(DAT_100a1f60,iVar4), iVar6 = iVar4, iVar5 != 0)) {
    FUN_1009e570(iVar6,0x28);
  }
  FUN_100a5b78((DAT_100a1f54 - DAT_100a1f50) * 0x20 & 0xff00U | 0xb00031,DAT_100a1f5c,DAT_100a1f58);
  return 0;
}


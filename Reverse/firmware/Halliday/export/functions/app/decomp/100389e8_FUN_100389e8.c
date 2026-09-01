/* FUN_100389e8 @ 0x100389e8 */

void FUN_100389e8(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = DAT_10038a34;
  iVar3 = *DAT_10038a30;
  FUN_10038864();
  FUN_100389a0(0);
  FUN_1002eefc(*(undefined4 *)(*piVar1 + 0x20));
  uVar2 = FUN_10087308();
  FUN_1012458c(uVar2,1);
  if (*DAT_10038a30 != iVar3) {
    FUN_1013cdc0();
  }
  FUN_1002e994(*(undefined4 *)(*piVar1 + 0x18),1);
  return;
}


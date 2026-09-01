/* FUN_100334d0 @ 0x100334d0 */

void FUN_100334d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_r4;
  
  iVar3 = *DAT_10033534;
  if (*DAT_10033538 == 0) {
    if (*DAT_10033534 != iVar3) goto LAB_10033500;
    return;
  }
  unaff_r4 = *(undefined4 *)(*DAT_10033538 + 0x10);
  if (param_1 == 1) goto LAB_10033504;
  if (param_1 == 2) {
    uVar1 = 1;
  }
  else {
    if (param_1 != 0) {
      iVar2 = *DAT_10033534;
      uVar1 = DAT_1003353c;
      goto joined_r0x10033514;
    }
    uVar1 = 0x37;
  }
  while( true ) {
    uVar1 = FUN_1004cf14(uVar1);
    iVar2 = *DAT_10033534;
joined_r0x10033514:
    if (iVar2 == iVar3) break;
LAB_10033500:
    FUN_1013cdc0();
LAB_10033504:
    uVar1 = 0x38;
  }
  FUN_10097998(unaff_r4,uVar1);
  return;
}


/* FUN_100224f0 @ 0x100224f0 */

void FUN_100224f0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r1;
  int extraout_r2;
  int iVar4;
  int iVar5;
  int unaff_r4;
  int *piVar6;
  
  iVar5 = *DAT_10022530;
  piVar6 = (int *)*DAT_10022534;
  if (piVar6 == (int *)0x0) {
    if (*DAT_10022530 == iVar5) {
      return;
    }
  }
  else {
    uVar2 = FUN_10020860();
    if (*DAT_10022530 == iVar5) goto LAB_10022516;
  }
  FUN_1013cdc0();
  uVar2 = extraout_r1;
LAB_10022516:
  iVar5 = *DAT_10025944;
  if (piVar6 != (int *)0x0) {
    iVar1 = *piVar6;
    iVar3 = 0;
    while (iVar4 = iVar3, iVar3 = iVar1, iVar3 != 0) {
      unaff_r4 = *(int *)(iVar3 + 0x48);
      iVar1 = unaff_r4;
      if (*(byte *)(iVar3 + 0x40) == uVar2) {
        if (iVar4 != 0) goto LAB_10025930;
        *piVar6 = unaff_r4;
        goto LAB_10025922;
      }
    }
  }
  if (*DAT_10025944 != iVar5) {
    do {
      FUN_1013cdc0();
      iVar4 = extraout_r2;
LAB_10025930:
      *(int *)(iVar4 + 0x48) = unaff_r4;
LAB_10025922:
    } while (*DAT_10025944 != iVar5);
    FUN_10117e54();
    return;
  }
  return;
}


/* FUN_100413fc @ 0x100413fc */

void FUN_100413fc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *extraout_r2;
  int *piVar3;
  int iVar4;
  int *extraout_r3;
  int *piVar5;
  uint uVar6;
  
  iVar4 = *DAT_100414a8;
  iVar1 = FUN_10043548();
  piVar3 = DAT_100414c8;
  piVar5 = DAT_100414c4;
  uVar6 = iVar1 - *DAT_100414c4;
  FUN_100a5b78((DAT_100414ac - DAT_100414b0) * 0x20 & 0xff00U | 0xd60033,DAT_100414b8,DAT_100414b4,
               param_1,uVar6,*DAT_100414c8);
  if (param_1 != 0x100000) {
    if (param_1 != 0x400000) goto LAB_10041492;
    if (*piVar3 != 1) goto LAB_10041492;
    if (7999 < uVar6) goto LAB_10041498;
    *(undefined1 *)(DAT_100414bc + 0x6a5) = 1;
    (*(code *)*DAT_100414c0)(0x4f);
    uVar2 = 1;
    goto LAB_10041484;
  }
  *piVar5 = iVar1;
  *piVar3 = 1;
  do {
    uVar2 = 0;
LAB_10041484:
    while( true ) {
      if (*DAT_100414a8 == iVar4) {
        return;
      }
      FUN_1013cdc0(uVar2);
      piVar3 = extraout_r2;
      piVar5 = extraout_r3;
LAB_10041492:
      if (uVar6 < 0x1f41) break;
LAB_10041498:
      uVar2 = 0;
      *piVar3 = 0;
      *piVar5 = 0;
    }
  } while( true );
}


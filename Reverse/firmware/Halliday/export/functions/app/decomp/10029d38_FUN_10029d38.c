/* FUN_10029d38 @ 0x10029d38 */

void FUN_10029d38(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *DAT_10029d88;
  iVar4 = *DAT_10029d8c;
  if (*(int *)(iVar4 + 0x154) == 0) {
    uVar2 = FUN_10094a1c(DAT_10029d90,1000,0,DAT_10029d8c,param_1,param_2,param_3);
    piVar1 = DAT_10029d88;
    *(undefined4 *)(iVar4 + 0x154) = uVar2;
    if (*piVar1 == iVar3) goto LAB_10029d6a;
  }
  else if (*DAT_10029d88 == iVar3) {
    return;
  }
  FUN_1013cdc0();
LAB_10029d6a:
                    /* WARNING: Could not recover jumptable at 0x10029d76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_10029d94 + 0x2c))();
  return;
}


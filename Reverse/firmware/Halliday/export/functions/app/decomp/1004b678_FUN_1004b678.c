/* FUN_1004b678 @ 0x1004b678 */

void FUN_1004b678(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *DAT_1004b6c8;
  uVar2 = (DAT_1004b6d0 - DAT_1004b6cc) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_1004b6d4 | uVar2,DAT_1004b6dc,DAT_1004b6d8,uVar2,param_1,param_2,param_3);
  *DAT_1004b6e0 = 1;
  *DAT_1004b6e4 = 0;
  *DAT_1004b6e8 = 0;
  if (*DAT_1004b6c8 != iVar1) {
    FUN_1013cdc0();
  }
                    /* WARNING: Could not recover jumptable at 0x1004b6c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_1004b6ec + 0x10))();
  return;
}


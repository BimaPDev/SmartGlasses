/* FUN_1006446c @ 0x1006446c */

void FUN_1006446c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *DAT_1006448c;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_10064498,0xa6,DAT_10064494,DAT_10064490);
  }
                    /* WARNING: Could not recover jumptable at 0x1006448a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + 8) + 4))(iVar1,param_1);
  return;
}


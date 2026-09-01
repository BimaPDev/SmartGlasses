/* FUN_1006443c @ 0x1006443c */

void FUN_1006443c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *DAT_1006445c;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_10064468,0x98,DAT_10064464,DAT_10064460);
  }
                    /* WARNING: Could not recover jumptable at 0x1006445a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + 8) + 0x10))(iVar1,param_1);
  return;
}


/* FUN_100643d4 @ 0x100643d4 */

void FUN_100643d4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *DAT_100643f4;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_10064400,0x7d,DAT_100643fc,DAT_100643f8);
  }
                    /* WARNING: Could not recover jumptable at 0x100643f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + 8) + 8))(iVar1,param_1);
  return;
}


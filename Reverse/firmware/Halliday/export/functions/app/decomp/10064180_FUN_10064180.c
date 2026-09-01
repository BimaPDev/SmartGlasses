/* FUN_10064180 @ 0x10064180 */

void FUN_10064180(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *DAT_100641a0;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_100641ac,0x86,DAT_100641a8,DAT_100641a4);
  }
                    /* WARNING: Could not recover jumptable at 0x1006419e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + 8) + 0xc))(iVar1,param_1);
  return;
}


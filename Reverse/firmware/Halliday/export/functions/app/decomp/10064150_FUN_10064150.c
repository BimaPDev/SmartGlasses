/* FUN_10064150 @ 0x10064150 */

void FUN_10064150(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *DAT_10064170;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_1006417c,0x6c,DAT_10064178,DAT_10064174);
  }
                    /* WARNING: Could not recover jumptable at 0x1006416e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + 8) + 8))(iVar1,param_1);
  return;
}


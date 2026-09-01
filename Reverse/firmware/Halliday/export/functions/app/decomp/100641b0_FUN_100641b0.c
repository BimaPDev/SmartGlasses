/* FUN_100641b0 @ 0x100641b0 */

void FUN_100641b0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *DAT_100641d0;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_100641dc,0x96,DAT_100641d8,DAT_100641d4);
  }
                    /* WARNING: Could not recover jumptable at 0x100641ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + 8) + 4))(iVar1,param_1);
  return;
}


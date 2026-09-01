/* FUN_10064404 @ 0x10064404 */

void FUN_10064404(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *DAT_1006442c;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_10064438,0x8b,DAT_10064434,DAT_10064430);
  }
                    /* WARNING: Could not recover jumptable at 0x1006442a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + 8) + 0xc))(iVar1,param_1,param_2,param_3);
  return;
}


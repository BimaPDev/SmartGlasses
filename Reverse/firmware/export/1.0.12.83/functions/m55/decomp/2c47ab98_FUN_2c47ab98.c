/* FUN_2c47ab98 @ 0x2c47ab98 */

void FUN_2c47ab98(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_2c47ae70;
  iVar1 = FUN_2c473878();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x186,DAT_2c47ae80,DAT_2c47ae7c,DAT_2c47ae74,DAT_2c47ae78,param_2,
          *(undefined4 *)(iVar1 + 0x14));
  }
  FUN_2c6741e8(0x710,DAT_2c47ae84);
  if (*DAT_2c47ae70 == iVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}


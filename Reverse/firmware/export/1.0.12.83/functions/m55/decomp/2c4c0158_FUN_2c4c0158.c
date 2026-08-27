/* FUN_2c4c0158 @ 0x2c4c0158 */

void FUN_2c4c0158(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (0x8e < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4c01cc,param_1,0x8f);
  }
  if (param_1 - 0x50 < 3) {
                    /* WARNING: Could not recover jumptable at 0x2c673f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_2c673f74)(param_1,1);
    return;
  }
  if (param_1 - 0x53 < 0x3c) {
                    /* WARNING: Could not recover jumptable at 0x2c673b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_2c673b94)(param_1);
    return;
  }
  iVar1 = FUN_2c4c0030();
  uVar2 = param_1;
  if (((0x17 < param_1) && (uVar2 = param_1 - 0x18, 0x1f < uVar2)) &&
     (uVar2 = param_1 - 0x38, 0x17 < uVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4c01c4,DAT_2c4c01c0,param_1);
  }
  **(int **)(DAT_2c4c01c8 + iVar1 * 4) = 1 << (uVar2 & 0xff);
  return;
}


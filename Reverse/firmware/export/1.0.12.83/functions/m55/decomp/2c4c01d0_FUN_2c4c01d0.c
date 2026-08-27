/* FUN_2c4c01d0 @ 0x2c4c01d0 */

void FUN_2c4c01d0(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (0x8e < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4c0244,param_1,0x8f);
  }
  if (param_1 - 0x50 < 3) {
                    /* WARNING: Could not recover jumptable at 0x2c673f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_2c673f74)(param_1,0);
    return;
  }
  if (param_1 - 0x53 < 0x3c) {
                    /* WARNING: Could not recover jumptable at 0x2c673de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_2c673de4)(param_1);
    return;
  }
  iVar1 = FUN_2c4c0030();
  uVar2 = param_1;
  if (((0x17 < param_1) && (uVar2 = param_1 - 0x18, 0x1f < uVar2)) &&
     (uVar2 = param_1 - 0x38, 0x17 < uVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4c023c,DAT_2c4c0238,param_1);
  }
  *(int *)(*(int *)(DAT_2c4c0240 + iVar1 * 4) + 0xc) = 1 << (uVar2 & 0xff);
  return;
}


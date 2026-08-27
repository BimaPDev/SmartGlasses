/* FUN_2c4c0248 @ 0x2c4c0248 */

void FUN_2c4c0248(uint param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if (0x8e < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4c02f0,param_1,0x8f);
  }
  if (param_2 == 1) {
    if (param_3 == 0) {
      FUN_2c4c01d0();
    }
    else {
      FUN_2c4c0158();
    }
  }
  if (param_1 - 0x50 < 3) {
                    /* WARNING: Could not recover jumptable at 0x2c6742b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_2c6742b4)(param_1,param_2);
    return;
  }
  if (param_1 - 0x53 < 0x3c) {
                    /* WARNING: Could not recover jumptable at 0x2c674470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_2c674474)(param_1,param_2,param_3);
    return;
  }
  iVar1 = FUN_2c4c0030(param_1);
  uVar2 = param_1;
  if (((0x17 < param_1) && (uVar2 = param_1 - 0x18, 0x1f < uVar2)) &&
     (uVar2 = param_1 - 0x38, 0x17 < uVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4c02e8,DAT_2c4c02e4,param_1);
  }
  if (param_2 != 1) {
    *(int *)(*(int *)(DAT_2c4c02ec + iVar1 * 4) + 0x10) = 1 << (uVar2 & 0xff);
    return;
  }
  *(int *)(*(int *)(DAT_2c4c02ec + iVar1 * 4) + 4) = 1 << (uVar2 & 0xff);
  return;
}


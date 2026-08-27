/* FUN_2c4c02f4 @ 0x2c4c02f4 */

uint FUN_2c4c02f4(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (0x8e < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4c036c,param_1,0x8f);
  }
  if (param_1 - 0x50 < 3) {
                    /* WARNING: Could not recover jumptable at 0x2c674070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*DAT_2c674074)(param_1);
    return uVar2;
  }
  if (param_1 - 0x53 < 0x3c) {
    uVar2 = FUN_2c673ab8();
    return uVar2;
  }
  iVar1 = FUN_2c4c0030();
  uVar2 = param_1;
  if (((0x17 < param_1) && (uVar2 = param_1 - 0x18, 0x1f < uVar2)) &&
     (uVar2 = param_1 - 0x38, 0x17 < uVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4c0364,DAT_2c4c0360,param_1);
  }
  return (uint)((1 << (uVar2 & 0xff) & *(uint *)(*(int *)(DAT_2c4c0368 + iVar1 * 4) + 0x50)) != 0);
}


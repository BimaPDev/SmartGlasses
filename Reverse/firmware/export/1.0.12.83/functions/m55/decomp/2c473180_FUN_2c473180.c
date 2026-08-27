/* FUN_2c473180 @ 0x2c473180 */

void FUN_2c473180(int param_1,code *param_2,undefined4 param_3)

{
  uint uVar1;
  
  param_1 = param_1 + -4;
  if (param_2 == (code *)0x0) {
    param_2 = DAT_2c4731d0;
  }
  while( true ) {
    if (param_1 == 0) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 4) & 0xfffffffc;
    if (uVar1 == 0) break;
    (*param_2)(param_1 + 8,uVar1,~*(uint *)(param_1 + 4) & 1,param_3);
    uVar1 = *(uint *)(param_1 + 4) & 0xfffffffc;
    param_1 = param_1 + 8 + uVar1 + -4;
    if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4731d8,DAT_2c4731d4,0x1d7);
    }
  }
  return;
}


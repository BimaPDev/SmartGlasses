/* FUN_2c016124 @ 0x2c016124 */

void FUN_2c016124(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = param_2 ^ 0x2c000000;
  }
  else {
    if (param_1 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_2c00dfac(DAT_2c01616c,DAT_2c016168,param_1);
    }
    uVar1 = param_2 ^ 0x10000000;
  }
  if ((uVar1 & 0xfc000000) != 0) {
    return;
  }
  FUN_2c0153f8(0,param_2,param_3);
  FUN_2c0153f8(1,param_2,param_3,param_4);
  return;
}


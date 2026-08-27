/* FUN_2c4731dc @ 0x2c4731dc */

uint FUN_2c4731dc(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + -4) & 0xfffffffc;
  }
  return uVar1;
}


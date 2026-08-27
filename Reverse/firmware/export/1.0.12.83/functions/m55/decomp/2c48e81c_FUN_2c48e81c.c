/* FUN_2c48e81c @ 0x2c48e81c */

undefined4 FUN_2c48e81c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = 0, (*(uint *)(param_1 + 0xc) & 3) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}


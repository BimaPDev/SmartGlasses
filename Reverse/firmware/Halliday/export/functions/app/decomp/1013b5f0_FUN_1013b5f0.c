/* FUN_1013b5f0 @ 0x1013b5f0 */

undefined4 FUN_1013b5f0(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0xc4) != 0) {
    uVar1 = FUN_1010c720(param_1 + 0xb4);
    return uVar1;
  }
  return 0;
}


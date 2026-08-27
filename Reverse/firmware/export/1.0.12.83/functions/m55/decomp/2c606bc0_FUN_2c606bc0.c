/* FUN_2c606bc0 @ 0x2c606bc0 */

undefined4 FUN_2c606bc0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  }
  return uVar1;
}


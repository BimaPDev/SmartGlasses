/* FUN_10125436 @ 0x10125436 */

undefined4 FUN_10125436(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x1c);
  }
  return uVar1;
}


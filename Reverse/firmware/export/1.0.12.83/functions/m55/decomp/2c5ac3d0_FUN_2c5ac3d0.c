/* FUN_2c5ac3d0 @ 0x2c5ac3d0 */

undefined1 FUN_2c5ac3d0(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x180) != 0) {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x180) + 4);
  }
  return uVar1;
}


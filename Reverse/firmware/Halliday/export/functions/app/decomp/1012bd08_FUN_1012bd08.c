/* FUN_1012bd08 @ 0x1012bd08 */

undefined4 FUN_1012bd08(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x58) == -1) {
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x54);
  }
  return uVar1;
}


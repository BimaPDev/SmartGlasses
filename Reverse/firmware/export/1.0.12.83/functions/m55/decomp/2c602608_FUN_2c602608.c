/* FUN_2c602608 @ 0x2c602608 */

undefined4 FUN_2c602608(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 8) - 0x14 < 6) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


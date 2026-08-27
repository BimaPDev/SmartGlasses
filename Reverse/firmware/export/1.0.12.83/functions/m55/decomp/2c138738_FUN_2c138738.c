/* FUN_2c138738 @ 0x2c138738 */

undefined4 FUN_2c138738(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x28) {
    uVar1 = *(undefined4 *)(DAT_2c138748 + param_1 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


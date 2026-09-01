/* FUN_100bbe14 @ 0x100bbe14 */

undefined4 FUN_100bbe14(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 4) {
    uVar1 = *(undefined4 *)(DAT_100bbe24 + param_1 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* FUN_1008c0b0 @ 0x1008c0b0 */

undefined1 FUN_1008c0b0(uint param_1)

{
  undefined1 uVar1;
  
  if (param_1 < 0x1e) {
    uVar1 = *(undefined1 *)(DAT_1008c0bc + param_1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


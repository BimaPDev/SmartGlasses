/* FUN_14028180 @ 0x14028180 */

undefined4 FUN_14028180(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x28) {
    uVar1 = *(undefined4 *)(DAT_14028190 + param_1 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


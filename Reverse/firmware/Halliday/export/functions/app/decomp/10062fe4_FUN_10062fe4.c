/* FUN_10062fe4 @ 0x10062fe4 */

undefined4 FUN_10062fe4(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_10062ff8;
  if (param_1 < 0xd) {
    uVar1 = *(undefined4 *)(DAT_10062ff4 + param_1 * 4);
  }
  return uVar1;
}


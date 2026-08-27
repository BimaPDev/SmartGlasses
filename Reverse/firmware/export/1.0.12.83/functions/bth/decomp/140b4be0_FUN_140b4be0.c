/* FUN_140b4be0 @ 0x140b4be0 */

undefined4 FUN_140b4be0(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 < 0x17) {
    uVar1 = 0;
    *(undefined4 *)(DAT_140b4bf4 + param_1 * 4) = param_2;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


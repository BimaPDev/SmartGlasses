/* FUN_140853a8 @ 0x140853a8 */

undefined4 FUN_140853a8(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_140853bc;
  if (param_1 < 7) {
    uVar1 = *(undefined4 *)(DAT_140853b8 + param_1 * 4);
  }
  return uVar1;
}


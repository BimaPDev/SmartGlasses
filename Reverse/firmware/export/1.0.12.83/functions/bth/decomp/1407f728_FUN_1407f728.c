/* FUN_1407f728 @ 0x1407f728 */

undefined4 FUN_1407f728(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_1407f73c;
  if (param_1 < 8) {
    uVar1 = *(undefined4 *)(DAT_1407f738 + param_1 * 4);
  }
  return uVar1;
}


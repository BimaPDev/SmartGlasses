/* FUN_140b7d04 @ 0x140b7d04 */

undefined4 FUN_140b7d04(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    return 0;
  }
  return 0xffffffff;
}


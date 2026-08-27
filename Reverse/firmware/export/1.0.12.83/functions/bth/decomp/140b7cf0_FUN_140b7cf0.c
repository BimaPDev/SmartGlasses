/* FUN_140b7cf0 @ 0x140b7cf0 */

undefined4 FUN_140b7cf0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = param_2;
    *(undefined4 *)(param_1 + 8) = param_3;
    return 0;
  }
  return 0xffffffff;
}


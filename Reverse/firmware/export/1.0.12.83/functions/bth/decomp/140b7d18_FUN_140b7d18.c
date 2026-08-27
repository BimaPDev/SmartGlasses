/* FUN_140b7d18 @ 0x140b7d18 */

undefined4 FUN_140b7d18(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = param_2;
    *(undefined4 *)(param_1 + 0x18) = param_3;
    return 0;
  }
  return 0xffffffff;
}


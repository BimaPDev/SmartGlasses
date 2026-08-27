/* FUN_2c4d4854 @ 0x2c4d4854 */

undefined4 FUN_2c4d4854(int param_1,uint param_2,uint param_3)

{
  if ((param_2 < *(byte *)(param_1 + 0x21)) && (param_3 < *(byte *)(param_1 + param_2 + 0x22))) {
    return *(undefined4 *)(param_1 + (param_2 + param_3) * 0x10 + 0xc);
  }
  return 0;
}


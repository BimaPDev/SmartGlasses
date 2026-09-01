/* FUN_1013c768 @ 0x1013c768 */

undefined4 FUN_1013c768(int param_1,undefined4 *param_2)

{
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = *(undefined4 *)(param_1 + 0xc0);
    param_2[1] = *(undefined4 *)(param_1 + 0xc4);
    return 0;
  }
  return 0xffffffea;
}


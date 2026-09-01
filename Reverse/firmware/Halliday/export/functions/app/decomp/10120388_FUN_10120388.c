/* FUN_10120388 @ 0x10120388 */

void FUN_10120388(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = (char)((uint)param_2 >> 0x10);
  param_1[1] = (char)((uint)param_2 >> 8);
  param_1[2] = (char)param_2;
  return;
}


/* FUN_101222c6 @ 0x101222c6 */

void FUN_101222c6(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = (char)param_3;
  param_1[1] = (char)((uint)param_3 >> 8);
  param_1[3] = (char)((uint)param_3 >> 0x18);
  param_1[4] = (char)param_4;
  param_1[5] = (char)((uint)param_4 >> 8);
  param_1[2] = (char)((uint)param_3 >> 0x10);
  param_1[6] = (char)((uint)param_4 >> 0x10);
  param_1[7] = (char)((uint)param_4 >> 0x18);
  return;
}


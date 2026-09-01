/* FUN_1012b008 @ 0x1012b008 */

void FUN_1012b008(uint *param_1,int param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_2 + 3U & 0xfffffffc;
  return;
}


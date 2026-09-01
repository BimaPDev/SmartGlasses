/* FUN_1012003a @ 0x1012003a */

void FUN_1012003a(undefined4 *param_1,uint param_2)

{
  **(uint **)*param_1 = param_2 | **(uint **)*param_1 & 0xfffffffc;
  return;
}


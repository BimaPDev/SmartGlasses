/* FUN_1012001a @ 0x1012001a */

void FUN_1012001a(undefined4 *param_1,int param_2)

{
  **(uint **)*param_1 = **(uint **)*param_1 & 0xfffff3ff | param_2 << 10;
  return;
}


/* FUN_10056770 @ 0x10056770 */

void FUN_10056770(uint param_1,uint param_2)

{
  *DAT_10056784 = param_1 & (param_2 ^ *DAT_10056784) ^ *DAT_10056784;
  thunk_FUN_1011598c(300);
  return;
}


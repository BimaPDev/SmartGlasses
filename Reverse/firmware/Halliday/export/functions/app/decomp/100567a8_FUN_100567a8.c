/* FUN_100567a8 @ 0x100567a8 */

void FUN_100567a8(uint param_1,uint param_2)

{
  *DAT_100567bc = param_1 & (param_2 ^ *DAT_100567bc) ^ *DAT_100567bc;
  thunk_FUN_1011598c(300);
  return;
}


/* FUN_100567cc @ 0x100567cc */

void FUN_100567cc(uint param_1,uint param_2)

{
  *DAT_100567dc = param_1 & (param_2 ^ *DAT_100567dc) ^ *DAT_100567dc;
  return;
}


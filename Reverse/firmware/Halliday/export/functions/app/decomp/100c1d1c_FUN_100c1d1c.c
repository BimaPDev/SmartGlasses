/* FUN_100c1d1c @ 0x100c1d1c */

int FUN_100c1d1c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 == 0) {
    FUN_10119dc2(DAT_100c1d50,DAT_100c1d4c,DAT_100c1d48,0x254,0,param_2);
    FUN_1011a1f0(DAT_100c1d48,0x254,param_3,param_4);
  }
  *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
  return param_1;
}


/* FUN_2c54a5cc @ 0x2c54a5cc */

int FUN_2c54a5cc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = FUN_2c54f0ec(param_1,DAT_2c54a624,param_2 + 0xc,1,param_4);
  if (((-1 < iVar1) &&
      (iVar1 = FUN_2c54f0ec(param_1,DAT_2c54a628,param_2 + 0x24,1,param_4), -1 < iVar1)) &&
     (iVar1 = FUN_2c54ee98(param_1,DAT_2c54a62c,param_2 + 4,1), -1 < iVar1)) {
    iVar1 = FUN_2c54ee98(param_1,DAT_2c54a630,param_2 + 8,1);
    return iVar1 >> 0x1f;
  }
  return -1;
}


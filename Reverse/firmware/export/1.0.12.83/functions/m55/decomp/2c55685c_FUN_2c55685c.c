/* FUN_2c55685c @ 0x2c55685c */

int FUN_2c55685c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = FUN_2c54f0ec(param_1,DAT_2c5568a4,param_2 + 4,0,param_4);
  if ((-1 < iVar1) &&
     (iVar1 = FUN_2c54f0ec(param_1,DAT_2c5568a8,param_2 + 0x1c,1,param_4), -1 < iVar1)) {
    iVar1 = FUN_2c54ee24(param_1,DAT_2c5568ac,param_2 + 0x34,1);
    return iVar1 >> 0x1f;
  }
  return -1;
}


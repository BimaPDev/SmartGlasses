/* FUN_2c55578c @ 0x2c55578c */

int FUN_2c55578c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = FUN_2c54ee24(param_1,DAT_2c5557e4,param_2 + 0x20,1,param_4);
  if (((-1 < iVar1) && (iVar1 = FUN_2c54f0ec(param_1,DAT_2c5557e8,param_2 + 0x24,1), -1 < iVar1)) &&
     (iVar1 = FUN_2c54f0ec(param_1,DAT_2c5557ec,param_2 + 8,1), -1 < iVar1)) {
    iVar1 = FUN_2c54ee24(param_1,DAT_2c5557f0,param_2 + 4,1,param_4);
    return iVar1 >> 0x1f;
  }
  return -1;
}


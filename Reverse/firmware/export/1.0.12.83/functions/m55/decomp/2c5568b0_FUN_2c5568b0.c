/* FUN_2c5568b0 @ 0x2c5568b0 */

int FUN_2c5568b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = FUN_2c54f0ec(param_1,DAT_2c5568f8,param_2 + 4,0,param_4);
  if ((-1 < iVar1) &&
     (iVar1 = FUN_2c54f0ec(param_1,DAT_2c5568fc,param_2 + 0x1c,0,param_4), -1 < iVar1)) {
    iVar1 = FUN_2c54f0ec(param_1,DAT_2c556900,param_2 + 0x34,0,param_4);
    return iVar1 >> 0x1f;
  }
  return -1;
}


/* FUN_2c54a634 @ 0x2c54a634 */

int FUN_2c54a634(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = FUN_2c54f0ec(param_1,DAT_2c54a6a0,param_2 + 4,1,param_4);
  if ((((-1 < iVar1) &&
       (iVar1 = FUN_2c54f0ec(param_1,DAT_2c54a6a4,param_2 + 0x1c,1,param_4), -1 < iVar1)) &&
      (iVar1 = FUN_2c54f0ec(param_1,DAT_2c54a6a8,param_2 + 0x34,1,param_4), -1 < iVar1)) &&
     (iVar1 = FUN_2c54f0ec(param_1,DAT_2c54a6ac,param_2 + 0x4c,1,param_4), -1 < iVar1)) {
    iVar1 = FUN_2c54f0ec(param_1,DAT_2c54a6b0,param_2 + 100,1,param_4);
    return iVar1 >> 0x1f;
  }
  return -1;
}


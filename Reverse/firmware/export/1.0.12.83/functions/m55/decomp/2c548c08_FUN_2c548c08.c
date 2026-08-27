/* FUN_2c548c08 @ 0x2c548c08 */

int FUN_2c548c08(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = FUN_2c55700c(param_1,DAT_2c548c84,param_2 + 4,0,param_4);
  if ((((-1 < iVar1) && (iVar1 = FUN_2c556db0(param_1,DAT_2c548c88,param_2 + 0x1c,1), -1 < iVar1))
      && (iVar1 = FUN_2c55700c(param_1,DAT_2c548c8c,param_2 + 0x20,1,param_4), -1 < iVar1)) &&
     ((iVar1 = FUN_2c556e34(param_1,DAT_2c548c90,param_2 + 0x38,1), -1 < iVar1 &&
      (iVar1 = FUN_2c556e34(param_1,DAT_2c548c94,param_2 + 0x40,1), -1 < iVar1)))) {
    iVar1 = FUN_2c55700c(param_1,DAT_2c548c98,param_2 + 0x48,1);
    return iVar1 >> 0x1f;
  }
  return -1;
}


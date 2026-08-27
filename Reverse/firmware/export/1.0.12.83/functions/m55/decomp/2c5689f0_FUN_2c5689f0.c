/* FUN_2c5689f0 @ 0x2c5689f0 */

int FUN_2c5689f0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_2c55700c(param_1,DAT_2c568a64,param_2 + 4,1,param_4);
  if ((((-1 < iVar1) &&
       (iVar1 = FUN_2c55700c(param_1,DAT_2c568a68,param_2 + 0x1c,1,param_4), -1 < iVar1)) &&
      (iVar1 = FUN_2c55700c(param_1,DAT_2c568a6c,param_2 + 0x34,1,param_4), -1 < iVar1)) &&
     ((iVar1 = FUN_2c55700c(param_1,DAT_2c568a70,param_2 + 0x4c,1,param_4), -1 < iVar1 &&
      (iVar1 = FUN_2c556d3c(param_1,DAT_2c568a74,param_2 + 100,1), -1 < iVar1)))) {
    iVar1 = FUN_2c556d3c(param_1,DAT_2c568a78,param_2 + 0x65,1);
    return iVar1 >> 0x1f;
  }
  return -1;
}


/* FUN_2c549358 @ 0x2c549358 */

int FUN_2c549358(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = FUN_2c55700c(param_1,DAT_2c5493a0,param_2 + 0xa4,1,param_4);
  if ((-1 < iVar1) &&
     (iVar1 = FUN_2c55700c(param_1,DAT_2c5493a4,param_2 + 0xbc,1,param_4), -1 < iVar1)) {
    iVar1 = FUN_2c55700c(param_1,DAT_2c5493a8,param_2 + 0xd4,1,param_4);
    return iVar1 >> 0x1f;
  }
  return -1;
}


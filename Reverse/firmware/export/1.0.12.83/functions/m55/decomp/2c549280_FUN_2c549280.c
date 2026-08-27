/* FUN_2c549280 @ 0x2c549280 */

int FUN_2c549280(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = FUN_2c58cdb0();
  if (((-1 < iVar1) &&
      (iVar1 = FUN_2c55700c(param_1,DAT_2c5492d4,param_2 + 0xa4,1,param_4), -1 < iVar1)) &&
     (iVar1 = FUN_2c556db0(param_1,DAT_2c5492d8,param_2 + 0xbc,1), -1 < iVar1)) {
    iVar1 = FUN_2c55700c(param_1,DAT_2c5492dc,param_2 + 0xc0,1,param_4);
    return iVar1 >> 0x1f;
  }
  return -1;
}


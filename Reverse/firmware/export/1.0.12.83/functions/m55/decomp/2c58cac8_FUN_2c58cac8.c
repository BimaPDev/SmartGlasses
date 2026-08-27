/* FUN_2c58cac8 @ 0x2c58cac8 */

int FUN_2c58cac8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = FUN_2c55700c(param_1,DAT_2c58cb10,param_2 + 4,0,param_4);
  if ((-1 < iVar1) &&
     (iVar1 = FUN_2c55700c(param_1,DAT_2c58cb14,param_2 + 0x1c,1,param_4), -1 < iVar1)) {
    iVar1 = FUN_2c55700c(param_1,DAT_2c58cb18,param_2 + 0x34,1,param_4);
    return iVar1 >> 0x1f;
  }
  return -1;
}


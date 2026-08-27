/* FUN_2c58cd5c @ 0x2c58cd5c */

int FUN_2c58cd5c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = FUN_2c55700c(param_1,DAT_2c58cda4,param_2 + 4,0,param_4);
  if ((-1 < iVar1) &&
     (iVar1 = FUN_2c55700c(param_1,DAT_2c58cda8,param_2 + 0x1c,0,param_4), -1 < iVar1)) {
    iVar1 = FUN_2c55700c(param_1,DAT_2c58cdac,param_2 + 0x34,0,param_4);
    return iVar1 >> 0x1f;
  }
  return -1;
}


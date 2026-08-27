/* FUN_2c53eaec @ 0x2c53eaec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c53eaec(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_2c55700c(param_1,_LAB_2c53eb54,param_3,0,param_4);
  if ((((-1 < iVar1) && (iVar1 = FUN_2c556db0(param_1,_LAB_2c53eb58,param_2 + 0x1c,0), -1 < iVar1))
      && (iVar1 = FUN_2c556db0(param_1,_LAB_2c53eb5c,param_2 + 0x20,0), -1 < iVar1)) &&
     (iVar1 = FUN_2c556db0(param_1,_LAB_2c53eb60,param_2 + 0x24,0), -1 < iVar1)) {
    iVar1 = FUN_2c55700c(param_1,_LAB_2c53eb64,param_2 + 0x28,0,param_4);
    return iVar1 >> 0x1f;
  }
  return -1;
}


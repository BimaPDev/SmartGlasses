/* FUN_2c53ea6c @ 0x2c53ea6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c53ea6c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_2c55700c(param_1,_LAB_2c53ead4,param_3,0,param_4);
  if ((((-1 < iVar1) &&
       (iVar1 = FUN_2c55700c(param_1,_LAB_2c53ead8,param_2 + 0x1c,0,param_4), -1 < iVar1)) &&
      (iVar1 = FUN_2c55700c(param_1,_LAB_2c53eadc,param_2 + 100,0,param_4), -1 < iVar1)) &&
     (iVar1 = FUN_2c55700c(param_1,_LAB_2c53eae0,param_2 + 200,0,param_4), -1 < iVar1)) {
    iVar1 = FUN_2c556db0(param_1,_LAB_2c53eae4,param_2 + 0xc4,0);
    return iVar1 >> 0x1f;
  }
  return -1;
}


/* FUN_2c540f04 @ 0x2c540f04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c540f04(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_2c55700c(param_1,_LAB_2c540f58,param_3,0,param_4);
  if (((iVar1 == 0) && (iVar1 = FUN_2c556db0(param_1,_LAB_2c540f5c,param_2 + 0x34,0), iVar1 == 0))
     && (iVar1 = FUN_2c55700c(param_1,_LAB_2c540f60,param_2 + 0x1c,0,param_4), iVar1 == 0)) {
    iVar1 = FUN_2c556d3c(param_1,_LAB_2c540f64,param_2 + 0x38,1);
    return -(uint)(iVar1 != 0);
  }
  return -1;
}


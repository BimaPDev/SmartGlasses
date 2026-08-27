/* FUN_2c550082 @ 0x2c550082 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c550082(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_2c54f0ec(param_1,_LAB_2c5500f4,param_3,0,param_4);
  if ((((iVar1 == 0) &&
       (iVar1 = FUN_2c54f0ec(param_1,_LAB_2c5500f8,param_2 + 0x4c,0,param_4), iVar1 == 0)) &&
      (iVar1 = FUN_2c54f0ec(param_1,_LAB_2c5500fc,param_2 + 0x1c,0,param_4), iVar1 == 0)) &&
     ((iVar1 = FUN_2c54f0ec(param_1,_LAB_2c550100,param_2 + 4,0,param_4), iVar1 == 0 &&
      (iVar1 = FUN_2c54f0ec(param_1,_LAB_2c550104,param_2 + 0x94,0,param_4), iVar1 == 0)))) {
    iVar1 = FUN_2c54f0ec(param_1,_LAB_2c550108,param_2 + 0x34,1);
    return -(uint)(iVar1 != 0);
  }
  return -1;
}


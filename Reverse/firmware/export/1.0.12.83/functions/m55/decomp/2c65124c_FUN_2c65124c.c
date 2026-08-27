/* FUN_2c65124c @ 0x2c65124c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c65124c(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + -0xc);
  FUN_2c650c38(param_1,uVar1,param_2,_LAB_2c651284,param_4);
  if (uVar1 < param_2) {
    FUN_2c6511f4(param_1,param_2 - uVar1,param_3);
  }
  else if (uVar1 != param_2) {
    FUN_2c650f84(param_1,param_2,0xffffffff);
  }
  return;
}


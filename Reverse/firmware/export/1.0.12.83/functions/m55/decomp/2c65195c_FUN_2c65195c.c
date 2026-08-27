/* FUN_2c65195c @ 0x2c65195c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c65195c(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + -0xc);
  FUN_2c6513b0(param_1,uVar1,param_2,_LAB_2c651994,param_4);
  if (uVar1 < param_2) {
    FUN_2c651904(param_1,param_2 - uVar1,param_3);
  }
  else if (uVar1 != param_2) {
    FUN_2c6516b0(param_1,param_2,0xffffffff);
  }
  return;
}


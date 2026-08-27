/* FUN_2c6510c4 @ 0x2c6510c4 */

int FUN_2c6510c4(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_2c650d64(param_3 + *param_1,param_1[1],param_2);
  if (*param_1 != 0) {
    FUN_2c650c6e(iVar1 + 0xc,param_1 + 3);
  }
  FUN_2c650d4c(iVar1,*param_1);
  return iVar1 + 0xc;
}


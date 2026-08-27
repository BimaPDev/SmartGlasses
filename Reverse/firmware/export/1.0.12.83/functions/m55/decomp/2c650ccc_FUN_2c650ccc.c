/* FUN_2c650ccc @ 0x2c650ccc */

uint FUN_2c650ccc(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  FUN_2c650c18(param_1,param_4,DAT_2c650d00);
  uVar1 = *(int *)(*param_1 + -0xc) - param_4;
  if (param_3 <= uVar1) {
    uVar1 = param_3;
  }
  if (uVar1 != 0) {
    FUN_2c650c6e(param_2,*param_1 + param_4,uVar1);
  }
  return uVar1;
}


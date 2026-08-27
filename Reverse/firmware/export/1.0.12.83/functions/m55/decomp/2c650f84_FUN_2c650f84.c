/* FUN_2c650f84 @ 0x2c650f84 */

int * FUN_2c650f84(int *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_2c650c18(param_1,param_2,DAT_2c650fb0);
  uVar2 = *(int *)(*param_1 + -0xc) - param_2;
  if (param_3 <= uVar2) {
    uVar2 = param_3;
  }
  FUN_2c650ea0(param_1,uVar1,uVar2,0);
  return param_1;
}


/* FUN_2c664d2c @ 0x2c664d2c */

uint FUN_2c664d2c(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  FUN_2c6648b4(param_1,param_4,DAT_2c664d60,param_4,param_4);
  uVar1 = param_1[1] - param_4;
  if (param_3 <= (uint)(param_1[1] - param_4)) {
    uVar1 = param_3;
  }
  if (uVar1 != 0) {
    FUN_2c664902(param_2,*param_1 + param_4 * 4,uVar1);
  }
  return uVar1;
}


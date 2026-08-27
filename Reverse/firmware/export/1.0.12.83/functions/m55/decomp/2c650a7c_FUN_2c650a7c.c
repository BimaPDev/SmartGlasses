/* FUN_2c650a7c @ 0x2c650a7c */

int FUN_2c650a7c(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))();
    uVar1 = extraout_r3;
    param_3 = extraout_r2;
  }
  FUN_2c6519f4(param_1,param_2,param_3,uVar1,param_4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*param_2 + -0xc);
  *(undefined4 *)(param_1 + 0x18) = DAT_2c650aa0;
  return param_1;
}


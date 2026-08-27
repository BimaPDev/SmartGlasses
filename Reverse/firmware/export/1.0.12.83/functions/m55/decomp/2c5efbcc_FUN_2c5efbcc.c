/* FUN_2c5efbcc @ 0x2c5efbcc */

void FUN_2c5efbcc(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  
  if (param_2 != (int *)0x0) {
    if (*param_2 != 0) {
      FUN_2c5fee30();
      param_3 = extraout_r2;
    }
    if (param_2[1] != 0) {
      FUN_2c5fee30(param_1);
      param_3 = extraout_r2_00;
    }
    if (param_2[2] != 0) {
      FUN_2c5fee30(param_1);
      param_3 = extraout_r2_01;
    }
    FUN_2c5fee30(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}


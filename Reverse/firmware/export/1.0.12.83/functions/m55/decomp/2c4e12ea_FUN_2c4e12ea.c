/* FUN_2c4e12ea @ 0x2c4e12ea */

undefined4 FUN_2c4e12ea(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  if ((int *)param_1[0x41] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x41] + 4))();
    param_1[0x41] = 0;
    param_3 = extraout_r2;
  }
  if (param_1[0x4a] != 0) {
    FUN_2c4de692(*(int *)(*param_1 + -0xc) + (int)param_1,param_1 + 0x4a);
    param_1[0x4a] = 0;
    param_3 = extraout_r2_00;
  }
  FUN_2c4de692(*(int *)(*param_1 + -0xc) + (int)param_1,param_1 + 0x3d,param_3,*param_1,unaff_r4,
               unaff_lr);
  param_1[0x3c] = 0;
  if (param_1[4] != 0) {
    FUN_2c4de692(*(int *)(*param_1 + -0xc) + (int)param_1,param_1 + 4,extraout_r2_01,*param_1,
                 unaff_r4,unaff_lr);
  }
  return 1;
}


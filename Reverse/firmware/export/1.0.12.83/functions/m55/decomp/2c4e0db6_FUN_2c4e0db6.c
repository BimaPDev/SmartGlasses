/* FUN_2c4e0db6 @ 0x2c4e0db6 */

undefined4 FUN_2c4e0db6(int *param_1)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  FUN_2c4de692(*(int *)(*param_1 + -0xc) + (int)param_1,param_1 + 99);
  param_1[0x62] = 0;
  iVar1 = FUN_2c4de19e();
  if (iVar1 != 0) {
    if (param_1[0x2e] != 0) {
      iVar1 = param_1[0x2a];
      FUN_2c4de692(*(int *)(iVar1 + -0xc) + (int)(param_1 + 0x2a),param_1 + 0x2e,extraout_r2,iVar1,
                   unaff_r4,unaff_lr);
    }
    return 1;
  }
  return 0;
}


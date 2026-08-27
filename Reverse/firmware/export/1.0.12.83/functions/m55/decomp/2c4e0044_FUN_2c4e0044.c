/* FUN_2c4e0044 @ 0x2c4e0044 */

undefined4 FUN_2c4e0044(int param_1)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  iVar1 = FUN_2c4de19e();
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xb8) != 0) {
      iVar1 = *(int *)(param_1 + 0xa8);
      FUN_2c4de692(*(int *)(iVar1 + -0xc) + param_1 + 0xa8,param_1 + 0xb8,extraout_r2,iVar1,unaff_r4
                   ,unaff_lr);
    }
    return 1;
  }
  return 0;
}


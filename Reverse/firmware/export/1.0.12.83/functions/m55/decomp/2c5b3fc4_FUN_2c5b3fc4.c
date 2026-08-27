/* FUN_2c5b3fc4 @ 0x2c5b3fc4 */

void FUN_2c5b3fc4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  
  iVar1 = FUN_2c5abf68();
  *(int *)(iVar1 + 8) = param_2;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    if (param_2 == 1) {
      uVar2 = FUN_2c5e2e8c(DAT_2c5b4020);
      FUN_2c63140c(iVar1,uVar2,extraout_r2_01,param_4);
      return;
    }
    if (param_2 == 2) {
      uVar2 = FUN_2c5e2e8c(DAT_2c5b401c);
      FUN_2c63140c(iVar1,uVar2,extraout_r2_00,param_4);
      return;
    }
    if (param_2 == 0) {
      uVar2 = FUN_2c5e2e8c(DAT_2c5b4018);
      FUN_2c63140c(iVar1,uVar2,extraout_r2,param_4);
      return;
    }
  }
  return;
}


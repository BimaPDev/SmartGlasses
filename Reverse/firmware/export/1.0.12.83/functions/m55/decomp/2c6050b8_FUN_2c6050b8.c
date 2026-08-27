/* FUN_2c6050b8 @ 0x2c6050b8 */

void FUN_2c6050b8(int param_1,short *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r2;
  short sVar3;
  
  iVar2 = FUN_2c62e994(param_1,DAT_2c60510c,param_3,param_4,param_4);
  uVar1 = DAT_2c605110;
  if (iVar2 == 0) {
    iVar2 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      sVar3 = -*(short *)(*(int *)(param_1 + 8) + 0x10);
      *param_2 = sVar3;
      iVar2 = FUN_2c62e994(param_1,uVar1,extraout_r2,(int)sVar3,param_4);
      goto joined_r0x2c6050fa;
    }
  }
  else {
    iVar2 = (int)(short)-(short)*(undefined4 *)(iVar2 + 0x28);
  }
  *param_2 = (short)iVar2;
  iVar2 = FUN_2c62e994(param_1,uVar1,extraout_r2,iVar2,param_4);
joined_r0x2c6050fa:
  if (iVar2 == 0) {
    sVar3 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      param_2[1] = -*(short *)(*(int *)(param_1 + 8) + 0x12);
      return;
    }
  }
  else {
    sVar3 = -(short)*(undefined4 *)(iVar2 + 0x28);
  }
  param_2[1] = sVar3;
  return;
}


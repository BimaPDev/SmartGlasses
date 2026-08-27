/* FUN_2c656264 @ 0x2c656264 */

void FUN_2c656264(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  if (*(uint *)(param_1 + 4) < param_2) {
    uVar1 = FUN_2c65868c(DAT_2c65628c,DAT_2c656288,param_2,*(uint *)(param_1 + 4),param_1,param_2,
                         param_3);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  FUN_2c664b04((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0,param_3,param_4);
  return;
}


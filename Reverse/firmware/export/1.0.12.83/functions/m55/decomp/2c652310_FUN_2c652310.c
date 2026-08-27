/* FUN_2c652310 @ 0x2c652310 */

void FUN_2c652310(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  if (*(uint *)(param_1 + 4) < param_2) {
    uVar1 = FUN_2c65868c(DAT_2c652338,DAT_2c652334,param_2,*(uint *)(param_1 + 4),param_1,param_2,
                         param_3);
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  FUN_2c65ec1c((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0,param_3,param_4);
  return;
}


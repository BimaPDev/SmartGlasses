/* FUN_2c65ee48 @ 0x2c65ee48 */

uint FUN_2c65ee48(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  FUN_2c65e95c(param_1,param_4,DAT_2c65ee7c,param_4,param_4);
  uVar1 = param_1[1] - param_4;
  if (param_3 <= (uint)(param_1[1] - param_4)) {
    uVar1 = param_3;
  }
  if (uVar1 != 0) {
    FUN_2c65e9a8(param_2,*param_1 + param_4,uVar1);
  }
  return uVar1;
}


/* FUN_140d1d84 @ 0x140d1d84 */

uint FUN_140d1d84(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  FUN_140d18e4(param_1,param_4,DAT_140d1db8,param_4,param_4);
  uVar1 = param_1[1] - param_4;
  if (param_3 <= (uint)(param_1[1] - param_4)) {
    uVar1 = param_3;
  }
  if (uVar1 != 0) {
    FUN_140d1930(param_2,*param_1 + param_4,uVar1);
  }
  return uVar1;
}


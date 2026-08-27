/* FUN_140d7c4c @ 0x140d7c4c */

uint FUN_140d7c4c(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  FUN_140d77d4(param_1,param_4,DAT_140d7c80,param_4,param_4);
  uVar1 = param_1[1] - param_4;
  if (param_3 <= (uint)(param_1[1] - param_4)) {
    uVar1 = param_3;
  }
  if (uVar1 != 0) {
    FUN_140d7822(param_2,*param_1 + param_4 * 4,uVar1);
  }
  return uVar1;
}


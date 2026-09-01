/* FUN_10137e54 @ 0x10137e54 */

uint FUN_10137e54(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = param_4 + 3U & 0xffff;
  FUN_10137e4e(param_1,param_2 | 0x40,param_3,param_4,param_1,param_2,param_3);
  param_1 = param_1 + 8;
  FUN_101327da(param_1,uVar1);
  FUN_101327a0(param_1,param_3,param_4);
  return uVar1;
}


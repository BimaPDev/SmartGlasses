/* FUN_10137eae @ 0x10137eae */

uint FUN_10137eae(int param_1,undefined1 *param_2,int param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  
  if (param_3 == 0) {
    uVar1 = 3;
  }
  else {
    uVar1 = param_3 * 2 + 5U & 0xffff;
  }
  FUN_10137e4e(param_1,1);
  FUN_101327da(param_1 + 8,uVar1);
  puVar2 = param_2 + param_3;
  for (; param_2 != puVar2; param_2 = param_2 + 1) {
    FUN_10137e4e(param_1,0);
    FUN_10137e4e(param_1,*param_2);
  }
  if (param_3 != 0) {
    FUN_10137e4e(param_1,0);
    FUN_10137e4e(param_1,0);
  }
  return uVar1;
}


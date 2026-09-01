/* FUN_1011da7e @ 0x1011da7e */

undefined4 FUN_1011da7e(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      thunk_FUN_1011ea48(param_1 + 0xf0,0,0x20,param_4,param_1,param_2,param_3);
      thunk_FUN_1011ea48(param_1 + 0x110,1,0x20);
      FUN_1011d95c(param_1,param_2,param_3,0,0);
      uVar1 = 1;
      *(undefined4 *)(param_1 + 0x130) = 0;
    }
  }
  return uVar1;
}


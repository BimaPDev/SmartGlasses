/* FUN_1011d5a4 @ 0x1011d5a4 */

undefined4 FUN_1011d5a4(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      thunk_FUN_1011ea48(param_1,0,0x58);
      *(undefined4 *)(param_1 + 0x48) = param_3;
      FUN_10063690(param_3,param_2);
      thunk_FUN_1011ea48(param_1,0,0x10);
      FUN_10063738(param_1,param_1,*(undefined4 *)(param_1 + 0x48));
      FUN_1011d53e(param_1 + 0x10,param_1);
      FUN_1011d53e(param_1 + 0x20,param_1 + 0x10);
      FUN_1011d578(param_1);
      uVar1 = 1;
    }
  }
  return uVar1;
}


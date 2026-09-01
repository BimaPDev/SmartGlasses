/* FUN_1011e848 @ 0x1011e848 */

undefined4 FUN_1011e848(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  FUN_10067e74(0xffffffff,0xffffffff,param_3,param_4,param_1);
  if (param_1 + 0xc8000000 < 0x4000000) {
    FUN_10056824(3,param_1,param_2);
    FUN_10056824(1,param_1,param_2);
    uVar1 = 1;
  }
  else {
    if ((param_1 & 0xf4000000) == 0x34000000) {
      FUN_10056824(3,param_1,param_2);
    }
    uVar1 = 0;
  }
  FUN_10067e68();
  return uVar1;
}


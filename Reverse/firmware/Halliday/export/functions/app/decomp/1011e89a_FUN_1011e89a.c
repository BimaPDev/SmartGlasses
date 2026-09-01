/* FUN_1011e89a @ 0x1011e89a */

undefined4 FUN_1011e89a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  FUN_10067e74(0xffffffff,0xffffffff,param_3,param_4,param_1);
  if (param_1 + 0xcc000000U < 0x8000000) {
    FUN_10056824(3,param_1,param_2);
    uVar1 = 6;
  }
  else {
    if (0x3ffffff < param_1 + 0xc4000000U) goto LAB_1011e8ca;
    uVar1 = 3;
  }
  FUN_10056824(uVar1,param_1,param_2);
LAB_1011e8ca:
  FUN_10067e68();
  return 0;
}


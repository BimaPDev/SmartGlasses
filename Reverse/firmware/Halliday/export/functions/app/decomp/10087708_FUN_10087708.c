/* FUN_10087708 @ 0x10087708 */

undefined4 FUN_10087708(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    FUN_10094174(2,DAT_10087734,0x12a,DAT_10087730,DAT_1008772c,param_2);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*param_1 + 0x14);
  }
  return uVar1;
}


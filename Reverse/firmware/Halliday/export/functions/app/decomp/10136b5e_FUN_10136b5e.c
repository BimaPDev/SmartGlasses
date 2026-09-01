/* FUN_10136b5e @ 0x10136b5e */

undefined4 FUN_10136b5e(char *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = FUN_100d44e4(0xd3,0x85,param_1,8,0,param_2,param_3);
  }
  return uVar1;
}


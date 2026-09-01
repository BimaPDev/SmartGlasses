/* FUN_10136b9a @ 0x10136b9a */

undefined4 FUN_10136b9a(char *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) || (*(int *)(param_1 + 4) == 0)) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = FUN_100d44e4(0xcf,0x5a,param_1,8,0,param_2,param_3);
  }
  return uVar1;
}

